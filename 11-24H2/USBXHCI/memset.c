/*
 * XREFs of memset @ 0x140058EC0
 * Callers:
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x14000144C (XilCoreDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_DisableCompletion @ 0x140001D68 (UsbDevice_DisableCompletion.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x140004D10 (Endpoint_UcxEvtEndpointReset.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x140008E8C (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1400091E0 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x140009F30 (Endpoint_SM_SendStopEndpointCommand.c)
 *     TR_InitializeTransferRing @ 0x14000A7FC (TR_InitializeTransferRing.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x14000AB48 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Control_TransferData_Initialize @ 0x14000C500 (Control_TransferData_Initialize.c)
 *     Isoch_PrepareStage @ 0x14000F1B0 (Isoch_PrepareStage.c)
 *     Isoch_Stage_CompleteTD @ 0x140010440 (Isoch_Stage_CompleteTD.c)
 *     Bulk_TransferData_Initialize @ 0x140014580 (Bulk_TransferData_Initialize.c)
 *     Bulk_PrepareStage @ 0x140014A70 (Bulk_PrepareStage.c)
 *     Bulk_Stage_Release @ 0x1400163D8 (Bulk_Stage_Release.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x140016C88 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x140018EEC (DeviceSlot_D0EntryCleanupState.c)
 *     XilCoreCommand_Initialize @ 0x140019FF0 (XilCoreCommand_Initialize.c)
 *     Endpoint_SendClearStallTransfer @ 0x14001BC34 (Endpoint_SendClearStallTransfer.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x14001C290 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     Register_WriteSecureMmio @ 0x14001CBB4 (Register_WriteSecureMmio.c)
 *     XilUsbDevice_CreateSecureObject @ 0x14001DC0C (XilUsbDevice_CreateSecureObject.c)
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x14001F364 (XilCoreCommonBuffer_AcquireBuffer.c)
 *     Isoch_Stage_Release @ 0x140022B24 (Isoch_Stage_Release.c)
 *     Isoch_TransferData_Initialize @ 0x140022F40 (Isoch_TransferData_Initialize.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1400251A0 (RootHub_UcxEvtInterruptTransfer.c)
 *     UsbDevice_InitializeInputContextCommon @ 0x14002AADC (UsbDevice_InitializeInputContextCommon.c)
 *     Endpoint_SM_ResetEndpoint @ 0x14002D054 (Endpoint_SM_ResetEndpoint.c)
 *     McGenControlCallbackV2 @ 0x14002D880 (McGenControlCallbackV2.c)
 *     UsbDevice_UcxEvtDisable @ 0x14002E4E0 (UsbDevice_UcxEvtDisable.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x14002EE74 (Endpoint_SM_ResetControlEndpoint.c)
 *     UsbDevice_UcxEvtEnable @ 0x14002EFF0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_SetAddressCompletion @ 0x14002F8B0 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x14002FC80 (UsbDevice_EnableCompletion.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x140031554 (Command_D0EntryPostInterruptsEnabled.c)
 *     Interrupter_Initialize @ 0x140032FA4 (Interrupter_Initialize.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x140038180 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     XilUsbDevice_QueryAttributesFromTrustlet @ 0x140039560 (XilUsbDevice_QueryAttributesFromTrustlet.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x140039910 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x14003A6E4 (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x14003ABD8 (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_SetAddress @ 0x14003AEC4 (UsbDevice_SetAddress.c)
 *     UsbDevice_UcxEvtUpdate @ 0x14003B700 (UsbDevice_UcxEvtUpdate.c)
 *     memcpy_s @ 0x14003CC30 (memcpy_s.c)
 *     CommonBuffer_AcquireCommonBufferFromPhysicalAddress @ 0x14003EF5C (CommonBuffer_AcquireCommonBufferFromPhysicalAddress.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x14003F1D8 (CommonBuffer_AcquireSecureBuffer.c)
 *     Device_QueryCapabilities @ 0x1400439E8 (Device_QueryCapabilities.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x140045C3C (DeviceSlot_ControllerResetPostReset.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x140046684 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     Interrupter_InitializeForOffload @ 0x140048A54 (Interrupter_InitializeForOffload.c)
 *     TR_CreateSecureObject @ 0x14004AE90 (TR_CreateSecureObject.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x14004C5C0 (Isoch_WdfEvtIoCanceledOnQueue.c)
 *     UsbDevice_SendStopEndpointToOffloadedEndpoint @ 0x14004DF1C (UsbDevice_SendStopEndpointToOffloadedEndpoint.c)
 *     UsbDevice_SetResourceAssignment @ 0x14004DFC4 (UsbDevice_SetResourceAssignment.c)
 *     Crashdump_Initialize @ 0x1400500E0 (Crashdump_Initialize.c)
 *     Crashdump_EventRing_PrepareForDump @ 0x140052534 (Crashdump_EventRing_PrepareForDump.c)
 *     Crashdump_Command_PrepareForDump @ 0x1400527C8 (Crashdump_Command_PrepareForDump.c)
 *     Crashdump_Endpoint_PrepareForHibernate @ 0x140052EB0 (Crashdump_Endpoint_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_Cleanup @ 0x140053884 (Crashdump_UsbDevice_Cleanup.c)
 *     Crashdump_UsbDevice_ConfigureEndpoints @ 0x140053C5C (Crashdump_UsbDevice_ConfigureEndpoints.c)
 *     Crashdump_UsbDevice_GetDeviceDescriptor @ 0x140053FC4 (Crashdump_UsbDevice_GetDeviceDescriptor.c)
 *     Crashdump_UsbDevice_GetPortStatus @ 0x140054158 (Crashdump_UsbDevice_GetPortStatus.c)
 *     Crashdump_UsbDevice_PrepareForHibernate @ 0x140054450 (Crashdump_UsbDevice_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_SendAddressDeviceCommand @ 0x1400549A0 (Crashdump_UsbDevice_SendAddressDeviceCommand.c)
 *     XilCoreCommonBuffer_AllocateBuffer @ 0x140056294 (XilCoreCommonBuffer_AllocateBuffer.c)
 *     TelemetryData_CreateReport @ 0x14005685C (TelemetryData_CreateReport.c)
 *     WerKernelSubmitReport @ 0x140057BDC (WerKernelSubmitReport.c)
 *     memset$thunk$772440563353939046 @ 0x14005A020 (memset$thunk$772440563353939046.c)
 *     Controller_ConfigureS0IdleSettings @ 0x140074818 (Controller_ConfigureS0IdleSettings.c)
 *     Controller_Create @ 0x140074C78 (Controller_Create.c)
 *     Controller_CreateSecureObject @ 0x140075AEC (Controller_CreateSecureObject.c)
 *     Controller_CreateWdfDevice @ 0x140075BC4 (Controller_CreateWdfDevice.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1400766A0 (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 *     Controller_RetrievePciData @ 0x140078070 (Controller_RetrievePciData.c)
 *     DriverEntry @ 0x14007A810 (DriverEntry.c)
 *     WppTraceCallback @ 0x14007AFE0 (WppTraceCallback.c)
 *     Interrupter_CreateInterrupter @ 0x14007BA04 (Interrupter_CreateInterrupter.c)
 *     IoControl_Create @ 0x14007CC9C (IoControl_Create.c)
 *     RootHub_Create @ 0x14007DE04 (RootHub_Create.c)
 *     Wmi_Create @ 0x14007EBDC (Wmi_Create.c)
 *     Wmi_WdfEvtWmi_GetControllerCapabilities @ 0x14007EDC0 (Wmi_WdfEvtWmi_GetControllerCapabilities.c)
 *     DmaEnabler_Create @ 0x14007F34C (DmaEnabler_Create.c)
 *     TelemetryData_pInitWerContext @ 0x14007FE44 (TelemetryData_pInitWerContext.c)
 *     SleepstudyHelperInitializeOnce @ 0x1400804C0 (SleepstudyHelperInitializeOnce.c)
 *     TR_Create @ 0x140082E54 (TR_Create.c)
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
