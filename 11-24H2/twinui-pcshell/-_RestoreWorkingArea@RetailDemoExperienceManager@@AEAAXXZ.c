/*
 * XREFs of ?_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ @ 0x1803A687C
 * Callers:
 *     ?Hide@RetailDemoExperienceManager@@UEAAJXZ @ 0x1803A51D0 (-Hide@RetailDemoExperienceManager@@UEAAJXZ.c)
 *     ?OnViewEvent@RetailDemoExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1803A57B0 (-OnViewEvent@RetailDemoExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?_Dock@RetailDemoExperienceManager@@AEAAXXZ @ 0x1803A6120 (-_Dock@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_Float@RetailDemoExperienceManager@@AEAAXXZ @ 0x1803A6350 (-_Float@RetailDemoExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?_AdjustWorkingArea@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z @ 0x1803A5F84 (-_AdjustWorkingArea@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z.c)
 */

void __fastcall RetailDemoExperienceManager::_RestoreWorkingArea(RetailDemoExperienceManager *this)
{
  struct tagRECT v1; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)this + 106) > *((_DWORD *)this + 104) && *((_DWORD *)this + 107) > *((_DWORD *)this + 105) )
  {
    v1 = 0LL;
    RetailDemoExperienceManager::_AdjustWorkingArea(this, &v1);
  }
}
