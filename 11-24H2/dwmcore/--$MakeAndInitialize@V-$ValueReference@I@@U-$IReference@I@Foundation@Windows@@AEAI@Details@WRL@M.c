/*
 * XREFs of ??$MakeAndInitialize@V?$ValueReference@I@@U?$IReference@I@Foundation@Windows@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAU?$IReference@I@Foundation@Windows@@AEAI@Z @ 0x180229AD4
 * Callers:
 *     ?CreatePrimaryDescription@CDDisplayManager@@QEAAJAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAPEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@@Z @ 0x1801B5D70 (-CreatePrimaryDescription@CDDisplayManager@@QEAAJAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAPEAUID.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1801EFDF4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@V?$ValueReference@I@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18025023C (--1-$MakeAllocator@V-$ValueReference@I@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@QEAA@XZ @ 0x1802C0C7C (--0-$IIterable@PEAU-$IKeyValuePair@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@@C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ValueReference<unsigned int>,Windows::Foundation::IReference<unsigned int>,unsigned int &>(
        _QWORD *a1,
        _DWORD *a2)
{
  void *v4; // rax
  _QWORD *v5; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v7; // rcx
  unsigned int v8; // ebx
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = MIDL_user_allocate(0x48uLL);
  v9 = v4;
  v5 = v4;
  if ( v4 )
  {
    Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,IInspectable *> *>::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,IInspectable *> *>(v4);
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v5 + 2));
    v7 = Microsoft::WRL::Details::ModuleBase::module_;
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Foundation::IReference<unsigned int>,Microsoft::WRL::FtmBase>::`vftable';
    v5[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Foundation::IReference<unsigned int>,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    v5[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Foundation::IReference<unsigned int>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v5[7] = 1LL;
    if ( v7 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v7 + 8LL))(v7);
    *((_DWORD *)v5 + 16) = 0;
    *v5 = &ValueReference<unsigned int>::`vftable';
    v5[1] = &ValueReference<unsigned int>::`vftable'{for `IWeakReferenceSource'};
    v5[2] = &ValueReference<unsigned int>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_DWORD *)v5 + 16) = *a2;
    v8 = ((__int64 (__fastcall *)(_QWORD *, GUID *, _QWORD *))ValueReference<unsigned int>::`vftable')(
           v5,
           &GUID_513ef3af_e784_5325_a91e_97c2b8111cf3,
           a1);
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
    return v8;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<ValueReference<unsigned int>>::~MakeAllocator<ValueReference<unsigned int>>(&v9);
    return 2147942414LL;
  }
}
