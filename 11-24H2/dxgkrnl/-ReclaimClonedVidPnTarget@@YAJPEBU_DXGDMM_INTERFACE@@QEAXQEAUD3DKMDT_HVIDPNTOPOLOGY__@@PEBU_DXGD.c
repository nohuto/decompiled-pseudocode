/*
 * XREFs of ?ReclaimClonedVidPnTarget@@YAJPEBU_DXGDMM_INTERFACE@@QEAXQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@EQEAI4@Z @ 0x1401C91D8
 * Callers:
 *     ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1401C8018 (-AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x14004D56C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ReclaimClonedVidPnTarget(
        const struct _DXGDMM_INTERFACE *a1,
        __int64 a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a3,
        __int64 (__fastcall **a4)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, __int64, unsigned int *const *),
        char a5,
        unsigned int *const a6,
        unsigned int *const a7)
{
  unsigned int *v11; // r12
  unsigned int *v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64 *, __int64 *); // rax
  int v14; // eax
  __int64 v15; // rsi
  __int64 (__fastcall *v17)(__int64, unsigned int *const *); // rax
  int v18; // eax
  __int64 v19; // rdi
  unsigned int *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 (__fastcall *v27)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, __int64, unsigned int *const *); // rax
  int v28; // eax
  __int64 v29; // r15
  int v30; // eax
  bool v31; // zf
  int v32; // eax
  __int64 v33; // r9
  const wchar_t *v34; // r9
  __int64 v35; // r8
  int v36; // eax
  _BYTE v37[8]; // [rsp+50h] [rbp-31h] BYREF
  unsigned int *v38; // [rsp+58h] [rbp-29h]
  void (__fastcall *v39)(__int64, __int64); // [rsp+60h] [rbp-21h]
  __int64 v40; // [rsp+68h] [rbp-19h]
  int v41; // [rsp+70h] [rbp-11h]
  unsigned int v42; // [rsp+D0h] [rbp+4Fh] BYREF
  __int64 v43; // [rsp+D8h] [rbp+57h] BYREF
  __int64 v44; // [rsp+E0h] [rbp+5Fh] BYREF
  __int64 v45; // [rsp+E8h] [rbp+67h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3049;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"i_pDxgDmmInterface != NULL", 3049LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3050;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"i_hDxgAdapter != NULL", 3050LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3051;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"i_hVidPnTopology != NULL", 3051LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3052;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"i_pDmmVidPnTopologyInterface != NULL",
      3052LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = a6;
  if ( !a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3053;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"o_pReclaimedVidPnTargetId != NULL",
      3053LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v12 = a7;
  if ( !a7 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3054;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"o_pReclaimedPathSourceId != NULL",
      3054LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v43 = 0LL;
  *v11 = -1;
  *v12 = -1;
  v13 = (__int64 (__fastcall *)(__int64, __int64 *, __int64 *))*((_QWORD *)a1 + 1);
  v44 = 0LL;
  v14 = v13(a2, &v43, &v44);
  v15 = v14;
  if ( v14 >= 0 )
  {
    a6 = 0LL;
    v38 = 0LL;
    v17 = *(__int64 (__fastcall **)(__int64, unsigned int *const *))(v44 + 8);
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0;
    v37[0] = 0;
    v18 = v17(v43, &a6);
    v19 = v18;
    if ( v18 >= 0 )
    {
      v20 = a6;
      if ( !a6 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3097;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pVidPnSourceInfo != NULL", 3097LL, 0LL, 0LL, 0LL, 0LL);
        v20 = a6;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
        (__int64)v37,
        (__int64)v20,
        *(_QWORD *)(v44 + 24),
        v43);
      v42 = -1;
      LODWORD(v25) = -1;
      while ( 1 )
      {
        v26 = (__int64)v38;
        if ( !v38 )
          goto LABEL_40;
        v25 = *v38;
        v27 = *a4;
        a7 = 0LL;
        v28 = v27(a3, v25, &a7);
        v29 = v28;
        if ( v28 == -1071774919 )
        {
          if ( a7 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 3122;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"sztNumPathsFromSource == 0",
              3122LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        else if ( v28 < 0 )
        {
          WdLogSingleEntry3(2LL, a3, v25, v28);
          v34 = L"Failed to get the number of paths in topology 0x%I64x originating from source 0x%I64x (status = 0x%I64x)";
          WdLogGlobalForLineNumber = 3129;
          goto LABEL_36;
        }
        if ( (unsigned __int64)a7 > 1 )
          break;
        v45 = 0LL;
        v30 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(v44 + 16))(v43, v26, &v45);
        v29 = v30;
        if ( v30 < 0 )
        {
          WdLogSingleEntry3(2LL, v26, v43, v30);
          WdLogGlobalForLineNumber = 3185;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed to acquire source following 0x%I64x in VidPN source set 0x%I64x (status = 0x%I64x)",
            v26,
            v43,
            v29,
            0LL,
            0LL);
          v31 = v37[0] == 0;
LABEL_37:
          if ( !v31 )
            v39(v40, v26);
          return (unsigned int)v29;
        }
        DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
          (__int64)v37,
          v45,
          *(_QWORD *)(v44 + 24),
          v43);
      }
      v32 = ((__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, _QWORD, __int64, unsigned int *))a4[1])(
              a3,
              (unsigned int)v25,
              1LL,
              &v42);
      v29 = v32;
      if ( v32 < 0 )
      {
        WdLogSingleEntry3(2LL, a3, v25, v32);
        v34 = L"Failed to get target of the second path in topology 0x%I64x originating from source 0x%I64x (status = 0x%I64x)";
        WdLogGlobalForLineNumber = 3147;
LABEL_36:
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v34, (__int64)a3, v25, v29, 0LL, 0LL);
        v31 = v37[0] == 0;
        goto LABEL_37;
      }
      v35 = v42;
      if ( v42 == -1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3154;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"ClonedVidPnTargetId != D3DDDI_ID_UNINITIALIZED",
          3154LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v35 = v42;
      }
      LOBYTE(v33) = a5;
      v36 = ((__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, _QWORD, __int64, __int64))a4[6])(
              a3,
              (unsigned int)v25,
              v35,
              v33);
      v29 = v36;
      if ( v36 < 0 )
      {
        WdLogSingleEntry4(2LL, v25, v42, a3, v36);
        WdLogGlobalForLineNumber = 3165;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to remove path (0x%I64x, 0x%I64x) from topology 0x%I64x which is the second path originating from that "
           "source (status = 0x%I64x)",
          v25,
          v42,
          (__int64)a3,
          v29,
          0LL);
        v31 = v37[0] == 0;
        goto LABEL_37;
      }
LABEL_40:
      if ( v42 == -1 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v22, v21, v23, v24) + 24) = a3;
        WdLogGlobalForLineNumber = 3199;
        if ( v37[0] )
          v39(v40, v26);
        return 3223192371LL;
      }
      else
      {
        *v11 = v42;
        *v12 = v25;
        if ( v37[0] )
          v39(v40, v26);
        return 0LL;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, v43, v18);
      WdLogGlobalForLineNumber = 3092;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to acquire first source in VidPN source set 0x%I64x (status = 0x%I64x)",
        v43,
        v19,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v19;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, a2, v14);
    WdLogGlobalForLineNumber = 3071;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to acquire source set for adapter 0x%I64x (status = 0x%I64x)",
      a2,
      v15,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v15;
  }
}
