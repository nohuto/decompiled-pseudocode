/*
 * XREFs of ?IsOpaqueLivePreview@CLivePreview@@QEAA_NPEAVCWindowData@@@Z @ 0x1800C7D28
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800929E0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z @ 0x1800C7E4C (-_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z.c)
 */

char __fastcall CLivePreview::IsOpaqueLivePreview(CLivePreview *this, HWND *a2)
{
  char v2; // r11

  v2 = 0;
  if ( a2 )
    return CLivePreview::_FindLivePreviewWindow(this, a2[5]) != 0LL;
  return v2;
}
