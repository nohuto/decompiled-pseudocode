/*
 * XREFs of FreeDataBuffs @ 0x14000E530
 * Callers:
 *     FreeNameSpaceObjects @ 0x140003200 (FreeNameSpaceObjects.c)
 *     ParseCall @ 0x140004010 (ParseCall.c)
 *     ProcessIncDec @ 0x140005D80 (ProcessIncDec.c)
 *     Store @ 0x140006870 (Store.c)
 *     ExprOp2_64 @ 0x1400072C0 (ExprOp2_64.c)
 *     Index @ 0x140008710 (Index.c)
 *     FreeContext @ 0x14000AF70 (FreeContext.c)
 *     ParseScope @ 0x14000D030 (ParseScope.c)
 *     ParseTerm @ 0x14000D430 (ParseTerm.c)
 *     FreeData @ 0x14000E570 (FreeData.c)
 *     ACPIIrpDispatchDeviceControl @ 0x1400101A0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1400175C0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x14001C880 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x14001FDA0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x14001FF30 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1400213A0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x140029280 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1400294B0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x140029900 (ACPIBuildProcessDevicePhaseCrs.c)
 *     LinkNodeCrackPrt @ 0x14002B0F8 (LinkNodeCrackPrt.c)
 *     ACPIFanFSTCallback @ 0x14002C010 (ACPIFanFSTCallback.c)
 *     ConvertToBuffer @ 0x14002E0E0 (ConvertToBuffer.c)
 *     Concat @ 0x14002F1F0 (Concat.c)
 *     ValidateTarget @ 0x14002F550 (ValidateTarget.c)
 *     ConvertToInteger @ 0x14002F7C4 (ConvertToInteger.c)
 *     ConvertToString @ 0x14002FAA4 (ConvertToString.c)
 *     ACPIGetWorkerForInteger @ 0x140034B40 (ACPIGetWorkerForInteger.c)
 *     ACPIThermalTMPCallback @ 0x1400379A0 (ACPIThermalTMPCallback.c)
 *     ACPIBuildMissingEjectionRelations @ 0x14003D6B8 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIGetWorkerForString @ 0x14003F3E0 (ACPIGetWorkerForString.c)
 *     AMLIFreeDataBuffs @ 0x140040074 (AMLIFreeDataBuffs.c)
 *     ACPIGetWorkerForData @ 0x140041280 (ACPIGetWorkerForData.c)
 *     Match_64 @ 0x140041A60 (Match_64.c)
 *     Match_32 @ 0x140041C14 (Match_32.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x140042CD0 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIInitStartDevice @ 0x140044BF4 (ACPIInitStartDevice.c)
 *     ACPIGetWorkerForBuffer @ 0x140046220 (ACPIGetWorkerForBuffer.c)
 *     ACPIIoctlAsyncEvalControlMethodCompletion @ 0x140047640 (ACPIIoctlAsyncEvalControlMethodCompletion.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x140048850 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x140048F9C (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIIoctlEnumChildren @ 0x140049858 (ACPIIoctlEnumChildren.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x140049E60 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIGetWorkerForNothing @ 0x14004A790 (ACPIGetWorkerForNothing.c)
 *     ACPIInitDosDeviceName @ 0x14004DA9C (ACPIInitDosDeviceName.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x14004E8A0 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ACPIIoctlEvalControlMethod @ 0x1400509E4 (ACPIIoctlEvalControlMethod.c)
 *     ConvertToDDBHandle @ 0x140055FA8 (ConvertToDDBHandle.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x140058E20 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x140059370 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x140059470 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIThermalGetSensorDevice @ 0x1400688AC (ACPIThermalGetSensorDevice.c)
 *     AMLIEvalPackageElement @ 0x14006AB98 (AMLIEvalPackageElement.c)
 *     Simulator_CallbackWorker @ 0x14006AF10 (Simulator_CallbackWorker.c)
 *     ParseDLMObjectInternal @ 0x14006CF34 (ParseDLMObjectInternal.c)
 *     ParseNestedContext @ 0x14006F010 (ParseNestedContext.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1400C44E4 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     FreeData @ 0x14000E570 (FreeData.c)
 */

__int64 __fastcall FreeDataBuffs(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2;
    do
    {
      result = FreeData(a1);
      a1 += 40LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
