/*
 * XREFs of ?_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z @ 0x180032DA4
 * Callers:
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x180032CC4 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?NotifyWindowDestruction@CDesktopThumbnailBase@@UEAAXPEAVCWindowData@@@Z @ 0x18007DB70 (-NotifyWindowDestruction@CDesktopThumbnailBase@@UEAAXPEAVCWindowData@@@Z.c)
 *     ?NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z @ 0x1800BC3B8 (-NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopThumbnailBase::_GetIndex(CDesktopThumbnailBase *this, const struct CTopLevelWindow *a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // r9d

  v2 = *((_DWORD *)this + 56);
  v3 = -1;
  while ( (--v2 & 0x80000000) == 0 )
  {
    if ( *(const struct CTopLevelWindow **)(*((_QWORD *)this + 25) + 16LL * v2) == a2 )
      return v2;
  }
  return v3;
}
