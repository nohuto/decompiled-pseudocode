/*
 * XREFs of RIMEnableMonitorMappingForDevice @ 0x1401D7170
 * Callers:
 *     NtRIMEnableMonitorMappingForDevice @ 0x1401D4930 (NtRIMEnableMonitorMappingForDevice.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140053560 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x140054EF0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMGetDeviceLocationInfo @ 0x1400A5D6C (RIMGetDeviceLocationInfo.c)
 *     RIMGetDeviceObjectPointer @ 0x1400B1270 (RIMGetDeviceObjectPointer.c)
 *     RIMSetDeviceOutputConfig @ 0x1400C7244 (RIMSetDeviceOutputConfig.c)
 *     RIMGetQDCActivePathsData @ 0x1400C7BC8 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1400C7E10 (RIMFreeQDCActivePathsData.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1401E1B1C (RIMReadDigitizerToMonitorMappings.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1401E23E4 (rimFindMonitorForDigitizerWithQDCData.c)
 */

__int64 __fastcall RIMEnableMonitorMappingForDevice(char *a1, char *a2, int a3, _QWORD *a4)
{
  char v6; // bl
  bool v7; // r14
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  int v11; // r14d
  _BYTE *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // r8
  char *v15; // r15
  _DWORD *v16; // rbx
  PVOID v17; // r14
  char v18; // bl
  bool v19; // r14
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  unsigned int *v23; // rbx
  __int64 v24; // rdx
  void *v25; // rbx
  PVOID v26; // r15
  char v27; // bl
  bool v28; // r15
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  char v32; // bl
  bool v33; // r15
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  char v37; // bl
  bool v38; // r15
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  char *v43; // [rsp+50h] [rbp-78h]
  PVOID v44; // [rsp+60h] [rbp-68h] BYREF
  char *v45; // [rsp+68h] [rbp-60h] BYREF
  PVOID Object; // [rsp+70h] [rbp-58h] BYREF
  PVOID v47; // [rsp+78h] [rbp-50h]
  HANDLE Handle; // [rsp+80h] [rbp-48h] BYREF
  PVOID v49; // [rsp+88h] [rbp-40h] BYREF
  __int128 v50; // [rsp+90h] [rbp-38h] BYREF

  v44 = 0LL;
  v45 = 0LL;
  Handle = 0LL;
  v49 = 0LL;
  Object = 0LL;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      144,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  v11 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v44);
  if ( v11 >= 0 )
  {
    v12 = v44;
    RIMLockExclusive((__int64)v44 + 104);
    if ( v12[81] )
    {
      v11 = -1073741637;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v32 = 0;
      }
      v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v34 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v35) = v33;
        LOBYTE(v36) = v32;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v36,
          v35,
          *(_QWORD *)(v34 + 19392),
          3,
          1,
          147,
          (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
      }
      goto LABEL_55;
    }
    v11 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, (PVOID *)&v45);
    if ( v11 < 0 )
    {
LABEL_55:
      RIMUnlockExclusive((__int64)(v12 + 104));
      ObfDereferenceObject(v12);
      goto LABEL_56;
    }
    v43 = v45;
    v15 = v45 + 72;
    if ( !v45 )
      v15 = 0LL;
    if ( *((_DWORD *)v15 + 12) != 2
      || (*((_DWORD *)v15 + 46) & 0x80u) != 0
      || (*((_DWORD *)v15 + 42) & 0x2000) != 0
      || (v16 = v15 + 1336, *((_DWORD *)v15 + 334)) )
    {
      v11 = -1073741811;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v27 = 0;
      }
      v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
        LOBYTE(v30) = v28;
        LOBYTE(v31) = v27;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v31,
          v30,
          *(_QWORD *)(v29 + 19392),
          3,
          1,
          145,
          (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
      }
    }
    else
    {
      v11 = RIMGetDeviceObjectPointer(
              (struct _UNICODE_STRING *)v15 + 12,
              v13,
              v14,
              &Handle,
              &v49,
              (PDEVICE_OBJECT *)&Object);
      if ( v11 >= 0 )
      {
        v17 = Object;
        v47 = Object;
        ObfReferenceObject(Object);
        v11 = RIMGetDeviceLocationInfo((__int64)v17, (__int64)(v15 + 2120));
        if ( v11 < 0 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4687);
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v18 = 0;
          }
          v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v20 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
            LOBYTE(v21) = v19;
            LOBYTE(v22) = v18;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v22,
              v21,
              *(_QWORD *)(v20 + 19392),
              3,
              1,
              146,
              (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
          }
          v11 = 0;
          v16 = v15 + 1336;
        }
        *v16 = 1;
        RIMReadDigitizerToMonitorMappings(v15);
        v50 = 0LL;
        v23 = RIMGetQDCActivePathsData((unsigned int *)&v50);
        rimFindMonitorForDigitizerWithQDCData(v15, v23, 0LL);
        RIMSetDeviceOutputConfig((struct RIMDEV *)v15, 0LL, 0, (__int64)v23);
        RIMFreeQDCActivePathsData((__int64)v23);
        if ( a4 )
        {
          if ( *((_QWORD *)v15 + 57) || *((_DWORD *)v15 + 334) )
            v24 = *((_QWORD *)v15 + 168);
          else
            v24 = -1LL;
          if ( a3 )
          {
            if ( (unsigned __int64)a4 >= MmUserProbeAddress )
              a4 = (_QWORD *)MmUserProbeAddress;
            *a4 = v24;
            v25 = v43;
            v26 = v47;
            goto LABEL_38;
          }
          *a4 = v24;
        }
        v26 = v47;
        v25 = v43;
LABEL_38:
        ZwClose(Handle);
        ObfDereferenceObject(v49);
        ObfDereferenceObject(v26);
LABEL_47:
        ObfDereferenceObject(v25);
        goto LABEL_55;
      }
    }
    v25 = v43;
    goto LABEL_47;
  }
LABEL_56:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v37 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v37 = 0;
  }
  v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v39 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v40) = v38;
    LOBYTE(v41) = v37;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v41,
      v40,
      *(_QWORD *)(v39 + 19392),
      4,
      1,
      148,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
      v11);
  }
  return (unsigned int)v11;
}
