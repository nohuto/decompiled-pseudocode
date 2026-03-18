/*
 * XREFs of HUBACPI_EnumChildren @ 0x14008D684
 * Callers:
 *     HUBACPI_GetAcpiPortAttributes @ 0x14008EAD4 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBACPI_EnumChildren(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  int v5; // eax
  int v6; // ebx
  unsigned __int16 v7; // r9
  __int64 v8; // rdi
  int v9; // edx
  _DWORD *v10; // rax
  int v11; // edx
  int v12; // r9d
  __int64 v13; // rax
  __int64 v15; // [rsp+28h] [rbp-61h]
  __int64 v16; // [rsp+50h] [rbp-39h] BYREF
  __int64 v17; // [rsp+58h] [rbp-31h] BYREF
  __int64 v18; // [rsp+60h] [rbp-29h] BYREF
  __int64 v19; // [rsp+68h] [rbp-21h] BYREF
  __int128 v20; // [rsp+70h] [rbp-19h] BYREF
  __int64 v21; // [rsp+80h] [rbp-9h]
  __int64 v22; // [rsp+88h] [rbp-1h]
  __int128 v23; // [rsp+90h] [rbp+7h]
  __int64 v24; // [rsp+A0h] [rbp+17h]
  __int128 v25; // [rsp+A8h] [rbp+1Fh] BYREF

  v19 = 0LL;
  v18 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v24 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v21 = 0LL;
  v22 = 0x100000001LL;
  v23 = v4;
  v20 = 0LL;
  v25 = 0LL;
  LODWORD(v20) = 56;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         &v20,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         16LL,
         &v19,
         &v17);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_36;
    v7 = 34;
    goto LABEL_4;
  }
  *(_OWORD *)v17 = 0LL;
  *(_DWORD *)v17 = 1214866753;
  *(_DWORD *)(v17 + 4) = 1;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         0LL,
         v8,
         &v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 35;
LABEL_4:
      LODWORD(v15) = v5;
LABEL_5:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2528),
        2u,
        3u,
        v7,
        (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
        v15);
      goto LABEL_36;
    }
    goto LABEL_36;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, __int64, _QWORD, __int64, _QWORD))(WdfFunctions_01015 + 1512))(
         WdfDriverGlobals,
         v8,
         v16,
         3325984LL,
         v19,
         0LL,
         a2,
         0LL);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v25 = 0x200000010uLL;
    if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int128 *))(WdfFunctions_01015
                                                                                               + 2024))(
            WdfDriverGlobals,
            v16,
            v8,
            &v25)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2528), v9, 3, 37, (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
    }
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v16);
    if ( (int)(v6 + 0x80000000) >= 0 && v6 != -2147483643 )
    {
      if ( v6 != -1073741637 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = 38;
        LODWORD(v15) = v6;
        goto LABEL_5;
      }
      goto LABEL_36;
    }
    v10 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1552))(
                      WdfDriverGlobals,
                      a2,
                      &v18);
    if ( v18 == 20 )
    {
      if ( v6 != -2147483643 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v15) = v6;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2528),
            2u,
            3u,
            0x27u,
            (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
            v15);
        }
        goto LABEL_35;
      }
      if ( *v10 == 1198089537 && v10[1] >= 0x14u )
        goto LABEL_36;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = 40;
LABEL_34:
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2528), v11, 3, v12, (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
      }
    }
    else
    {
      if ( v6 < 0 )
        goto LABEL_36;
      if ( *v10 == 1198089537 )
      {
        if ( v10[1] )
        {
          v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2208))(
                  WdfDriverGlobals,
                  v16);
          if ( v13 == v18 )
            goto LABEL_36;
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = 41;
        goto LABEL_34;
      }
    }
LABEL_35:
    v6 = -1072431089;
    goto LABEL_36;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = 36;
    goto LABEL_4;
  }
LABEL_36:
  if ( v16 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v19 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return (unsigned int)v6;
}
