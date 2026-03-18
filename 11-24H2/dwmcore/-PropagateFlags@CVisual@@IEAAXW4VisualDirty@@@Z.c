/*
 * XREFs of ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20
 * Callers:
 *     ?ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTOUCHTARGETRECT@@@Z @ 0x18000C9E4 (-ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTOUCHTARGET.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x18000CD84 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?OnAlphaMarginsChanging@CWindowNode@@AEAAJAEBU_MARGINS@@@Z @ 0x1800274DC (-OnAlphaMarginsChanging@CWindowNode@@AEAAJAEBU_MARGINS@@@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z @ 0x180031108 (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z.c)
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x180031468 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800315A0 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?GetTransformParentForValidation@CVisual@@IEAAPEAV1@PEBVCVisualTree@@PEA_N@Z @ 0x180033570 (-GetTransformParentForValidation@CVisual@@IEAAPEAV1@PEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x180037894 (-ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180037BE0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x1800392E8 (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x18003B380 (-CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 *     ?DirtyBoundsForTransformParentChild@CPreWalkVisual@@CAXPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x18003B800 (-DirtyBoundsForTransformParentChild@CPreWalkVisual@@CAXPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 *     ?OnSourceModificationsChanged@CWindowNode@@AEAAXXZ @ 0x1800492F0 (-OnSourceModificationsChanged@CWindowNode@@AEAAXXZ.c)
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1800495FC (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AFF0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ @ 0x18004B308 (-ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ.c)
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x18006AD90 (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETW.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FDF0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180095328 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x18009588C (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSI.c)
 *     ?ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSIZE@@@Z @ 0x1800BE8B8 (-ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSIZE@@@Z.c)
 *     ?OnMonitorTargetsChanged@CGlobalComposition@@UEAAXXZ @ 0x180102A40 (-OnMonitorTargetsChanged@CGlobalComposition@@UEAAXXZ.c)
 *     ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z @ 0x1801328E4 (-SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x180133470 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x180181100 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x180182A8C (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z @ 0x1801A159C (-SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z.c)
 *     ?DirtyOnNewData@CVisual@@QEAAXXZ @ 0x1801A2B28 (-DirtyOnNewData@CVisual@@QEAAXXZ.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x1801D78F4 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1801E1DDC (-ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVE.c)
 *     ?SetFlipExSurfaceClip@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJPEAVCGeometry@@@Z @ 0x1801E5628 (-SetFlipExSurfaceClip@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?OnIsClipToDirtyChanged@CWindowNode@@AEAAXXZ @ 0x1801E56E4 (-OnIsClipToDirtyChanged@CWindowNode@@AEAAXXZ.c)
 *     ?SetSpriteClip@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJPEAVCRegionGeometry@@@Z @ 0x1801E5750 (-SetSpriteClip@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJPEAVCRegionGeometry@@@Z.c)
 *     ?SetContentSize@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJUD2D_SIZE_U@@@Z @ 0x1801E57E8 (-SetContentSize@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJUD2D_SIZE_U@@@Z.c)
 *     ?SetContentRelativeWindowRect@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801E5844 (-SetContentRelativeWindowRect@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJV-$TMilRect.c)
 *     ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x1801EFFFC (-ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPTIONS@@@Z.c)
 *     ?ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRENDEROPTIONS@@@Z @ 0x1801FC4F0 (-ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRENDEROPTIONS.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1802001D8 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPA.c)
 *     ?InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z @ 0x1802027F4 (-InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x18020B3AC (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@.c)
 *     ?SetMaximizedClipMargins@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJU_MARGINS@@@Z @ 0x18020F24C (-SetMaximizedClipMargins@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJU_MARGINS@@@Z.c)
 *     ?ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUDESUBTREE@@@Z @ 0x180211664 (-ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUDESUBTR.c)
 *     ?ProcessSetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACE@@@Z @ 0x1802168C8 (-ProcessSetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLU.c)
 *     ?ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETSHADOW@@@Z @ 0x18021BD70 (-ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETSHADOW@@@Z.c)
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x18021C070 (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 *     ?SetIsLayoutRTL@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z @ 0x18022827C (-SetIsLayoutRTL@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z.c)
 *     ?ProcessSetBlurredWallpaperSurfaceRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACERECT@@@Z @ 0x180229834 (-ProcessSetBlurredWallpaperSurfaceRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SE.c)
 *     ?OnIsCursorChanged@CWindowNode@@AEAAXXZ @ 0x180245D98 (-OnIsCursorChanged@CWindowNode@@AEAAXXZ.c)
 *     ?ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_RESAMPLEMODE@@@Z @ 0x18024FE5C (-ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_RESAMPLEMODE@@@Z.c)
 *     ?AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x18028B46C (-AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_FORCELOWCOLOR@@@Z @ 0x18028BA50 (-ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_FORCELOWCOLOR@@@Z.c)
 *     ?ProcessProtectContent@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_PROTECTCONTENT@@@Z @ 0x18028BA84 (-ProcessProtectContent@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_PROTECTCONTENT@@@Z.c)
 *     ?ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x18028BACC (-ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCOLORTRANSFO.c)
 *     ?ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETHEATMAPMODE@@@Z @ 0x18028BD04 (-ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETHEATMAPMODE@@@Z.c)
 *     ?ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETREDRAWREGIONMODE@@@Z @ 0x18028BDB4 (-ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETREDRAWREGI.c)
 *     ?RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x18028C0B4 (-RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?SetPixelSnappingEnabled@CVisual@@QEAAX_N@Z @ 0x18028C214 (-SetPixelSnappingEnabled@CVisual@@QEAAX_N@Z.c)
 *     ?ProcessStateChanges@CCursorVisual@@QEAAX_K@Z @ 0x18029085C (-ProcessStateChanges@CCursorVisual@@QEAAX_K@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::PropagateFlags(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  BOOL v5; // r12d
  __int64 (__fastcall *v6)(_QWORD, _QWORD, _QWORD); // r8
  struct CProcessAttribution *(__fastcall *v7)(CResource *); // rax
  __int64 result; // rax
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rax
  struct CProcessAttribution *(__fastcall *v12)(CWindowNode *__hidden); // rax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rbp
  __int64 v18; // rcx
  unsigned __int64 *v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  void (__fastcall *v22)(unsigned __int64 *, BOOL, __int64); // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // r14
  __int64 v25; // rbp
  __int64 v26; // rcx
  unsigned __int64 *v27; // rcx
  unsigned __int64 v28; // rax
  void (__fastcall *v29)(unsigned __int64 *, BOOL, __int64); // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // [rsp+60h] [rbp+8h]
  unsigned int v33; // [rsp+68h] [rbp+10h]

  v2 = *(_QWORD *)(a1 + 32);
  v3 = a2 | 0x10;
  if ( (a2 & 1) == 0 )
    v3 = a2;
  v5 = !(a2 & 1);
  v33 = v3;
  if ( (v2 & 2) != 0 )
    v2 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v2) = v2 & 1;
  v6 = CVisualSurface::NotifyOnChanged;
  if ( (_DWORD)v2 )
  {
    v23 = 0LL;
    v24 = (unsigned int)v2;
    v25 = 16LL;
    do
    {
      v26 = *(_QWORD *)(a1 + 32);
      if ( (v26 & 2) != 0 )
      {
        v27 = (unsigned __int64 *)(v26 & 0xFFFFFFFFFFFFFFFCuLL);
        v28 = *v27;
      }
      else
      {
        v28 = *(_QWORD *)(a1 + 32) & 1LL;
        v27 = (unsigned __int64 *)(v26 & 0xFFFFFFFFFFFFFFFCuLL);
      }
      if ( v23 >= v28 )
      {
        v27 = 0LL;
      }
      else if ( v28 != 1 )
      {
        _mm_lfence();
        v27 = *(unsigned __int64 **)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + v25);
      }
      if ( v27 == *(unsigned __int64 **)(a1 + 88) )
        goto LABEL_65;
      v29 = *(void (__fastcall **)(unsigned __int64 *, BOOL, __int64))(*v27 + 80);
      v30 = v5;
      if ( (char *)v29 == (char *)CCachedVisualImage::NotifyOnChanged )
      {
        v31 = a1;
        if ( v5 )
          v30 = 6LL;
      }
      else
      {
        v31 = a1;
        if ( (char *)v29 != (char *)CVisualSurface::NotifyOnChanged )
        {
          v29(v27, v5, a1);
          goto LABEL_64;
        }
        if ( a1 == v27[9] )
          v30 = 6LL;
      }
      CResource::NotifyOnChanged(v27, v30, v31);
LABEL_64:
      v6 = CVisualSurface::NotifyOnChanged;
LABEL_65:
      ++v23;
      v25 += 8LL;
      --v24;
    }
    while ( v24 );
  }
  v7 = *(struct CProcessAttribution *(__fastcall **)(CResource *))(*(_QWORD *)a1 + 160LL);
  if ( v7 == CResource::GetProcessAttributionNoRef )
  {
    result = *(_QWORD *)(a1 + 56);
    if ( result )
      v9 = *(_QWORD *)(result + 64);
    else
      v9 = 0LL;
  }
  else
  {
    result = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v7)(
               a1,
               CCachedVisualImage::NotifyOnChanged,
               CVisualSurface::NotifyOnChanged);
    v9 = result;
  }
  *(_BYTE *)(a1 + 96) |= v3;
  v32 = v9;
  if ( (v3 & 0xC) != 0 )
  {
    v3 = v3 & 0xFFFFFF73 | 0x80;
    v33 = v3;
    if ( v9 )
      ++*(_DWORD *)(v9 + 28);
  }
  if ( (v3 & 2) != 0 )
  {
    v3 = v3 & 0xFFFFFFBD | 0x40;
    v33 = v3;
  }
  v10 = *(_QWORD *)(a1 + 88);
  if ( (*(_BYTE *)(a1 + 106) & 0x40) != 0 )
  {
    while ( 1 )
    {
      if ( !v10 )
        return result;
      result = v3 & *(char *)(v10 + 96);
      if ( (_DWORD)result == v3 )
        return result;
      *(_BYTE *)(v10 + 96) |= v3;
      v11 = *(_QWORD *)(v10 + 32);
      if ( (v11 & 2) != 0 )
        v11 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v11) = v11 & 1;
      if ( (_DWORD)v11 )
        break;
LABEL_20:
      v12 = *(struct CProcessAttribution *(__fastcall **)(CWindowNode *__hidden))(*(_QWORD *)v10 + 160LL);
      if ( v12 != CResource::GetProcessAttributionNoRef )
      {
        if ( v12 == CWindowNode::GetProcessAttributionNoRef )
          v14 = *(_QWORD *)(v10 + 824);
        else
          v14 = ((__int64 (__fastcall *)(__int64, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), _QWORD))v12)(
                  v10,
                  CWindowNode::GetProcessAttributionNoRef,
                  v6);
LABEL_23:
        if ( v14 && v9 != v14 )
        {
          if ( (v3 & 0x80u) != 0 )
            ++*(_DWORD *)(v14 + 24);
          v9 = v14;
          v32 = v14;
        }
        goto LABEL_25;
      }
      v13 = *(_QWORD *)(v10 + 56);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 64);
        goto LABEL_23;
      }
LABEL_25:
      result = v10;
      v10 = *(_QWORD *)(v10 + 88);
      if ( (*(_BYTE *)(result + 106) & 0x40) == 0 )
        return result;
    }
    v15 = 0LL;
    v16 = (unsigned int)v11;
    v17 = 16LL;
    while ( 1 )
    {
      v18 = *(_QWORD *)(v10 + 32);
      if ( (v18 & 2) != 0 )
      {
        v19 = (unsigned __int64 *)(v18 & 0xFFFFFFFFFFFFFFFCuLL);
        v20 = *v19;
      }
      else
      {
        v20 = *(_QWORD *)(v10 + 32) & 1LL;
        v19 = (unsigned __int64 *)(v18 & 0xFFFFFFFFFFFFFFFCuLL);
      }
      if ( v15 >= v20 )
      {
        v19 = 0LL;
      }
      else if ( v20 != 1 )
      {
        _mm_lfence();
        v19 = *(unsigned __int64 **)((*(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + v17);
      }
      if ( v19 == *(unsigned __int64 **)(v10 + 88) )
        goto LABEL_42;
      v21 = v5;
      v22 = *(void (__fastcall **)(unsigned __int64 *, BOOL, __int64))(*v19 + 80);
      if ( (char *)v22 == (char *)CCachedVisualImage::NotifyOnChanged )
      {
        if ( v5 )
          v21 = 6LL;
      }
      else
      {
        if ( (char *)v22 != (char *)CVisualSurface::NotifyOnChanged )
        {
          v22(v19, v5, v10);
          goto LABEL_42;
        }
        if ( v10 == v19[9] )
          v21 = 6LL;
      }
      CResource::NotifyOnChanged(v19, v21, v10);
LABEL_42:
      ++v15;
      v17 += 8LL;
      if ( !--v16 )
      {
        v3 = v33;
        v9 = v32;
        goto LABEL_20;
      }
    }
  }
  return result;
}
