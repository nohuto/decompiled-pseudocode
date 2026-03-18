/*
 * XREFs of ExDisableHandleTracing @ 0x140653D0C
 * Callers:
 *     PsSetProcessHandleTracingInformation @ 0x1407745B8 (PsSetProcessHandleTracingInformation.c)
 * Callees:
 *     ExpLockHandleTableExclusive @ 0x1404527A8 (ExpLockHandleTableExclusive.c)
 *     ExpUnlockHandleTableExclusive @ 0x140458444 (ExpUnlockHandleTableExclusive.c)
 *     ExDereferenceHandleDebugInfo @ 0x140A03E50 (ExDereferenceHandleDebugInfo.c)
 */

__int64 __fastcall ExDisableHandleTracing(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  ExpLockHandleTableExclusive(a1, (__int64)KeGetCurrentThread());
  v2 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( v2 && (*(_DWORD *)(v2 + 8) & 8) == 0 )
    *(_BYTE *)(a1 + 44) &= ~2u;
  result = ExpUnlockHandleTableExclusive(a1);
  if ( v2 )
    return ExDereferenceHandleDebugInfo(a1, v2);
  return result;
}
