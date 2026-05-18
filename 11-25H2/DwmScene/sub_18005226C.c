/*
 * XREFs of sub_18005226C @ 0x18005226C
 * Callers:
 *     sub_180051DD4 @ 0x180051DD4 (sub_180051DD4.c)
 *     sub_1800522A8 @ 0x1800522A8 (sub_1800522A8.c)
 *     sub_1800C0350 @ 0x1800C0350 (sub_1800C0350.c)
 *     sub_1800C0438 @ 0x1800C0438 (sub_1800C0438.c)
 *     sub_1800C1CE8 @ 0x1800C1CE8 (sub_1800C1CE8.c)
 * Callees:
 *     sub_18004596C @ 0x18004596C (sub_18004596C.c)
 */

__int64 __fastcall sub_18005226C(int a1)
{
  int v1; // eax
  int v2; // r10d
  int v4; // eax
  int v5; // r10d

  if ( a1 == 23 || a1 == 24 )
  {
    v4 = sub_18004596C(a1);
    return ((v5 + 1) & 0xFFFFFFFE) * v4;
  }
  else
  {
    v1 = sub_18004596C(a1);
    return (unsigned int)(v2 * v1);
  }
}
