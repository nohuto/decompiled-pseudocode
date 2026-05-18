/*
 * XREFs of sub_18007C204 @ 0x18007C204
 * Callers:
 *     sub_18001613C @ 0x18001613C (sub_18001613C.c)
 *     sub_180041910 @ 0x180041910 (sub_180041910.c)
 *     sub_180063F0C @ 0x180063F0C (sub_180063F0C.c)
 * Callees:
 *     sub_180079EB0 @ 0x180079EB0 (sub_180079EB0.c)
 */

__int64 __fastcall sub_18007C204(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_180079EB0(*(_QWORD *)(a1 + 16), a2);
  return sub_18007C23C(a1, v5, a3);
}
