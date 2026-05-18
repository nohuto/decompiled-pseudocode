/*
 * XREFs of sub_18007C298 @ 0x18007C298
 * Callers:
 *     sub_180013690 @ 0x180013690 (sub_180013690.c)
 *     sub_180013770 @ 0x180013770 (sub_180013770.c)
 *     sub_180061060 @ 0x180061060 (sub_180061060.c)
 *     sub_18006406C @ 0x18006406C (sub_18006406C.c)
 *     sub_18008FF00 @ 0x18008FF00 (sub_18008FF00.c)
 *     sub_180090050 @ 0x180090050 (sub_180090050.c)
 * Callees:
 *     sub_18007A010 @ 0x18007A010 (sub_18007A010.c)
 */

__int64 __fastcall sub_18007C298(__int64 a1, __int64 a2, char a3)
{
  unsigned __int16 v5; // ax
  __int64 v6; // r8

  v5 = sub_18007A010(*(_QWORD *)(a1 + 16), a2);
  LOBYTE(v6) = a3;
  return sub_18007C2D0(a1, v5, v6);
}
