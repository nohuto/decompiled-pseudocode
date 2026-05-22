/*
 * XREFs of ?UpdatePrimary@MPCHolographicInputManager@@AEAAXXZ @ 0x180013B44
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180011C00 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x1800BD7E0 (-TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV-$ComPtr@UIMPCInputProviderBase@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHolographicInputManager::UpdatePrimary(
        MPCHolographicInputManager *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  unsigned __int64 i; // rdi
  __int64 v6; // rsi
  _QWORD *v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  __int64 v9; // [rsp+30h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 3364) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x248,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
  for ( i = 0LL; ; ++i )
  {
    v6 = *((_QWORD *)this + 413);
    if ( i >= (*((_QWORD *)this + 414) - v6) >> 3 )
      break;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 8 * i) + 24LL))(*(_QWORD *)(v6 + 8 * i)) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 8 * i) + 72LL))(*(_QWORD *)(v6 + 8 * i))
        || (v7 = (_QWORD *)*((_QWORD *)this + 450), *v7 == *((_QWORD *)this + 418))
        || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 72LL))(*v7) )
      {
        v9 = *(_QWORD *)(v6 + 8 * i);
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v9);
        MPCHolographicInputManager::TrySetProviderAsPrimary(this);
      }
      else
      {
        v9 = *((_QWORD *)this + 418);
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v9);
        MPCHolographicInputManager::TrySetProviderAsPrimary(this);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
      return;
    }
  }
}
