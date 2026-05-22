/*
 * XREFs of ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800C3000
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180011C00 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012810 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180012E04 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180012EB8 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180068AA0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1800C2048 (-HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?MPCHandProcessor_UseGazeForTargetingChange_@ISMTracing@@QEAAXPEBULegacyInputInfo@@_N@Z @ 0x1800C24A8 (-MPCHandProcessor_UseGazeForTargetingChange_@ISMTracing@@QEAAXPEBULegacyInputInfo@@_N@Z.c)
 *     ?SendInputToTargetApp@MPCHandProcessor@@AEAAXPEAUIMPCTarget@@0PEAULegacyInputInfo@@@Z @ 0x1800C335C (-SendInputToTargetApp@MPCHandProcessor@@AEAAXPEAUIMPCTarget@@0PEAULegacyInputInfo@@@Z.c)
 *     ?ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1800C3534 (-ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?SendInputToPostProcessor@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@@Z @ 0x1800C7EC0 (-SendInputToPostProcessor@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x1800C7FF4 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCHandProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  MPCInputProviderBase *v4; // r14
  char v5; // bl
  ISMTracing *v6; // rcx
  struct IMPCTarget *v7; // rbx
  MPCHolographicInputManager *Instance; // rdi
  int v9; // eax
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IMPCTarget *v13; // [rsp+40h] [rbp+8h] BYREF
  struct IMPCTarget *v14; // [rsp+48h] [rbp+10h] BYREF

  v4 = (MPCInputProviderBase *)(this - 24);
  if ( !MPCHandProcessor::HandleHomeGesture((MPCHandProcessor *)(this - 24), a2) )
  {
    v13 = 0LL;
    *(_BYTE *)(this + 9896) = 0;
    v5 = !*((_BYTE *)a2 + 1204) || !*((_BYTE *)a2 + 964) || !*((_BYTE *)a2 + 965);
    if ( v5 != *(_BYTE *)(this + 3640) )
    {
      *(_BYTE *)(this + 3640) = v5;
      if ( ISMTracing::IsEnabled() )
      {
        ISMTracing::Instance();
        ISMTracing::MPCHandProcessor_UseGazeForTargetingChange_(v6, a2, v5);
      }
    }
    if ( !MPCInputProviderBase::IsPrimary(this) && MPCHandProcessor::ShouldRequestPrimary(v4, a2) )
      MPCInputProviderBase::SetRequestingPrimary(v4);
    v7 = *(struct IMPCTarget **)(this + 3608);
    v14 = v7;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v14);
    Instance = MPCHolographicInputManager::GetInstance();
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
    v9 = MPCHolographicInputManager::Process3DInput(
           Instance,
           a2,
           (struct IMPCInputProviderBase *)(this & -(__int64)(v4 != 0LL)),
           &v13);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x70,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpchandprocessor.cpp",
        (const char *)(unsigned int)v9,
        v11);
    MPCInputProviderBase::SendInputToPostProcessor(v4, a2);
    MPCHandProcessor::SendInputToTargetApp(v4, v7, v13, a2);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  }
  return 0LL;
}
