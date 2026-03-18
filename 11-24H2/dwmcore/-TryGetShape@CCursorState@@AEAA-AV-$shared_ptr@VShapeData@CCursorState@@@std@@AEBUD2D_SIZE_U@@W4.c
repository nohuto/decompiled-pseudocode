/*
 * XREFs of ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBUD2D_SIZE_U@@W4DXGI_MODE_ROTATION@@_N@Z @ 0x1802B47F4
 * Callers:
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x1802B269C (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 *     ?EnsureMonitorData@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_NAEBVCMILMatrix@@@Z @ 0x1802B2818 (-EnsureMonitorData@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeed.c)
 * Callees:
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801A3F60 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801A41EC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$emplace_back@AEAV?$shared_ptr@VShapeData@CCursorState@@@std@@@?$vector@V?$shared_ptr@VShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@2@@std@@QEAA?A_TAEAV?$shared_ptr@VShapeData@CCursorState@@@1@@Z @ 0x1802B156C (--$emplace_back@AEAV-$shared_ptr@VShapeData@CCursorState@@@std@@@-$vector@V-$shared_ptr@VShapeDa.c)
 *     ??4?$shared_ptr@VShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1802B1ADC (--4-$shared_ptr@VShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x1802B1BBC (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 *     ?GetSize@ShapeData@CCursorState@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1802B2EF8 (-GetSize@ShapeData@CCursorState@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?RotateShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE_ROTATION@@@Z @ 0x1802B3754 (-RotateShape@CCursorState@@AEAA-AV-$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE.c)
 *     ?ScaleShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@AEBUD2D_SIZE_U@@@Z @ 0x1802B39BC (-ScaleShape@CCursorState@@AEAA-AV-$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@AEBUD2D_SIZE.c)
 *     ?SortShapeCache@CCursorState@@AEAAXAEBUD2D_SIZE_U@@W4DXGI_MODE_ROTATION@@_N@Z @ 0x1802B4778 (-SortShapeCache@CCursorState@@AEAAXAEBUD2D_SIZE_U@@W4DXGI_MODE_ROTATION@@_N@Z.c)
 */

std::_Ref_count_base **__fastcall CCursorState::TryGetShape(
        CCursorState *this,
        std::_Ref_count_base **a2,
        struct D2D_SIZE_U *a3,
        enum DXGI_MODE_ROTATION a4,
        char a5)
{
  __int64 *v5; // rsi
  _QWORD *v7; // rdx
  char v11; // r15
  struct D2D_SIZE_U Size; // rax
  std::_Ref_count_base *v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r15
  __int64 *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r14
  struct D2D_SIZE_U v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // r8
  std::_Ref_count_base *v25[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v26; // [rsp+30h] [rbp-10h] BYREF
  std::_Ref_count_base *v27; // [rsp+38h] [rbp-8h]
  char v28; // [rsp+70h] [rbp+30h] BYREF

  v5 = (__int64 *)((char *)this + 224);
  v7 = (_QWORD *)*((_QWORD *)this + 28);
  *(_OWORD *)v25 = 0LL;
  if ( v7 == *((_QWORD **)this + 29) )
    goto LABEL_24;
  std::shared_ptr<CCursorState::ShapeData>::operator=((__int64 *)v25, v7);
  v11 = a5;
  if ( *((_BYTE *)v25[0] + 13) == a5 && *((_DWORD *)v25[0] + 2) == a4 )
  {
    Size = CCursorState::ShapeData::GetSize(v25[0], (__int64)&v28);
    if ( *(_DWORD *)Size.width == a3->width && *(_DWORD *)(*(_QWORD *)&Size + 4LL) == a3->height )
      goto LABEL_24;
  }
  CCursorState::SortShapeCache(this, a3, a4, v11);
  std::shared_ptr<CCursorState::ShapeData>::operator=((__int64 *)v25, (_QWORD *)*v5);
  v13 = v25[0];
  if ( *((_BYTE *)v25[0] + 13) != v11 )
  {
    v14 = CCursorState::AddShadowToShape((__int64)this, &v26, (_QWORD **)this + 22);
    v16 = *std::shared_ptr<CRegion>::operator=(v25, v14);
    if ( v27 )
      std::_Ref_count_base::_Decref(v27);
    if ( !v16 )
      goto LABEL_21;
    std::vector<std::shared_ptr<CCursorState::ShapeData>>::emplace_back<std::shared_ptr<CCursorState::ShapeData> &>(
      v5,
      (__int64)v25,
      v15);
    v13 = v25[0];
  }
  if ( *((_DWORD *)v13 + 2) != a4 )
  {
    v17 = CCursorState::RotateShape((__int64)this, &v26, (int **)v25, a4);
    v19 = *std::shared_ptr<CRegion>::operator=(v25, v17);
    if ( v27 )
      std::_Ref_count_base::_Decref(v27);
    if ( !v19 )
      goto LABEL_21;
    std::vector<std::shared_ptr<CCursorState::ShapeData>>::emplace_back<std::shared_ptr<CCursorState::ShapeData> &>(
      v5,
      (__int64)v25,
      v18);
    v13 = v25[0];
  }
  v20 = CCursorState::ShapeData::GetSize(v13, (__int64)&v28);
  if ( *(_DWORD *)v20.width == a3->width && *(_DWORD *)(*(_QWORD *)&v20 + 4LL) == a3->height )
  {
LABEL_24:
    *a2 = v25[0];
    a2[1] = v25[1];
    return a2;
  }
  v21 = CCursorState::ScaleShape((__int64)this, &v26, v25, (int *)a3);
  v22 = *std::shared_ptr<CRegion>::operator=(v25, v21);
  if ( v27 )
    std::_Ref_count_base::_Decref(v27);
  if ( v22 )
  {
    std::vector<std::shared_ptr<CCursorState::ShapeData>>::emplace_back<std::shared_ptr<CCursorState::ShapeData> &>(
      v5,
      (__int64)v25,
      v23);
    goto LABEL_24;
  }
LABEL_21:
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v25[1] )
    std::_Ref_count_base::_Decref(v25[1]);
  return a2;
}
