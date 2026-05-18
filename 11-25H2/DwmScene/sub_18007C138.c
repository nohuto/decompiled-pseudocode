/*
 * XREFs of sub_18007C138 @ 0x18007C138
 * Callers:
 *     sub_180013590 @ 0x180013590 (sub_180013590.c)
 *     sub_180013670 @ 0x180013670 (sub_180013670.c)
 *     sub_180060F00 @ 0x180060F00 (sub_180060F00.c)
 *     sub_180063F0C @ 0x180063F0C (sub_180063F0C.c)
 *     sub_18008FDA0 @ 0x18008FDA0 (sub_18008FDA0.c)
 *     sub_18008FEF0 @ 0x18008FEF0 (sub_18008FEF0.c)
 * Callees:
 *     sub_180079EB0 @ 0x180079EB0 (sub_180079EB0.c)
 */

__int64 __fastcall sub_18007C138(__int64 a1, __int64 a2, char a3)
{
  unsigned __int16 v5; // ax
  __int64 v6; // r8

  v5 = sub_180079EB0(*(_QWORD *)(a1 + 16), a2);
  LOBYTE(v6) = a3;
  return sub_18007C170(a1, v5, v6);
}
