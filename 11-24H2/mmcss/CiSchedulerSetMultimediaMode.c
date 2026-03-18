/*
 * XREFs of CiSchedulerSetMultimediaMode @ 0x140004244
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x14000DEF0 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiLogSetBufferingMode @ 0x140004140 (CiLogSetBufferingMode.c)
 *     CiSchedulerRefreshTaskIndexQosProperties @ 0x14000430C (CiSchedulerRefreshTaskIndexQosProperties.c)
 */

__int64 __fastcall CiSchedulerSetMultimediaMode(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  int v4; // edx
  int v5; // esi

  v2 = 0;
  if ( a2 )
  {
    if ( a2 != 1 )
      return (unsigned int)-1073741811;
    v4 = 1;
    v5 = 2;
  }
  else
  {
    v4 = 3;
    v5 = 0;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 3LL) & 1) != 0 )
  {
    if ( byte_14000A0D0 )
      CiLogSetBufferingMode(a1, v4);
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    *(_DWORD *)(a1 + 184) = v5 | *(_DWORD *)(a1 + 184) & 0xFFFFFFFD | 1;
    CiSchedulerRefreshTaskIndexQosProperties(a1);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  }
  return v2;
}
