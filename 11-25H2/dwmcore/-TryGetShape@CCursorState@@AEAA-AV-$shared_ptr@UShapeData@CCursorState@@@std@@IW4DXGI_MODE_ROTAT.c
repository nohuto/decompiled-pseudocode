/*
 * XREFs of ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTATION@@_N@Z @ 0x1802BDBC4
 * Callers:
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x1802BC170 (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 *     ?TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@VCMILMatrix@@_N@Z @ 0x1802BD8E8 (-TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UN.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18010363C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180229D14 (--4-$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x1802BAFD4 (std--_Sort_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_4f96f9abf6f.c)
 *     ??$emplace_back@AEAV?$shared_ptr@UShapeData@CCursorState@@@std@@@?$vector@V?$shared_ptr@UShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@2@@std@@QEAA?A_TAEAV?$shared_ptr@UShapeData@CCursorState@@@1@@Z @ 0x1802BB170 (--$emplace_back@AEAV-$shared_ptr@UShapeData@CCursorState@@@std@@@-$vector@V-$shared_ptr@UShapeDa.c)
 *     ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1802BB668 (--4-$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x1802BB74C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 *     ?RotateShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE_ROTATION@@@Z @ 0x1802BCCCC (-RotateShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE.c)
 *     ?ScaleShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@I@Z @ 0x1802BCF34 (-ScaleShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@I@Z.c)
 */

__int64 __fastcall CCursorState::TryGetShape(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  __int64 *v5; // rdi
  _QWORD *v7; // rdx
  std::_Ref_count_base *v11; // rax
  char v12; // r12
  char *v13; // rdx
  __int64 *v14; // rcx
  __int64 v15; // r8
  __int64 *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r12
  __int64 *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r14
  __int64 *v22; // rax
  __int64 v23; // rsi
  __int64 v24; // r8
  int v26; // [rsp+20h] [rbp-40h] BYREF
  int v27; // [rsp+28h] [rbp-38h] BYREF
  std::_Ref_count_base *v28[2]; // [rsp+30h] [rbp-30h] BYREF
  char *v29; // [rsp+40h] [rbp-20h] BYREF
  std::_Ref_count_base *v30; // [rsp+48h] [rbp-18h]
  int *v31; // [rsp+50h] [rbp-10h]
  char v32; // [rsp+90h] [rbp+30h] BYREF

  v5 = (__int64 *)(a1 + 224);
  v7 = *(_QWORD **)(a1 + 224);
  *(_OWORD *)v28 = 0LL;
  if ( v7 == *(_QWORD **)(a1 + 232) )
    goto LABEL_22;
  std::shared_ptr<CCursorState::ShapeData>::operator=((__int64 *)v28, v7);
  v11 = v28[0];
  v12 = a5;
  if ( *((_BYTE *)v28[0] + 17) == a5 && *((_DWORD *)v28[0] + 2) == a4 && *((_DWORD *)v28[0] + 3) == a3 )
    goto LABEL_23;
  v13 = *(char **)(a1 + 232);
  v14 = (__int64 *)*v5;
  v29 = &v32;
  v15 = (__int64)&v13[-*v5];
  v30 = (std::_Ref_count_base *)&v26;
  v31 = &v27;
  v32 = a5;
  v27 = a4;
  v26 = a3;
  std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
    v14,
    v13,
    v15 >> 4,
    (__int64)&v29);
  std::shared_ptr<CCursorState::ShapeData>::operator=((__int64 *)v28, (_QWORD *)*v5);
  v11 = v28[0];
  if ( *((_BYTE *)v28[0] + 17) != v12 )
  {
    v16 = CCursorState::AddShadowToShape(a1, &v29, (_QWORD **)(a1 + 176));
    v18 = *std::shared_ptr<CCursorState::ShapeData>::operator=(v28, v16);
    if ( v30 )
      std::_Ref_count_base::_Decref(v30);
    if ( !v18 )
      goto LABEL_19;
    std::vector<std::shared_ptr<CCursorState::ShapeData>>::emplace_back<std::shared_ptr<CCursorState::ShapeData> &>(
      v5,
      (__int64)v28,
      v17);
    v11 = v28[0];
  }
  if ( *((_DWORD *)v11 + 2) != a4 )
  {
    v19 = CCursorState::RotateShape(a1, &v29, (int **)v28, a4);
    v21 = *std::shared_ptr<CCursorState::ShapeData>::operator=(v28, v19);
    if ( v30 )
      std::_Ref_count_base::_Decref(v30);
    if ( !v21 )
      goto LABEL_19;
    std::vector<std::shared_ptr<CCursorState::ShapeData>>::emplace_back<std::shared_ptr<CCursorState::ShapeData> &>(
      v5,
      (__int64)v28,
      v20);
    v11 = v28[0];
  }
  if ( *((_DWORD *)v11 + 3) == a3 )
  {
LABEL_23:
    *(_QWORD *)a2 = v11;
    *(std::_Ref_count_base **)(a2 + 8) = v28[1];
    return a2;
  }
  v22 = CCursorState::ScaleShape(a1, &v29, (__int64 *)v28, a3);
  v23 = *std::shared_ptr<CCursorState::ShapeData>::operator=(v28, v22);
  if ( v30 )
    std::_Ref_count_base::_Decref(v30);
  if ( v23 )
  {
    std::vector<std::shared_ptr<CCursorState::ShapeData>>::emplace_back<std::shared_ptr<CCursorState::ShapeData> &>(
      v5,
      (__int64)v28,
      v24);
LABEL_22:
    v11 = v28[0];
    goto LABEL_23;
  }
LABEL_19:
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( v28[1] )
    std::_Ref_count_base::_Decref(v28[1]);
  return a2;
}
