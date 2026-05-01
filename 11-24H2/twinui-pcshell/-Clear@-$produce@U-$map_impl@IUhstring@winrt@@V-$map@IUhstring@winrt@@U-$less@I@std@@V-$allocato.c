/*
 * XREFs of ?Clear@?$produce@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x18064A990
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@QEAA@XZ @ 0x180648894 (--0-$map@IUhstring@winrt@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIUhstring@winrt@@@std@@@4@@std.c)
 *     ??1?$_Tree@V?$_Tmap_traits@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180649880 (--1-$_Tree@V-$_Tmap_traits@_KUhstring@winrt@@U-$less@_K@std@@V-$allocator@U-$pair@$$CB_KUhstring.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::impl::map_impl<unsigned int,winrt::hstring,std::map<unsigned int,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<unsigned int,winrt::hstring>>::Clear(
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
    std::map<unsigned int,winrt::hstring>::map<unsigned int,winrt::hstring>(&v7);
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
    std::_Tree<std::_Tmap_traits<unsigned __int64,winrt::hstring,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,winrt::hstring>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,winrt::hstring,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,winrt::hstring>>,0>>(&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v9);
  }
  return result;
}
