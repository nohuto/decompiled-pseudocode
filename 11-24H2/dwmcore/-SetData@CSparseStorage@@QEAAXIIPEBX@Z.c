/*
 * XREFs of ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18000CBEC
 * Callers:
 *     ?ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTOUCHTARGETRECT@@@Z @ 0x18000C9E4 (-ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTOUCHTARGET.c)
 *     ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z @ 0x180097434 (-SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z.c)
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1801550E0 (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z @ 0x180155750 (-SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z.c)
 *     ?SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z @ 0x180155798 (-SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x180181100 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z @ 0x180182B58 (-SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z.c)
 *     ?ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE@@@Z @ 0x1801DFC80 (-ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_.c)
 *     ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1801E1DDC (-ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVE.c)
 *     ?SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x1801E1F88 (-SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z.c)
 *     ?SetTopLevelWindow@CVisual@@QEAAX_K@Z @ 0x180206EBC (-SetTopLevelWindow@CVisual@@QEAAX_K@Z.c)
 *     ?ProcessSetBlurredWallpaperSurfaceRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACERECT@@@Z @ 0x180229834 (-ProcessSetBlurredWallpaperSurfaceRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SE.c)
 *     ?SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z @ 0x180265BC8 (-SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z.c)
 *     ?SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18028C13C (-SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?ExpandStorage@AllocatedStorage@CSparseStorage@@SAXPEAPEAV12@_K@Z @ 0x180192E80 (-ExpandStorage@AllocatedStorage@CSparseStorage@@SAXPEAPEAV12@_K@Z.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

void __fastcall CSparseStorage::SetData(
        struct CSparseStorage::AllocatedStorage **this,
        int a2,
        unsigned int a3,
        const void *a4)
{
  size_t v5; // rsi
  int v7; // r12d
  struct CSparseStorage::AllocatedStorage *v9; // rdi
  int v10; // r15d
  unsigned int v11; // ebx
  char *v12; // rbx
  unsigned __int64 v13; // r8
  int v14; // edx
  int v15; // ecx
  size_t v16; // rcx
  signed __int64 v17; // rbx

  v5 = a3;
  v7 = __ROR4__(1, a2);
  v9 = *this;
  v10 = v7 & *((_DWORD *)*this + 1);
  if ( *this == (struct CSparseStorage::AllocatedStorage *)&CSparseStorage::s_defaultEmptyAllocatedStorage )
  {
    v11 = a3 + 40;
    v9 = (struct CSparseStorage::AllocatedStorage *)DefaultHeap::AllocClear(a3 + 40);
    if ( !v9 )
      RaiseFailFastException(0LL, 0LL, 0);
    *(_DWORD *)v9 = v11;
    *this = v9;
  }
  v12 = (char *)v9 + 12;
  v13 = (unsigned __int64)v9 + *(unsigned int *)v9;
  while ( 1 )
  {
    if ( (unsigned __int64)(v12 + 4) > v13 )
    {
      v16 = v5;
      goto LABEL_13;
    }
    v14 = *(_DWORD *)v12;
    v15 = HIBYTE(*(_DWORD *)v12) & 0x7F;
    if ( v15 == a2 )
      goto LABEL_8;
    if ( !v15 )
      break;
    if ( !v10 && (v14 & 0xFFFFFF) == (_DWORD)v5 && (__ROR4__(1, v15) & *((_DWORD *)v9 + 1)) == 0 )
      goto LABEL_8;
    v12 += (*(_QWORD *)&v14 & 0xFFFFFFLL) + 4;
  }
  v16 = v5;
  if ( (unsigned __int64)&v12[v5 + 4] <= v13 )
  {
    *(_DWORD *)v12 = v14 ^ (v5 ^ v14) & 0xFFFFFF;
    goto LABEL_8;
  }
LABEL_13:
  v17 = v12 - (char *)v9;
  CSparseStorage::AllocatedStorage::ExpandStorage(this, v17 + v16 + 28);
  v12 = (char *)*this + v17;
  *(_DWORD *)v12 ^= (v5 ^ *(_DWORD *)v12) & 0xFFFFFF;
LABEL_8:
  memcpy_0(v12 + 4, a4, v5);
  *(_DWORD *)v12 ^= (*(_DWORD *)v12 ^ (a2 << 24)) & 0x7F000000;
  *((_DWORD *)*this + 1) |= v7;
}
