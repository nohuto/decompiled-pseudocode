/*
 * XREFs of ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z @ 0x18007A0F4
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180028130 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?OnTitleBackgroundChange@CLivePreview@@QEAAXPEBVCWindowData@@K@Z @ 0x180079948 (-OnTitleBackgroundChange@CLivePreview@@QEAAXPEBVCWindowData@@K@Z.c)
 *     ?NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z @ 0x1800BC3B8 (-NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(CTopLevelWindow *this)
{
  unsigned int v1; // ebx
  int v4; // eax

  v1 = 0;
  if ( *((_QWORD *)this + 65) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 66) + 32LL))(*((_QWORD *)this + 66));
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 65) + 48LL))(*((_QWORD *)this + 65));
    v1 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x1457u, 0LL);
  }
  return v1;
}
