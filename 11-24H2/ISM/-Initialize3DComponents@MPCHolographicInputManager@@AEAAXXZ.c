/*
 * XREFs of ?Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x1800BA020
 * Callers:
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x1800BAFE0 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800ABBBC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800AEBD8 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R?$default_delete@VMPCCursorManager@@@std@@QEBAXPEAVMPCCursorManager@@@Z @ 0x1800B9AFC (--R-$default_delete@VMPCCursorManager@@@std@@QEBAXPEAVMPCCursorManager@@@Z.c)
 *     ??0MPCCursorManager@@QEAA@XZ @ 0x1800BEB04 (--0MPCCursorManager@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHolographicInputManager::Initialize3DComponents(MPCHolographicInputManager *this)
{
  MPCCursorManager *v2; // rax
  __int64 v3; // rcx
  const char *v4; // r9
  MPCCursorManager *v5; // rdx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  MPCCursorManager **v10; // rsi
  MPCCursorManager **v11; // rbp
  MPCCursorManager *v12; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  MPCCursorManager *v14; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 3364) )
  {
    v14 = (MPCCursorManager *)operator new(0x48uLL);
    v2 = MPCCursorManager::MPCCursorManager(v14);
    v5 = (MPCCursorManager *)*((_QWORD *)this + 423);
    *((_QWORD *)this + 423) = v2;
    if ( v5 )
      std::default_delete<MPCCursorManager>::operator()(v3, v5);
    if ( !*((_QWORD *)this + 423) )
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        91LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v4);
    if ( IsEdition(10LL) )
    {
      LODWORD(v14) = 0;
      v6 = RtlQueryWnfStateData(
             &v14,
             WNF_HOLO_USER_DISPLAY_CONTEXT,
             MPCHolographicInputManager::DisplayContextChangeCallback,
             this);
      if ( v6 < 0 )
        wil::details::in1diag3::_FailFast_NtStatus(
          retaddr,
          (void *)0x67,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v6,
          0);
      v7 = RtlSubscribeWnfStateChangeNotification(
             (char *)this + 3632,
             WNF_HOLO_USER_DISPLAY_CONTEXT,
             (unsigned int)v14,
             MPCHolographicInputManager::DisplayContextChangeCallback);
      if ( v7 < 0 )
        wil::details::in1diag3::_FailFast_NtStatus(
          retaddr,
          (void *)0x72,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v7,
          (int)this);
      LODWORD(v14) = 0;
      v8 = RtlQueryWnfStateData(
             &v14,
             WNF_HOLO_SHELL_INPUT_3DSWITCH_DISABLE,
             MPCHolographicInputManager::Input3DSwitchDisableCallback,
             this);
      if ( v8 < 0 )
        wil::details::in1diag3::_FailFast_NtStatus(
          retaddr,
          (void *)0x7B,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v8,
          0);
      v9 = RtlSubscribeWnfStateChangeNotification(
             (char *)this + 3640,
             WNF_HOLO_SHELL_INPUT_3DSWITCH_DISABLE,
             (unsigned int)v14,
             MPCHolographicInputManager::Input3DSwitchDisableCallback);
      if ( v9 < 0 )
        wil::details::in1diag3::_FailFast_NtStatus(
          retaddr,
          (void *)0x86,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v9,
          (int)this);
    }
    v10 = (MPCCursorManager **)*((_QWORD *)this + 413);
    v11 = (MPCCursorManager **)*((_QWORD *)this + 414);
    while ( v10 != v11 )
    {
      v14 = *v10;
      v12 = v14;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v14);
      (*(void (__fastcall **)(MPCCursorManager *))(*(_QWORD *)v12 + 296LL))(v12);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
      ++v10;
    }
    *((_BYTE *)this + 3364) = 1;
  }
}
