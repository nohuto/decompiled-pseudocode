/*
 * XREFs of ACPIBuildCompleteMustSucceed @ 0x14001E380
 * Callers:
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1400175C0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x140017990 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x14001DC20 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x14001E030 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x14001E1D0 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x14001E6F0 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x14001F8C0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x14001FDA0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessDevicePhaseCid @ 0x140020890 (ACPIBuildProcessDevicePhaseCid.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1400213A0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1400294B0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseSta @ 0x14003B890 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x140046670 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x140048850 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x140049610 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x140049E60 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x14004A0D0 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x14004A1E0 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x14004A900 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x14004CD90 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x14004FA90 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x140058F90 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x140059370 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x140059470 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1400598C0 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZoneHrv @ 0x140059C20 (ACPIBuildProcessThermalZoneHrv.c)
 *     ACPIBuildProcessThermalZonePep @ 0x140059CF0 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIBuildProcessThermalZoneSub @ 0x140059E90 (ACPIBuildProcessThermalZoneSub.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x140059F80 (ACPIBuildProcessThermalZoneUid.c)
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x14001E430 (ACPIBuildCompleteCommon.c)
 *     ACPIBuildScheduleDpc @ 0x14001E47C (ACPIBuildScheduleDpc.c)
 */

void __fastcall ACPIBuildCompleteMustSucceed(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  unsigned int v5; // eax
  KIRQL v6; // bl

  v4 = *(unsigned int *)(a4 + 32);
  if ( a2 == -1073741738 )
  {
    *(_DWORD *)(a4 + 48) = -1073741738;
    ACPIBuildCompleteCommon(a4 + 24, 2LL, v4);
  }
  else
  {
    v5 = 0;
    if ( a2 < 0 )
    {
      *(_DWORD *)(a4 + 48) = a2;
      if ( BugCheckParameter2 )
        v5 = *(_DWORD *)(*(_QWORD *)BugCheckParameter2 + 40LL);
      KeBugCheckEx(0xA5u, 3uLL, BugCheckParameter2, a2, v5);
    }
    *(_DWORD *)(a4 + 32) = 2;
    _InterlockedCompareExchange((volatile signed __int32 *)(a4 + 24), v4, 1);
    v6 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    ACPIBuildScheduleDpc();
    KeReleaseSpinLock(&AcpiBuildQueueLock, v6);
  }
}
