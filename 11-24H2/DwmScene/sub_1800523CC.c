/*
 * XREFs of sub_1800523CC @ 0x1800523CC
 * Callers:
 *     sub_180051F34 @ 0x180051F34 (sub_180051F34.c)
 *     sub_180052408 @ 0x180052408 (sub_180052408.c)
 *     sub_1800C04B0 @ 0x1800C04B0 (sub_1800C04B0.c)
 *     sub_1800C0598 @ 0x1800C0598 (sub_1800C0598.c)
 *     sub_1800C1E48 @ 0x1800C1E48 (sub_1800C1E48.c)
 * Callees:
 *     sub_180045ACC @ 0x180045ACC (sub_180045ACC.c)
 */

__int64 __fastcall sub_1800523CC(int a1)
{
  int v1; // eax
  int v2; // r10d
  int v4; // eax
  int v5; // r10d

  if ( a1 == 23 || a1 == 24 )
  {
    v4 = sub_180045ACC(a1);
    return ((v5 + 1) & 0xFFFFFFFE) * v4;
  }
  else
  {
    v1 = sub_180045ACC(a1);
    return (unsigned int)(v2 * v1);
  }
}
