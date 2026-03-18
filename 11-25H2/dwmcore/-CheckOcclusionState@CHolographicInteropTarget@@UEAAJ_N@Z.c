/*
 * XREFs of ?CheckOcclusionState@CHolographicInteropTarget@@UEAAJ_N@Z @ 0x180280CD0
 * Callers:
 *     ?CheckOcclusionState@CHolographicInteropTarget@@WEI@EAAJ_N@Z @ 0x180280D00 (-CheckOcclusionState@CHolographicInteropTarget@@WEI@EAAJ_N@Z.c)
 *     ?CheckOcclusionState@CHolographicInteropTarget@@WFA@EAAJ_N@Z @ 0x180280D10 (-CheckOcclusionState@CHolographicInteropTarget@@WFA@EAAJ_N@Z.c)
 * Callees:
 *     ?IsOccluded@CHolographicInteropTarget@@UEBA_NXZ @ 0x1802D9800 (-IsOccluded@CHolographicInteropTarget@@UEBA_NXZ.c)
 */

__int64 __fastcall CHolographicInteropTarget::CheckOcclusionState(CHolographicInteropTarget *this)
{
  return CHolographicInteropTarget::IsOccluded((CHolographicInteropTarget *)((char *)this + 64)) ? 0x87A0001 : 0;
}
