/*
 * XREFs of ?CreateFunctionalVidPnWithEnabledVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EPEAU_DXGK_DISPLAYMODE_INFO@@PEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@PEAY0BA@I@Z @ 0x140360C8C
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140380FF4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1403601A4 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x140361E0C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_DXGK_DISPLAYMODE_INFO@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x140362970 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 */

__int64 __fastcall CreateFunctionalVidPnWithEnabledVidPnSource(
        const struct _DXGDMM_INTERFACE *a1,
        void *const a2,
        unsigned int a3,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a4,
        unsigned __int8 a5,
        struct _D3DDDI_RATIONAL *a6,
        struct D3DKMDT_HVIDPN__ **a7,
        const struct _DXGDMM_VIDPN_INTERFACE **a8)
{
  __int64 v10; // rdi
  struct _D3DDDI_RATIONAL *v11; // r14
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING Numerator; // edx
  unsigned int v13; // eax
  UINT Denominator; // ecx
  __int64 (__fastcall *v15)(void *const, struct D3DKMDT_HVIDPN__ **, struct _DXGDMM_VIDPN_INTERFACE **); // rax
  int v16; // eax
  __int64 v17; // r14
  struct D3DKMDT_HVIDPN__ *v18; // r14
  void (__fastcall *v19)(void *const, struct D3DKMDT_HVIDPN__ *); // r15
  bool v20; // r12
  int v21; // eax
  __int64 v22; // r13
  int v23; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // r8
  unsigned int v30; // eax
  __int64 v31; // [rsp+20h] [rbp-E0h]
  __int64 v32; // [rsp+28h] [rbp-D8h]
  __int64 v33; // [rsp+28h] [rbp-D8h]
  __int64 v34; // [rsp+30h] [rbp-D0h]
  __int64 v35; // [rsp+30h] [rbp-D0h]
  __int64 v36; // [rsp+38h] [rbp-C8h]
  __int64 v37; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v38; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int8 v39[7]; // [rsp+71h] [rbp-8Fh] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v40; // [rsp+78h] [rbp-88h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v41; // [rsp+80h] [rbp-80h] BYREF
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v42; // [rsp+88h] [rbp-78h] BYREF
  struct D3DKMDT_HVIDPN__ *v43; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v44; // [rsp+98h] [rbp-68h] BYREF
  struct _DXGDMM_INTERFACE *v45; // [rsp+A0h] [rbp-60h]
  struct D3DKMDT_HVIDPN__ *v46; // [rsp+A8h] [rbp-58h] BYREF
  struct D3DKMDT_HVIDPN__ **v47; // [rsp+B0h] [rbp-50h]
  const struct _DXGDMM_VIDPN_INTERFACE **v48; // [rsp+B8h] [rbp-48h]
  unsigned int v49[16]; // [rsp+C0h] [rbp-40h] BYREF

  v10 = a3;
  v45 = a1;
  v47 = a7;
  v48 = a8;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4728;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"i_pDxgDmmInterface != NULL", 4728LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4729;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"i_hDxgAdapter != NULL", 4729LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (_DWORD)v10 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4730;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"i_VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
      4730LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4731;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"io_pDisplayModeInfo != NULL", 4731LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a7 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4732;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"o_phVidPn != NULL", 4732LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a8 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4733;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"o_ppDmmVidPnInterface != NULL",
      4733LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *a7 = 0LL;
  *a8 = 0LL;
  v11 = a6 + 2;
  Numerator = a6[3].Numerator;
  v38 = 0;
  v13 = DmmMapVSyncFromRationalToInteger(a6 + 2, Numerator, &v38);
  Denominator = a6[1].Denominator;
  if ( Denominator != v13 && (!v38 || Denominator != v13 + 1) )
  {
    WdLogSingleEntry3(2LL, a6[1].Denominator, v11->Numerator, a6[2].Denominator);
    v34 = a6[2].Denominator;
    v32 = v11->Numerator;
    v31 = a6[1].Denominator;
    WdLogGlobalForLineNumber = 4766;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Integer refresh rate in display mode (%i64d)Hz does not match rational refresh rate (%i64d/%I64d)hz.",
      v31,
      v32,
      v34,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v15 = (__int64 (__fastcall *)(void *const, struct D3DKMDT_HVIDPN__ **, struct _DXGDMM_VIDPN_INTERFACE **))*((_QWORD *)a1 + 6);
  v40 = 0LL;
  v43 = 0LL;
  v16 = v15(a2, &v43, &v40);
  v17 = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry2(2LL, a2, v16);
    WdLogGlobalForLineNumber = 4789;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed call to create copy of the last VidPN committed by the client for adapter 0x%I64x (status = 0x%I64x)",
      (__int64)a2,
      v17,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v17;
  }
  v18 = v43;
  v19 = (void (__fastcall *)(void *const, struct D3DKMDT_HVIDPN__ *))*((_QWORD *)a1 + 8);
  v42 = 0LL;
  v41 = 0LL;
  v20 = v43 != 0LL;
  v21 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v40)(
          v43,
          &v42,
          &v41);
  v22 = v21;
  if ( v21 < 0 )
  {
    WdLogSingleEntry2(2LL, v18, v21);
    WdLogGlobalForLineNumber = 4812;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to acquire topology of the VidPN 0x%I64x (status = 0x%I64x)",
      (__int64)v18,
      v22,
      0LL,
      0LL,
      0LL);
LABEL_27:
    if ( v20 )
      v19(a2, v18);
    return (unsigned int)v22;
  }
  v39[0] = 0;
  v44 = 0LL;
  *(__m128i *)v49 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  *(_OWORD *)&v49[4] = *(_OWORD *)v49;
  *(_OWORD *)&v49[8] = *(_OWORD *)v49;
  *(_OWORD *)&v49[12] = *(_OWORD *)v49;
  v23 = PrepareUnpinnedPathsFromSource(
          v45,
          (unsigned __int64)a2,
          v18,
          v40,
          v42,
          v41,
          v10,
          0,
          0,
          0,
          &v44,
          (__m128i *)v49,
          v39);
  v22 = v23;
  if ( v23 == -1071774925 )
  {
    WdLogSingleEntry2(7LL, v10, a2);
    WdLogGlobalForLineNumber = 4846;
    if ( v20 )
      v19(a2, v18);
    return 3223192371LL;
  }
  if ( v23 != -1071774886 )
  {
    if ( v23 < 0 )
    {
      WdLogSingleEntry3(2LL, v10, a2, v23);
      WdLogGlobalForLineNumber = 4860;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to ensure unpinned paths from source 0x%I64x of adapter 0x%I64x (status = 0x%I64x)",
        v10,
        (__int64)a2,
        v22,
        0LL,
        0LL);
    }
    else
    {
      v46 = 0LL;
      LODWORD(v22) = PinPresentPathModalityFromMode(
                       v45,
                       a2,
                       v18,
                       v40,
                       v42,
                       v41,
                       v10,
                       v44,
                       (struct _DXGK_DISPLAYMODE_INFO *)a6,
                       D3DKMDT_VPPS_UNINITIALIZED,
                       0,
                       1u,
                       &v46);
      if ( (int)v22 >= 0 )
      {
        *v47 = v46;
        *v48 = v40;
        if ( v20 )
          v19(a2, v18);
        return 0LL;
      }
      if ( (_DWORD)v22 == -1071774970 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v25, v27, v28);
        v29[3] = a6->Numerator;
        v29[4] = a6->Denominator;
        v29[5] = (int)a6[1].Numerator;
        v30 = a6[2].Numerator / a6[2].Denominator;
        v29[7] = v10;
        v29[6] = v30;
        WdLogGlobalForLineNumber = 4891;
      }
      else
      {
        WdLogSingleEntry5(
          2LL,
          v10,
          a6->Numerator,
          a6->Denominator,
          (int)a6[1].Numerator,
          a6[2].Numerator / a6[2].Denominator);
        v37 = a6[2].Numerator / a6[2].Denominator;
        v36 = (int)a6[1].Numerator;
        v35 = a6->Denominator;
        v33 = a6->Numerator;
        WdLogGlobalForLineNumber = 4897;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to pin source/target modes on VidPN present (multi)path from source 0x%I64x matching specified display "
           "mode (%I64d x %I64d x 0x%I64x @ %I64d[Hz])",
          v10,
          v33,
          v35,
          v36,
          v37);
      }
    }
    goto LABEL_27;
  }
  WdLogSingleEntry2(7LL, v10, a2);
  WdLogGlobalForLineNumber = 4853;
  if ( v20 )
    v19(a2, v18);
  return 3223192410LL;
}
