/*
 * XREFs of ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1403E907C
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1401D6B28 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1403A6D68 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiInternal::GetCurrentTargetResolution(
        DpiInternal *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        const struct _DXGDMM_VIDPN_INTERFACE *a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a4,
        struct _D3DKMDT_2DREGION *a5)
{
  __int64 (__fastcall *v5)(DpiInternal *, __int64, __int64 *, __int64 *); // rax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdi
  __int64 v13; // rsi
  void (__fastcall *v14)(DpiInternal *, __int64); // r15
  int v15; // eax
  __int64 v16; // rdx
  struct _D3DKMDT_2DREGION *v17; // rax
  __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+58h] [rbp-18h] BYREF
  __int64 v20; // [rsp+60h] [rbp-10h] BYREF
  int v21; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+40h] BYREF

  v5 = (__int64 (__fastcall *)(DpiInternal *, __int64, __int64 *, __int64 *))*((_QWORD *)a2 + 3);
  v9 = *((unsigned int *)a3 + 1);
  v22 = 0LL;
  v18 = 0LL;
  v10 = v5(this, v9, &v18, &v22);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v13 = v18;
    v14 = (void (__fastcall *)(DpiInternal *, __int64))*((_QWORD *)a2 + 4);
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, int *))(v22 + 24))(v18, &v19, &v20, &v21);
    v11 = v15;
    if ( v15 < 0 || v15 == 1075708679 )
    {
      WdLogSingleEntry1(2LL, v15);
      WdLogGlobalForLineNumber = 1130;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed call to DXGDMM_VIDPN_INTERFACE::pfnAcquirePinnedModeInfo. (status = 0x%I64x)",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v16 = v19;
      v17 = a5;
      *(_QWORD *)&a4->VidPnSourceId = *(_QWORD *)(v19 + 20);
      LOBYTE(v17->cx) = (unsigned int)(((int)(*(_DWORD *)(v16 + 56) << 29) >> 29) - 2) <= 1;
      (*(void (__fastcall **)(__int64))(v22 + 32))(v18);
    }
    if ( v13 )
      v14(this, v13);
  }
  else
  {
    WdLogSingleEntry1(2LL, v10);
    WdLogGlobalForLineNumber = 1111;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed call to DXGDMM_VIDPN_INTERFACE::pfnAcquireTargetModeSet. (status = 0x%I64x)",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v11;
}
