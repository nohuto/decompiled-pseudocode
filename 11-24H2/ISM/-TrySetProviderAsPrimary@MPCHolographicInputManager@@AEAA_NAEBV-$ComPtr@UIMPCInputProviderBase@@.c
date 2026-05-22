/*
 * XREFs of ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x1800BB600
 * Callers:
 *     ?UpdatePrimary@MPCHolographicInputManager@@AEAAXXZ @ 0x180013F70 (-UpdatePrimary@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?ForcePrimaryInputType@MPCHolographicInputManager@@QEAAJW4InputType@@@Z @ 0x1800B9E1C (-ForcePrimaryInputType@MPCHolographicInputManager@@QEAAJW4InputType@@@Z.c)
 *     ?OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z @ 0x1800BB03C (-OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@@Z @ 0x1800117C4 (-ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV-$function@$$A6AXPEAUIMPCInputProviderB.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180032E1C (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?clear@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800BBC80 (-clear@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMPCIn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall MPCHolographicInputManager::TrySetProviderAsPrimary(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase **a2,
        __int64 a3,
        const char *a4)
{
  struct IMPCInputProviderBase *v6; // rdi
  char *v7; // r12
  _QWORD *v8; // rax
  char v9; // si
  int v10; // ebx
  char result; // al
  struct IMPCInputProviderBase *v12; // rbx
  __int64 *v13; // r12
  __int64 *i; // rsi
  __int64 v15; // rdi
  const char *v16; // r9
  __int64 (__fastcall **v17)(); // [rsp+20h] [rbp-40h] BYREF
  char *v18; // [rsp+28h] [rbp-38h]
  __int64 (__fastcall ***v19)(); // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  char v21; // [rsp+A0h] [rbp+40h] BYREF
  struct IMPCInputProviderBase *v22; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+58h] BYREF

  if ( !*((_BYTE *)this + 3364) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x27F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
  v6 = *a2;
  v7 = (char *)this + 3600;
  v8 = (_QWORD *)*((_QWORD *)this + 450);
  v9 = 1;
  v21 = 1;
  v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 112LL))(*v8);
  if ( v10 != (*(unsigned int (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v6 + 112LL))(v6)
    || !(*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)*a2 + 272LL))(*a2) )
  {
    v9 = 0;
    v17 = off_1801E36C8;
    v18 = &v21;
    v19 = &v17;
    MPCHolographicInputManager::ForEachActiveProvider((__int64)this, (__int64)&v17);
  }
  result = v21;
  if ( v21 )
  {
    if ( !v9 )
    {
      v18 = (char *)this;
      v17 = off_1801E3668;
      v19 = &v17;
      MPCHolographicInputManager::ForEachActiveProvider((__int64)this, (__int64)&v17);
      std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::clear(v7);
    }
    v12 = *a2;
    v22 = *a2;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v22);
    v13 = (__int64 *)*((_QWORD *)this + 414);
    for ( i = (__int64 *)*((_QWORD *)this + 413); i != v13; ++i )
    {
      v23 = *i;
      v15 = v23;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v23);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
      if ( v12 == (struct IMPCInputProviderBase *)v15 )
        break;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
    if ( i == *((__int64 **)this + 414) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2A6,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v16);
    MPCHolographicInputManager::AddPrimaryInputProvider(this, *a2);
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)*a2 + 32LL))(*a2);
    return v21;
  }
  return result;
}
