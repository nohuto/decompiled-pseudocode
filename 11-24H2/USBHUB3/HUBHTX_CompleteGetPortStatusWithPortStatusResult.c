/*
 * XREFs of HUBHTX_CompleteGetPortStatusWithPortStatusResult @ 0x1400033D4
 * Callers:
 *     HUBHSM_CompletingPDORequestForGetPortStatusFromConfigWithIntTransfer @ 0x140008DC0 (HUBHSM_CompletingPDORequestForGetPortStatusFromConfigWithIntTransfer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBHTX_CompleteGetPortStatusWithPortStatusResult(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  int v4; // ebx
  int v5; // eax
  int v6; // edi
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  int v11; // [rsp+28h] [rbp-50h]
  __int64 v12; // [rsp+38h] [rbp-40h] BYREF
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF
  __int128 v14; // [rsp+50h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp-18h]

  v1 = a1[325];
  v12 = 0LL;
  v2 = a1[318];
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v4 = *(_DWORD *)(v1 + 184);
  v5 = *(_DWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(
                                 WdfDriverGlobals,
                                 v2)
                             + 184)
                 + 24LL);
  if ( v5 == 2228240 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 2144))(
           WdfDriverGlobals,
           a1[318],
           &v12);
    if ( v6 >= 0 )
    {
      *(_WORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   v12,
                   0LL)
               + 4) = v4;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
        WdfDriverGlobals,
        a1[318],
        8LL);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = v6;
      WPP_RECORDER_SF_d(a1[317], 2u, 3u, 0x72u, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids, v11);
    }
  }
  else if ( v5 == 2228243 )
  {
    v7 = a1[318];
    LOWORD(v13) = 40;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 2128))(
      WdfDriverGlobals,
      v7,
      &v13);
    v8 = (_DWORD *)*((_QWORD *)&v13 + 1);
    v6 = 0;
    v9 = v14;
    if ( (v4 & 1) != 0 )
      **((_DWORD **)&v13 + 1) |= 2u;
    else
      v6 = -1073741810;
    if ( (v4 & 2) != 0 )
    {
      if ( (*(_DWORD *)(v9 + 32) & 0x2000) != 0 )
        _InterlockedAnd((volatile signed __int32 *)(v9 + 32), 0xFFFFDFFF);
      else
        *v8 |= 1u;
    }
    if ( (v4 & 0x10000) != 0 )
      v6 = -1073741810;
  }
  else
  {
    v6 = -1073741630;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a1[318],
           (unsigned int)v6);
}
