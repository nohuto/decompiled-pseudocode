/*
 * XREFs of PiDqQueryUnlock @ 0x14083850C
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
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 */

__int64 __fastcall PiDqQueryUnlock(__int64 a1)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 v2; // rax
  signed __int64 v3; // rdx

  v1 = (volatile signed __int64 *)(a1 + 64);
  _m_prefetchw((const void *)(a1 + 64));
  v2 = *(_QWORD *)(a1 + 64);
  v3 = v2 - 16;
  if ( (v2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v3 = 0LL;
  if ( (v2 & 2) != 0 || v2 != _InterlockedCompareExchange64(v1, v3, v2) )
    ExfReleasePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
