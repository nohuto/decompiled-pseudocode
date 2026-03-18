/*
 * XREFs of ??$_Uninitialized_move@PEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@YAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x18025A10C
 * Callers:
 *     ??$_Emplace_reallocate@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@AEAAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@1@QEAU21@$$QEAU21@@Z @ 0x18000979C (--$_Emplace_reallocate@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@-$vector@U-$pair@PEBVCV.c)
 * Callees:
 *     ??$construct@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@U12@@?$_Default_allocator_traits@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@SAXAEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@1@QEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@1@$$QEAU31@@Z @ 0x18000851C (--$construct@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@U12@@-$_Default_allocator_traits@V.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x1801D70D0 (--$_Destroy_range@V-$allocator@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXP.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<std::pair<CVisual const *,CVisualTreePath const> *,std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(
        detail::liberal_expansion_policy *a1,
        detail::liberal_expansion_policy *a2,
        _QWORD *a3)
{
  detail::liberal_expansion_policy *i; // rdi

  for ( i = a1; i != a2; i = (detail::liberal_expansion_policy *)((char *)i + 64) )
  {
    std::_Default_allocator_traits<std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>::construct<std::pair<CVisual const *,CVisualTreePath const>,std::pair<CVisual const *,CVisualTreePath const>>(
      a1,
      a3,
      i);
    a3 += 8;
  }
  std::_Destroy_range<std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(a3, a3);
  return a3;
}
