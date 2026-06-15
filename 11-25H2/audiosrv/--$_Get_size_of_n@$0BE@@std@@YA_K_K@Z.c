/*
 * XREFs of ??$_Get_size_of_n@$0BE@@std@@YA_K_K@Z @ 0x1800A3A80
 * Callers:
 *     ??$_Allocate_at_least_helper@V?$allocator@U_tagpropertykey@@@std@@@std@@YAPEAU_tagpropertykey@@AEAV?$allocator@U_tagpropertykey@@@0@AEA_K@Z @ 0x18009F148 (--$_Allocate_at_least_helper@V-$allocator@U_tagpropertykey@@@std@@@std@@YAPEAU_tagpropertykey@@A.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009F330 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<20>(unsigned __int64 a1)
{
  if ( a1 > 0xCCCCCCCCCCCCCCCLL )
    std::_Throw_bad_array_new_length();
  return 20 * a1;
}
