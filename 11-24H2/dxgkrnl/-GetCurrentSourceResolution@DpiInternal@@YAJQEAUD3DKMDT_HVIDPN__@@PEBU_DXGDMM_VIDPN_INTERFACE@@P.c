/*
 * XREFs of ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1403DD6E4
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1401DBDB8 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x14030DAE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiInternal::GetCurrentSourceResolution(
        DpiInternal *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        const struct _DXGDMM_VIDPN_INTERFACE *a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a4)
{
  __int64 (__fastcall *v4)(DpiInternal *, __int64, __int64 *, __int64 *); // rax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdi
  __int64 v12; // rsi
  void (__fastcall *v13)(DpiInternal *, __int64); // r15
  int v14; // eax
  __int64 v15; // [rsp+20h] [rbp-40h]
  __int64 v16; // [rsp+50h] [rbp-10h] BYREF
  __int64 v17; // [rsp+98h] [rbp+38h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+40h] BYREF

  v4 = (__int64 (__fastcall *)(DpiInternal *, __int64, __int64 *, __int64 *))*((_QWORD *)a2 + 1);
  v8 = *(unsigned int *)a3;
  v18 = 0LL;
  v16 = 0LL;
  v9 = v4(this, v8, &v16, &v18);
  v10 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(2LL, v9);
    WdLogGlobalForLineNumber = 1035;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed call to DXGDMM_VIDPN_INTERFACE::pfnAcquireSourceModeSet. (status = 0x%I64x)",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v10;
  }
  v12 = v16;
  v13 = (void (__fastcall *)(DpiInternal *, __int64))*((_QWORD *)a2 + 2);
  v17 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v18 + 24))(v16, &v17);
  v10 = v14;
  if ( v14 >= 0 )
  {
    if ( *(_DWORD *)(v17 + 4) == 1 || (unsigned int)(*(_DWORD *)(v17 + 4) - 3) <= 1 )
    {
      if ( *(_DWORD *)(v17 + 8) && *(_DWORD *)(v17 + 12) )
      {
        *(_QWORD *)&a4->VidPnSourceId = *(_QWORD *)(v17 + 8);
LABEL_10:
        (*(void (__fastcall **)(__int64))(v18 + 32))(v16);
        goto LABEL_11;
      }
      WdLogSingleEntry1(1LL, v17);
      WdLogGlobalForLineNumber = 1069;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"Invalid mode from call to DXGDMM_VIDPN_INTERFACE::pfnAcquirePinnedModeInfo. (pPinnedVidPnSourceModeInfo = 0x%I64x)",
        v17,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, *(int *)(v17 + 4));
      v15 = *(int *)(v17 + 4);
      WdLogGlobalForLineNumber = 1076;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed call to determine source resolution due to invalid type. (Type = 0x%I64x)",
        v15,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    LODWORD(v10) = -1073741823;
    goto LABEL_10;
  }
  WdLogSingleEntry1(2LL, v14);
  WdLogGlobalForLineNumber = 1050;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Failed call to DXGDMM_VIDPN_INTERFACE::pfnAcquirePinnedModeInfo. (status = 0x%I64x)",
    v10,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_11:
  if ( v12 )
    v13(this, v12);
  return (unsigned int)v10;
}
