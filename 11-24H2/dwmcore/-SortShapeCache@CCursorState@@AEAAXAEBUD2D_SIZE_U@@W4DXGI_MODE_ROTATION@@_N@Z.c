/*
 * XREFs of ?SortShapeCache@CCursorState@@AEAAXAEBUD2D_SIZE_U@@W4DXGI_MODE_ROTATION@@_N@Z @ 0x1802B4778
 * Callers:
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBUD2D_SIZE_U@@W4DXGI_MODE_ROTATION@@_N@Z @ 0x1802B47F4 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@VShapeData@CCursorState@@@std@@AEBUD2D_SIZE_U@@W4.c)
 * Callees:
 *     std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_39668c2dc6e40fe158f11373301c566a_____ @ 0x1802B13CC (std--_Sort_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_39668c2dc6e.c)
 */

void __fastcall CCursorState::SortShapeCache(
        CCursorState *this,
        const struct D2D_SIZE_U *a2,
        enum DXGI_MODE_ROTATION a3,
        char a4)
{
  __int64 *v4; // rdx
  __int64 *v5; // rcx
  _QWORD v6[4]; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v7; // [rsp+50h] [rbp+10h] BYREF
  enum DXGI_MODE_ROTATION v8; // [rsp+60h] [rbp+20h] BYREF
  char v9; // [rsp+68h] [rbp+28h] BYREF

  v9 = a4;
  v8 = a3;
  v7 = (unsigned __int64)*a2;
  if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
    v7 = __PAIR64__(v7, HIDWORD(v7));
  v4 = (__int64 *)*((_QWORD *)this + 29);
  v5 = (__int64 *)*((_QWORD *)this + 28);
  v6[0] = &v9;
  v6[1] = &v7;
  v6[2] = &v8;
  std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_39668c2dc6e40fe158f11373301c566a_____(
    v5,
    v4,
    ((char *)v4 - (char *)v5) >> 4,
    (__int64)v6);
}
