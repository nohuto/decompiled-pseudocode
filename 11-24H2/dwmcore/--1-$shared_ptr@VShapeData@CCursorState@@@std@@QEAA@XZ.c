/*
 * XREFs of ??1?$shared_ptr@VShapeData@CCursorState@@@std@@QEAA@XZ @ 0x1802687EC
 * Callers:
 *     ??1CCursorState@@UEAA@XZ @ 0x1802B19D8 (--1CCursorState@@UEAA@XZ.c)
 *     ?ClearShape@CCursorState@@UEAAXXZ @ 0x1802B2320 (-ClearShape@CCursorState@@UEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801A41EC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<CCursorState::ShapeData>::~shared_ptr<CCursorState::ShapeData>(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
