/*
 * XREFs of ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180015620
 * Callers:
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x180006594 (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 *     ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x180049DFC (-_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x180055878 (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 * Callees:
 *     ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x180015710 (-HasAnimation@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180015730 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x180015798 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 *     ??0CLivePreviewTimeline@@QEAA@XZ @ 0x180015C08 (--0CLivePreviewTimeline@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18002D8B0 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x1800497AC (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CTopLevelWindow::StartLivePreviewAnimation(__int64 a1, int a2)
{
  unsigned int v3; // edi
  struct CVisual *v4; // rcx
  CLivePreviewTimeline *v5; // rax

  v3 = 0;
  *(_DWORD *)(a1 + 208) = a2;
  if ( !CTopLevelWindow::HasAnimation((CTopLevelWindow *)a1) )
    CDesktopManager::RegisterForGlobalTimeChangeNotification(v4);
  ++*(_DWORD *)(a1 + 204);
  if ( *(_DWORD *)(a1 + 208) == 3 || *(_DWORD *)(a1 + 208) == 4 )
    CLivePreview::GetAnimationDuration();
  v5 = *(CLivePreviewTimeline **)(a1 + 680);
  if ( v5 )
    goto LABEL_10;
  v5 = (CLivePreviewTimeline *)DefaultHeap::AllocClear(0x88uLL);
  if ( v5 )
    v5 = CLivePreviewTimeline::CLivePreviewTimeline(v5);
  *(_QWORD *)(a1 + 680) = v5;
  if ( v5 )
  {
LABEL_10:
    CLivePreviewTimeline::RestartTimeline(v5, *(unsigned int *)(a1 + 208));
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1336u, 0LL);
    CTopLevelWindow::StopLivePreviewAnimation((CTopLevelWindow *)a1);
  }
  return v3;
}
