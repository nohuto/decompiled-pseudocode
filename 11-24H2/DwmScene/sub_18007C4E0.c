/*
 * XREFs of sub_18007C4E0 @ 0x18007C4E0
 * Callers:
 *     sub_180013430 @ 0x180013430 (sub_180013430.c)
 *     sub_180013650 @ 0x180013650 (sub_180013650.c)
 *     sub_180055E40 @ 0x180055E40 (sub_180055E40.c)
 *     sub_1800626E4 @ 0x1800626E4 (sub_1800626E4.c)
 *     sub_180064860 @ 0x180064860 (sub_180064860.c)
 *     sub_180064EC4 @ 0x180064EC4 (sub_180064EC4.c)
 *     sub_180065E60 @ 0x180065E60 (sub_180065E60.c)
 *     sub_180090050 @ 0x180090050 (sub_180090050.c)
 *     sub_1800906F0 @ 0x1800906F0 (sub_1800906F0.c)
 * Callees:
 *     sub_18007A010 @ 0x18007A010 (sub_18007A010.c)
 */

__int64 __fastcall sub_18007C4E0(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // ax

  v3 = sub_18007A010(*(_QWORD *)(a1 + 16), a2);
  return sub_18007C518(a1, v3);
}
