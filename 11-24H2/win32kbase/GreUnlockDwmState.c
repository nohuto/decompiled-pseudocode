/*
 * XREFs of GreUnlockDwmState @ 0x1400231D0
 * Callers:
 *     UserReferenceDwmApiPort @ 0x1400243F0 (UserReferenceDwmApiPort.c)
 *     ?CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ @ 0x14006F730 (-CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ.c)
 *     OpenDwmHandle @ 0x14006F814 (OpenDwmHandle.c)
 *     ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x140070B34 (-EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtag.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x140092B70 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     NtDCompositionRegisterThumbnailVisual @ 0x14011D360 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x140148D10 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x14017A4CC (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x1402235E0 (NtDCompositionSendDwmLpcMessage.c)
 *     NtDCompositionSetChildRootVisual @ 0x1402239E0 (NtDCompositionSetChildRootVisual.c)
 *     ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x140232210 (-CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ.c)
 *     ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1402346E4 (-EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140234E98 (-EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall GreUnlockDwmState(__int64 a1)
{
  struct _ERESOURCE *v1; // rbx
  int v2; // r8d
  struct _GRETHREAD *v3; // rax

  v1 = **(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  EtwTraceGreLockReleaseSemaphore((__int64)L"DwmState", (_DWORD)v1 + 520, v2);
  v3 = GreGetCurrentThreadCrossSessionCheck();
  if ( v3 )
  {
    if ( (*((_BYTE *)v3 + 15))-- == 1 )
      *(_QWORD *)v3 &= ~0x80uLL;
  }
  GreReleaseSemaphoreSharedInternal(v1 + 5);
}
