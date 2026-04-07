/*
 * XREFs of ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180025870
 * Callers:
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18000FE58 (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UD2D_POINT_3F@@$0A@@@PEAV?$DynArray@UD2D_POINT_2F@@$0A@@@PEAV?$DynArray@I$0A@@@@Z @ 0x180010C10 (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 *     ?Reset@Mesh2D@@QEAAXXZ @ 0x180011798 (-Reset@Mesh2D@@QEAAXXZ.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x180012928 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 *     ?DestroyPendingSprites@CWindowList@@QEAAXXZ @ 0x18001A2A0 (-DestroyPendingSprites@CWindowList@@QEAAXXZ.c)
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x18001C4E8 (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 *     ?Reset@AtlasedRects@@QEAAXXZ @ 0x180023314 (-Reset@AtlasedRects@@QEAAXXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800250EC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAXXZ @ 0x1800263F4 (-RemoveAll@VisualCollection@@QEAAXXZ.c)
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x1800264A8 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x18002DAD8 (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x18004929C (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x18004934C (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18004942C (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x180049578 (-_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ.c)
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180056928 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?OnProcessDisconnected@CProjectionBorderManager@@UEAAJK@Z @ 0x180076480 (-OnProcessDisconnected@CProjectionBorderManager@@UEAAJK@Z.c)
 *     ?CleanupThemeStatics@CTopLevelWindow@@SAXXZ @ 0x18007A4E8 (-CleanupThemeStatics@CTopLevelWindow@@SAXXZ.c)
 *     ?Reset@CAnimationResource@@UEAAJXZ @ 0x180086020 (-Reset@CAnimationResource@@UEAAJXZ.c)
 *     ?_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV?$DynArray@PEAVCProjectionBorderVisual@@$0A@@@@Z @ 0x18008AE50 (-_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV-$DynArray@PEAVCProjectionBorderVisual@@$0A@@.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180093190 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ??1CapturedWindowRepresentation@@MEAA@XZ @ 0x1800A86B0 (--1CapturedWindowRepresentation@@MEAA@XZ.c)
 *     ?_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ @ 0x1800D5388 (-_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x1800F49F0 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800F6378 (memcpy_0.c)
 */

void __fastcall DynArrayImpl<0>::ShrinkToSize(__int64 a1, unsigned int a2)
{
  void *v3; // rcx
  unsigned __int64 v4; // r8
  int v5; // eax
  void *v6; // rax

  v3 = *(void **)(a1 + 8);
  if ( *(void **)a1 != v3 )
  {
    v4 = a2 * (unsigned __int64)*(unsigned int *)(a1 + 24);
    if ( v4 <= 0xFFFFFFFF )
    {
      if ( *(_DWORD *)(a1 + 24) <= *(_DWORD *)(a1 + 16) )
      {
        memcpy_0(v3, *(const void **)a1, (unsigned int)v4);
        DefaultHeap::Free(*(void **)a1);
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
        v5 = *(_DWORD *)(a1 + 16);
LABEL_6:
        *(_DWORD *)(a1 + 20) = v5;
        return;
      }
      v6 = DefaultHeap::Realloc(*(void **)a1, (unsigned int)v4);
      if ( v6 )
      {
        *(_QWORD *)a1 = v6;
        v5 = *(_DWORD *)(a1 + 24);
        goto LABEL_6;
      }
    }
  }
}
