/*
 * XREFs of sub_18008942C @ 0x18008942C
 * Callers:
 *     sub_18008960C @ 0x18008960C (sub_18008960C.c)
 * Callees:
 *     sub_1800898EC @ 0x1800898EC (sub_1800898EC.c)
 *     sub_180089DDC @ 0x180089DDC (sub_180089DDC.c)
 */

__int64 __fastcall sub_18008942C(
        int a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        char a8,
        void *a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v13; // edi

  v13 = sub_180089DDC(a9, a2, a12, a6, a7);
  sub_1800898EC(a1, a12, (__int64)a6, a7, a8);
  return sub_1800898EC(v13, a5 - a12, (__int64)a6, a7, a8);
}
