/*
 * XREFs of Device_QueryCapabilities @ 0x1400439E8
 * Callers:
 *     Controller_CreateWdfDevice @ 0x140075BC4 (Controller_CreateWdfDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x140019E0C (WPP_RECORDER_SF_qd.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall Device_QueryCapabilities(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  unsigned __int16 v4; // r9
  char v5; // bl
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v10[3]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v11[9]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v12; // [rsp+B0h] [rbp-58h] BYREF
  _OWORD v13[4]; // [rsp+C8h] [rbp-40h] BYREF

  v12 = 0LL;
  memset(v10, 0, sizeof(v10));
  memset(v11, 0, sizeof(v11));
  memset(v13, 0, sizeof(v13));
  v9 = 0LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 88));
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01033 + 1976))(
             WdfDriverGlobals,
             0LL,
             v2,
             &v9);
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v4 = 285;
    goto LABEL_19;
  }
  *(_QWORD *)((char *)&v10[1] + 4) = 0LL;
  HIDWORD(v10[2]) = 0;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x34 )
      LODWORD(v10[0]) = -1;
    else
      LODWORD(v10[0]) = *(_DWORD *)(WdfStructures + 416);
  }
  else
  {
    LODWORD(v10[0]) = 24;
  }
  HIDWORD(v10[0]) = 0;
  LODWORD(v10[1]) = -1073741637;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01033 + 1992))(
    WdfDriverGlobals,
    v9,
    v10);
  *((_QWORD *)&v13[0] + 1) = -1LL;
  v11[1] = v13;
  LODWORD(v13[0]) = 65600;
  LOWORD(v11[0]) = 2331;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01033 + 2016))(
    WdfDriverGlobals,
    v9,
    v11);
  *((_QWORD *)&v12 + 1) = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x35 )
      LODWORD(v12) = -1;
    else
      LODWORD(v12) = *(_DWORD *)(WdfStructures + 424);
  }
  else
  {
    LODWORD(v12) = 16;
  }
  DWORD1(v12) = 2;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int128 *))(WdfFunctions_01033 + 2024))(
         WdfDriverGlobals,
         v9,
         v2,
         &v12);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2032))(WdfDriverGlobals, v9);
  if ( v5 && (int)result >= 0 )
  {
    v6 = v13[1];
    *(_OWORD *)(a1 + 24) = v13[0];
    v7 = v13[2];
    *(_OWORD *)(a1 + 40) = v6;
    v8 = v13[3];
    *(_OWORD *)(a1 + 56) = v7;
    *(_OWORD *)(a1 + 72) = v8;
    goto LABEL_20;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 286;
LABEL_19:
    result = WPP_RECORDER_SF_qd(
               *(_QWORD *)(a1 + 16),
               2u,
               4u,
               v4,
               (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
               *(_QWORD *)(a1 + 88),
               result);
  }
LABEL_20:
  if ( v9 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 1664))(WdfDriverGlobals);
  return result;
}
