/*
 * XREFs of ?Clear@?$produce@U?$map_impl@Uhstring@winrt@@U12@V?$map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x18033D720
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@@Z @ 0x18033C918 (--$_Erase_head@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@.c)
 *     ??0?$map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@QEAA@XZ @ 0x18033D290 (--0-$map@Uhstring@winrt@@U12@U-$less@Uhstring@winrt@@@std@@V-$allocator@U-$pair@$$CBUhstring@win.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::impl::map_impl<winrt::hstring,winrt::hstring,std::map<winrt::hstring,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::Clear(
        __int64 a1)
{
  __int64 v1; // rdi
  volatile signed __int32 *v2; // rbx
  __int64 v3; // rbx
  void *v4; // rcx
  __int64 v5; // rcx
  __int64 result; // rax
  void *v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = (a1 - 16) & -(__int64)(a1 != 0);
  v2 = (volatile signed __int32 *)(v1 + 40);
  try
  {
    std::map<winrt::hstring,winrt::hstring>::map<winrt::hstring,winrt::hstring>(&v7);
    _InterlockedIncrement(v2);
    v3 = -(__int64)v2;
    if ( &v7 != (void **)((v1 & -(__int64)(v3 != 0)) + 48) )
    {
      v4 = v7;
      v7 = *(void **)((v1 & -(__int64)(v3 != 0)) + 0x30);
      *(_QWORD *)((v1 & -(__int64)(v3 != 0)) + 0x30) = v4;
      v5 = v8;
      v8 = *(_QWORD *)((v1 & -(__int64)(v3 != 0)) + 0x38);
      *(_QWORD *)((v1 & -(__int64)(v3 != 0)) + 0x38) = v5;
    }
    std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>(
      &v7,
      (__int64)&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v9);
  }
  return result;
}
