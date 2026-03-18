/*
 * XREFs of ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800C35D0
 * Callers:
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180048BB8 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2710 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAV1@V?$span@PEAVCMILMatrix@@$0?0@5@@Z @ 0x180164598 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V-$span@PEAVCVisual@@$0.c)
 *     ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x1801659D0 (-CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisua.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180168C64 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x1801B911C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z.c)
 *     ?ComputeCursorToDeviceTransform@CCaptureRenderTarget@@IEAA_NPEAVCVisual@@0PEAVCVisualTree@@PEAVCMILMatrix@@@Z @ 0x1802822C4 (-ComputeCursorToDeviceTransform@CCaptureRenderTarget@@IEAA_NPEAVCVisual@@0PEAVCVisualTree@@PEAVC.c)
 *     ?UpdateLightToWorldForScene@CCompositionLight@@EEAAJPEBVCDrawingContext@@@Z @ 0x18028F720 (-UpdateLightToWorldForScene@CCompositionLight@@EEAAJPEBVCDrawingContext@@@Z.c)
 *     ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180290020 (-GetContentBounds@CCursorVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?GetHardwareShapeBounds@CCursorVisual@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCDesktopTree@@@Z @ 0x18029057C (-GetHardwareShapeBounds@CCursorVisual@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295EC0 (-GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x180037500 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z @ 0x1800C3810 (-GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800C39A0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::GetWorldTransform(
        _QWORD *a1,
        const struct CVisualTree *a2,
        int a3,
        __int64 a4,
        bool *a5,
        struct CMILMatrix *a6)
{
  struct CTreeData *v10; // rbx
  __int64 result; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  _BYTE *v14; // rdx
  __int64 i; // rcx
  _QWORD **v16; // rcx
  _QWORD *v17; // rcx
  _QWORD *j; // rax
  struct CMILMatrix *v19; // rcx
  char v20; // al
  char v21; // al
  bool v22; // [rsp+58h] [rbp+10h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    v12 = a1[29];
    if ( *(int *)v12 < 0 )
    {
      v13 = *(unsigned int *)(v12 + 4);
      v14 = (_BYTE *)(v12 + 8);
      for ( i = 0LL; (unsigned int)i < (unsigned int)v13; ++v14 )
      {
        if ( *v14 == 1 )
          break;
        i = (unsigned int)(i + 1);
      }
      v16 = (unsigned int)i >= (unsigned int)v13 ? 0LL : (_QWORD **)(v13 + 15 + v12 + 8 * i - (((_BYTE)v13 + 15) & 7));
      v17 = *v16;
      if ( v17 )
      {
        for ( j = (_QWORD *)*v17; j != v17; j = (_QWORD *)*j )
        {
          v10 = (struct CTreeData *)(j - 44);
          if ( (const struct CVisualTree *)j[4] == a2 )
            goto LABEL_3;
        }
      }
    }
    goto LABEL_19;
  }
  v10 = (struct CTreeData *)(a1 + 41);
LABEL_3:
  if ( !v10 )
  {
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x6AAu, 0LL);
    return 2291674884LL;
  }
  v22 = 0;
  if ( a3 != 5 || *((_QWORD *)v10 + 28) && CVisualTree::_IsInTree((__int64)a2, (__int64)a1, 1) )
  {
    CVisual::EnsureWorldTransform((CVisual *)a1, a2, v10);
    CTreeData::GetWorldTransform(v10, (struct CMILMatrix *)a4, &v22, a6);
  }
  else
  {
    v19 = a6;
    *(_QWORD *)a4 = 1065353216LL;
    *(_QWORD *)(a4 + 8) = 0LL;
    *(_DWORD *)(a4 + 16) = 0;
    *(_QWORD *)(a4 + 20) = 1065353216LL;
    *(_QWORD *)(a4 + 28) = 0LL;
    *(_DWORD *)(a4 + 36) = 0;
    *(_QWORD *)(a4 + 40) = 1065353216LL;
    *(_QWORD *)(a4 + 48) = 0LL;
    *(_DWORD *)(a4 + 56) = 0;
    *(_DWORD *)(a4 + 60) = 1065353216;
    v20 = *(_BYTE *)(a4 + 65);
    *(_BYTE *)(a4 + 64) = -86;
    *(_BYTE *)(a4 + 65) = v20 & 0xC0 | 0x29;
    if ( v19 )
    {
      *(_QWORD *)v19 = 1065353216LL;
      *((_QWORD *)v19 + 1) = 0LL;
      *((_DWORD *)v19 + 4) = 0;
      *(_QWORD *)((char *)v19 + 20) = 1065353216LL;
      *(_QWORD *)((char *)v19 + 28) = 0LL;
      *((_DWORD *)v19 + 9) = 0;
      *((_QWORD *)v19 + 5) = 1065353216LL;
      *((_QWORD *)v19 + 6) = 0LL;
      *((_DWORD *)v19 + 14) = 0;
      *((_DWORD *)v19 + 15) = 1065353216;
      v21 = *((_BYTE *)v19 + 65);
      *((_BYTE *)v19 + 64) = -86;
      *((_BYTE *)v19 + 65) = v21 & 0xC0 | 0x29;
    }
  }
  result = 0LL;
  if ( a5 )
    *a5 = v22;
  return result;
}
