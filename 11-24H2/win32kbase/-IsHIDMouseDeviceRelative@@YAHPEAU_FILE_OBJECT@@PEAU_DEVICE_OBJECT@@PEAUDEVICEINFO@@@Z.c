/*
 * XREFs of ?IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z @ 0x14013F790
 * Callers:
 *     RIMApiSetCheckForLegacyTouchPad @ 0x14017D3A4 (RIMApiSetCheckForLegacyTouchPad.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?SendSyncOutputIrpRequest@@YAJKPEADKPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z @ 0x14013FAD8 (-SendSyncOutputIrpRequest@@YAJKPEADKPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

_BOOL8 __fastcall IsHIDMouseDeviceRelative(struct _FILE_OBJECT *a1, PDEVICE_OBJECT DeviceObject, struct DEVICEINFO *a3)
{
  BOOL v6; // ebx
  struct _HIDP_PREPARSED_DATA *v8; // rax
  struct _HIDP_PREPARSED_DATA *PreparsedData; // rdi
  char v10; // di
  bool v11; // si
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  char v15; // si
  bool v16; // r14
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rcx
  NTSTATUS Caps; // r15d
  char v22; // si
  char v23; // r14
  __int64 UserSessionState; // rax
  USHORT ValueCapsLength; // [rsp+50h] [rbp-B0h] BYREF
  __int64 OutputBuffer; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+60h] [rbp-A0h]
  struct _HIDP_CAPS Capabilities; // [rsp+70h] [rbp-90h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+B0h] [rbp-50h] BYREF

  memset(&Capabilities, 0, sizeof(Capabilities));
  OutputBuffer = 0LL;
  v27 = 0;
  v6 = 0;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  ValueCapsLength = 1;
  if ( (int)SendSyncOutputIrpRequest(0xB01A8u, &OutputBuffer, 0xCu, a1, DeviceObject, a3) < 0 )
    return 0LL;
  v8 = (struct _HIDP_PREPARSED_DATA *)Win32AllocPoolZInitImpl(64LL, (unsigned int)OutputBuffer, 0x44687355u);
  PreparsedData = v8;
  if ( v8 )
  {
    if ( (int)SendSyncOutputIrpRequest(0xB0193u, v8, OutputBuffer, a1, DeviceObject, a3) >= 0 )
    {
      Caps = HidP_GetCaps(PreparsedData, &Capabilities);
      if ( Caps == 1114112 )
      {
        if ( Capabilities.UsagePage == 1
          && (unsigned __int16)(Capabilities.Usage - 1) <= 1u
          && HidP_GetSpecificValueCaps(HidP_Input, 1u, 0, 0x30u, &ValueCaps, &ValueCapsLength, PreparsedData) >= 0 )
        {
          v6 = ValueCaps.IsAbsolute == 0;
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (v20 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v20 & 1) == 0)
          || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v22 = 0;
        }
        v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(v20);
          WPP_RECORDER_AND_TRACE_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v22,
            v23,
            *(_QWORD *)(UserSessionState + 19392),
            3u,
            1u,
            0xFu,
            (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids,
            Caps);
        }
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v15 = 0;
      }
      v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v18) = v16;
        LOBYTE(v19) = v15;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v19,
          v18,
          *(_QWORD *)(v17 + 19392),
          3,
          1,
          14,
          (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids);
      }
    }
    GreDeleteFastMutex((char *)PreparsedData);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v10 = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        *(_QWORD *)(v12 + 19392),
        3,
        1,
        13,
        (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids);
    }
  }
  return v6;
}
