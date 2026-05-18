/*
 * XREFs of sub_18007C364 @ 0x18007C364
 * Callers:
 *     sub_18001623C @ 0x18001623C (sub_18001623C.c)
 *     sub_180041A70 @ 0x180041A70 (sub_180041A70.c)
 *     sub_18006406C @ 0x18006406C (sub_18006406C.c)
 * Callees:
 *     sub_18007A010 @ 0x18007A010 (sub_18007A010.c)
 */

__int64 __fastcall sub_18007C364(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_18007A010(*(_QWORD *)(a1 + 16), a2);
  return sub_18007C39C(a1, v5, a3);
}
