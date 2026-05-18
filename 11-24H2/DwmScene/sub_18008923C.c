/*
 * XREFs of sub_18008923C @ 0x18008923C
 * Callers:
 *     sub_1800892E0 @ 0x1800892E0 (sub_1800892E0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_18008923C(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *a1 = &Spectre::Engine::ImageProcessingEffectPlanarReflection::`vftable';
  v2 = a1[28];
  if ( v2 )
    sub_18001060C(v2);
  v3 = a1[26];
  if ( v3 )
    sub_18001060C(v3);
  v4 = a1[24];
  if ( v4 )
    sub_18001060C(v4);
  return sub_18008D1B4(a1);
}
