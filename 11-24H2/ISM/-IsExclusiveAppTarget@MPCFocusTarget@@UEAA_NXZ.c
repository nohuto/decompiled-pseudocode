/*
 * XREFs of ?IsExclusiveAppTarget@MPCFocusTarget@@UEAA_NXZ @ 0x1800855F0
 * Callers:
 *     ?IsExclusiveAppTarget@MPCFocusTarget@@WFA@EAA_NXZ @ 0x1800FF890 (-IsExclusiveAppTarget@MPCFocusTarget@@WFA@EAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPCFocusTarget::IsExclusiveAppTarget(MPCFocusTarget *this)
{
  return *((_BYTE *)this + 40);
}
