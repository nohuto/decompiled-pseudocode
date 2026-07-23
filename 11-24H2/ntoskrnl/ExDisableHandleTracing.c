/*
 * XREFs of ExDisableHandleTracing @ 0x14065246C
 * Callers:
 *     PsSetProcessHandleTracingInformation @ 0x1407747D8 (PsSetProcessHandleTracingInformation.c)
 * Callees:
 *     ExpLockHandleTableExclusive @ 0x140447858 (ExpLockHandleTableExclusive.c)
 *     ExpUnlockHandleTableExclusive @ 0x14044D754 (ExpUnlockHandleTableExclusive.c)
 *     ExDereferenceHandleDebugInfo @ 0x140A00380 (ExDereferenceHandleDebugInfo.c)
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
