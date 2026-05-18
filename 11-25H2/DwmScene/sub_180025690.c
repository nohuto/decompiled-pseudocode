/*
 * XREFs of sub_180025690 @ 0x180025690
 * Callers:
 *     sub_1800B9D90 @ 0x1800B9D90 (sub_1800B9D90.c)
 * Callees:
 *     sub_180011B8C @ 0x180011B8C (sub_180011B8C.c)
 *     sub_18002378C @ 0x18002378C (sub_18002378C.c)
 *     sub_180024D60 @ 0x180024D60 (sub_180024D60.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 */

void __fastcall sub_180025690(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  sub_1800287EC(a1 + 3);
  sub_180024D60((__int64)a1);
  sub_180011B8C(&v4);
  v2 = v4;
  a1[54] = v4;
  v3 = v2 - a1[53];
  a1[59] = v3;
  sub_18002378C(v3);
  sub_18001C99C(&stru_1801B8228, 3);
}
