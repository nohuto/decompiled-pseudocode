/*
 * XREFs of sub_1800890DC @ 0x1800890DC
 * Callers:
 *     sub_180089180 @ 0x180089180 (sub_180089180.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

__int64 __fastcall sub_1800890DC(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *a1 = &Spectre::Engine::ImageProcessingEffectPlanarReflection::`vftable';
  v2 = a1[28];
  if ( v2 )
    sub_18001050C(v2);
  v3 = a1[26];
  if ( v3 )
    sub_18001050C(v3);
  v4 = a1[24];
  if ( v4 )
    sub_18001050C(v4);
  return sub_18008D054(a1);
}
