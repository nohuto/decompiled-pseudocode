/*
 * XREFs of Interrupter_FilterAllMSIResources @ 0x14007C014
 * Callers:
 *     Interrupter_FilterRemoveResourceRequirements @ 0x14007C2BC (Interrupter_FilterRemoveResourceRequirements.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Interrupter_FilterAllMSIResources(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r13
  char v4; // r12
  unsigned int v5; // esi
  int v7; // edx
  int v8; // r14d
  __int64 v9; // r15
  unsigned int v10; // edi
  __int64 v11; // rax
  __int128 v12; // xmm1
  int v13; // edx
  __int64 v15; // [rsp+28h] [rbp-80h]
  __int64 v16; // [rsp+30h] [rbp-78h]
  __int128 v18; // [rsp+48h] [rbp-60h] BYREF
  __int128 v19; // [rsp+58h] [rbp-50h]

  v2 = 0;
  v3 = a2;
  v18 = 0LL;
  v4 = 0;
  v5 = 0;
  v19 = 0LL;
  while ( v5 < (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2320))(
                 WdfDriverGlobals,
                 v3) )
  {
    v8 = 0;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2328))(
           WdfDriverGlobals,
           v3,
           v5);
    v10 = 0;
    while ( v10 < (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2384))(
                    WdfDriverGlobals,
                    v9) )
    {
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2392))(
              WdfDriverGlobals,
              v9,
              v10);
      if ( *(_BYTE *)(v11 + 1) != 2 )
        goto LABEL_6;
      if ( (*(_BYTE *)(v11 + 4) & 3) == 3 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2400))(
          WdfDriverGlobals,
          v9,
          v10);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v16) = v10;
          LODWORD(v15) = v5;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            4u,
            9u,
            0x39u,
            (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
            v15,
            v16);
        }
      }
      else
      {
        v18 = *(_OWORD *)v11;
        v12 = *(_OWORD *)(v11 + 16);
        LOBYTE(v18) = 0;
        v19 = v12;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *, _QWORD))(WdfFunctions_01033 + 2376))(
          WdfDriverGlobals,
          v9,
          &v18,
          v10);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v16) = v10;
          LODWORD(v15) = v5;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            4u,
            9u,
            0x3Au,
            (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
            v15,
            v16);
        }
        v4 = 1;
        ++v8;
LABEL_6:
        ++v10;
      }
    }
    v3 = a2;
    if ( v8 )
    {
      ++v5;
    }
    else
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2336))(
        WdfDriverGlobals,
        a2,
        v5);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v13,
          9,
          59,
          (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
          v5);
      }
    }
  }
  if ( !v4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v7,
        9,
        60,
        (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids);
    }
    return (unsigned int)-1073741823;
  }
  return v2;
}
