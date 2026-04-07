/*
 * XREFs of ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x1800512FC
 * Callers:
 *     ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z @ 0x18001C95C (-ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x18001FC44 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x18005149C (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180037010 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004DAFC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?GetDesktopReplacementVisualForDesktop@CWindowList@@QEAAPEAVCDesktopWindowReplacement@@_K@Z @ 0x18004F6CC (-GetDesktopReplacementVisualForDesktop@CWindowList@@QEAAPEAVCDesktopWindowReplacement@@_K@Z.c)
 */

void __fastcall CDesktopManager::DestroyDesktopWindowReplacement(__int64 a1)
{
  struct CDesktopWindowReplacement *DesktopReplacementVisualForDesktop; // rbx
  __int64 v3; // rcx

  if ( CWindowList::GetRootVisualForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54), a1) )
  {
    DesktopReplacementVisualForDesktop = CWindowList::GetDesktopReplacementVisualForDesktop(
                                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                           a1);
    CRenderDataVisual::ClearInstructions(DesktopReplacementVisualForDesktop);
    v3 = *((_QWORD *)DesktopReplacementVisualForDesktop + 3);
    if ( v3 )
      VisualCollection::Remove((VisualCollection *)(v3 + 32), DesktopReplacementVisualForDesktop);
  }
}
