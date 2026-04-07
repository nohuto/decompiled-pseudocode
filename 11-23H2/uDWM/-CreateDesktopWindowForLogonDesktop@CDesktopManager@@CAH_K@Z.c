/*
 * XREFs of ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180050E14
 * Callers:
 *     ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z @ 0x18001C95C (-ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x18001FC44 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x18005149C (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004DAFC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?GetDesktopReplacementVisualForDesktop@CWindowList@@QEAAPEAVCDesktopWindowReplacement@@_K@Z @ 0x18004F6CC (-GetDesktopReplacementVisualForDesktop@CWindowList@@QEAAPEAVCDesktopWindowReplacement@@_K@Z.c)
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z @ 0x180050F20 (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180051228 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?GetAccentBackground@CAccent@@SAJPEAK@Z @ 0x1800523A0 (-GetAccentBackground@CAccent@@SAJPEAK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::CreateDesktopWindowForLogonDesktop(unsigned __int64 a1)
{
  struct CDesktopWindowReplacement *DesktopReplacementVisualForDesktop; // rdi
  unsigned int v3; // ebx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  int v6; // [rsp+20h] [rbp-18h]
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF

  DesktopReplacementVisualForDesktop = CWindowList::GetDesktopReplacementVisualForDesktop(
                                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                         a1);
  if ( !*((_DWORD *)DesktopReplacementVisualForDesktop + 70) )
  {
    v3 = 0;
    v7 = 0;
    if ( !CDesktopManager::IsLogonDesktop(a1) )
    {
      CAccent::GetAccentBackground(&v7);
      v3 = v7;
    }
    if ( (int)CDesktopWindowReplacement::AddDrawSolidBackgroundInstructions(DesktopReplacementVisualForDesktop, v3) >= 0 )
    {
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                               a1);
      VisualCollection::InsertRelative(
        (VisualCollection *)(*((_QWORD *)RootVisualForDesktop + 3) + 32LL),
        (unsigned __int64)DesktopReplacementVisualForDesktop,
        RootVisualForDesktop,
        0,
        v6);
      (*(void (__fastcall **)(struct CDesktopWindowReplacement *))(*(_QWORD *)DesktopReplacementVisualForDesktop + 64LL))(DesktopReplacementVisualForDesktop);
    }
  }
  return 1LL;
}
