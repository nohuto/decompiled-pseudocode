/*
 * XREFs of sub_180039F68 @ 0x180039F68
 * Callers:
 *     sub_18003EAFC @ 0x18003EAFC (sub_18003EAFC.c)
 *     sub_18008C130 @ 0x18008C130 (sub_18008C130.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_180012654 @ 0x180012654 (sub_180012654.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180039F68(__int64 a1, __int64 *a2)
{
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  sub_18003BE3C(a1);
  sub_180011D64(a1 + 8, a2);
  while ( 1 )
  {
    sub_180012654(*a2, &v5);
    if ( !v5 )
      break;
    sub_18001254C(a2, &v5);
    if ( v6 )
      sub_18001060C(v6);
  }
  if ( v6 )
    sub_18001060C(v6);
  return a2;
}
