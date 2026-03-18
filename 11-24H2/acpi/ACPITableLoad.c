/*
 * XREFs of ACPITableLoad @ 0x14004A4E0
 * Callers:
 *     ACPIInitializeDDBs @ 0x1400C4B28 (ACPIInitializeDDBs.c)
 * Callees:
 *     ACPIBuildScheduleDpc @ 0x14001E47C (ACPIBuildScheduleDpc.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x14001E810 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildRunMethodRequest @ 0x14001F5EC (ACPIBuildRunMethodRequest.c)
 *     ACPIGpeBuildEventMasks @ 0x140040B24 (ACPIGpeBuildEventMasks.c)
 *     EnableDisableCMOSRegions @ 0x140040CC0 (EnableDisableCMOSRegions.c)
 *     _ACPIInternalError @ 0x14004C514 (_ACPIInternalError.c)
 *     ACPIEcInitOpRegionHandler @ 0x14005F83C (ACPIEcInitOpRegionHandler.c)
 *     ACPIGpeClearEventMasks @ 0x140060E30 (ACPIGpeClearEventMasks.c)
 *     ACPIQueryDeviceLockMutexSupport @ 0x1400636E0 (ACPIQueryDeviceLockMutexSupport.c)
 *     ACPIRootInitialize @ 0x1400A67CC (ACPIRootInitialize.c)
 */

__int64 __fastcall ACPITableLoad(__int64 a1, int a2, __int64 a3)
{
  KIRQL v4; // al
  int v5; // ebx
  KIRQL v7; // al
  int v8; // ebx
  __int64 i; // rcx
  KIRQL v10; // si
  int v11; // ebx
  KIRQL v12; // bl
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0;
  if ( a2 == 1 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v5 = ++AcpiTableLoadDelta;
    KeReleaseSpinLock(&AcpiBuildQueueLock, v4);
    if ( v5 == 1 && !*((_BYTE *)AcpiInformation + 133) )
      ACPIGpeClearEventMasks();
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v8 = --AcpiTableLoadDelta;
    if ( !AcpiTableLoadDelta )
    {
      for ( i = AcpiBuildQueueList; (__int64 *)i != &AcpiBuildQueueList; i = *(_QWORD *)i )
        *(_DWORD *)(i + 20) &= ~0x40u;
    }
    KeReleaseSpinLock(&AcpiBuildQueueLock, v7);
    if ( !v8 )
    {
      if ( !*((_BYTE *)AcpiInformation + 133) )
        ACPIGpeBuildEventMasks();
      if ( (gOverrideFlags & 2) == 0 )
        ACPIEcInitOpRegionHandler();
      if ( !*(_QWORD *)(RootDeviceExtension + 760) )
        ACPIRootInitialize();
      v10 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      v11 = ACPIBuildRunMethodRequest(RootDeviceExtension, 0LL, 0LL, 1229867359, 7, 0);
      ACPIQueryDeviceLockMutexSupport(&v13);
      if ( v13 )
        v11 = ACPIBuildRunMethodRequest(RootDeviceExtension, 0LL, 0LL, 1296843871, 388, 0);
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v10);
      if ( v11 < 0
        || (EnableDisableCMOSRegions(*(__int64 **)(RootDeviceExtension + 760)),
            (int)ACPIBuildSpecialSynchronizationRequest(
                   RootDeviceExtension,
                   (__int64)ACPITableLoadCallBack,
                   a3 == 0,
                   127,
                   0) < 0) )
      {
        ACPIInternalError(0x110296uLL);
      }
      v12 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      ACPIBuildScheduleDpc();
      KeReleaseSpinLock(&AcpiBuildQueueLock, v12);
    }
  }
  return 0LL;
}
