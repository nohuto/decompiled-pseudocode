/*
 * XREFs of ??$make_shared@VShapeData@CCursorState@@$$V@std@@YA?AV?$shared_ptr@VShapeData@CCursorState@@@0@XZ @ 0x1802B1658
 * Callers:
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x1802B1BBC (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 *     ?RotateShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE_ROTATION@@@Z @ 0x1802B3754 (-RotateShape@CCursorState@@AEAA-AV-$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE.c)
 *     ?ScaleShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@AEBUD2D_SIZE_U@@@Z @ 0x1802B39BC (-ScaleShape@CCursorState@@AEAA-AV-$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@AEBUD2D_SIZE.c)
 *     ?SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z @ 0x1802B4380 (-SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<CCursorState::ShapeData,>(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdx

  v2 = operator new(0x28uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<CCursorState::ShapeData>::`vftable';
    *((_OWORD *)v2 + 1) = 0LL;
    *((_QWORD *)v2 + 4) = 0LL;
    *((_QWORD *)v2 + 4) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 4;
  return a1;
}
