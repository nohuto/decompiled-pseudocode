/*
 * XREFs of sub_18003E680 @ 0x18003E680
 * Callers:
 *     sub_18003DAF0 @ 0x18003DAF0 (sub_18003DAF0.c)
 *     sub_180061250 @ 0x180061250 (sub_180061250.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180028730 @ 0x180028730 (sub_180028730.c)
 *     sub_18003E5BC @ 0x18003E5BC (sub_18003E5BC.c)
 *     sub_18003EB98 @ 0x18003EB98 (sub_18003EB98.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18003E680(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 v8; // rcx

  sub_180028730(a1 + 16);
  if ( a4 )
    sub_18003E5BC(a1, a2, a4);
  else
    sub_18003EB98(*a3, a2);
  v8 = a3[1];
  if ( v8 )
    sub_18001050C(v8);
  return a2;
}
