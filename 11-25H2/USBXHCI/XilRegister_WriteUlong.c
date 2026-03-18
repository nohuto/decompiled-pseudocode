/*
 * XREFs of XilRegister_WriteUlong @ 0x14000B858
 * Callers:
 *     RootHub_DetectAndAcknowledgePortResume @ 0x140008F4C (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x140009214 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x14000AEBC (RootHub_HandlePortStatusChangeEvent.c)
 *     Interrupter_InterruptEnable @ 0x14000B5D8 (Interrupter_InterruptEnable.c)
 *     Interrupter_InterruptDisable @ 0x14000B788 (Interrupter_InterruptDisable.c)
 *     Controller_InitializeDeviceNotificationRegister @ 0x14000B830 (Controller_InitializeDeviceNotificationRegister.c)
 *     Controller_Start @ 0x14000B894 (Controller_Start.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x14000BDD4 (Interrupter_InterrupterRegisterIntialize.c)
 *     Register_ControllerStop @ 0x14000C7B8 (Register_ControllerStop.c)
 *     Register_BiosHandoff @ 0x14000C998 (Register_BiosHandoff.c)
 *     XilCoreDeviceSlot_Initialize @ 0x14000D464 (XilCoreDeviceSlot_Initialize.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1400269B0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x140027D64 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     RootHub_D0Entry @ 0x140028064 (RootHub_D0Entry.c)
 *     RootHub_ForceU0AndWait @ 0x1400281F8 (RootHub_ForceU0AndWait.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x140028598 (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x140028710 (RootHub_UcxEvtClearPortFeature.c)
 *     Register_ControllerReset @ 0x14002D87C (Register_ControllerReset.c)
 *     Register_SetClearSSICPortUnused @ 0x14002DC58 (Register_SetClearSSICPortUnused.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x14002DD00 (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x14002DF00 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     Register_DisableComplianceModeCapability @ 0x14002E0AC (Register_DisableComplianceModeCapability.c)
 *     Register_D0Entry @ 0x14002FB34 (Register_D0Entry.c)
 *     RootHub_ForceU3 @ 0x1400362F4 (RootHub_ForceU3.c)
 *     Controller_D0EntryRestoreState @ 0x140037BF8 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x140037EF8 (Controller_D0ExitSaveState.c)
 *     RootHub_D0Exit @ 0x140039A68 (RootHub_D0Exit.c)
 *     Controller_ClearHSIIWorkaround @ 0x140040140 (Controller_ClearHSIIWorkaround.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1400402E8 (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_SetHSIIWorkaround @ 0x14004253C (Controller_SetHSIIWorkaround.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1400425C4 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x140043180 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x140048400 (Interrupter_DeInitializeAfterOffload.c)
 *     Interrupter_InitializeForOffload @ 0x1400491AC (Interrupter_InitializeForOffload.c)
 *     Register_UpdateKBLUSB2PMCTRLRegister @ 0x140049A80 (Register_UpdateKBLUSB2PMCTRLRegister.c)
 *     RootHub_DisableLPMForSlot @ 0x140049CD4 (RootHub_DisableLPMForSlot.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x14004AFAC (RootHub_Update20HardwareLpmParameters.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x140057344 (XilCoreDeviceSlot_FreeResources.c)
 *     Interrupter_ReleaseInterrupter @ 0x14007CB60 (Interrupter_ReleaseInterrupter.c)
 *     Interrupter_PrepareInterrupter @ 0x140082C5C (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     Register_WriteSecureMmio @ 0x14000E158 (Register_WriteSecureMmio.c)
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
