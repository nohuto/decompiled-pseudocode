/*
 * XREFs of PiDqQueryLock @ 0x1408D31BC
 * Callers:
 *     PiDqIrpCancel @ 0x1405A6B40 (PiDqIrpCancel.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1408B4A8C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQuerySerializeActionQueue @ 0x1408D2AD0 (PiDqQuerySerializeActionQueue.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1408D2DD0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x1408D327C (PiDqQueryApplyObjectEvent.c)
 *     PiDqIrpQueryGetResult @ 0x1409F93D8 (PiDqIrpQueryGetResult.c)
 *     PiDqDispatch @ 0x1409F9680 (PiDqDispatch.c)
 *     PiDqIrpQueryCreate @ 0x1409F9A10 (PiDqIrpQueryCreate.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall PiDqQueryLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 64);
  --CurrentThread->KernelApcDisable;
  result = (__int64)KeAbPreAcquire(a1 + 64, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v4 )
    *(_BYTE *)(v4 + 10) = 1;
  return result;
}
