/*
 * XREFs of ExDisableHandleTracing @ 0x140647E0C
 * Callers:
 *     PsSetProcessHandleTracingInformation @ 0x140764BE8 (PsSetProcessHandleTracingInformation.c)
 * Callees:
 *     ExpUnlockHandleTableExclusive @ 0x1403D7690 (ExpUnlockHandleTableExclusive.c)
 *     ExpLockHandleTableExclusive @ 0x140454230 (ExpLockHandleTableExclusive.c)
 *     ExDereferenceHandleDebugInfo @ 0x140A0488C (ExDereferenceHandleDebugInfo.c)
 */

__int64 __fastcall ExDisableHandleTracing(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  ExpLockHandleTableExclusive(a1, (__int64)CurrentThread);
  v3 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( v3 && (*(_DWORD *)(v3 + 8) & 8) == 0 )
    *(_BYTE *)(a1 + 44) &= ~2u;
  result = ExpUnlockHandleTableExclusive(a1, (__int64)CurrentThread);
  if ( v3 )
    return ExDereferenceHandleDebugInfo(a1, v3);
  return result;
}
