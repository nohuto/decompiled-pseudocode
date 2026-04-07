/*
 * XREFs of ?NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z @ 0x1800BC3B8
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180028130 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z @ 0x180032DA4 (-_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z.c)
 *     ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z @ 0x18007A0F4 (-ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z.c)
 */

void __fastcall CDesktopThumbnailBase::NotifyTlwTitleBackgroundChange(
        CDesktopThumbnailBase *this,
        const struct CTopLevelWindow *a2)
{
  int Index; // eax
  __int64 v3; // rcx

  Index = CDesktopThumbnailBase::_GetIndex(this, a2);
  if ( Index >= 0 )
    CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(*(CTopLevelWindow **)(*(_QWORD *)(v3 + 200)
                                                                                   + 16LL * (unsigned int)Index
                                                                                   + 8));
}
