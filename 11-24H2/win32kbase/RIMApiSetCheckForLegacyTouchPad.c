/*
 * XREFs of RIMApiSetCheckForLegacyTouchPad @ 0x14017D3A4
 * Callers:
 *     RIMLoadDeviceLegacyInfo @ 0x1401D2038 (RIMLoadDeviceLegacyInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z @ 0x1400A68DC (-IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z.c)
 *     RIMGetContainerId @ 0x1400A789C (RIMGetContainerId.c)
 *     RIMIsRunningOnDesktop @ 0x1400A8A78 (RIMIsRunningOnDesktop.c)
 *     ?IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z @ 0x14013F790 (-IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z.c)
 *     EtwTraceLegacyTouchPadDetectionStart @ 0x1401564D0 (EtwTraceLegacyTouchPadDetectionStart.c)
 *     EtwTraceLegacyTouchPadDetectionStop @ 0x1401568F0 (EtwTraceLegacyTouchPadDetectionStop.c)
 *     EtwTraceLegacyTouchPadDetected @ 0x14015A0F0 (EtwTraceLegacyTouchPadDetected.c)
 *     EtwTraceTouchPadWhiteListDeviceDetected @ 0x1401B5160 (EtwTraceTouchPadWhiteListDeviceDetected.c)
 *     ?RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401D298C (-RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1401E3DC4 (-CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall RIMApiSetCheckForLegacyTouchPad(
        struct DEVICEINFO *a1,
        struct _FILE_OBJECT *a2,
        struct _DEVICE_OBJECT *a3,
        int a4)
{
  int v4; // r12d
  BOOL v7; // ebp
  __int64 v8; // rcx
  struct _DEVICE_OBJECT *v9; // rdx
  CTouchProcessor *v10; // rcx
  bool v11; // r14
  bool v12; // r12
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  CTouchProcessor *v16; // rcx
  bool v17; // di
  bool v18; // si
  __int64 UserSessionState; // rax
  int v20; // edx
  int v21; // r8d
  struct _DEVICE_OBJECT *v22; // rdx
  __int16 v23; // [rsp+30h] [rbp-78h]
  int v24; // [rsp+40h] [rbp-68h] BYREF
  int v25; // [rsp+44h] [rbp-64h]
  struct _FILE_OBJECT *v26; // [rsp+48h] [rbp-60h]
  __int128 v27; // [rsp+50h] [rbp-58h] BYREF

  v24 = 0;
  v25 = a4;
  v4 = a4;
  v26 = a2;
  v27 = 0LL;
  v7 = gPlatformRole == PlatformRoleMobile || gPlatformRole == PlatformRoleSlate;
  if ( RIMIsRunningOnDesktop((__int64)a1) )
  {
    EtwTraceLegacyTouchPadDetectionStart(v8);
    if ( (int)RIMGetContainerId(a3, &v27, &v24) >= 0 )
    {
      if ( !v24 )
      {
        if ( !v7 )
          goto LABEL_40;
        if ( !v4 || IsHIDMouseDeviceRelative(v26, a3, a1) )
        {
          EtwTraceLegacyTouchPadDetected((__int64)v10);
          *((_WORD *)a1 + 432) |= 1u;
          InputTraceLogging::RIM::RimDeviceExtendedProps(a1);
          v16 = WPP_GLOBAL_Control;
          v17 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_39;
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
          v23 = 20;
          goto LABEL_38;
        }
LABEL_17:
        if ( (unsigned int)IsMouseDeviceOnWhiteList(a1, v9, v4) )
        {
          EtwTraceTouchPadWhiteListDeviceDetected();
          *((_WORD *)a1 + 432) |= 1u;
          InputTraceLogging::RIM::RimDeviceExtendedProps(a1);
          v16 = WPP_GLOBAL_Control;
          v17 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_39;
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
          v23 = 21;
LABEL_38:
          LOBYTE(v21) = v18;
          LOBYTE(v20) = v17;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v20,
            v21,
            *(_QWORD *)(UserSessionState + 19392),
            4,
            1,
            v23,
            (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids);
LABEL_39:
          EtwTraceLegacyTouchPadDetectionStop((__int64)v16);
          if ( gPlatformRole != PlatformRoleSlate )
            CheckLegacyPadControlledStatus(a1, v22);
          return;
        }
LABEL_40:
        EtwTraceLegacyTouchPadDetectionStop((__int64)v10);
        return;
      }
    }
    else
    {
      v10 = WPP_GLOBAL_Control;
      v11 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v14) = v12;
        LOBYTE(v15) = v11;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v15,
          v14,
          *(_QWORD *)(v13 + 19392),
          3,
          1,
          19,
          (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids);
      }
      v4 = v25;
    }
    if ( !v7 )
      goto LABEL_40;
    goto LABEL_17;
  }
}
