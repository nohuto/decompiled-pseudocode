/*
 * XREFs of ??1?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAA@XZ @ 0x1800A22F0
 * Callers:
 *     _CWindowBorder::CCachedBorderBrush::GetBorderBrush_::_1_::dtor$0 @ 0x180067DA0 (_CWindowBorder--CCachedBorderBrush--GetBorderBrush_--_1_--dtor$0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180033668 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<CWindowBorder::CCachedBorderBrush>::~shared_ptr<CWindowBorder::CCachedBorderBrush>(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
