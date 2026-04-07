/*
 * XREFs of ?CreateDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x1800330BC
 * Callers:
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x180033668 (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z @ 0x180079988 (-ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x18007E2E8 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 * Callees:
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18002F6B4 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x180032DDC (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z @ 0x18003318C (-FindElement@-$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z.c)
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z @ 0x1800331E0 (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18003340C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDesktopManager::CreateDesktopWindowReplacement(unsigned __int64 a1)
{
  __int64 Element; // rax
  __int64 v3; // rbx
  bool IsLogonDesktop; // al
  struct CRenderDataVisual *RootVisualForDesktop; // rax

  Element = CGenericTableMap<unsigned __int64,CDesktop>::FindElement(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53) + 8LL,
              a1);
  if ( Element )
    v3 = *(_QWORD *)(Element + 32);
  else
    v3 = 0LL;
  if ( !*(_DWORD *)(v3 + 232) )
  {
    IsLogonDesktop = CDesktopManager::IsLogonDesktop(a1);
    if ( (int)CDesktopWindowReplacement::AddDrawSolidBackgroundInstructions(
                (CDesktopWindowReplacement *)v3,
                IsLogonDesktop ? -16777216 : -15461356) >= 0 )
    {
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                               a1);
      CContainerVisual::InsertChildBefore(
        *((CContainerVisual **)RootVisualForDesktop + 3),
        (CMILRefCountBase ***)v3,
        (CMILRefCountBase ***)RootVisualForDesktop);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
    }
  }
}
