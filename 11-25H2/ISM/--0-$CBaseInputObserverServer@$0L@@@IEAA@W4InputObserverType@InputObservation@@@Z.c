/*
 * XREFs of ??0?$CBaseInputObserverServer@$0L@@@IEAA@W4InputObserverType@InputObservation@@@Z @ 0x18008D2B8
 * Callers:
 *     ??0CInputObserverManager@@AEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180136270 (--0CInputObserverManager@@AEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ?Initialize@?$KernelInputConnection@U_MIT_BASE_INPUT_OBSERVER_PACKET@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_BASE_INPUT_OBSERVER_PACKET@@@Z@std@@@Z @ 0x18000A0D0 (-Initialize@-$KernelInputConnection@U_MIT_BASE_INPUT_OBSERVER_PACKET@@@@QEAAXAEBV-$ComPtr@UIMess.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18000CC20 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CBaseInputObserverServer<11>::CBaseInputObserverServer<11>(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  int v4; // eax
  __int64 v5; // rcx
  _QWORD v7[8]; // [rsp+20h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v9; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v10; // [rsp+A8h] [rbp+48h]

  *(_QWORD *)a1 = &CBaseInputObserverServer<11>::`vftable';
  *(_DWORD *)(a1 + 8) = 11;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = "CMK:Observation";
  v2 = a1 + 160;
  v10 = a1 + 160;
  *(_DWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *v3 = v3;
  v3[1] = v3;
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 24) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_QWORD *)(v2 + 48) = 7LL;
  *(_QWORD *)(v2 + 56) = 8LL;
  *(_DWORD *)v2 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    v2 + 24,
    0x10uLL,
    *(_QWORD *)(v2 + 8));
  *(_QWORD *)(a1 + 224) = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  v4 = CoreUICreate(&v9);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputobservers\\server\\BaseInputObserverServer.cpp",
      (const char *)(unsigned int)v4,
      v7[0]);
  v7[0] = &std::_Func_impl_no_alloc<_lambda_329431f877b8a1cf1c33d43387e7f0d1_,void,_MIT_BASE_INPUT_OBSERVER_PACKET const *>::`vftable';
  v7[1] = a1;
  v7[7] = v7;
  KernelInputConnection<_MIT_BASE_INPUT_OBSERVER_PACKET>::Initialize(
    (_QWORD *)(a1 + 16),
    &v9,
    *(_DWORD *)(a1 + 8),
    (__int64)v7);
  v5 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return a1;
}
