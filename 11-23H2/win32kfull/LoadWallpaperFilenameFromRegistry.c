/*
 * XREFs of LoadWallpaperFilenameFromRegistry @ 0x1C0062AC0
 * Callers:
 *     xxxSetDeskWallpaper @ 0x1C0062778 (xxxSetDeskWallpaper.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00D9A30 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C003B918 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     ?GetDefaultWallpaperName@@YAXPEAGI@Z @ 0x1C0200444 (-GetDefaultWallpaperName@@YAXPEAGI@Z.c)
 */

__int64 __fastcall LoadWallpaperFilenameFromRegistry(__int64 a1, unsigned __int16 *a2, unsigned int a3)
{
  size_t v3; // rsi
  unsigned __int16 v7[8]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v8; // [rsp+50h] [rbp-98h]
  __int64 v9; // [rsp+60h] [rbp-88h]
  wchar_t Str2[40]; // [rsp+70h] [rbp-78h] BYREF

  v3 = a3;
  v9 = 0LL;
  *(_OWORD *)v7 = 0LL;
  v8 = 0LL;
  memset_0(Str2, 0, sizeof(Str2));
  RtlLoadStringOrError(82LL, v7, 20LL);
  if ( !(unsigned int)FastGetProfileStringFromIDW(a1, 4LL, 67LL, v7, a2, v3, 8) )
    RtlStringCchCopyW(a2, v3, (size_t *)v7);
  RtlLoadStringOrError(71LL, Str2, 40LL);
  if ( !_wcsicmp(a2, Str2) )
    GetDefaultWallpaperName(a2, v3);
  return 1LL;
}
