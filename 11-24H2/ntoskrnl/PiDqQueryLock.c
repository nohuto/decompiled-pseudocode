/*
 * XREFs of PiDqQueryLock @ 0x1408D0BAC
 * Callers:
 *     PiDqIrpCancel @ 0x1405A3A80 (PiDqIrpCancel.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1408B237C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQuerySerializeActionQueue @ 0x1408D04C0 (PiDqQuerySerializeActionQueue.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1408D07C0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x1408D0C6C (PiDqQueryApplyObjectEvent.c)
 *     PiDqIrpQueryGetResult @ 0x1409F1D48 (PiDqIrpQueryGetResult.c)
 *     PiDqDispatch @ 0x1409F1FF0 (PiDqDispatch.c)
 *     PiDqIrpQueryCreate @ 0x1409F2380 (PiDqIrpQueryCreate.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *__fastcall PiDqQueryLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rdi
  char *result; // rax
  char *v4; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 64);
  --CurrentThread->KernelApcDisable;
  result = (char *)KeAbPreAcquire(a1 + 64, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v4 )
    v4[10] = 1;
  return result;
}
