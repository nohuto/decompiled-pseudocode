/*
 * XREFs of ?GetWindowBand@CWindowData@@QEBA?AW4ZBID@@XZ @ 0x18001C5F8
 * Callers:
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x18001C4E8 (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001C5C4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x1800EEF10 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowData::GetWindowBand(__int64 a1)
{
  return *(unsigned int *)(a1 + 128);
}
