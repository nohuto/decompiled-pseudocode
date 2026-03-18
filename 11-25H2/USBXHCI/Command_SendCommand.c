/*
 * XREFs of Command_SendCommand @ 0x140008550
 * Callers:
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x14000D8E0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x14000DE28 (Endpoint_SM_SendStopEndpointCommand.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x14000DF14 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x14000E2D4 (Endpoint_OnResetEndpointConfigure.c)
 *     UsbDevice_SetAddress @ 0x14000EAF0 (UsbDevice_SetAddress.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x14000FF70 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x140010288 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x14001563C (Endpoint_OnResetSetDequeuePointer.c)
 *     UsbDevice_DisableCompletion @ 0x14002C738 (UsbDevice_DisableCompletion.c)
 *     Endpoint_SM_ResetEndpoint @ 0x14002D6F4 (Endpoint_SM_ResetEndpoint.c)
 *     UsbDevice_UcxEvtReset @ 0x14002E880 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtDisable @ 0x14002F190 (UsbDevice_UcxEvtDisable.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x14002FE54 (Endpoint_SM_ResetControlEndpoint.c)
 *     UsbDevice_UcxEvtEnable @ 0x14002FFD0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_SetAddressCompletion @ 0x140030890 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x140030C60 (UsbDevice_EnableCompletion.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1400392F0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x14003A070 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x14003ADB8 (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x14003B1DC (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_UcxEvtUpdate @ 0x14003B5F0 (UsbDevice_UcxEvtUpdate.c)
 *     Command_SendInternalCommandSynchronously @ 0x14003D754 (Command_SendInternalCommandSynchronously.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1400475E0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     UsbDevice_SendStopEndpointToOffloadedEndpoint @ 0x14004E884 (UsbDevice_SendStopEndpointToOffloadedEndpoint.c)
 *     UsbDevice_SetResourceAssignment @ 0x14004E92C (UsbDevice_SetResourceAssignment.c)
 * Callees:
 *     Command_InternalSendCommand @ 0x1400080E4 (Command_InternalSendCommand.c)
 *     Controller_IsControllerAccessible @ 0x1400086E0 (Controller_IsControllerAccessible.c)
 *     DynamicLock_Acquire @ 0x1400087C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x140008E60 (DynamicLock_Release.c)
 *     Controller_LowerAndTrackIrql @ 0x140019630 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x14001C700 (Controller_RaiseAndTrackIrql.c)
 *     WPP_RECORDER_SF_qL @ 0x14003E154 (WPP_RECORDER_SF_qL.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Command_SendCommand(__int64 a1, __int64 a2)
{
  int v4; // edx
  char v5; // si
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rdx
  unsigned int v12; // ebp
  __int64 (__fastcall *v13)(__int64, __int64); // rax

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
  if ( KeGetCurrentIrql() == 2 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v6 + 1001) )
    {
      Controller_LowerAndTrackIrql(v6);
      v5 = 1;
    }
  }
  DynamicLock_Acquire(*(_QWORD *)(a1 + 112));
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL);
  if ( v9 )
  {
    v13 = *(__int64 (__fastcall **)(__int64, __int64))(v9 + 16);
    if ( v13 )
    {
      v12 = v13(v9, a2);
      if ( v12 != 4 )
      {
        DynamicLock_Release(*(_QWORD *)(a1 + 112));
        if ( v5 )
          Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
        v11 = v12;
        return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a2 + 40))(a2, v11, 0LL);
      }
    }
  }
  if ( *(_DWORD *)(a1 + 36) == 5 )
  {
    DynamicLock_Release(*(_QWORD *)(a1 + 112));
    if ( v5 )
      Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
LABEL_11:
    v11 = 3LL;
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a2 + 40))(a2, v11, 0LL);
  }
  Command_InternalSendCommand(a1, a2, v7, v8);
  result = DynamicLock_Release(*(_QWORD *)(a1 + 112));
  if ( v5 )
    return Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  return result;
}
