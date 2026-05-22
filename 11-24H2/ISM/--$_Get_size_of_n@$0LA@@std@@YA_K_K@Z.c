/*
 * XREFs of ??$_Get_size_of_n@$0LA@@std@@YA_K_K@Z @ 0x180139D74
 * Callers:
 *     ??$_Emplace_reallocate@AEAUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAPEAUDisplayOcclusionRect@@QEAU2@AEAU2@@Z @ 0x180139BF8 (--$_Emplace_reallocate@AEAUDisplayOcclusionRect@@@-$vector@UDisplayOcclusionRect@@V-$allocator@U.c)
 *     ?_Buy_raw@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAX_K@Z @ 0x1801A2218 (-_Buy_raw@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAX_.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009ADDC (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<176>(unsigned __int64 a1)
{
  if ( a1 > 0x1745D1745D1745DLL )
    std::_Throw_bad_array_new_length();
  return 176 * a1;
}
