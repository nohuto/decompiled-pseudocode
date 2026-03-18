/*
 * XREFs of PiDqQueryUnlock @ 0x1408D321C
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
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
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
  return KeLeaveCriticalRegionThread();
}
