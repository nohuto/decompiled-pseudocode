/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAXAEA_K@Z @ 0x180214224
 * Callers:
 *     ?reserve@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAX_K@Z @ 0x1801320E4 (-reserve@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180250B48 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall std::vector<D2D1_GRADIENT_STOP>::_Reallocate<0>(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  void *v5; // rbx

  v3 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2);
  if ( (unsigned __int64)*a2 > 0xCCCCCCCCCCCCCCCLL )
    std::_Throw_bad_array_new_length();
  v5 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(20 * *a2);
  memmove_0(v5, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<D2D1_GRADIENT_STOP>::_Change_array(a1, (__int64)v5, v3, *a2);
}
