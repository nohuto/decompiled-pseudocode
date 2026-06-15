/*
 * XREFs of ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x140016D5C
 * Callers:
 *     ?GetModuleName@@YAXAEBU_GUID@@PEAUIComCatalog@@PEAUIPropertyStore@@PEAPEAG3@Z @ 0x140016868 (-GetModuleName@@YAXAEBU_GUID@@PEAUIComCatalog@@PEAUIPropertyStore@@PEAPEAG3@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@_K1AEBV?$allocator@G@1@@Z @ 0x140016D80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@_K1AEBV-$allocator@G.c)
 */

__int64 __fastcall std::wstring::substr(__int64 a1, __int64 a2)
{
  std::wstring::wstring(a2, a1);
  return a2;
}
