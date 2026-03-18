/*
 * XREFs of RIMGetPanelId @ 0x1400A7B30
 * Callers:
 *     RIMGetDeviceLocationInfo @ 0x1400A5D6C (RIMGetDeviceLocationInfo.c)
 *     ?PopulatePanelId@CInputSpaceRegion@@QEAAXXZ @ 0x1400A79CC (-PopulatePanelId@CInputSpaceRegion@@QEAAXXZ.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1401E23E4 (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMGetPointerDevicePDO @ 0x1400A8474 (RIMGetPointerDevicePDO.c)
 */

__int64 __fastcall RIMGetPanelId(struct _DEVICE_OBJECT *a1, _WORD *a2, ULONG a3)
{
  NTSTATUS DevicePropertyData; // ebx
  char v6; // di
  bool v7; // si
  int v8; // edx
  int v9; // r8d
  __int64 v10; // r9
  char v11; // di
  bool v12; // si
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  __int16 RequiredSize; // [rsp+30h] [rbp-48h]
  ULONG Type; // [rsp+90h] [rbp+18h] BYREF
  ULONG v18; // [rsp+98h] [rbp+20h] BYREF

  Type = a3;
  *a2 = 0;
  DevicePropertyData = RIMGetPointerDevicePDO(a1);
  if ( DevicePropertyData >= 0 )
  {
    Type = 0;
    v18 = 114;
    DevicePropertyData = IoGetDevicePropertyData(0LL, &DEVPKEY_Device_PanelId, 0, 0, 0x72u, a2, &v18, &Type);
    if ( DevicePropertyData == -1073741772 )
    {
      DevicePropertyData = 0;
    }
    else
    {
      if ( DevicePropertyData < 0 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v11 = 0;
        }
        v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v14) = v12;
          LOBYTE(v15) = v11;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v15,
            v14,
            *(_QWORD *)(UserSessionState + 19392),
            3,
            1,
            22,
            (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids,
            DevicePropertyData);
        }
        goto LABEL_5;
      }
      if ( Type == 18 )
      {
        if ( v18 )
        {
          if ( !a2[((unsigned __int64)v18 >> 1) - 1] )
            goto LABEL_5;
          DevicePropertyData = -1073741823;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v6 = 0;
          }
          v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_5;
          v10 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
          RequiredSize = 25;
        }
        else
        {
          DevicePropertyData = -1073741823;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v6 = 0;
          }
          v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_5;
          v10 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
          RequiredSize = 24;
        }
      }
      else
      {
        DevicePropertyData = -1073741823;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v6 = 0;
        }
        v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_5;
        v10 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
        RequiredSize = 23;
      }
      LOBYTE(v9) = v7;
      LOBYTE(v8) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v9,
        v10,
        3,
        1,
        RequiredSize,
        (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids);
    }
LABEL_5:
    ObfDereferenceObject(0LL);
  }
  return (unsigned int)DevicePropertyData;
}
