/*
 * XREFs of sub_18008BA70 @ 0x18008BA70
 * Callers:
 *     sub_18008BAB0 @ 0x18008BAB0 (sub_18008BAB0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

void **__fastcall sub_18008BA70(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::Aimer::`vftable';
  v2 = a1[13];
  if ( v2 )
    sub_18001050C(v2);
  return sub_1800403A4(a1);
}
