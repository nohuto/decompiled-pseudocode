/*
 * XREFs of PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1404C2478
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x140A35AD4 (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PopFxDereferenceDevice @ 0x1403A7F58 (PopFxDereferenceDevice.c)
 */

void __fastcall PopFxDestroyDirectedDripsCandidateDeviceList(_QWORD **a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax
  signed __int64 v4; // rdx
  ULONG_PTR v5; // rtt

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)v2[1] != a1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    v3[1] = a1;
    v2[1] = v2;
    *v2 = v2;
    PopFxDereferenceDevice((__int64)(v2 - 114), 3);
  }
  _m_prefetchw(&PopFxBlockingDeviceListLock);
  v4 = PopFxBlockingDeviceListLock - 16;
  if ( (PopFxBlockingDeviceListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v4 = 0LL;
  if ( (PopFxBlockingDeviceListLock & 2) != 0
    || (v5 = PopFxBlockingDeviceListLock,
        v5 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&PopFxBlockingDeviceListLock,
                v4,
                PopFxBlockingDeviceListLock)) )
  {
    ExfReleasePushLock(&PopFxBlockingDeviceListLock);
  }
  KeAbPostRelease((ULONG_PTR)&PopFxBlockingDeviceListLock);
  KeLeaveCriticalRegion();
}
