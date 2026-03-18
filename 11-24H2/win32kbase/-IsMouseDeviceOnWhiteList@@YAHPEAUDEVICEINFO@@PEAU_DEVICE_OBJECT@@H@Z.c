/*
 * XREFs of ?IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z @ 0x1400A68DC
 * Callers:
 *     RIMApiSetCheckForLegacyTouchPad @ 0x14017D3A4 (RIMApiSetCheckForLegacyTouchPad.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1400A7F20 (-IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z.c)
 */

__int64 __fastcall IsMouseDeviceOnWhiteList(struct DEVICEINFO *a1, struct _DEVICE_OBJECT *a2, int a3)
{
  __int64 v5; // rcx
  unsigned int v6; // esi
  bool v7; // bl
  bool v8; // di
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  struct _UNICODE_STRING v13; // [rsp+40h] [rbp-38h] BYREF
  struct _UNICODE_STRING v14; // [rsp+50h] [rbp-28h] BYREF
  struct _UNICODE_STRING v15; // [rsp+60h] [rbp-18h] BYREF

  v13 = 0LL;
  RtlInitUnicodeString(
    &v13,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\LegacyDevices");
  v14 = *(struct _UNICODE_STRING *)((char *)a1 + 872);
  v15 = v13;
  v6 = IsDeviceOnRegistryList(&v15, &v14, a3);
  if ( !v6 )
  {
    v7 = 0;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
    {
      v5 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v5 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
        v7 = 1;
    }
    v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(v5);
      LOBYTE(v10) = v8;
      LOBYTE(v11) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v10,
        *(_QWORD *)(UserSessionState + 19392),
        3,
        1,
        18,
        (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids);
    }
  }
  return v6;
}
