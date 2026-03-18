/*
 * XREFs of ?reserve@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAX_K@Z @ 0x1801320E4
 * Callers:
 *     ?FlattenStops@CGradientBrush@@AEAAXXZ @ 0x180132010 (-FlattenStops@CGradientBrush@@AEAAXXZ.c)
 * Callees:
 *     ??$_Reallocate@$0A@@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAXAEA_K@Z @ 0x180214224 (--$_Reallocate@$0A@@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@.c)
 */

unsigned __int64 __fastcall std::vector<D2D1_GRADIENT_STOP>::reserve(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  result = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[2] - *a1) >> 2);
  if ( a2 > result )
  {
    if ( a2 > 0xCCCCCCCCCCCCCCCLL )
      std::_Xlength_error("vector too long");
    return std::vector<D2D1_GRADIENT_STOP>::_Reallocate<0>(a1, &v3);
  }
  return result;
}
