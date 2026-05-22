/*
 * XREFs of ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x1800BB4A0
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800121C4 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800FD7A0 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z @ 0x180051F08 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?InitializeCursor3D@MPCHolographicInputManager@@AEAAXXZ @ 0x1800BA258 (-InitializeCursor3D@MPCHolographicInputManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHolographicInputManager::SetMPCInputRouter(
        MPCHolographicInputManager *this,
        struct ISystemInputRouter *a2,
        __int64 a3,
        const char *a4)
{
  struct ISystemInputRouter **v5; // rsi
  struct ISystemInputRouter *v6; // rsi
  __int64 (__fastcall *v7)(struct ISystemInputRouter *, GUID *, char *); // rdi
  int v8; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = (struct ISystemInputRouter **)((char *)this + 3280);
  if ( *((_QWORD *)this + 410) )
  {
    if ( *v5 != a2 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x58C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        a4);
  }
  else
  {
    Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)this + 410, (__int64)a2);
    v6 = *v5;
    v7 = **(__int64 (__fastcall ***)(struct ISystemInputRouter *, GUID *, char *))v6;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 411);
    v8 = v7(v6, &GUID_1c93908d_d1c5_4ac5_9269_0398fe8ab53e, (char *)this + 3288);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x591,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v8,
        v9);
    MPCHolographicInputManager::InitializeCursor3D(this);
  }
}
