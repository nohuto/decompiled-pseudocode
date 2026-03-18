/*
 * XREFs of ?AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IEQEA_KPEAY0BA@I@Z @ 0x1401C7B3C
 * Callers:
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1403601A4 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1401C8018 (-AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFA.c)
 */

__int64 __fastcall AugmentVidPnTopology(
        struct D3DKMDT_HVIDPN__ *a1,
        const struct _DXGDMM_VIDPN_INTERFACE *a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a3,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a4,
        void *a5,
        const struct _DXGDMM_INTERFACE *a6,
        unsigned int a7,
        unsigned __int8 a8,
        unsigned __int64 *const a9,
        __m128i *a10)
{
  __m128i si128; // xmm0
  int v14; // eax
  unsigned int v15; // esi
  __int64 result; // rax
  int v17; // eax
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v21; // [rsp+28h] [rbp-81h]
  unsigned __int16 v22; // [rsp+30h] [rbp-79h]
  unsigned __int64 v23; // [rsp+50h] [rbp-59h] BYREF
  struct D3DKMDT_HVIDPN__ *v24; // [rsp+58h] [rbp-51h]
  __m128i Src; // [rsp+60h] [rbp-49h] BYREF
  __m128i v26; // [rsp+70h] [rbp-39h]
  __m128i v27; // [rsp+80h] [rbp-29h]
  __m128i v28; // [rsp+90h] [rbp-19h] BYREF

  v24 = a1;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3455;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"ARGUMENT_PRESENT(i_hVidPn)", 3455LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3456;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"ARGUMENT_PRESENT(i_pDmmVidPnInterface)",
      3456LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3457;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"ARGUMENT_PRESENT(i_hVidPnTopology)",
      3457LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3458;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"ARGUMENT_PRESENT(i_pDmmVidPnTopologyInterface)",
      3458LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3459;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"ARGUMENT_PRESENT(i_hDxgAdapter)",
      3459LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3460;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"ARGUMENT_PRESENT(i_pDxgDmmInterface)",
      3460LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a7 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3461;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"i_VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
      3461LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a9 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3462;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"ARGUMENT_PRESENT(o_pNumVidPnPresentPathsFromSource)",
      3462LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *a9 = 0LL;
  if ( a10 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    *a10 = si128;
    a10[1] = si128;
    a10[2] = si128;
    a10[3] = si128;
  }
  v23 = 0LL;
  Src = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v26 = Src;
  v27 = Src;
  v28 = Src;
  v14 = AugmentVidPnTopologyOnNoLkg(a3, a4, a5, a6, a7, v21, v22, a8, &v23, (unsigned int *const)&Src);
  v15 = v14;
  if ( v14 >= 0 )
  {
    if ( !v23 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3525;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"sztNumVidPnPresentPaths > 0",
        3525LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v17 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64 *))a4)(a3, a7, &v23);
    if ( v17 >= 0 )
    {
      WdLogSingleEntry2(3LL, a7, v17);
      WdLogGlobalForLineNumber = 3545;
    }
    else if ( !v23 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3540;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"sztNumVidPnPresentPaths > 0",
        3540LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *a9 = v23;
    if ( a10 )
    {
      if ( a10 > (__m128i *)((char *)&v28.m128i_u64[1] + 4) || (__m128i *)((char *)&a10[3].m128i_u64[1] + 4) < &Src )
      {
        v18 = v26;
        *a10 = Src;
        v19 = v27;
        a10[1] = v18;
        v20 = v28;
        a10[2] = v19;
        a10[3] = v20;
      }
      else
      {
        memmove(a10, &Src, 0x40uLL);
      }
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry4(7LL, v24, a7, a5, v14);
    result = v15;
    WdLogGlobalForLineNumber = 3519;
  }
  return result;
}
