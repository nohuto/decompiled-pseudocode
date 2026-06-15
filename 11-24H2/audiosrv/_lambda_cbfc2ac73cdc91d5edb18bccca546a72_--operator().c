/*
 * XREFs of _lambda_cbfc2ac73cdc91d5edb18bccca546a72_::operator() @ 0x1800F4570
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_cbfc2ac73cdc91d5edb18bccca546a72__void_::_Do_call @ 0x1800F8ED0 (std--_Func_impl_no_alloc__lambda_cbfc2ac73cdc91d5edb18bccca546a72__void_--_Do_call.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180016BF4 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetAllStreamGroups@DeviceGraphStore@@YAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800FA174 (-GetAllStreamGroups@DeviceGraphStore@@YAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microso.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_cbfc2ac73cdc91d5edb18bccca546a72_::operator()(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  void (__fastcall *v6)(__int64, __int64); // r8
  __int64 v7; // r9
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  DeviceGraphStore::GetAllStreamGroups(&v8);
  v3 = *((_QWORD *)&v8 + 1);
  v4 = v8;
  if ( (_QWORD)v8 != *((_QWORD *)&v8 + 1) )
  {
    do
    {
      v5 = std::wstring::c_str(*a1, v2);
      v6(v7, v5);
      v4 += 8LL;
    }
    while ( v4 != v3 );
    v3 = *((_QWORD *)&v8 + 1);
    v4 = v8;
  }
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v4, v3);
    std::_Deallocate<16,0>((char *)v8, (const struct std::nothrow_t *)((v9 - v8) & 0xFFFFFFFFFFFFFFF8uLL));
  }
}
