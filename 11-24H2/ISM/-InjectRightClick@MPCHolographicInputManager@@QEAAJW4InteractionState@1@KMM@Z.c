/*
 * XREFs of ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x1800BA680
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x180068540 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputI.c)
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C045C (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x1800903BC (--1-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ.c)
 *     ??$?4U?$default_delete@ULegacyDeviceInfo@@@std@@$0A@@?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009B044 (--$-4U-$default_delete@ULegacyDeviceInfo@@@std@@$0A@@-$unique_ptr@ULegacyDeviceInfo@@U-$default_.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800ABBBC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$make_unique@ULegacyDeviceInfo@@$$V$0A@@std@@YA?AV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@0@XZ @ 0x1800B97F0 (--$make_unique@ULegacyDeviceInfo@@$$V$0A@@std@@YA-AV-$unique_ptr@ULegacyDeviceInfo@@U-$default_d.c)
 *     ?SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z @ 0x180198400 (-SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCHolographicInputManager::InjectRightClick(__int64 a1, int a2, int a3, const char *a4, float a5)
{
  float v5; // xmm3_4
  void **v9; // rbx
  void **v10; // rax
  const char *v11; // r9
  int v12; // eax
  _DWORD *v13; // rax
  int v14; // ebx
  __int64 v15; // rdx
  __int16 v17; // ax
  void *v18[2]; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD v19[22]; // [rsp+38h] [rbp-D0h] BYREF
  int v20; // [rsp+92h] [rbp-76h]
  int v21; // [rsp+9Ch] [rbp-6Ch]
  int v22; // [rsp+A0h] [rbp-68h]
  char v23; // [rsp+B0h] [rbp-58h]
  char v24; // [rsp+B2h] [rbp-56h]
  wil::details::in1diag3 *retaddr; // [rsp+2A0h] [rbp+198h]

  if ( !*(_BYTE *)(a1 + 3364) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x341,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
  v9 = (void **)(a1 + 3392);
  if ( !*(_QWORD *)(a1 + 3392) )
  {
    v10 = (void **)std::make_unique<LegacyDeviceInfo,,0>(v18);
    std::unique_ptr<LegacyDeviceInfo>::operator=<std::default_delete<LegacyDeviceInfo>,0>(v9, v10);
    std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>(v18);
    if ( !*v9 )
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        839LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v11);
    *(_DWORD *)*v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 3296) + 32LL))(*(_QWORD *)(a1 + 3296));
    *((_DWORD *)*v9 + 1) = 2;
    v12 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD))(**(_QWORD **)(a1 + 3296) + 40LL))(
            *(_QWORD *)(a1 + 3296),
            *v9,
            0LL);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x34C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v12,
        (int)v18[0]);
  }
  memset_0(v19, 0, 0x218uLL);
  v13 = *v9;
  v19[6] = 536;
  v19[0] = 4096;
  v19[10] = a3;
  v19[1] = *v13;
  v20 = 1;
  v23 = 1;
  v24 = 1;
  v21 = (int)v5;
  v22 = (int)a5;
  if ( a2 == 1 )
  {
    v14 = MouseProcessor::SynthesizeMouseInput((struct InputInfo *)v19);
    if ( v14 < 0 )
    {
      v15 = 863LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v14);
      return (unsigned int)v14;
    }
    v17 = 4;
  }
  else
  {
    v14 = MouseProcessor::SynthesizeMouseInput((struct InputInfo *)v19);
    if ( v14 < 0 )
    {
      v15 = 871LL;
      goto LABEL_11;
    }
    v17 = 8;
  }
  HIWORD(v20) = v17;
  return MouseProcessor::SynthesizeMouseInput((struct InputInfo *)v19);
}
