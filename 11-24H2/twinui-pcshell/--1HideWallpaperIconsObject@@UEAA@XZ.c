/*
 * XREFs of ??1HideWallpaperIconsObject@@UEAA@XZ @ 0x180682CD4
 * Callers:
 *     ??_GHideWallpaperIconsObject@@UEAAPEAXI@Z @ 0x180682D30 (--_GHideWallpaperIconsObject@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
void __fastcall HideWallpaperIconsObject::~HideWallpaperIconsObject(HideWallpaperIconsObject *this)
{
  HWND ShellWindow; // rax

  *(_QWORD *)this = &HideWallpaperIconsObject::`vftable';
  if ( *((_BYTE *)this + 16) )
  {
    ShellWindow = GetShellWindow();
    PostMessageW(ShellWindow, 0x52Cu, 0xDuLL, 0LL);
  }
  *((_DWORD *)this + 3) = -1073741823;
}
