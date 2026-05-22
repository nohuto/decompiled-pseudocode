/*
 * XREFs of ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801C4A10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800121C4 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800133C4 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180068890 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x1800C5EF4 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 *     ?SendInputToPostProcessor@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@@Z @ 0x1800C6080 (-SendInputToPostProcessor@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x1800C61B4 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?ProcessPoints@MPCClickerProcessor@@IEAAXPEAULegacyInputInfo@@@Z @ 0x1801C4B84 (-ProcessPoints@MPCClickerProcessor@@IEAAXPEAULegacyInputInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCClickerProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  struct IMPCTarget *v4; // rbx
  MPCHolographicInputManager *Instance; // rdi
  int v6; // eax
  unsigned int v7; // edi
  int v9; // eax
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IMPCTarget *v13; // [rsp+50h] [rbp+8h] BYREF
  struct IMPCTarget *v14; // [rsp+58h] [rbp+10h] BYREF

  v13 = 0LL;
  v4 = *(struct IMPCTarget **)(this + 3608);
  v14 = v4;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v14);
  if ( !MPCInputProviderBase::IsPrimary(this) )
    MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 24));
  Instance = MPCHolographicInputManager::GetInstance();
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  v6 = MPCHolographicInputManager::Process3DInput(
         Instance,
         a2,
         (struct IMPCInputProviderBase *)(this & -(__int64)(this != 24)),
         &v13);
  v7 = v6;
  if ( v6 >= 0 )
  {
    MPCInputProviderBase::SendInputToPostProcessor((MPCInputProviderBase *)(this - 24), a2);
    if ( v13 )
    {
      MPCInputProviderBase::ProcessSourceDetectedAndLost((MPCInputProviderBase *)(this - 24), v4, v13, 0LL);
      if ( *(_BYTE *)(this + 3544) )
      {
        v9 = (*(__int64 (__fastcall **)(struct IMPCTarget *, struct InputInfo *))(*(_QWORD *)v13 + 24LL))(v13, a2);
        if ( v9 == -2147417853 )
        {
          *(_BYTE *)(this + 3544) = 0;
        }
        else if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147417828 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x7C,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
            v10);
        }
      }
      MPCClickerProcessor::ProcessPoints((MPCClickerProcessor *)(this - 24), a2);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
      (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
    return v7;
  }
}
