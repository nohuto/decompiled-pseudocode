/*
 * XREFs of ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1402C02D8
 * Callers:
 *     ?CreateFunctionalVidPnWithEnabledVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EPEAU_DXGK_DISPLAYMODE_INFO@@PEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@PEAY0BA@I@Z @ 0x1402C0DC0 (-CreateFunctionalVidPnWithEnabledVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIW4_D3DKMDT_VIDPN_PR.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1403DD5F4 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IEQEA_KPEAY0BA@I@Z @ 0x1401C34E8 (-AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNT.c)
 *     ?UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_K@Z @ 0x1402BF13C (-UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEA.c)
 */

__int64 __fastcall PrepareUnpinnedPathsFromSource(
        struct _DXGDMM_INTERFACE *a1,
        unsigned __int64 a2,
        struct D3DKMDT_HVIDPN__ *a3,
        const struct _DXGDMM_VIDPN_INTERFACE *a4,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a5,
        struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a6,
        unsigned int a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        unsigned __int8 a10,
        unsigned __int64 *const a11,
        __m128i *a12,
        unsigned __int8 *a13)
{
  void *v15; // r13
  __m128i si128; // xmm0
  __int64 (__fastcall *v17)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64 *); // rax
  int v18; // eax
  __int64 v19; // r14
  char v20; // r14
  __int64 v21; // rdi
  __int64 result; // rax
  unsigned __int64 i; // r14
  int v24; // eax
  __int64 v25; // r13
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdi
  int v29; // eax
  int v30; // eax
  unsigned __int64 v31; // r14
  struct D3DKMDT_HVIDPN__ *v32; // r14
  int v33; // eax
  __int64 v34; // rsi
  __m128i v35; // xmm1
  __m128i v36; // xmm0
  __m128i v37; // xmm1
  struct _DXGDMM_INTERFACE *v38; // [rsp+28h] [rbp-D8h]
  char v39; // [rsp+50h] [rbp-B0h]
  _BYTE v40[7]; // [rsp+51h] [rbp-AFh] BYREF
  unsigned __int64 v41; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v42; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v43; // [rsp+68h] [rbp-98h]
  unsigned __int64 v44; // [rsp+70h] [rbp-90h] BYREF
  struct _DXGDMM_INTERFACE *v45; // [rsp+78h] [rbp-88h]
  struct _DXGDMM_VIDPN_INTERFACE *v46; // [rsp+80h] [rbp-80h]
  struct D3DKMDT_HVIDPN__ *v47; // [rsp+88h] [rbp-78h]
  unsigned __int64 *v48; // [rsp+90h] [rbp-70h]
  unsigned __int8 *v49; // [rsp+98h] [rbp-68h]
  __m128i v50; // [rsp+A0h] [rbp-60h]
  __m128i v51; // [rsp+B0h] [rbp-50h]
  __m128i v52; // [rsp+C0h] [rbp-40h]
  __m128i v53; // [rsp+D0h] [rbp-30h]
  __m128i Src; // [rsp+E0h] [rbp-20h] BYREF
  __m128i v55; // [rsp+F0h] [rbp-10h]
  __m128i v56; // [rsp+100h] [rbp+0h]
  __m128i v57; // [rsp+110h] [rbp+10h] BYREF

  v15 = (void *)a2;
  v45 = a1;
  v49 = a13;
  v46 = a4;
  v47 = a3;
  v44 = a2;
  v43 = a6;
  v48 = a11;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4461;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"i_pDxgDmmInterface != NULL", 4461LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !v15 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4462;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"i_hDxgAdapter != NULL", 4462LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4463;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"i_hVidPn != NULL", 4463LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4464;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"i_pDmmVidPnInterface != NULL", 4464LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4465;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"i_hVidPnTopology != NULL", 4465LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4466;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"i_pDmmVidPnTopologyInterface != NULL",
      4466LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a7 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4467;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"i_VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
      4467LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a11 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4468;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"o_pNumVidPnPresentPathsFromSource != NULL",
      4468LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *a11 = 0LL;
  if ( a12 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    *a12 = si128;
    a12[1] = si128;
    a12[2] = si128;
    a12[3] = si128;
  }
  v17 = *(__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64 *))a6;
  v39 = 0;
  v41 = 0LL;
  v18 = v17(a5, a7, &v41);
  v19 = v18;
  if ( v18 == -1071774919 )
  {
    if ( v41 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4499;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"sztNumPathsFromSource == 0", 4499LL, 0LL, 0LL, 0LL, 0LL);
    }
    v20 = 1;
    v39 = 1;
    v21 = a7;
    WdLogSingleEntry2(7LL, a5, a7);
    WdLogGlobalForLineNumber = 4505;
  }
  else
  {
    if ( v18 < 0 )
    {
      WdLogSingleEntry3(2LL, a7, a5, v18);
      WdLogGlobalForLineNumber = 4513;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to determine number of paths originating from source 0x%I64x in topology 0x%I64x (status = 0x%I64x)",
        a7,
        (__int64)a5,
        v19,
        0LL,
        0LL);
      return (unsigned int)v19;
    }
    for ( i = 0LL; i < v41; ++i )
    {
      v42 = -1;
      v24 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64, unsigned int *))v43
             + 1))(
              a5,
              a7,
              i,
              &v42);
      v25 = v24;
      if ( v24 < 0 )
      {
        WdLogSingleEntry3(2LL, i, a7, v24);
        WdLogGlobalForLineNumber = 4536;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to enumerate target of %I64d'th path originating from source 0x%I64x (status = 0x%I64x)",
          i,
          a7,
          v25,
          0LL,
          0LL);
        return (unsigned int)v25;
      }
      v26 = v42;
      if ( v42 == -1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4542;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"ConnectedVidPnTargetId != D3DDDI_ID_UNINITIALIZED",
          4542LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v26 = v42;
      }
      v15 = (void *)v44;
      v40[0] = 0;
      v27 = (*((__int64 (__fastcall **)(unsigned __int64, __int64, _BYTE *))v45 + 9))(v44, v26, v40);
      v28 = v27;
      if ( v27 < 0 )
      {
        WdLogSingleEntry2(2LL, v15, v27);
        WdLogGlobalForLineNumber = 4555;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to acquire target set of adapter 0x%I64x (status = 0x%I64x)",
          (__int64)v15,
          v28,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v28;
      }
      if ( !v40[0] )
      {
        v20 = 1;
        v39 = 1;
        v21 = a7;
        WdLogSingleEntry3(7LL, a5, a7, v42);
        WdLogGlobalForLineNumber = 4568;
        goto LABEL_38;
      }
    }
    v20 = 0;
    v21 = a7;
LABEL_38:
    WdLogSingleEntry2(7LL, v21, a5);
    WdLogGlobalForLineNumber = 4576;
  }
  Src = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v55 = Src;
  v56 = Src;
  v57 = Src;
  v50 = Src;
  v51 = Src;
  v52 = Src;
  v53 = Src;
  if ( v20 )
  {
    if ( !a8 )
    {
      WdLogSingleEntry2(7LL, v21, v15);
      result = 3223192403LL;
      WdLogGlobalForLineNumber = 4597;
      return result;
    }
    if ( v41 )
    {
      v29 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD))v43 + 7))(a5, a7);
      v19 = v29;
      if ( v29 < 0 )
      {
        WdLogSingleEntry3(2LL, v21, a5, v29);
        WdLogGlobalForLineNumber = 4611;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to remove all paths from source 0x%I64x in topology 0x%I64x (status = 0x%I64x)",
          v21,
          (__int64)a5,
          v19,
          0LL,
          0LL);
        return (unsigned int)v19;
      }
    }
    v44 = 0LL;
    v30 = AugmentVidPnTopology(v47, v46, a5, v43, v15, v45, a7, a10, &v44, &Src);
    v19 = v30;
    if ( v30 == -1071774925 )
    {
      WdLogSingleEntry2(7LL, a5, v21);
      result = (unsigned int)v19;
      WdLogGlobalForLineNumber = 4634;
      return result;
    }
    if ( v30 == -1071774886 )
    {
      WdLogSingleEntry2(7LL, a5, v21);
      result = 3223192410LL;
      WdLogGlobalForLineNumber = 4641;
      return result;
    }
    if ( v30 < 0 )
    {
      WdLogSingleEntry2(2LL, v21, v30);
      WdLogGlobalForLineNumber = 4648;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to augment VidPN topology  on source 0x%I64x (status = 0x%I64x).",
        v21,
        v19,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v19;
    }
    v31 = v44;
    if ( !v44 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4655;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"sztNumAugmentedPathsFromSource > 0",
        4655LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    WdLogSingleEntry4(7LL, v15, v31, v21, v41);
    v53 = v57;
    WdLogGlobalForLineNumber = 4658;
    v52 = v56;
    v41 = v31;
    v51 = v55;
    v50 = Src;
  }
  else
  {
    v31 = v41;
  }
  if ( !v31 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4665;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"sztNumPathsFromSource > 0", 4665LL, 0LL, 0LL, 0LL, 0LL);
    v31 = v41;
  }
  if ( a9 )
  {
    v38 = (struct _DXGDMM_INTERFACE *)v31;
    v32 = v47;
    v33 = UnpinCofuncModalityOnPathsFromSource(v47, v46, a5, v43, a7, (unsigned __int64)v38);
    v34 = v33;
    if ( v33 < 0 )
    {
      WdLogSingleEntry5(2LL, v41, v21, v32, v15, v33);
      WdLogGlobalForLineNumber = 4681;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to unpin modality of %I64d present path(s) originating from source 0x%I64x in VidPN 0x%I64x of adapter 0x"
         "%I64x (status = 0x%I64x)",
        v41,
        v21,
        (__int64)v32,
        (__int64)v15,
        v34);
      return (unsigned int)v34;
    }
    v31 = v41;
  }
  *v48 = v31;
  if ( a12 )
  {
    if ( a12 > (__m128i *)((char *)&v57.m128i_u64[1] + 4) || (__m128i *)((char *)&a12[3].m128i_u64[1] + 4) < &Src )
    {
      v35 = v51;
      *a12 = v50;
      v36 = v52;
      a12[1] = v35;
      v37 = v53;
      a12[2] = v36;
      a12[3] = v37;
    }
    else
    {
      memmove(a12, &Src, 0x40uLL);
    }
  }
  if ( v49 )
    *v49 = v39;
  return 0LL;
}
