/*
 * XREFs of ??$_Construct_in_place@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$CComHeapPtr@G@ATL@@@std@@YAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEAV?$CComHeapPtr@G@ATL@@@Z @ 0x1800B5BA0
 * Callers:
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x1800B62C4 (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std@@YA-AV-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Construct_in_place<std::wstring,ATL::CComHeapPtr<unsigned short> &>(__int64 a1, __int64 *a2)
{
  return std::wstring::wstring(a1, *a2);
}
