/*
 * XREFs of ?Append@?$produce@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHUstruct_Windows_UI_WindowId@23@@Z @ 0x1806655B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAPEA_KQEA_K$$QEA_K@Z @ 0x18021940C (--$_Emplace_reallocate@_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAPEA_KQEA_K$$QEA_K@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>>::Append(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  _BYTE *v4; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v2 = (a1 - 16) & -(__int64)(a1 != 0);
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 40));
  v3 = v2 & ((unsigned __int128)-(__int128)(unsigned __int64)(v2 + 40) >> 64);
  v4 = *(_BYTE **)(v3 + 0x38);
  if ( v4 == *(_BYTE **)(v3 + 64) )
  {
    try
    {
      std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64>((const void **)(v3 + 48), v4, &v7);
    }
    catch ( ... )
    {
      return (unsigned int)*winrt::to_hresult(&v6);
    }
  }
  else
  {
    *(_QWORD *)v4 = v7;
    *(_QWORD *)(v3 + 56) += 8LL;
  }
  return 0LL;
}
