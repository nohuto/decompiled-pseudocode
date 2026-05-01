/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAAXAEA_K@Z @ 0x180294F40
 * Callers:
 *     ?GetNonServiceProcessListAndIds@BroadcastDVRComponent@@AEAAXAEAV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@@Z @ 0x1800A5B20 (-GetNonServiceProcessListAndIds@BroadcastDVRComponent@@AEAAXAEAV-$vector@U-$pair@KVString@Intern.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@std@@@std@@YAXPEAU?$pair@KVString@Internal@Windows@@@0@QEAU10@AEAV?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@0@@Z @ 0x18001BDE0 (--$_Destroy_range@V-$allocator@U-$pair@KVString@Internal@Windows@@@std@@@std@@@std@@YAXPEAU-$pai.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180048650 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

void __fastcall std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Reallocate<0>(
        __int64 *a1,
        unsigned __int64 *a2)
{
  __int64 v4; // rdi
  size_t size_of; // rax
  void *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 i; // rdx
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *v15; // [rsp+40h] [rbp+8h]

  v4 = (a1[1] - *a1) >> 4;
  size_of = std::_Get_size_of_n<16>(*a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v7 = (__int64)v6;
  v15 = v6;
  try
  {
    v8 = a1[1];
    v9 = (__int64)v6;
    for ( i = *a1; i != v8; i += 16LL )
    {
      *(_DWORD *)v9 = *(_DWORD *)i;
      *(_QWORD *)(v9 + 8) = *(_QWORD *)(i + 8);
      *(_QWORD *)(i + 8) = 0LL;
      v9 += 16LL;
    }
    std::_Destroy_range<std::allocator<std::pair<unsigned long,Windows::Internal::String>>>(v9, v9);
    v11 = *a2;
    v12 = v4;
    v13 = v7;
    v14 = (__int64)a1;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v15, (const struct std::nothrow_t *)(16 * *a2));
    throw;
  }
  std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Change_array(v14, v13, v12, v11);
}
