/*
 * XREFs of _VirtualDesktopGestureWindow::AddThumbnailToThumbnailCollection_::_1_::dtor$1 @ 0x18060B321
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UITabletModeInputSource@@@WRL@Microsoft@@QEAA@XZ @ 0x180396420 (--1-$ComPtr@UITabletModeInputSource@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall VirtualDesktopGestureWindow::AddThumbnailToThumbnailCollection_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 88) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 88) &= ~2u;
    return Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>((__int64 *)(a2 + 104));
  }
  return result;
}
