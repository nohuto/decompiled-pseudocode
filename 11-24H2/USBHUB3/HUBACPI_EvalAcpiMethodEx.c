/*
 * XREFs of HUBACPI_EvalAcpiMethodEx @ 0x14008C9E0
 * Callers:
 *     HUBACPI_EvaluateDSD @ 0x14008CE18 (HUBACPI_EvaluateDSD.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x14008DA24 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     RtlStringCbCatNA @ 0x1400409F4 (RtlStringCbCatNA.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     memset @ 0x140046900 (memset.c)
 */

__int64 __fastcall HUBACPI_EvalAcpiMethodEx(__int64 a1, unsigned __int16 *a2, int a3, __int64 a4)
{
  unsigned __int64 v6; // rax
  int v8; // eax
  int v9; // edx
  unsigned int v10; // edi
  unsigned __int16 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rdx
  _BYTE *v15; // rcx
  size_t v16; // rdx
  char v17; // al
  _BYTE *v18; // rax
  size_t v19; // rdx
  __int64 v20; // rbx
  int v21; // edx
  _DWORD *v22; // rax
  int v23; // edx
  __int64 v25; // [rsp+28h] [rbp-61h]
  void *v26; // [rsp+50h] [rbp-39h] BYREF
  __int64 v27; // [rsp+58h] [rbp-31h] BYREF
  __int64 v28; // [rsp+60h] [rbp-29h] BYREF
  __int128 v29; // [rsp+68h] [rbp-21h] BYREF
  __int64 v30; // [rsp+78h] [rbp-11h]
  __int64 v31; // [rsp+80h] [rbp-9h]
  __int128 v32; // [rsp+88h] [rbp-1h]
  __int64 v33; // [rsp+98h] [rbp+Fh]
  __int128 v34; // [rsp+A0h] [rbp+17h] BYREF
  int pszSrc; // [rsp+100h] [rbp+77h] BYREF

  pszSrc = a3;
  v28 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v33 = 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v30 = 0LL;
  v31 = 0x100000001LL;
  v32 = v6;
  v29 = 0LL;
  v34 = 0LL;
  LODWORD(v29) = 56;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, void **))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         &v29,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         276LL,
         &v28,
         &v26);
  v10 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_32;
    v11 = 22;
    goto LABEL_4;
  }
  v12 = *a2;
  v13 = 256LL;
  if ( (unsigned __int64)(v12 + 6) > 0x100 )
  {
    v10 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), v9, 3, 23, (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
    }
    goto LABEL_32;
  }
  memset(v26, 0, 0x114uLL);
  v14 = *((_QWORD *)a2 + 1);
  *(_DWORD *)v26 = 1181312321;
  *((_DWORD *)v26 + 65) = 276;
  v15 = (char *)v26 + 4;
  v16 = v14 - ((_QWORD)v26 + 4);
  do
  {
    if ( !v12 )
      break;
    v17 = v15[v16];
    if ( !v17 )
      break;
    *v15 = v17;
    --v12;
    ++v15;
    --v13;
  }
  while ( v13 );
  v18 = v15 - 1;
  if ( v13 )
    v18 = v15;
  *v18 = 0;
  RtlStringCbCatNA((NTSTRSAFE_PSTR)v26 + 4, v16, ".", 1uLL);
  RtlStringCbCatNA((NTSTRSAFE_PSTR)v26 + 4, v19, (STRSAFE_PCNZCH)&pszSrc, 4uLL);
  v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 16));
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         0LL,
         v20,
         &v27);
  v10 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_32;
    v11 = 24;
    goto LABEL_4;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, __int64, _QWORD, __int64, _QWORD))(WdfFunctions_01015 + 1512))(
         WdfDriverGlobals,
         v20,
         v27,
         3325976LL,
         v28,
         0LL,
         a4,
         0LL);
  v10 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_32;
    v11 = 25;
    goto LABEL_4;
  }
  v34 = 0x200000010uLL;
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int128 *))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          v27,
          v20,
          &v34)
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v21) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), v21, 3, 26, (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v27);
  v10 = v8;
  if ( v8 < 0 )
  {
    if ( v8 == -1073741772 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_32;
    v11 = 27;
LABEL_4:
    LODWORD(v25) = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2536),
      2u,
      3u,
      v11,
      (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
      v25);
    goto LABEL_32;
  }
  v22 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                    WdfDriverGlobals,
                    a4,
                    0LL);
  if ( *v22 != 1114596673 || !v22[2] )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v23) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), v23, 3, 28, (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
    }
    v10 = -1072431089;
  }
LABEL_32:
  if ( v27 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v28 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return v10;
}
