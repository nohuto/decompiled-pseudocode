/*
 * XREFs of ACPIDeviceCompletePhase3Reset @ 0x14005CBD0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompletePhase3Common @ 0x14001D478 (ACPIDeviceCompletePhase3Common.c)
 *     WPP_RECORDER_SF_qL @ 0x14002A120 (WPP_RECORDER_SF_qL.c)
 */

void __fastcall ACPIDeviceCompletePhase3Reset(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  KIRQL v5; // al
  signed __int32 v6; // edx
  KIRQL v7; // bl

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x11u,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a4,
      a2);
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v6 = *(_DWORD *)(a4 + 68);
  --Phase3PendingOnWorkCount;
  v7 = v5;
  ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a4 + 64), v6);
  KeReleaseSpinLock(&AcpiPowerLock, v7);
}
