/*
 * XREFs of sub_1800257F0 @ 0x1800257F0
 * Callers:
 *     sub_1800B9EF0 @ 0x1800B9EF0 (sub_1800B9EF0.c)
 * Callees:
 *     sub_180011C8C @ 0x180011C8C (sub_180011C8C.c)
 *     sub_1800238EC @ 0x1800238EC (sub_1800238EC.c)
 *     sub_180024EC0 @ 0x180024EC0 (sub_180024EC0.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 */

void __fastcall sub_1800257F0(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  sub_18002894C(a1 + 3);
  sub_180024EC0((__int64)a1);
  sub_180011C8C(&v4);
  v2 = v4;
  a1[54] = v4;
  v3 = v2 - a1[53];
  a1[59] = v3;
  sub_1800238EC(v3);
  sub_18001CAFC(&stru_1801B9228, 3);
}
