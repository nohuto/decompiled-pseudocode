/*
 * XREFs of ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800B6CE0
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BA220 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18011BB88 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x18011D370 (-CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisua.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18016F850 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x1801CABDC (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z.c)
 *     ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1801E6C30 (-IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     ?IsValid@CCompositionPointLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1801E7C50 (-IsValid@CCompositionPointLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAV1@V?$span@PEAVCMILMatrix@@$0?0@5@@Z @ 0x1801E9DEC (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V-$span@PEAVCVisual@@$0.c)
 *     ?GetCursorShapeBounds@CCursorVisual@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCDesktopTree@@@Z @ 0x180239480 (-GetCursorShapeBounds@CCursorVisual@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAND.c)
 *     ?AddCursorInvalidRects_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAXXZ @ 0x18028D2AC (-AddCursorInvalidRects_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?ComputeCursorToDeviceTransform@CCaptureRenderTarget@@IEAA_NPEAVCVisual@@0PEAVCVisualTree@@PEAVCMILMatrix@@@Z @ 0x18028D47C (-ComputeCursorToDeviceTransform@CCaptureRenderTarget@@IEAA_NPEAVCVisual@@0PEAVCVisualTree@@PEAVC.c)
 *     ?RenderCursors_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028DA5C (-RenderCursors_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAJPEAVCDrawingCon.c)
 *     ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18029A220 (-GetContentBounds@CCursorVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?UpdateLightToWorldForScene@CCompositionLight@@EEAAJPEBVCDrawingContext@@@Z @ 0x18029BE80 (-UpdateLightToWorldForScene@CCompositionLight@@EEAAJPEBVCDrawingContext@@@Z.c)
 * Callees:
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800B6FD0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x1800B74B0 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::GetWorldTransform(
        CVisual *a1,
        const struct CVisualTree *a2,
        int a3,
        __int64 a4,
        _BYTE *a5,
        __int64 a6)
{
  unsigned int v10; // edi
  struct CTreeData *v11; // rbx
  char v12; // si
  __int64 v14; // r8
  __int64 v15; // rax
  _BYTE *v16; // rdx
  __int64 i; // rcx
  _QWORD **v18; // rcx
  _QWORD *v19; // rcx
  _QWORD *j; // rax
  __int64 v21; // rax
  int v22; // eax
  char v23; // al
  char v24; // al
  void *retaddr; // [rsp+48h] [rbp+0h]

  v10 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    v14 = *((_QWORD *)a1 + 29);
    if ( *(int *)v14 < 0 )
    {
      v15 = *(unsigned int *)(v14 + 4);
      v16 = (_BYTE *)(v14 + 8);
      for ( i = 0LL; (unsigned int)i < (unsigned int)v15; ++v16 )
      {
        if ( *v16 == 1 )
          break;
        i = (unsigned int)(i + 1);
      }
      v18 = (unsigned int)i >= (unsigned int)v15 ? 0LL : (_QWORD **)(v15 + 15 + v14 + 8 * i - (((_BYTE)v15 + 15) & 7));
      v19 = *v18;
      if ( v19 )
      {
        for ( j = (_QWORD *)*v19; j != v19; j = (_QWORD *)*j )
        {
          v11 = (struct CTreeData *)(j - 43);
          if ( (const struct CVisualTree *)j[4] == a2 )
            goto LABEL_3;
        }
      }
    }
    goto LABEL_21;
  }
  v11 = (CVisual *)((char *)a1 + 328);
LABEL_3:
  if ( !v11 )
  {
LABEL_21:
    v10 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x6AAu, 0LL);
    return v10;
  }
  v12 = 0;
  if ( a3 != 5 || *((_QWORD *)v11 + 28) && (unsigned __int8)CVisualTree::_IsInTree(a2, a1, 1LL) )
  {
    CVisual::EnsureWorldTransform(a1, a2, v11);
    if ( !*((_QWORD *)v11 + 28) )
      ModuleFailFastForHRESULT(-2003292412, retaddr);
    *(_OWORD *)a4 = *((_OWORD *)v11 + 17);
    *(_OWORD *)(a4 + 16) = *((_OWORD *)v11 + 18);
    *(_OWORD *)(a4 + 32) = *((_OWORD *)v11 + 19);
    *(_OWORD *)(a4 + 48) = *((_OWORD *)v11 + 20);
    *(_DWORD *)(a4 + 64) = *((_DWORD *)v11 + 84);
    v12 = *((_BYTE *)v11 + 11);
    if ( a6 )
    {
      v21 = *((_QWORD *)v11 + 32);
      if ( v21 )
      {
        *(_OWORD *)a6 = *(_OWORD *)v21;
        *(_OWORD *)(a6 + 16) = *(_OWORD *)(v21 + 16);
        *(_OWORD *)(a6 + 32) = *(_OWORD *)(v21 + 32);
        *(_OWORD *)(a6 + 48) = *(_OWORD *)(v21 + 48);
        v22 = *(_DWORD *)(v21 + 64);
      }
      else
      {
        *(_OWORD *)a6 = *((_OWORD *)v11 + 17);
        *(_OWORD *)(a6 + 16) = *((_OWORD *)v11 + 18);
        *(_OWORD *)(a6 + 32) = *((_OWORD *)v11 + 19);
        *(_OWORD *)(a6 + 48) = *((_OWORD *)v11 + 20);
        v22 = *((_DWORD *)v11 + 84);
      }
      *(_DWORD *)(a6 + 64) = v22;
    }
  }
  else
  {
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
    v23 = *(_BYTE *)(a4 + 65);
    *(_BYTE *)(a4 + 64) = -86;
    *(_BYTE *)(a4 + 65) = v23 & 0xC0 | 0x29;
    if ( a6 )
    {
      *(_QWORD *)a6 = 1065353216LL;
      *(_QWORD *)(a6 + 8) = 0LL;
      *(_DWORD *)(a6 + 16) = 0;
      *(_QWORD *)(a6 + 20) = 1065353216LL;
      *(_QWORD *)(a6 + 28) = 0LL;
      *(_DWORD *)(a6 + 36) = 0;
      *(_QWORD *)(a6 + 40) = 1065353216LL;
      *(_QWORD *)(a6 + 48) = 0LL;
      *(_DWORD *)(a6 + 56) = 0;
      *(_DWORD *)(a6 + 60) = 1065353216;
      v24 = *(_BYTE *)(a6 + 65);
      *(_BYTE *)(a6 + 64) = -86;
      *(_BYTE *)(a6 + 65) = v24 & 0xC0 | 0x29;
    }
  }
  if ( a5 )
    *a5 = v12;
  return v10;
}
