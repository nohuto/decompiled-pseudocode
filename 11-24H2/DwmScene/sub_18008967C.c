/*
 * XREFs of sub_18008967C @ 0x18008967C
 * Callers:
 *     sub_1800898DC @ 0x1800898DC (sub_1800898DC.c)
 * Callees:
 *     sub_180089B74 @ 0x180089B74 (sub_180089B74.c)
 *     sub_180089F3C @ 0x180089F3C (sub_180089F3C.c)
 */

__int64 __fastcall sub_18008967C(
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

  v13 = sub_180089F3C(a9, a2, a12, a6, a7);
  sub_180089B74(a1, a12, (__int64)a6, a7, a8);
  return sub_180089B74(v13, a5 - a12, (__int64)a6, a7, a8);
}
