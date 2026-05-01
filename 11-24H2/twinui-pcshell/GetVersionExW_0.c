/*
 * XREFs of GetVersionExW_0 @ 0x1802D3E87
 * Callers:
 *     ?IsServer@HideWallpaperIconsObject@@AEAA_NXZ @ 0x180682DA4 (-IsServer@HideWallpaperIconsObject@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall GetVersionExW_0(LPOSVERSIONINFOW lpVersionInformation)
{
  return GetVersionExW(lpVersionInformation);
}
