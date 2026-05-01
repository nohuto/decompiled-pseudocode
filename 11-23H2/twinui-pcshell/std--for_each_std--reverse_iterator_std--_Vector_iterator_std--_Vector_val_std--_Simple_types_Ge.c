/*
 * XREFs of std::for_each_std::reverse_iterator_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Geometry::CRect_________lambda_d777f40927982a931835616b53bffd7a___ @ 0x18067052C
 * Callers:
 *     ?GetOtherColumns@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x180671E88 (-GetOtherColumns@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV-$vecto.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBUCRect@Geometry@@@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAPEAUCRect@Geometry@@QEAU23@AEBU23@@Z @ 0x1806702D4 (--$_Emplace_reallocate@AEBUCRect@Geometry@@@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geomet.c)
 */

char ***__fastcall std::for_each_std::reverse_iterator_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Geometry::CRect_________lambda_d777f40927982a931835616b53bffd7a___(
        char ***a1,
        __int64 a2,
        _OWORD *a3,
        char **a4)
{
  _OWORD *i; // rsi
  char *v8; // rdx
  char ***result; // rax

  for ( i = (_OWORD *)(a2 - 16); i + 1 != a3; --i )
  {
    v8 = a4[1];
    if ( v8 == a4[2] )
    {
      std::vector<Geometry::CRect>::_Emplace_reallocate<Geometry::CRect const &>(a4, v8, i);
    }
    else
    {
      *(_OWORD *)v8 = *i;
      a4[1] += 16;
    }
  }
  result = a1;
  *a1 = a4;
  return result;
}
