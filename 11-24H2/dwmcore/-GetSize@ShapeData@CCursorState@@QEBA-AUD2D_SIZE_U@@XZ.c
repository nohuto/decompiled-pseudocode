/*
 * XREFs of ?GetSize@ShapeData@CCursorState@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1802B2EF8
 * Callers:
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x1802B269C (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 *     ?GetNonRotatedSize@ShapeData@CCursorState@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1802B2EB4 (-GetNonRotatedSize@ShapeData@CCursorState@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?ScaleShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@AEBUD2D_SIZE_U@@@Z @ 0x1802B39BC (-ScaleShape@CCursorState@@AEAA-AV-$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@AEBUD2D_SIZE.c)
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBUD2D_SIZE_U@@W4DXGI_MODE_ROTATION@@_N@Z @ 0x1802B47F4 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@VShapeData@CCursorState@@@std@@AEBUD2D_SIZE_U@@W4.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct D2D_SIZE_U __fastcall CCursorState::ShapeData::GetSize(CCursorState::ShapeData *this, __int64 a2)
{
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 2) + 120LL) + 32LL))(*((_QWORD *)this + 2) + 120LL);
  return (struct D2D_SIZE_U)a2;
}
