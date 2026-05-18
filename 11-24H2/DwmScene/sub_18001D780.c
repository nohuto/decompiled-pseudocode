/*
 * XREFs of sub_18001D780 @ 0x18001D780
 * Callers:
 *     sub_18002A92C @ 0x18002A92C (sub_18002A92C.c)
 *     sub_1800396E0 @ 0x1800396E0 (sub_1800396E0.c)
 *     sub_18005C2CC @ 0x18005C2CC (sub_18005C2CC.c)
 *     sub_18007E5A4 @ 0x18007E5A4 (sub_18007E5A4.c)
 *     sub_18008CEA0 @ 0x18008CEA0 (sub_18008CEA0.c)
 * Callees:
 *     sub_18001CD84 @ 0x18001CD84 (sub_18001CD84.c)
 */

__int64 __fastcall sub_18001D780(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  v4 = sub_18001CD84(a2, a3);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v4;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(v4 + 16);
  *(_QWORD *)(v4 + 16) = 0LL;
  *(_QWORD *)(v4 + 24) = 15LL;
  *(_BYTE *)v4 = 0;
  return a1;
}
