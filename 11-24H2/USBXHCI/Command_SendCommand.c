/*
 * XREFs of Command_SendCommand @ 0x14000BCD4
 * Callers:
 *     UsbDevice_DisableCompletion @ 0x140001D68 (UsbDevice_DisableCompletion.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x140008E8C (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1400091E0 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x140009F30 (Endpoint_SM_SendStopEndpointCommand.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x14000AB48 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x14001C090 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x14001CE2C (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x14001D204 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_SM_ResetEndpoint @ 0x14002D054 (Endpoint_SM_ResetEndpoint.c)
 *     UsbDevice_UcxEvtReset @ 0x14002DE50 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtDisable @ 0x14002E4E0 (UsbDevice_UcxEvtDisable.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x14002EE74 (Endpoint_SM_ResetControlEndpoint.c)
 *     UsbDevice_UcxEvtEnable @ 0x14002EFF0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_SetAddressCompletion @ 0x14002F8B0 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x14002FC80 (UsbDevice_EnableCompletion.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x140038180 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x140039910 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x14003A6E4 (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x14003ABD8 (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_SetAddress @ 0x14003AEC4 (UsbDevice_SetAddress.c)
 *     UsbDevice_UcxEvtUpdate @ 0x14003B700 (UsbDevice_UcxEvtUpdate.c)
 *     Command_SendInternalCommandSynchronously @ 0x14003D644 (Command_SendInternalCommandSynchronously.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1400478F0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     UsbDevice_SendStopEndpointToOffloadedEndpoint @ 0x14004DF1C (UsbDevice_SendStopEndpointToOffloadedEndpoint.c)
 *     UsbDevice_SetResourceAssignment @ 0x14004DFC4 (UsbDevice_SetResourceAssignment.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x14000BE64 (Controller_IsControllerAccessible.c)
 *     DynamicLock_Acquire @ 0x14000BF40 (DynamicLock_Acquire.c)
 *     Command_InternalSendCommand @ 0x14000C004 (Command_InternalSendCommand.c)
 *     DynamicLock_Release @ 0x14000C970 (DynamicLock_Release.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000DA20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000DC30 (Controller_LowerAndTrackIrql.c)
 *     WPP_RECORDER_SF_qL @ 0x14003E044 (WPP_RECORDER_SF_qL.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Command_SendCommand(__int64 a1, __int64 a2)
{
  int v4; // edx
  char v5; // si
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned int v9; // ebp
  __int64 (__fastcall *v10)(__int64, __int64); // rax

  if ( !(unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_qL(
        *(_QWORD *)(a1 + 16),
        v4,
        7,
        58,
        (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
        a2,
        (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2);
    }
    *(_BYTE *)(a2 + 60) = 0;
    goto LABEL_11;
  }
  v5 = 0;
  if ( KeGetCurrentIrql() == 2 && *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1001LL) )
  {
    Controller_LowerAndTrackIrql();
    v5 = 1;
  }
  DynamicLock_Acquire(*(_QWORD *)(a1 + 112));
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL);
  if ( v6 )
  {
    v10 = *(__int64 (__fastcall **)(__int64, __int64))(v6 + 16);
    if ( v10 )
    {
      v9 = v10(v6, a2);
      if ( v9 != 4 )
      {
        DynamicLock_Release(*(_QWORD *)(a1 + 112));
        if ( v5 )
          Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
        v8 = v9;
        return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a2 + 40))(a2, v8, 0LL);
      }
    }
  }
  if ( *(_DWORD *)(a1 + 36) == 5 )
  {
    DynamicLock_Release(*(_QWORD *)(a1 + 112));
    if ( v5 )
      Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
LABEL_11:
    v8 = 3LL;
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a2 + 40))(a2, v8, 0LL);
  }
  Command_InternalSendCommand(a1);
  result = DynamicLock_Release(*(_QWORD *)(a1 + 112));
  if ( v5 )
    return Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  return result;
}
