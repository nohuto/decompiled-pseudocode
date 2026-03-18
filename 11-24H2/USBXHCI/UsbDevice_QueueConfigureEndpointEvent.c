/*
 * XREFs of UsbDevice_QueueConfigureEndpointEvent @ 0x14002A1C8
 * Callers:
 *     UsbDevice_SetDeviceDisabled @ 0x140002568 (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002A1C8 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_SetResourceAssignmentCompletion @ 0x140032EB0 (UsbDevice_SetResourceAssignmentCompletion.c)
 *     UsbDevice_StopEndpointToOffloadedEndpointCompletion @ 0x140034900 (UsbDevice_StopEndpointToOffloadedEndpointCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x140039910 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x14003A4EC (UsbDevice_HandleAddAndDropEndpointsState.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x14003ABD8 (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x14003B530 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_ControllerGone @ 0x14004D710 (UsbDevice_ControllerGone.c)
 *     UsbDevice_DropEndpointsCompletion @ 0x14004D8A0 (UsbDevice_DropEndpointsCompletion.c)
 *     UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x14004D9B8 (UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState.c)
 * Callees:
 *     Controller_ReportFatalError @ 0x140006A08 (Controller_ReportFatalError.c)
 *     Debug_FreAssertMsg @ 0x140019AC8 (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 *     UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList @ 0x140029BF0 (UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x140029C68 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002A1C8 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x14002A958 (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 *     UsbDevice_SetConfigureRequestStatus @ 0x140032F88 (UsbDevice_SetConfigureRequestStatus.c)
 *     UsbDevice_HandleAssignPinsForEndpointsToOffloadState @ 0x140034EE4 (UsbDevice_HandleAssignPinsForEndpointsToOffloadState.c)
 *     UsbDevice_CompleteConfigureEndpointRequest @ 0x140039788 (UsbDevice_CompleteConfigureEndpointRequest.c)
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x14003A4EC (UsbDevice_HandleAddAndDropEndpointsState.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x14003ABD8 (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x14004D9B8 (UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState.c)
 *     UsbDevice_HandleUnassignPinsForOffloadedEndpointsState @ 0x14004DA74 (UsbDevice_HandleUnassignPinsForOffloadedEndpointsState.c)
 */

__int64 __fastcall UsbDevice_QueueConfigureEndpointEvent(__int64 a1, int a2)
{
  int v2; // r8d
  int v3; // ebx
  __int64 v4; // rbp
  int v5; // esi
  unsigned int v7; // r14d
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  __int64 v15; // rcx
  int v17; // ebx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  bool v24; // cf
  int v25; // ebx
  int v26; // ecx
  int v27; // ebx
  int v28; // ebx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // ebx
  int v33; // r9d
  const char *v34; // rcx

  v2 = *(_DWORD *)(a1 + 608);
  v3 = 14;
  v4 = *(_QWORD *)(a1 + 600);
  v5 = 0;
  v7 = 1;
  if ( v2 > 7 )
  {
    if ( v2 == 8 )
    {
      v21 = a2 - 1;
      if ( a2 != 1 )
      {
LABEL_43:
        if ( v21 != 1 )
          goto LABEL_12;
LABEL_44:
        v3 = 12;
        goto LABEL_12;
      }
    }
    else
    {
      if ( v2 != 9 )
      {
        if ( (unsigned int)(v2 - 10) >= 2 )
          goto LABEL_12;
        v21 = a2 - 1;
        if ( a2 == 1 )
          goto LABEL_44;
        goto LABEL_43;
      }
      v8 = a2 - 3;
      if ( a2 != 3 )
      {
LABEL_7:
        if ( v8 == 1 )
          v3 = 11;
        goto LABEL_12;
      }
    }
    v3 = 10;
    goto LABEL_12;
  }
  switch ( v2 )
  {
    case 7:
      if ( a2 == 3 )
      {
        v3 = 8;
      }
      else if ( a2 == 4 )
      {
        v3 = 9;
      }
      goto LABEL_12;
    case 0:
      v9 = 1;
      if ( a2 != 5 )
        v9 = 14;
      v3 = v9;
      goto LABEL_12;
    case 1:
      v21 = a2 - 1;
      if ( a2 == 1 )
      {
        v3 = 2;
        goto LABEL_12;
      }
      goto LABEL_43;
    case 2:
      v8 = a2 - 3;
      if ( a2 == 3 )
      {
        v3 = 3;
        goto LABEL_12;
      }
      goto LABEL_7;
  }
  if ( v2 != 3 )
  {
    switch ( v2 )
    {
      case 4:
        v26 = a2 - 1;
        if ( a2 == 1 )
        {
          v3 = v26 + 5;
          goto LABEL_12;
        }
        break;
      case 5:
        v26 = a2 - 1;
        if ( a2 == 1 )
        {
          v3 = v26 + 6;
          goto LABEL_12;
        }
        break;
      case 6:
        v26 = a2 - 1;
        if ( a2 != 1 )
          break;
LABEL_64:
        v3 = 7;
        goto LABEL_12;
      default:
        goto LABEL_12;
    }
    if ( v26 == 1 )
      v3 = 13;
    goto LABEL_12;
  }
  if ( a2 == 3 )
  {
    v3 = 4;
    goto LABEL_12;
  }
  if ( a2 == 4 )
    goto LABEL_64;
LABEL_12:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      5u,
      0xCu,
      0x41u,
      (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
      v2,
      a2,
      v3);
  *(_DWORD *)(a1 + 608) = v3;
  if ( v3 <= 7 )
  {
    if ( v3 != 7 )
    {
      if ( v3 )
      {
        v17 = v3 - 1;
        if ( !v17 )
        {
          v22 = UsbDevice_ValidateEndpointConfigureRequest(a1, v4);
          if ( v22 < 0 )
          {
            UsbDevice_SetConfigureRequestStatus(a1, (unsigned int)v22);
            v7 = 2;
          }
          v19 = v7;
          goto LABEL_28;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          LOBYTE(v5) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1036LL) != 2;
          v19 = (unsigned int)(v5 + 3);
LABEL_28:
          v20 = a1;
          return UsbDevice_QueueConfigureEndpointEvent(v20, v19);
        }
        v25 = v18 - 1;
        if ( !v25 )
        {
          v23 = UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList(v4);
          goto LABEL_46;
        }
        v27 = v25 - 1;
        if ( !v27 )
          return UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState(a1, v4);
        v28 = v27 - 1;
        if ( v28 )
        {
          if ( v28 != 1 )
            goto LABEL_87;
          return UsbDevice_HandleUnassignPinsForOffloadedEndpointsState(a1, v4);
        }
        v29 = UsbDevice_InitializeInputContextForAddDropEndpoints(a1, v4, 1LL);
        v30 = a1;
        if ( v29 < 0 )
        {
LABEL_80:
          UsbDevice_SetConfigureRequestStatus(v30, (unsigned int)v29);
          v19 = 2LL;
          return UsbDevice_QueueConfigureEndpointEvent(v20, v19);
        }
        *(_BYTE *)(a1 + 460) = 0;
        v31 = 1LL;
      }
      else
      {
        v31 = 5LL;
        v30 = a1;
      }
      return UsbDevice_SendConfigureEndpointCommand(v30, v31);
    }
    v23 = *(_DWORD *)(v4 + 84);
LABEL_46:
    v24 = v23 != 0;
LABEL_47:
    v19 = 4 - (unsigned int)v24;
    goto LABEL_28;
  }
  v10 = v3 - 8;
  if ( !v10 )
    return UsbDevice_HandleAssignPinsForEndpointsToOffloadState(a1, v4);
  v11 = v10 - 1;
  if ( !v11 )
  {
    v24 = *(_BYTE *)(a1 + 460) != 0;
    goto LABEL_47;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v29 = UsbDevice_InitializeInputContextForAddDropEndpoints(a1, v4, 2LL);
    v30 = a1;
    if ( v29 >= 0 )
    {
      v31 = 2LL;
      return UsbDevice_SendConfigureEndpointCommand(v30, v31);
    }
    goto LABEL_80;
  }
  v13 = v12 - 1;
  if ( !v13 )
    return UsbDevice_HandleAddAndDropEndpointsState(a1, v4);
  v14 = v13 - 1;
  if ( !v14 )
  {
    v15 = a1;
    return UsbDevice_CompleteConfigureEndpointRequest(v15);
  }
  v32 = v14 - 1;
  if ( v32 )
  {
    if ( v32 == 1 )
    {
      v33 = 4839;
      v34 = "Unhandled event/transition encountered";
LABEL_88:
      Debug_FreAssertMsg((__int64)v34, 0, (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c", v33);
      UsbDevice_SetConfigureRequestStatus(a1, 3221225701LL);
      return UsbDevice_CompleteConfigureEndpointRequest(v15);
    }
LABEL_87:
    v33 = 5223;
    v34 = "Unexpected ConfigureEndpointState value";
    goto LABEL_88;
  }
  UsbDevice_CompleteConfigureEndpointRequest(a1);
  return Controller_ReportFatalError(*(_QWORD *)(a1 + 8), 2, 4119, 0, 0LL, 0LL, 0LL);
}
