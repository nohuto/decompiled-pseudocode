/*
 * XREFs of sub_18008BBD0 @ 0x18008BBD0
 * Callers:
 *     sub_18008BC10 @ 0x18008BC10 (sub_18008BC10.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

void **__fastcall sub_18008BBD0(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::Aimer::`vftable';
  v2 = a1[13];
  if ( v2 )
    sub_18001060C(v2);
  return sub_180040504(a1);
}
