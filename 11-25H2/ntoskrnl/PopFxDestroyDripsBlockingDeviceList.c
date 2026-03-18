/*
 * XREFs of PopFxDestroyDripsBlockingDeviceList @ 0x140741AEC
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x140490CC8 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopDripsWatchdogCallbackHandler @ 0x140752EE0 (PopDripsWatchdogCallbackHandler.c)
 *     PopDripsWatchdogTakeAction @ 0x1407564A0 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     PopFxDereferenceDevice @ 0x1403589F8 (PopFxDereferenceDevice.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140A9C8DC (IoLockUnlockPnpDeviceTree.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxDestroyDripsBlockingDeviceList(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  void *v4; // rcx
  signed __int64 v5; // rdx
  ULONG_PTR v6; // rtt

  while ( 1 )
  {
    v2 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
      break;
    if ( (_QWORD *)v2[1] != a1 || (v3 = *v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    *(_QWORD *)(v3 + 8) = a1;
    v4 = (void *)v2[3];
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x4D584650u);
      v2[3] = 0LL;
      *((_DWORD *)v2 + 8) = 0;
    }
    PopFxDereferenceDevice((__int64)(v2 - 114), 3);
  }
  _m_prefetchw(&PopFxBlockingDeviceListLock);
  v5 = PopFxBlockingDeviceListLock - 16;
  if ( (PopFxBlockingDeviceListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (PopFxBlockingDeviceListLock & 2) != 0
    || (v6 = PopFxBlockingDeviceListLock,
        v6 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&PopFxBlockingDeviceListLock,
                v5,
                PopFxBlockingDeviceListLock)) )
  {
    ExfReleasePushLock(&PopFxBlockingDeviceListLock);
  }
  KeAbPostRelease((ULONG_PTR)&PopFxBlockingDeviceListLock);
  KeLeaveCriticalRegion();
  return IoLockUnlockPnpDeviceTree(0LL);
}
