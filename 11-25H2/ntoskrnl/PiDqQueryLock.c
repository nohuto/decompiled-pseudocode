/*
 * XREFs of PiDqQueryLock @ 0x1408384AC
 * Callers:
 *     PiDqIrpCancel @ 0x1405A3330 (PiDqIrpCancel.c)
 *     PiDqIrpQueryGetResult @ 0x140836400 (PiDqIrpQueryGetResult.c)
 *     PiDqDispatch @ 0x1408377C0 (PiDqDispatch.c)
 *     PiDqIrpQueryCreate @ 0x140837A74 (PiDqIrpQueryCreate.c)
 *     PiDqQuerySerializeActionQueue @ 0x140837DE4 (PiDqQuerySerializeActionQueue.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1408380E0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x14083856C (PiDqQueryApplyObjectEvent.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140839434 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *__fastcall PiDqQueryLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rdi
  __int64 *result; // rax
  __int64 *v4; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 64);
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire(a1 + 64, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  return result;
}
