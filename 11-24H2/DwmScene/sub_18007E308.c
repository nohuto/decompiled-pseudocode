/*
 * XREFs of sub_18007E308 @ 0x18007E308
 * Callers:
 *     sub_18007E1D8 @ 0x18007E1D8 (sub_18007E1D8.c)
 *     sub_18007E4A4 @ 0x18007E4A4 (sub_18007E4A4.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180050C60 @ 0x180050C60 (sub_180050C60.c)
 */

__int64 __fastcall sub_18007E308(_QWORD *a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx

  v2 = a2;
  if ( a2 == 1 )
  {
    a1[22] = 0LL;
    v4 = a1[23];
    a1[23] = 0LL;
    if ( v4 )
      sub_18001060C(v4);
  }
  sub_180050C60(a1 + 60);
  return sub_18004D6E8(&a1[2 * v2 + 48]);
}
