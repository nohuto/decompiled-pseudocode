/*
 * XREFs of ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B4B40
 * Callers:
 *     ?ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSURFACE@@@Z @ 0x180022644 (-ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSURFACE.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x180079AD0 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z @ 0x1800B3570 (-ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z @ 0x1800B4150 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800B4E20 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800B8300 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContex.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x1800BA8B0 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeCont.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800E8820 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W.c)
 *     ?SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z @ 0x180113838 (-SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z.c)
 *     ?SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBV3@PEBVCSurfaceRenderStrategy@1@@Z @ 0x180113FBC (-SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x18012D9F0 (-ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18012DD40 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x18012F074 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MASKBRUSH_SETSOURCE@@@Z @ 0x18012F2D0 (-ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MASKBRUSH_SETSOURCE@@@Z.c)
 *     ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z @ 0x18012F9F4 (-SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z.c)
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x180130214 (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180131C1C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z @ 0x1801380F0 (-InsertChild@CVisual@@IEAAJPEAV1@0_N@Z.c)
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x1801B97AC (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z.c)
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUD2D_RECT_F@@@Z @ 0x1801ECF34 (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUD2.c)
 *     ?ProcessSetMask@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MASKBRUSH_SETMASK@@@Z @ 0x1801F7414 (-ProcessSetMask@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MASKBRUSH_SETMASK@@@Z.c)
 *     ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x1801FACB0 (-RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z @ 0x1802274E4 (-Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCP.c)
 *     ?RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z @ 0x180297388 (-RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall CPtrArrayBase::InsertAt(CPtrArrayBase *this, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 *v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned int v9; // ebp
  __int64 v11; // rdx
  HANDLE ProcessHeap; // rax
  unsigned __int64 v13; // rax
  double v14; // xmm0_8
  double v15; // xmm0_8
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rax
  unsigned __int64 v20; // rbx
  int v21; // r9d
  unsigned __int64 v22; // r15
  __int64 v23; // rcx
  unsigned int v24; // [rsp+20h] [rbp-38h]

  v3 = *(_QWORD *)this;
  if ( (*(_QWORD *)this & 2) != 0 )
  {
    v7 = (unsigned __int64 *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
    v8 = *v7;
  }
  else
  {
    v8 = *(_QWORD *)this & 1LL;
    v7 = (unsigned __int64 *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  if ( a3 > v8 )
  {
    v24 = 67;
LABEL_10:
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, v24, 0LL);
    return v9;
  }
  v9 = 0;
  if ( (a2 & 3) != 0 )
  {
    v24 = 75;
    goto LABEL_10;
  }
  if ( !v8 )
  {
    *(_QWORD *)this = a2 | 1;
    return v9;
  }
  if ( v8 == 1 )
  {
    ProcessHeap = GetProcessHeap();
    v13 = (unsigned __int64)HeapAlloc(ProcessHeap, 0, 0x30uLL);
    if ( v13 )
    {
      *(_QWORD *)v13 = 2LL;
      *(_QWORD *)(v13 + 8) = 4LL;
      *(_QWORD *)(v13 + 8 * (3 - a3)) = v7;
      *(_QWORD *)(v13 + 8 * a3 + 16) = a2;
      *(_QWORD *)this = v13 | 2;
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x61u, 0LL);
    }
    return v9;
  }
  v11 = v7[1];
  if ( v8 != v11 )
  {
    if ( a3 < v8 )
      memmove_0(&v7[a3 + 3], &v7[a3 + 2], 8 * (v8 - a3));
    v7[a3 + 2] = a2;
    ++*v7;
    return v9;
  }
  if ( v11 < 0 )
  {
    v23 = v7[1] & 1 | ((unsigned __int64)v11 >> 1);
    v14 = (double)(int)v23 + (double)(int)v23;
  }
  else
  {
    v14 = (double)(int)v11;
  }
  v15 = v14 * 1.5;
  v16 = 0LL;
  if ( v15 >= 9.223372036854776e18 )
  {
    v15 = v15 - 9.223372036854776e18;
    if ( v15 < 9.223372036854776e18 )
      v16 = 0x8000000000000000uLL;
  }
  v17 = v16 + (unsigned int)(int)v15;
  v18 = v17 + 2;
  if ( v17 + 2 <= v11 )
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x7Cu, 0LL);
    return v9;
  }
  if ( v17 == -2LL || 0xFFFFFFFFFFFFFFFFuLL / v18 <= 8 )
  {
    v21 = -2147024809;
    v9 = -2147024809;
    goto LABEL_28;
  }
  v19 = MIDL_user_allocate(8 * v18);
  v20 = (unsigned __int64)v19;
  if ( !v19 )
  {
    v9 = -2147024882;
    v21 = -2147024882;
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x81u, 0LL);
    return v9;
  }
  v22 = *(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL;
  if ( a3 )
    memcpy_0(v19 + 2, (const void *)(v22 + 16), 8 * a3);
  *(_QWORD *)(v20 + 8 * a3 + 16) = a2;
  if ( a3 < v8 )
    memcpy_0((void *)(v20 + 8 * a3 + 24), (const void *)(v22 + 8 * (a3 + 2)), 8 * (v8 - a3));
  operator delete((void *)v22);
  *(_QWORD *)v20 = v8 + 1;
  *(_QWORD *)(v20 + 8) = v17;
  *(_QWORD *)this = v20 | 2;
  return v9;
}
