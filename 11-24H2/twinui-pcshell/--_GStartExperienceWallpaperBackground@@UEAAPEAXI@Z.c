/*
 * XREFs of ??_GStartExperienceWallpaperBackground@@UEAAPEAXI@Z @ 0x18038F1D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1StartExperienceWallpaperBackground@@UEAA@XZ @ 0x1803C6D10 (--1StartExperienceWallpaperBackground@@UEAA@XZ.c)
 */

StartExperienceWallpaperBackground *__fastcall StartExperienceWallpaperBackground::`scalar deleting destructor'(
        StartExperienceWallpaperBackground *this,
        char a2)
{
  StartExperienceWallpaperBackground::~StartExperienceWallpaperBackground(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
