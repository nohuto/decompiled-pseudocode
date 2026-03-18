/*
 * XREFs of ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x140142810
 * Callers:
 *     ?OnUserLogin@PTPTelemetry@@SAXXZ @ 0x140142770 (-OnUserLogin@PTPTelemetry@@SAXXZ.c)
 *     xxxSystemParametersInfo @ 0x140173780 (xxxSystemParametersInfo.c)
 *     EnablePTPDevices @ 0x1401B16B0 (EnablePTPDevices.c)
 *     ?OnPTPDeviceArrived@PTPTelemetry@@SAXQEAUDEVICEINFO@@@Z @ 0x14020E0D4 (-OnPTPDeviceArrived@PTPTelemetry@@SAXQEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ?GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z @ 0x140187948 (-GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z @ 0x1401D13F0 (-GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z.c)
 *     ?TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z @ 0x14020E2E0 (-TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall PTPTelemetry::PTPConfigUpdateEx(struct DEVICEINFO *const a1)
{
  unsigned int v2; // esi
  bool v3; // di
  bool v4; // r14
  _DWORD *UserSessionState; // rbx
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // rcx
  bool v9; // bl
  struct tagRECT v10; // xmm6
  struct tagRECT v11; // xmm7
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 i; // rdx
  bool v16[8]; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v17; // [rsp+60h] [rbp-A8h] BYREF
  struct _UNICODE_STRING v18; // [rsp+70h] [rbp-98h] BYREF
  struct tagRECT v19; // [rsp+88h] [rbp-80h] BYREF
  struct tagRECT v20; // [rsp+98h] [rbp-70h] BYREF
  int v21; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v22; // [rsp+ACh] [rbp-5Ch]
  int v23; // [rsp+B0h] [rbp-58h]
  int v24; // [rsp+B4h] [rbp-54h]
  int v25; // [rsp+B8h] [rbp-50h]
  int v26; // [rsp+BCh] [rbp-4Ch]
  int v27; // [rsp+C0h] [rbp-48h]
  int v28; // [rsp+C4h] [rbp-44h]
  int v29; // [rsp+C8h] [rbp-40h]
  int v30; // [rsp+CCh] [rbp-3Ch]
  int v31; // [rsp+D0h] [rbp-38h]
  int v32; // [rsp+D4h] [rbp-34h]
  int v33; // [rsp+D8h] [rbp-30h]
  __int16 v34; // [rsp+E0h] [rbp-28h] BYREF
  __int16 v35; // [rsp+F0h] [rbp-18h] BYREF

  *(_QWORD *)&v18.Length = 0x100000LL;
  *(_DWORD *)&v16[4] = 0;
  v18.Buffer = (PWSTR)&v34;
  v34 = 0;
  *(_QWORD *)&v17.Length = 0x100000LL;
  v17.Buffer = (PWSTR)&v35;
  v16[0] = 1;
  v2 = 0;
  v35 = 0;
  v3 = 0;
  v16[1] = 0;
  v4 = 0;
  v16[2] = 0;
  v19 = 0LL;
  v20 = 0LL;
  UserSessionState = (_DWORD *)W32GetUserSessionState(a1);
  v22 = -__CFSHR__(UserSessionState[4196], 10);
  v6 = W32GetUserSessionState(v22);
  v7 = UserSessionState[4196];
  v21 = *(_DWORD *)(v6 + 328);
  v23 = UserSessionState[4197];
  v24 = -__CFSHR__(v7, 3);
  v25 = -__CFSHR__(v7, 4);
  v26 = -__CFSHR__(UserSessionState[4195], 3);
  v27 = UserSessionState[4198];
  v28 = -__CFSHR__(v7, 8);
  v29 = -__CFSHR__(v7, 9);
  v30 = -__CFSHR__(v7, 5);
  v31 = -(v7 & 1);
  v32 = -__CFSHR__(v7, 6);
  v33 = -__CFSHR__(v7, 7);
  if ( a1 )
  {
    v9 = 0;
    *(_BYTE *)(W32GetUserSessionState((unsigned int)-__CFSHR__(v7, 3)) + 12066) = 1;
    v12 = *(_DWORD *)(*((_QWORD *)a1 + 57) + 964LL);
    switch ( v12 )
    {
      case 1:
        v2 = 1;
        break;
      case 2:
        v2 = 2;
        break;
      case 3:
        v2 = 3;
        break;
      case 0:
        *(_DWORD *)&v16[4] = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2065LL);
        break;
    }
    v13 = *((_QWORD *)a1 + 57);
    v10 = *(struct tagRECT *)(v13 + 124);
    v11 = *(struct tagRECT *)(v13 + 140);
    RimTelemetry::GetHidVidPidStrings(a1, &v18, &v17);
    v8 = *(_QWORD *)(W32GetUserSessionState(v14) + 16840);
    for ( i = **(_QWORD **)(v8 + 1240); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(i + 184) & 0x80u) == 0 )
      {
        if ( !*(_DWORD *)(i + 48) && !*(_WORD *)(i + 864) )
          v3 = 1;
      }
      else
      {
        v8 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(i + 456) + 24LL) - 1);
        if ( (unsigned int)v8 <= 3 )
          v4 = 1;
      }
    }
  }
  else
  {
    PTPTelemetry::GetDeviceData(&v18, &v17, &v16[1], &v16[2], (unsigned int *)&v16[4], v16, &v19, &v20);
    v2 = *(_DWORD *)&v16[4];
    v9 = v16[0];
    v3 = v16[1];
    v4 = v16[2];
    v10 = v19;
    v11 = v20;
  }
  if ( *(_BYTE *)(W32GetUserSessionState(v8) + 12066) )
  {
    v20 = v11;
    v19 = v10;
    TraceLoggingPTPSettingsConfigEvent((struct tagTPSETTINGS *)&v21, v2, v9, v18.Buffer, v17.Buffer, v3, v4, &v19, &v20);
  }
}
