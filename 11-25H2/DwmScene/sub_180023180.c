/*
 * XREFs of sub_180023180 @ 0x180023180
 * Callers:
 *     sub_180020210 @ 0x180020210 (sub_180020210.c)
 *     sub_1800210A0 @ 0x1800210A0 (sub_1800210A0.c)
 *     sub_1800211F0 @ 0x1800211F0 (sub_1800211F0.c)
 *     sub_180021480 @ 0x180021480 (sub_180021480.c)
 *     sub_1800217A0 @ 0x1800217A0 (sub_1800217A0.c)
 *     sub_1800218F0 @ 0x1800218F0 (sub_1800218F0.c)
 *     sub_180021B80 @ 0x180021B80 (sub_180021B80.c)
 *     sub_180021DD0 @ 0x180021DD0 (sub_180021DD0.c)
 *     sub_180021F00 @ 0x180021F00 (sub_180021F00.c)
 *     sub_180022170 @ 0x180022170 (sub_180022170.c)
 *     sub_1800222C0 @ 0x1800222C0 (sub_1800222C0.c)
 *     sub_180022650 @ 0x180022650 (sub_180022650.c)
 *     sub_180022780 @ 0x180022780 (sub_180022780.c)
 *     sub_180022920 @ 0x180022920 (sub_180022920.c)
 *     sub_180022C00 @ 0x180022C00 (sub_180022C00.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180023180(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = *a1;
  *a1 = a2;
  if ( result )
    return o__aligned_free(result);
  return result;
}
