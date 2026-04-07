/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180031D6C
 * Callers:
 *     ?CreateTextFormat@CDWriteText@@AEAAJXZ @ 0x1800316C4 (-CreateTextFormat@CDWriteText@@AEAAJXZ.c)
 *     ??$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@0@@Z @ 0x1800F0028 (--$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180032300 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::wstring::wstring(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r8

  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 7LL;
  *(_WORD *)a1 = 0;
  v3 = -1LL;
  do
    ++v3;
  while ( *(_WORD *)(a2 + 2 * v3) );
  std::wstring::assign(a1);
  return a1;
}
