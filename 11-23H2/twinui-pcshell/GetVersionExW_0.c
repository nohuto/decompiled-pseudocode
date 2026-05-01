/*
 * XREFs of GetVersionExW_0 @ 0x1801C8BD8
 * Callers:
 *     ?ShouldHideIcons@HideWallpaperIconsObject@@AEAA_NXZ @ 0x18074998C (-ShouldHideIcons@HideWallpaperIconsObject@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall GetVersionExW_0(LPOSVERSIONINFOW lpVersionInformation)
{
  return GetVersionExW(lpVersionInformation);
}
