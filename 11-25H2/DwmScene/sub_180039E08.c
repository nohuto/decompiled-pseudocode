/*
 * XREFs of sub_180039E08 @ 0x180039E08
 * Callers:
 *     sub_18003E99C @ 0x18003E99C (sub_18003E99C.c)
 *     sub_18008BFD0 @ 0x18008BFD0 (sub_18008BFD0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_180012554 @ 0x180012554 (sub_180012554.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180039E08(__int64 a1, __int64 *a2)
{
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  sub_18003BCDC(a1);
  sub_180011C64(a1 + 8, a2);
  while ( 1 )
  {
    sub_180012554(*a2, &v5);
    if ( !v5 )
      break;
    sub_18001244C(a2, &v5);
    if ( v6 )
      sub_18001050C(v6);
  }
  if ( v6 )
    sub_18001050C(v6);
  return a2;
}
