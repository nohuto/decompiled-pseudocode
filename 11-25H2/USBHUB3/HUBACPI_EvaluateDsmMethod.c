/*
 * XREFs of HUBACPI_EvaluateDsmMethod @ 0x14008E29C
 * Callers:
 *     HUBACPI_GetAcpiPortAttributes @ 0x14008EAD4 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     memcpy_s @ 0x140001510 (memcpy_s.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     RtlStringCbCatNA @ 0x1400401B4 (RtlStringCbCatNA.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memset @ 0x1400460C0 (memset.c)
 */

__int64 __fastcall HUBACPI_EvaluateDsmMethod(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned __int16 a6,
        __int64 a7)
{
  unsigned __int64 v7; // rax
  int v10; // eax
  unsigned int v11; // edi
  unsigned __int16 v12; // r9
  __int64 v13; // rbx
  _BYTE *v14; // rcx
  __int64 v15; // rax
  size_t v16; // rdx
  char v17; // r8
  _BYTE *v18; // rax
  size_t v19; // rdx
  const char *v20; // rdx
  char v21; // al
  _BYTE *v22; // rax
  __int64 v23; // r14
  _WORD *v24; // rdi
  char *v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  int v28; // edx
  int v29; // eax
  _DWORD *v30; // rax
  int v31; // edx
  __int64 v33; // [rsp+30h] [rbp-79h]
  __int64 v34; // [rsp+38h] [rbp-71h]
  void *v35; // [rsp+58h] [rbp-51h] BYREF
  __int64 v36; // [rsp+60h] [rbp-49h] BYREF
  __int64 v37; // [rsp+68h] [rbp-41h] BYREF
  __int128 v38; // [rsp+70h] [rbp-39h] BYREF
  __int64 v39; // [rsp+80h] [rbp-29h]
  __int64 v40; // [rsp+88h] [rbp-21h]
  __int128 v41; // [rsp+90h] [rbp-19h]
  __int64 v42; // [rsp+A0h] [rbp-9h]
  __int128 v43; // [rsp+A8h] [rbp-1h] BYREF

  v42 = 0LL;
  v7 = *(_QWORD *)(a1 + 16);
  v39 = 0LL;
  v41 = v7;
  v38 = 0LL;
  v37 = 0LL;
  v43 = 0LL;
  v36 = 0LL;
  LODWORD(v38) = 56;
  v40 = 0x100000001LL;
  v35 = 0LL;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, void **))(WdfFunctions_01015 + 1536))(
          WdfDriverGlobals,
          &v38,
          (unsigned int)ExDefaultNonPagedPoolType,
          1748191317LL,
          312LL,
          &v37,
          &v35);
  v11 = v10;
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_49;
    v12 = 14;
    goto LABEL_4;
  }
  v13 = 256LL;
  if ( a2 && (unsigned __int64)*a2 + 6 > 0x100 )
  {
    v11 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2528), 2, 3, 15, (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
  }
  else
  {
    memset(v35, 0, 0x138uLL);
    *(_DWORD *)v35 = 1181312321;
    *((_DWORD *)v35 + 65) = 276;
    *((_DWORD *)v35 + 66) = 4;
    v14 = (char *)v35 + 4;
    if ( a2 )
    {
      v15 = *a2;
      v16 = *((_QWORD *)a2 + 1) - (_QWORD)v14;
      do
      {
        if ( !v15 )
          break;
        v17 = v14[v16];
        if ( !v17 )
          break;
        *v14 = v17;
        --v15;
        ++v14;
        --v13;
      }
      while ( v13 );
      v18 = v14 - 1;
      if ( v13 )
        v18 = v14;
      *v18 = 0;
      RtlStringCbCatNA((NTSTRSAFE_PSTR)v35 + 4, v16, ".", 1uLL);
      RtlStringCbCatNA((NTSTRSAFE_PSTR)v35 + 4, v19, "_DSM", 4uLL);
    }
    else
    {
      v20 = (const char *)("_DSM" - v14);
      do
      {
        if ( v13 == 252 )
          break;
        v21 = v14[(_QWORD)v20];
        if ( !v21 )
          break;
        *v14++ = v21;
        --v13;
      }
      while ( v13 );
      v22 = v14 - 1;
      if ( v13 )
        v22 = v14;
      *v22 = 0;
    }
    v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
            WdfDriverGlobals,
            *(_QWORD *)(a1 + 16));
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
            WdfDriverGlobals,
            0LL,
            v23,
            &v36);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v24 = v35;
      v25 = (char *)v35 + 272;
      *((_DWORD *)v35 + 67) = 1048578;
      memcpy_s(v25, 0x10uLL, &GUID_USB_ACPI_DSM, 0x10uLL);
      v26 = 4LL;
      if ( v24[135] >= 4u )
        v26 = (unsigned __int16)v24[135];
      *(_QWORD *)((char *)v24 + v26 + 272) = 0x40000LL;
      *(_DWORD *)((char *)v24 + v26 + 280) = 0x40000;
      *(_DWORD *)((char *)v24 + v26 + 284) = a5;
      *(_DWORD *)((char *)v24 + v26 + 288) = 3;
      v27 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, __int64, _QWORD, __int64, _QWORD))(WdfFunctions_01015 + 1512))(
              WdfDriverGlobals,
              v23,
              v36,
              3325976LL,
              v37,
              0LL,
              a7,
              0LL);
      v11 = v27;
      if ( v27 >= 0 )
      {
        v43 = 0x200000010uLL;
        if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int128 *))(WdfFunctions_01015 + 2024))(
                WdfDriverGlobals,
                v36,
                v23,
                &v43)
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v28) = 2;
          WPP_RECORDER_SF_(
            *(_QWORD *)(a1 + 2528),
            v28,
            3,
            18,
            (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
        }
        v29 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(
                WdfDriverGlobals,
                v36);
        v11 = v29;
        if ( v29 >= 0 )
        {
          v30 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                            WdfDriverGlobals,
                            a7,
                            0LL);
          if ( *v30 != 1114596673 || !v30[2] )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v31) = 2;
              WPP_RECORDER_SF_(
                *(_QWORD *)(a1 + 2528),
                v31,
                3,
                21,
                (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
            }
            v11 = -1072431089;
          }
        }
        else if ( v29 != -1073741772 && v29 != -1073741810 )
        {
          if ( a6 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v34) = v29;
              LODWORD(v33) = a6;
              WPP_RECORDER_SF_dD(
                *(_QWORD *)(a1 + 2528),
                2u,
                3u,
                0x13u,
                (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
                v33,
                v34);
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v12 = 20;
            LODWORD(v33) = v29;
            goto LABEL_5;
          }
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = 17;
        LODWORD(v33) = v27;
        goto LABEL_5;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 16;
LABEL_4:
      LODWORD(v33) = v10;
LABEL_5:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2528),
        2u,
        3u,
        v12,
        (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
        v33);
    }
  }
LABEL_49:
  if ( v36 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v37 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return v11;
}
