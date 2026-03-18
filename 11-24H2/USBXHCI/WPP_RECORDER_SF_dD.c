/*
 * XREFs of WPP_RECORDER_SF_dD @ 0x14001BF58
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x140002700 (Endpoint_TransferEventHandler.c)
 *     Control_ProcessTransferEventWithED1 @ 0x140005EE0 (Control_ProcessTransferEventWithED1.c)
 *     Control_Transfer_CompleteCancelable @ 0x1400064F0 (Control_Transfer_CompleteCancelable.c)
 *     Endpoint_OnCancelStopCompletion @ 0x140007D60 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x140008250 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Control_ProcessTransferEventPointer @ 0x140008878 (Control_ProcessTransferEventPointer.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x140008B60 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1400091E0 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x140009F30 (Endpoint_SM_SendStopEndpointCommand.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x14000B478 (RootHub_DetectAndAcknowledgePortResume.c)
 *     Command_HandleCommandCompletionEvent @ 0x14000B740 (Command_HandleCommandCompletionEvent.c)
 *     Controller_IsControllerAccessible @ 0x14000BE64 (Controller_IsControllerAccessible.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x14000CA5C (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_WaitForResumeCompletion @ 0x14000D59C (RootHub_WaitForResumeCompletion.c)
 *     Isoch_RetrieveNextStage @ 0x14000E290 (Isoch_RetrieveNextStage.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1400129F4 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_FindTrbMatch @ 0x140012FE8 (Isoch_FindTrbMatch.c)
 *     XilCoreCommonBuffer_PreAllocateBuffers @ 0x140017250 (XilCoreCommonBuffer_PreAllocateBuffers.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x140017334 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     Register_ControllerStop @ 0x14001A214 (Register_ControllerStop.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x14001BAC0 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x14001C090 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x14001C290 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     Register_ControllerReset @ 0x14001C654 (Register_ControllerReset.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x14001CE2C (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x14001D204 (Endpoint_OnResetEndpointConfigure.c)
 *     Control_MapTransfer @ 0x14001DEC0 (Control_MapTransfer.c)
 *     Endpoint_EvaluateContextCompletion @ 0x14001F770 (Endpoint_EvaluateContextCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x14001FC00 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x140024160 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1400251A0 (RootHub_UcxEvtInterruptTransfer.c)
 *     Interrupter_DeferredWorkProcessor @ 0x140025820 (Interrupter_DeferredWorkProcessor.c)
 *     RootHub_D0Entry @ 0x140028D68 (RootHub_D0Entry.c)
 *     RootHub_ForceU0AndWait @ 0x140028EFC (RootHub_ForceU0AndWait.c)
 *     XilCoreCommonBuffer_RebalanceResources @ 0x140029588 (XilCoreCommonBuffer_RebalanceResources.c)
 *     Isoch_EP_EndpointResetFromClient @ 0x140029AA0 (Isoch_EP_EndpointResetFromClient.c)
 *     Isoch_EP_Enable @ 0x140029B10 (Isoch_EP_Enable.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x140029C68 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x14002A958 (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 *     UsbDevice_InitializeInputContextForDropEndpoints @ 0x14002AC70 (UsbDevice_InitializeInputContextForDropEndpoints.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x14002CE60 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x14002FC80 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_UcxEvtAddress @ 0x140030810 (UsbDevice_UcxEvtAddress.c)
 *     Register_GetAllExtendedCapability @ 0x140033898 (Register_GetAllExtendedCapability.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x140035038 (XilEndpoint_AllocateStreamContextArray.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x140038180 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x140039910 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x14003A4EC (UsbDevice_HandleAddAndDropEndpointsState.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x14003A6E4 (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x14003ABD8 (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_SetAddress @ 0x14003AEC4 (UsbDevice_SetAddress.c)
 *     UsbDevice_UcxEvtUpdate @ 0x14003B700 (UsbDevice_UcxEvtUpdate.c)
 *     Command_NvidiaGetFirmwareVersionCommandCompletion @ 0x14003D470 (Command_NvidiaGetFirmwareVersionCommandCompletion.c)
 *     Command_RenesasGetFirmwareVersionCommandCompletion @ 0x14003D560 (Command_RenesasGetFirmwareVersionCommandCompletion.c)
 *     Controller_AudioOffloadWnfStateUpdateWorker @ 0x14003F990 (Controller_AudioOffloadWnfStateUpdateWorker.c)
 *     Controller_InitiateRecovery @ 0x14004032C (Controller_InitiateRecovery.c)
 *     XilEndpoint_SendRequestToAllocateSecureStreamContextArray @ 0x140046D84 (XilEndpoint_SendRequestToAllocateSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToFreeSecureStreamContextArray @ 0x140046ED8 (XilEndpoint_SendRequestToFreeSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToGetSecureStreamContextArray @ 0x140046FA0 (XilEndpoint_SendRequestToGetSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToSetSecureStreamContextArray @ 0x1400471A8 (XilEndpoint_SendRequestToSetSecureStreamContextArray.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1400478F0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x140047DE0 (Endpoint_UcxEvtEndpointStaticStreamsAdd.c)
 *     RootHub_UcxEvtGetInfo @ 0x14004A060 (RootHub_UcxEvtGetInfo.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x14004A220 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_Usb4TunnelState @ 0x14004A8C4 (RootHub_Usb4TunnelState.c)
 *     TR_EnableForwardProgress_Internal @ 0x14004B0C8 (TR_EnableForwardProgress_Internal.c)
 *     Isoch_ProcessTransferCompletion @ 0x14004C3B0 (Isoch_ProcessTransferCompletion.c)
 *     Interrupter_FilterMessageDescriptors @ 0x140074008 (Interrupter_FilterMessageDescriptors.c)
 *     Controller_ConfigureS0IdleSettings @ 0x140074818 (Controller_ConfigureS0IdleSettings.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x140077234 (Controller_PopulateHardwareVerifierFlags.c)
 *     Interrupter_CmResList_GetInterrupterCountAndType @ 0x14007B7F4 (Interrupter_CmResList_GetInterrupterCountAndType.c)
 *     Interrupter_FilterAllMSIResources @ 0x14007C014 (Interrupter_FilterAllMSIResources.c)
 *     Interrupter_PrepareHardware @ 0x14007C5D0 (Interrupter_PrepareHardware.c)
 *     Register_ParseCapabilityRegister @ 0x14007D158 (Register_ParseCapabilityRegister.c)
 *     RootHub_PrepareHardware @ 0x14007E080 (RootHub_PrepareHardware.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x140080D10 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Endpoint_Create @ 0x140080F6C (Endpoint_Create.c)
 *     IntelPptFilter_CheckAndIncreaseEndpointCount @ 0x140084008 (IntelPptFilter_CheckAndIncreaseEndpointCount.c)
 *     IntelPptFilter_DecreaseEndpointCount @ 0x14008408C (IntelPptFilter_DecreaseEndpointCount.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_dD(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rbx
  unsigned int v9; // edi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+50h] [rbp-18h]
  __int64 v14; // [rsp+58h] [rbp-10h]
  __int64 v15; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v15 = va_arg(va1, _QWORD);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v12, (__int64 *)va, 4LL, va1, 4LL, 0LL, v13, v14);
}
