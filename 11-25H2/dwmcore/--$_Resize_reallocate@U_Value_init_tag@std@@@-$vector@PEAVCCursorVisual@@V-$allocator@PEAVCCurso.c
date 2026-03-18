/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@PEAVCCursorVisual@@V?$allocator@PEAVCCursorVisual@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18026F374
 * Callers:
 *     ?UnregisterCursorVisual@CGlobalComposition@@QEAAXPEAVCCursorVisual@@@Z @ 0x18026F710 (-UnregisterCursorVisual@CGlobalComposition@@QEAAXPEAVCCursorVisual@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18006BB80 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@_KV?$allocator@_K@std@@@std@@AEBA_K_K@Z @ 0x180100EB0 (-_Calculate_growth@-$vector@_KV-$allocator@_K@std@@@std@@AEBA_K_K@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall std::vector<CCursorVisual *>::_Resize_reallocate<std::_Value_init_tag>(
        const void **a1,
        unsigned __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  SIZE_T size_of; // rax
  char *v7; // rdi

  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v4 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  v5 = std::vector<unsigned __int64>::_Calculate_growth(a1, a2);
  size_of = std::_Get_size_of_n<8>(v5);
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  memset_0(&v7[8 * v4], 0, 8 * (a2 - v4));
  memmove_0(v7, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
  return std::vector<CVectorShape *>::_Change_array((__int64)a1, (__int64)v7, a2, v5);
}
