/*
 * XREFs of ??0HotKeyProcessor@@QEAA@XZ @ 0x1801C2634
 * Callers:
 *     ??$MakeAndInitialize@VHotKeyProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyProcessor@@@Z @ 0x1801A8EAC (--$MakeAndInitialize@VHotKeyProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyProcessor@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputDeliveryServer@@UIInputServiceProxyOwner@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x180018878 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputDeliveryServer@@.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180054F60 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180058550 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-Nt.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058AF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??1?$_Tree@V?$_Tmap_traits@KV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1801C28C8 (--1-$_Tree@V-$_Tmap_traits@KV-$list@UHotKeyInfo@@V-$allocator@UHotKeyInfo@@@std@@@std@@U-$less@K.c)
 *     ??1?$_Tree@V?$_Tmap_traits@_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1801C2928 (--1-$_Tree@V-$_Tmap_traits@_KV-$set@PEAUHotKeyInfo@@U-$less@PEAUHotKeyInfo@@@std@@V-$allocator@P.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
HotKeyProcessor *__fastcall HotKeyProcessor::HotKeyProcessor(HotKeyProcessor *this)
{
  size_t size_of; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  std::_Ref_count_base *v9[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v11[3]; // [rsp+40h] [rbp-38h] BYREF

  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IInputDeliveryServer,IInputServiceProxyOwner>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IInputDeliveryServer,IInputServiceProxyOwner>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRemoteHotKeyProcessor,IMessageProxyListener>::`vftable'{for `IRemoteHotKeyProcessor'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRemoteHotKeyProcessor,IMessageProxyListener>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMessageProxyListener>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &HotKeyProcessor::`vftable'{for `IRemoteHotKeyProcessor'};
  *((_QWORD *)this + 1) = &HotKeyProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMessageProxyListener>'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  size_of = std::_Get_size_of_n<24>(1uLL);
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v3 = v3;
  v3[1] = v3;
  *((_QWORD *)this + 3) = v3;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *((_QWORD *)this + 5) = v4;
  memset_0((char *)this + 56, 0, 0x100uLL);
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *((_QWORD *)this + 42) = v5;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  v11[0] = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  *(_QWORD *)&v11[0] = v6;
  *((_QWORD *)this + 39) = 0LL;
  memset_0((char *)this + 56, 0, 0x100uLL);
  v10[1] = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v7 = v7;
  v7[1] = v7;
  v7[2] = v7;
  *((_WORD *)v7 + 12) = 257;
  v10[0] = v7;
  *(_OWORD *)v9 = 0LL;
  std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
    (_QWORD *)this + 40,
    (__int64 *)v9);
  if ( v9[1] )
    std::_Ref_count_base::_Decref(v9[1]);
  *((_WORD *)this + 176) = 0;
  std::_Tree<std::_Tmap_traits<unsigned __int64,std::set<HotKeyInfo *>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::set<HotKeyInfo *>>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,std::set<HotKeyInfo *>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::set<HotKeyInfo *>>>,0>>(v10);
  std::_Tree<std::_Tmap_traits<unsigned long,std::list<HotKeyInfo>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::list<HotKeyInfo>>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,std::list<HotKeyInfo>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::list<HotKeyInfo>>>,0>>(v11);
  return this;
}
