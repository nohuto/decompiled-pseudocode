/*
 * XREFs of _lambda_cbfc2ac73cdc91d5edb18bccca546a72_::operator() @ 0x1800EF464
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_cbfc2ac73cdc91d5edb18bccca546a72__void_::_Do_call @ 0x1800F3E70 (std--_Func_impl_no_alloc__lambda_cbfc2ac73cdc91d5edb18bccca546a72__void_--_Do_call.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x18002368C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetAllStreamGroups@DeviceGraphStore@@YAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F5114 (-GetAllStreamGroups@DeviceGraphStore@@YAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microso.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_cbfc2ac73cdc91d5edb18bccca546a72_::operator()(__int64 *a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rbx
  __int64 v4; // rax
  void (__fastcall *v5)(__int64, __int64); // r8
  __int64 v6; // r9
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  DeviceGraphStore::GetAllStreamGroups(&v7);
  v2 = (__int64 *)*((_QWORD *)&v7 + 1);
  v3 = (__int64 *)v7;
  if ( (_QWORD)v7 != *((_QWORD *)&v7 + 1) )
  {
    do
    {
      v4 = std::wstring::c_str(*a1);
      v5(v6, v4);
      ++v3;
    }
    while ( v3 != v2 );
    v2 = (__int64 *)*((_QWORD *)&v7 + 1);
    v3 = (__int64 *)v7;
  }
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v3, v2);
    std::_Deallocate<16,0>((char *)v7, (const struct std::nothrow_t *)((v8 - v7) & 0xFFFFFFFFFFFFFFF8uLL));
  }
}
