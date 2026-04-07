/*
 * XREFs of ?NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z @ 0x1800B6508
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18003DE40 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z @ 0x18000AB54 (-ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z.c)
 *     ?_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z @ 0x18000F334 (-_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z.c)
 */

void __fastcall CDesktopThumbnailBase::NotifyTlwTitleBackgroundChange(
        CDesktopThumbnailBase *this,
        const struct CTopLevelWindow *a2)
{
  int Index; // eax
  __int64 v3; // rcx

  Index = CDesktopThumbnailBase::_GetIndex(this, a2);
  if ( Index >= 0 )
    CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(*(CTopLevelWindow **)(*(_QWORD *)(v3 + 248)
                                                                                   + 16LL * (unsigned int)Index
                                                                                   + 8));
}
