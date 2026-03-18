/*
 * XREFs of ?RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMDT_VIDPN_TARGET_MODE@@PEAU_D3DDDI_RATIONAL@@PEAI@Z @ 0x1403D46EC
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_DXGK_DISPLAYMODE_INFO@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1402C2AA0 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPNTARGETMODESET__@@Q6AJPEAUD3DKMDT_HVIDPN__@@0@Z1@Z @ 0x14004CE00 (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@D.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RetrievePinnedModeForTarget(
        const struct _DXGDMM_VIDPN_INTERFACE *const a1,
        struct D3DKMDT_HVIDPN__ *a2,
        unsigned int a3,
        struct _D3DKMDT_VIDPN_TARGET_MODE *a4,
        struct _D3DDDI_RATIONAL *a5,
        unsigned int *a6)
{
  __int64 (__fastcall *v6)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *); // rax
  __int64 v8; // rdi
  int v11; // eax
  __int64 v12; // r14
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rdi
  _OWORD *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v21; // rsi
  __int64 v22; // [rsp+50h] [rbp-19h] BYREF
  _OWORD *v23; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v24[8]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v25; // [rsp+68h] [rbp-1h]
  void (__fastcall *v26)(__int64, __int64); // [rsp+70h] [rbp+7h]
  __int64 v27; // [rsp+78h] [rbp+Fh]
  int v28; // [rsp+80h] [rbp+17h]
  __int64 v29; // [rsp+C0h] [rbp+57h] BYREF

  v6 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))*((_QWORD *)a1 + 3);
  v8 = a3;
  v29 = 0LL;
  v22 = 0LL;
  v11 = v6(a2, a3, &v29, &v22);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = *((_QWORD *)a1 + 4);
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0;
    v24[0] = 0;
    DXGDMM::AutoRelease<D3DKMDT_HVIDPNTARGETMODESET__ *,long (*)(D3DKMDT_HVIDPN__ *,D3DKMDT_HVIDPNTARGETMODESET__ *),D3DKMDT_HVIDPN__ *>::Own(
      (__int64)v24,
      v29,
      v13,
      (__int64)a2);
    v23 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, _OWORD **, struct _D3DDDI_RATIONAL *, unsigned int *))(v22 + 24))(
            v29,
            &v23,
            a5,
            a6);
    v15 = v14;
    if ( v14 < 0 || v14 == 1075708679 )
    {
      v21 = v25;
      WdLogSingleEntry2(2LL, v25, v14);
      WdLogGlobalForLineNumber = 4064;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to acquire info of mode pinned in VidPN target mode set 0x%I64x (status = 0x%I64x)",
        v21,
        v15,
        0LL,
        0LL,
        0LL);
      if ( !v24[0] )
        return (unsigned int)v15;
      v19 = v21;
    }
    else
    {
      v16 = v23;
      v17 = v22;
      v18 = v29;
      *(_OWORD *)&a4->Id = *v23;
      *(_OWORD *)&a4->VideoSignalInfo.TotalSize.cy = v16[1];
      *(_OWORD *)&a4->VideoSignalInfo.VSyncFreq.Denominator = v16[2];
      *(_OWORD *)&a4->VideoSignalInfo.PixelRate = v16[3];
      *(_OWORD *)&a4->WireFormatAndPreference.0 = v16[4];
      (*(void (__fastcall **)(__int64))(v17 + 32))(v18);
      if ( !v24[0] )
        return (unsigned int)v15;
      v19 = v25;
    }
    v26(v27, v19);
    return (unsigned int)v15;
  }
  WdLogSingleEntry3(2LL, v8, a2, v11);
  WdLogGlobalForLineNumber = 4040;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Failed to acquire target mode set of target 0x%I64x in VidPN 0x%I64x (status = 0x%I64x)",
    v8,
    (__int64)a2,
    v12,
    0LL,
    0LL);
  return (unsigned int)v12;
}
