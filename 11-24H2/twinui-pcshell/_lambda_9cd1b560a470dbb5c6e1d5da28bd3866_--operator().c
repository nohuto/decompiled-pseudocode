/*
 * XREFs of _lambda_9cd1b560a470dbb5c6e1d5da28bd3866_::operator() @ 0x18028E004
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1d6a067dbe26ab9e29e40b777c6860e1___::Run @ 0x1802984B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1d6a067dbe26ab9e29e40b777c6860e1___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800305D0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@PEAUIWin32ApplicationView@@_N@Z @ 0x180105A6C (-TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA-AV-$com_ptr_t@UIProperty.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindowExternal@@UIClassicWindowContainer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18017EC30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindowEx.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
char *__fastcall lambda_9cd1b560a470dbb5c6e1d5da28bd3866_::operator()(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r15
  volatile signed __int32 *v6; // rbx
  char *result; // rax
  void *v8; // rdi
  _QWORD *v9; // rbx
  __int64 (__fastcall *v10)(__int64, volatile signed __int32 *, _QWORD); // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(__int64, _QWORD); // rbx
  _QWORD *v14; // rax
  __int64 v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+30h] BYREF
  __int64 v17; // [rsp+70h] [rbp+40h] BYREF
  void *v18; // [rsp+78h] [rbp+48h]

  v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 232LL))(*a1);
  v5 = *a1;
  if ( *v4 )
  {
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 128LL);
    v14 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 232LL))(*a1);
    return (char *)v13(a2, *v14);
  }
  else
  {
    v6 = 0LL;
    v18 = 0LL;
    result = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = result;
    if ( result )
    {
      v9 = result + 16;
      Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(result + 16));
      *((_DWORD *)v8 + 13) = 1;
      *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IClassicWindowExternal,IClassicWindowContainer,Microsoft::WRL::FtmBase>::`vftable';
      *((_QWORD *)v8 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IClassicWindowExternal,IClassicWindowContainer,Microsoft::WRL::FtmBase>::`vftable'{for `IClassicWindowContainer'};
      *v9 = &CClassicWindowExternal::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *(_QWORD *)v8 = &CClassicWindowExternal::`vftable';
      *((_QWORD *)v8 + 1) = &CClassicWindowExternal::`vftable'{for `IClassicWindowContainer'};
      *v9 = &CClassicWindowExternal::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      *((_QWORD *)v8 + 7) = v5;
      result = (char *)Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v8 + 7);
      v6 = (volatile signed __int32 *)v8;
      v18 = v8;
    }
    if ( v6 )
    {
      v16 = 0LL;
      v10 = *(__int64 (__fastcall **)(__int64, volatile signed __int32 *, _QWORD))(*(_QWORD *)a2 + 112LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
      result = (char *)v10(a2, v6, &v16);
      if ( (int)result >= 0 )
        result = (char *)(*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)*a1 + 224LL))(
                           *a1,
                           v16);
      if ( (a1[1] & 1) == 0 )
      {
        v17 = 0LL;
        result = (char *)(**v16)(v16, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v17);
        v11 = v17;
        if ( v17 )
        {
          result = (char *)Win32ApplicationViewHelpers::TryGetViewPropertySetFromHintsForWin32(&v15, v17);
          if ( v15 )
            result = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          v11 = v17;
        }
        if ( v11 )
          result = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v12 = (__int64)v16;
      if ( v16 )
      {
        v16 = 0LL;
        result = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
    if ( v6 )
      return (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindowExternal,IClassicWindowContainer,Microsoft::WRL::FtmBase>::Release(v6);
  }
  return result;
}
