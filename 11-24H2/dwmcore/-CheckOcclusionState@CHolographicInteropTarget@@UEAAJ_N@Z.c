/*
 * XREFs of ?CheckOcclusionState@CHolographicInteropTarget@@UEAAJ_N@Z @ 0x180276260
 * Callers:
 *     ?CheckOcclusionState@CHolographicInteropTarget@@WEI@EAAJ_N@Z @ 0x180276290 (-CheckOcclusionState@CHolographicInteropTarget@@WEI@EAAJ_N@Z.c)
 *     ?CheckOcclusionState@CHolographicInteropTarget@@WFA@EAAJ_N@Z @ 0x1802762A0 (-CheckOcclusionState@CHolographicInteropTarget@@WFA@EAAJ_N@Z.c)
 * Callees:
 *     ?IsOccluded@CHolographicInteropTarget@@UEBA_NXZ @ 0x1802D0560 (-IsOccluded@CHolographicInteropTarget@@UEBA_NXZ.c)
 */

__int64 __fastcall CHolographicInteropTarget::CheckOcclusionState(CHolographicInteropTarget *this)
{
  return CHolographicInteropTarget::IsOccluded((CHolographicInteropTarget *)((char *)this + 64)) ? 0x87A0001 : 0;
}
