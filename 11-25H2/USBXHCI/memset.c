/*
 * XREFs of memset @ 0x140059AC0
 * Callers:
 *     McGenControlCallbackV2 @ 0x140001980 (McGenControlCallbackV2.c)
 *     XilUsbDevice_CreateSecureObject @ 0x140003C7C (XilUsbDevice_CreateSecureObject.c)
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x140004284 (XilCoreCommonBuffer_AcquireBuffer.c)
 *     Control_TransferData_Initialize @ 0x140006CB0 (Control_TransferData_Initialize.c)
 *     Endpoint_SendClearStallTransfer @ 0x14000D014 (Endpoint_SendClearStallTransfer.c)
 *     XilCoreCommand_Initialize @ 0x14000D510 (XilCoreCommand_Initialize.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x14000DAE0 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x14000DE28 (Endpoint_SM_SendStopEndpointCommand.c)
 *     Register_WriteSecureMmio @ 0x14000E158 (Register_WriteSecureMmio.c)
 *     UsbDevice_SetAddress @ 0x14000EAF0 (UsbDevice_SetAddress.c)
 *     UsbDevice_InitializeInputContextCommon @ 0x14000F318 (UsbDevice_InitializeInputContextCommon.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x14000FF70 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x140010288 (Endpoint_OnCancelSetDequeuePointer.c)
 *     TR_InitializeTransferRing @ 0x1400104C4 (TR_InitializeTransferRing.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1400112F0 (Endpoint_UcxEvtEndpointReset.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x14001563C (Endpoint_OnResetSetDequeuePointer.c)
 *     Isoch_Stage_CompleteTD @ 0x140018460 (Isoch_Stage_CompleteTD.c)
 *     Bulk_Stage_Release @ 0x140018DCC (Bulk_Stage_Release.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x140019A00 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_RetrieveNextStage @ 0x14001ADD0 (Bulk_RetrieveNextStage.c)
 *     Bulk_PrepareStage @ 0x14001B580 (Bulk_PrepareStage.c)
 *     Isoch_PrepareStage @ 0x14001DDB0 (Isoch_PrepareStage.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x14001FB88 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     Bulk_TransferData_Initialize @ 0x140020A00 (Bulk_TransferData_Initialize.c)
 *     Isoch_TransferData_Initialize @ 0x1400237C0 (Isoch_TransferData_Initialize.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1400242D4 (DeviceSlot_D0EntryCleanupState.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1400252D0 (RootHub_UcxEvtInterruptTransfer.c)
 *     Isoch_Stage_Release @ 0x140025A1C (Isoch_Stage_Release.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x14002C5CC (XilCoreDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_DisableCompletion @ 0x14002C738 (UsbDevice_DisableCompletion.c)
 *     Endpoint_SM_ResetEndpoint @ 0x14002D6F4 (Endpoint_SM_ResetEndpoint.c)
 *     UsbDevice_UcxEvtDisable @ 0x14002F190 (UsbDevice_UcxEvtDisable.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x14002FE54 (Endpoint_SM_ResetControlEndpoint.c)
 *     UsbDevice_UcxEvtEnable @ 0x14002FFD0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_SetAddressCompletion @ 0x140030890 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x140030C60 (UsbDevice_EnableCompletion.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x140032A9C (Command_D0EntryPostInterruptsEnabled.c)
 *     Interrupter_Initialize @ 0x140034B34 (Interrupter_Initialize.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1400392F0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     XilUsbDevice_QueryAttributesFromTrustlet @ 0x140039CC0 (XilUsbDevice_QueryAttributesFromTrustlet.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x14003A070 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x14003ADB8 (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x14003B1DC (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_UcxEvtUpdate @ 0x14003B5F0 (UsbDevice_UcxEvtUpdate.c)
 *     memcpy_s @ 0x14003CD40 (memcpy_s.c)
 *     CommonBuffer_AcquireCommonBufferFromPhysicalAddress @ 0x14003F06C (CommonBuffer_AcquireCommonBufferFromPhysicalAddress.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x14003F2E8 (CommonBuffer_AcquireSecureBuffer.c)
 *     Device_QueryCapabilities @ 0x140043E98 (Device_QueryCapabilities.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x14004592C (DeviceSlot_ControllerResetPostReset.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x140046374 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     Interrupter_InitializeForOffload @ 0x1400491AC (Interrupter_InitializeForOffload.c)
 *     TR_CreateSecureObject @ 0x14004B7A0 (TR_CreateSecureObject.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x14004CED0 (Isoch_WdfEvtIoCanceledOnQueue.c)
 *     UsbDevice_SendStopEndpointToOffloadedEndpoint @ 0x14004E884 (UsbDevice_SendStopEndpointToOffloadedEndpoint.c)
 *     UsbDevice_SetResourceAssignment @ 0x14004E92C (UsbDevice_SetResourceAssignment.c)
 *     Crashdump_Initialize @ 0x140050A40 (Crashdump_Initialize.c)
 *     Crashdump_EventRing_PrepareForDump @ 0x140052E94 (Crashdump_EventRing_PrepareForDump.c)
 *     Crashdump_Command_PrepareForDump @ 0x140053128 (Crashdump_Command_PrepareForDump.c)
 *     Crashdump_Endpoint_PrepareForHibernate @ 0x140053810 (Crashdump_Endpoint_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_Cleanup @ 0x1400541E4 (Crashdump_UsbDevice_Cleanup.c)
 *     Crashdump_UsbDevice_ConfigureEndpoints @ 0x1400545BC (Crashdump_UsbDevice_ConfigureEndpoints.c)
 *     Crashdump_UsbDevice_GetDeviceDescriptor @ 0x140054924 (Crashdump_UsbDevice_GetDeviceDescriptor.c)
 *     Crashdump_UsbDevice_GetPortStatus @ 0x140054AB8 (Crashdump_UsbDevice_GetPortStatus.c)
 *     Crashdump_UsbDevice_PrepareForHibernate @ 0x140054DB0 (Crashdump_UsbDevice_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_SendAddressDeviceCommand @ 0x140055300 (Crashdump_UsbDevice_SendAddressDeviceCommand.c)
 *     XilCoreCommonBuffer_AllocateBuffer @ 0x140056E34 (XilCoreCommonBuffer_AllocateBuffer.c)
 *     TelemetryData_CreateReport @ 0x14005743C (TelemetryData_CreateReport.c)
 *     WerKernelSubmitReport @ 0x1400587BC (WerKernelSubmitReport.c)
 *     memset$thunk$772440563353939046 @ 0x14005A020 (memset$thunk$772440563353939046.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1400748E4 (Controller_ConfigureS0IdleSettings.c)
 *     Controller_Create @ 0x140074D44 (Controller_Create.c)
 *     Controller_CreateSecureObject @ 0x140075BB8 (Controller_CreateSecureObject.c)
 *     Controller_CreateWdfDevice @ 0x140075CAC (Controller_CreateWdfDevice.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x140076788 (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 *     Controller_RetrievePciData @ 0x14007835C (Controller_RetrievePciData.c)
 *     DriverEntry @ 0x14007AA30 (DriverEntry.c)
 *     WppTraceCallback @ 0x14007B200 (WppTraceCallback.c)
 *     Interrupter_CreateInterrupter @ 0x14007BA50 (Interrupter_CreateInterrupter.c)
 *     IoControl_Create @ 0x14007CD00 (IoControl_Create.c)
 *     RootHub_Create @ 0x14007DE10 (RootHub_Create.c)
 *     Wmi_Create @ 0x14007EBF0 (Wmi_Create.c)
 *     Wmi_WdfEvtWmi_GetControllerCapabilities @ 0x14007EDE0 (Wmi_WdfEvtWmi_GetControllerCapabilities.c)
 *     DmaEnabler_Create @ 0x14007F36C (DmaEnabler_Create.c)
 *     TelemetryData_pInitWerContext @ 0x14007FE64 (TelemetryData_pInitWerContext.c)
 *     SleepstudyHelperInitializeOnce @ 0x1400804E0 (SleepstudyHelperInitializeOnce.c)
 *     TR_Create @ 0x14008313C (TR_Create.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  __m128 v5; // xmm0
  char *v6; // r8
  __m128 *v7; // rdx
  _OWORD *v8; // r9
  size_t v9; // r8
  __m128 *v10; // r9
  size_t v11; // r8
  _DWORD *v12; // r9
  size_t v13; // r8

  result = a1;
  v4 = 0x101010101010101LL * (unsigned __int8)Val;
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
  if ( Size >= 0x40 )
  {
    if ( (_isa_info & 2) != 0 && Size >= 0x320 )
      return (void *)_memset_repmovs();
    *(__m128 *)a1 = v5;
    v6 = (char *)a1 + Size;
    a1 = (void *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    Size = v6 - (_BYTE *)a1;
    if ( Size >= 0x40 )
    {
      v7 = (__m128 *)((char *)a1 + Size - 16);
      v8 = (_OWORD *)(((unsigned __int64)a1 + Size - 48) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = Size >> 6;
      do
      {
        *(__m128 *)a1 = v5;
        *((__m128 *)a1 + 1) = v5;
        a1 = (char *)a1 + 64;
        --v9;
        *((__m128 *)a1 - 2) = v5;
        *((__m128 *)a1 - 1) = v5;
      }
      while ( v9 );
      *v8 = v5;
      v8[1] = v5;
      v8[2] = v5;
      *v7 = v5;
      return result;
    }
LABEL_9:
    v10 = (__m128 *)((char *)a1 + Size - 16);
    *(__m128 *)a1 = v5;
    v11 = (Size & 0x20) >> 1;
    *v10 = v5;
    *(__m128 *)((char *)a1 + v11) = v5;
    *(__m128 *)((char *)v10 - v11) = v5;
    return result;
  }
  if ( Size >= 0x10 )
    goto LABEL_9;
  if ( Size < 4 )
  {
    if ( Size )
    {
      *(_BYTE *)a1 = v4;
      if ( Size != 1 )
        *(_WORD *)((char *)a1 + Size - 2) = v4;
    }
  }
  else
  {
    v12 = (char *)a1 + Size - 4;
    *(_DWORD *)a1 = v4;
    v13 = (Size & 8) >> 1;
    *v12 = v4;
    *(_DWORD *)((char *)a1 + v13) = v4;
    *(_DWORD *)((char *)v12 - v13) = v4;
  }
  return result;
}
