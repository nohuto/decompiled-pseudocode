/*
 * XREFs of XilRegister_WriteUlong @ 0x14001BA28
 * Callers:
 *     RootHub_HandlePortStatusChangeEvent @ 0x140009CC0 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x14000B478 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x14000CA5C (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x140018AD4 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     RootHub_ForceU3 @ 0x1400195BC (RootHub_ForceU3.c)
 *     Register_D0Entry @ 0x140019B20 (Register_D0Entry.c)
 *     XilCoreDeviceSlot_Initialize @ 0x14001A080 (XilCoreDeviceSlot_Initialize.c)
 *     Register_ControllerStop @ 0x14001A214 (Register_ControllerStop.c)
 *     Register_BiosHandoff @ 0x14001A3F4 (Register_BiosHandoff.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x14001A8FC (Interrupter_InterrupterRegisterIntialize.c)
 *     Controller_Start @ 0x14001B1F0 (Controller_Start.c)
 *     Interrupter_InterruptEnable @ 0x14001B7A8 (Interrupter_InterruptEnable.c)
 *     Interrupter_InterruptDisable @ 0x14001B958 (Interrupter_InterruptDisable.c)
 *     Controller_InitializeDeviceNotificationRegister @ 0x14001BA00 (Controller_InitializeDeviceNotificationRegister.c)
 *     Register_ControllerReset @ 0x14001C654 (Register_ControllerReset.c)
 *     Register_SetClearSSICPortUnused @ 0x14001CA30 (Register_SetClearSSICPortUnused.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x14001CAD8 (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x14001D070 (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x140026440 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1400277B0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_D0Entry @ 0x140028D68 (RootHub_D0Entry.c)
 *     RootHub_ForceU0AndWait @ 0x140028EFC (RootHub_ForceU0AndWait.c)
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x140033298 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     Register_DisableComplianceModeCapability @ 0x140034CB4 (Register_DisableComplianceModeCapability.c)
 *     Controller_D0EntryRestoreState @ 0x14003634C (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1400366C4 (Controller_D0ExitSaveState.c)
 *     RootHub_D0Exit @ 0x140038974 (RootHub_D0Exit.c)
 *     Controller_ClearHSIIWorkaround @ 0x14003FA90 (Controller_ClearHSIIWorkaround.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x14003FC38 (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_SetHSIIWorkaround @ 0x140042094 (Controller_SetHSIIWorkaround.c)
 *     Controller_StopTimeTrackingForHandle @ 0x14004211C (Controller_StopTimeTrackingForHandle.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x140042CD0 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x140048710 (Interrupter_DeInitializeAfterOffload.c)
 *     Interrupter_InitializeForOffload @ 0x140048A54 (Interrupter_InitializeForOffload.c)
 *     Register_UpdateKBLUSB2PMCTRLRegister @ 0x140049330 (Register_UpdateKBLUSB2PMCTRLRegister.c)
 *     RootHub_DisableLPMForSlot @ 0x140049584 (RootHub_DisableLPMForSlot.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x14004A6BC (RootHub_Update20HardwareLpmParameters.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x140056764 (XilCoreDeviceSlot_FreeResources.c)
 *     Interrupter_ReleaseInterrupter @ 0x14007CAFC (Interrupter_ReleaseInterrupter.c)
 *     Interrupter_PrepareInterrupter @ 0x140082980 (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     Register_WriteSecureMmio @ 0x14001CBB4 (Register_WriteSecureMmio.c)
 */

__int64 __fastcall XilRegister_WriteUlong(__int64 a1, _DWORD *a2, int a3)
{
  __int64 result; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  result = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(result + 1001) )
    return Register_WriteSecureMmio(a1, a2, 2LL, &v5);
  *a2 = a3;
  _InterlockedOr(v4, 0);
  return result;
}
