/*
 * XREFs of ?UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_K@Z @ 0x1402BF13C
 * Callers:
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1402C02D8 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPNTARGETMODESET__@@Q6AJPEAUD3DKMDT_HVIDPN__@@0@Z1@Z @ 0x14004CE00 (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@D.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UnpinCofuncModalityOnPathsFromSource(
        struct D3DKMDT_HVIDPN__ *a1,
        const struct _DXGDMM_VIDPN_INTERFACE *a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a3,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *); // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v16; // rsi
  __int64 v17; // rax
  void (__fastcall *v18)(struct D3DKMDT_HVIDPN__ *, __int64); // r15
  int v19; // eax
  __int64 v20; // rbx
  unsigned __int64 i; // rbx
  int v22; // eax
  int v23; // eax
  __int64 (__fastcall *v24)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *); // rax
  int v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // r9
  __int64 (__fastcall *v29)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64); // rax
  int v30; // eax
  __int64 v31; // r9
  int v32; // eax
  __int64 v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // rbx
  __int64 v36; // rbx
  __int64 v37; // rbx
  __int64 v38; // rbx
  __int64 v39; // [rsp+50h] [rbp-49h] BYREF
  __int64 v40; // [rsp+58h] [rbp-41h] BYREF
  __int64 v41; // [rsp+60h] [rbp-39h] BYREF
  __int64 v42; // [rsp+68h] [rbp-31h]
  _BYTE v43[8]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v44; // [rsp+78h] [rbp-21h]
  void (__fastcall *v45)(__int64, __int64); // [rsp+80h] [rbp-19h]
  __int64 v46; // [rsp+88h] [rbp-11h]
  int v47; // [rsp+90h] [rbp-9h]
  unsigned int v48; // [rsp+F0h] [rbp+57h]
  __int64 v50; // [rsp+100h] [rbp+67h] BYREF
  const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v51; // [rsp+108h] [rbp+6Fh]

  v51 = a4;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3583;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"ARGUMENT_PRESENT(i_hVidPn)", 3583LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3584;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"ARGUMENT_PRESENT(i_pDmmVidPnInterface)",
      3584LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3585;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"ARGUMENT_PRESENT(i_hVidPnTopology)",
      3585LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3586;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"ARGUMENT_PRESENT(i_pDmmVidPnTopologyInterface)",
      3586LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v10 = a5;
  if ( a5 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3587;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"i_VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
      3587LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))*((_QWORD *)a2 + 1);
  v39 = 0LL;
  v50 = 0LL;
  v12 = v11(a1, (unsigned int)v10, &v50, &v39);
  v14 = v12;
  if ( v12 >= 0 )
  {
    v16 = v50;
    if ( !v50 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3612;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"ARGUMENT_PRESENT(hVidPnSourceModeSet)",
        3612LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v16 = v50;
    }
    v17 = v39;
    if ( !v39 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3613;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"ARGUMENT_PRESENT(pDmmVidPnSourceModeSetInterface)",
        3613LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v17 = v39;
      v16 = v50;
    }
    v18 = (void (__fastcall *)(struct D3DKMDT_HVIDPN__ *, __int64))*((_QWORD *)a2 + 2);
    LOBYTE(v13) = 1;
    v19 = (*(__int64 (__fastcall **)(__int64, __int64))(v17 + 48))(v16, v13);
    v48 = v19;
    if ( v19 >= 0 )
    {
      for ( i = 0LL; ; ++i )
      {
        v42 = i;
        if ( i >= a6 )
          break;
        a5 = -1;
        v22 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64, unsigned int *))v51
               + 1))(
                a3,
                (unsigned int)v10,
                i,
                &a5);
        v48 = v22;
        if ( v22 < 0 )
        {
          v38 = v22;
          WdLogSingleEntry4(2LL, v42, v10, a3, v22);
          WdLogGlobalForLineNumber = 3658;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to enumerate target of %I64d'th path originating from source 0x%I64x in VidPN topology 0x%I64x (status = 0x%I64x)",
            v42,
            v10,
            (__int64)a3,
            v38,
            0LL);
          goto LABEL_19;
        }
        if ( a5 == -1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3667;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"ConnectedVidPnTargetId != D3DDDI_ID_UNINITIALIZED",
            3667LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v23 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD))v51 + 13))(a3, (unsigned int)v10);
        v48 = v23;
        if ( v23 < 0 )
        {
          v37 = v23;
          WdLogSingleEntry4(2LL, v10, a5, a3, v23);
          WdLogGlobalForLineNumber = 3683;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to remove copy protection on present path (0x%I64x, 0x%I64x) in topology 0x%I64x (status = 0x%I64x)",
            v10,
            a5,
            (__int64)a3,
            v37,
            0LL);
          goto LABEL_19;
        }
        v41 = 0LL;
        v44 = 0LL;
        v24 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))*((_QWORD *)a2 + 3);
        v45 = 0LL;
        v46 = 0LL;
        v47 = 0;
        v43[0] = 0;
        v40 = 0LL;
        v25 = v24(a1, a5, &v40, &v41);
        v48 = v25;
        if ( v25 < 0 )
        {
          v36 = v25;
          WdLogSingleEntry1(2LL, v25);
          WdLogGlobalForLineNumber = 3707;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"cdd!AcquirePresentPathUnpinnedCofuncModality failed call to DXGDMM_VIDPN_INTERFACE::pfnAcquireTargetModeSet."
             " (status = 0x%I64x)",
            v36,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_19;
        }
        if ( !v40 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3712;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"ARGUMENT_PRESENT(hVidPnTargetModeSet)",
            3712LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( !v41 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3713;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"ARGUMENT_PRESENT(pDmmVidPnTargetModeSetInterface)",
            3713LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        DXGDMM::AutoRelease<D3DKMDT_HVIDPNTARGETMODESET__ *,long (*)(D3DKMDT_HVIDPN__ *,D3DKMDT_HVIDPNTARGETMODESET__ *),D3DKMDT_HVIDPN__ *>::Own(
          (__int64)v43,
          v40,
          *((_QWORD *)a2 + 4),
          (__int64)a1);
        LOBYTE(v26) = 1;
        v42 = v44;
        v27 = (*(__int64 (__fastcall **)(__int64, __int64))(v41 + 56))(v44, v26);
        v48 = v27;
        if ( v27 < 0 )
        {
          v35 = v27;
          WdLogSingleEntry1(2LL, v27);
          WdLogGlobalForLineNumber = 3728;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"cdd!AcquirePresentPathUnpinnedCofuncModality failed call to DXGDMM_VIDPNTARGETMODESET_INTERFACE::pfnUnpinMod"
             "e. (status = 0x%I64x)",
            v35,
            0LL,
            0LL,
            0LL,
            0LL);
          if ( v43[0] )
            v45(v46, v42);
          goto LABEL_19;
        }
        if ( v43[0] )
          v45(v46, v42);
        LOBYTE(v28) = 1;
        v43[0] = 0;
        v44 = 0LL;
        v29 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64))*((_QWORD *)v51 + 9);
        v45 = 0LL;
        v46 = 0LL;
        v47 = -1073741212;
        v30 = v29(a3, (unsigned int)v10, a5, v28);
        v48 = v30;
        if ( v30 < 0 )
        {
          v34 = v30;
          WdLogSingleEntry4(2LL, v10, a5, a3, v30);
          WdLogGlobalForLineNumber = 3748;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to unpin scaling on present path (0x%I64x, 0x%I64x) in topology 0x%I64x (status = 0x%I64x)",
            v10,
            a5,
            (__int64)a3,
            v34,
            0LL);
          goto LABEL_19;
        }
        LOBYTE(v31) = 1;
        v32 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64))v51 + 11))(
                a3,
                (unsigned int)v10,
                a5,
                v31);
        v48 = v32;
        if ( v32 < 0 )
        {
          v33 = v32;
          WdLogSingleEntry4(2LL, v10, a5, a3, v32);
          WdLogGlobalForLineNumber = 3767;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to unpin rotation on present path (0x%I64x, 0x%I64x) in topology 0x%I64x (status = 0x%I64x)",
            v10,
            a5,
            (__int64)a3,
            v33,
            0LL);
          goto LABEL_19;
        }
      }
      if ( v16 )
        v18(a1, v16);
      return 0LL;
    }
    else
    {
      v20 = v19;
      WdLogSingleEntry2(2LL, v16, v19);
      WdLogGlobalForLineNumber = 3632;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to unpin mode in VidPN source mode set 0x%I64x (status = 0x%I64x)",
        v16,
        v20,
        0LL,
        0LL,
        0LL);
LABEL_19:
      if ( v16 )
        v18(a1, v16);
      return v48;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, v10, a1, v12);
    WdLogGlobalForLineNumber = 3607;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to acquire VidPN source mode set on source 0x%I64x of VidPN 0x%I64x (status = 0x%I64x)",
      v10,
      (__int64)a1,
      v14,
      0LL,
      0LL);
    return (unsigned int)v14;
  }
}
