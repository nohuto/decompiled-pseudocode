/*
 * XREFs of sub_18008951C @ 0x18008951C
 * Callers:
 *     sub_18008977C @ 0x18008977C (sub_18008977C.c)
 * Callees:
 *     sub_180089A14 @ 0x180089A14 (sub_180089A14.c)
 *     sub_180089DDC @ 0x180089DDC (sub_180089DDC.c)
 */

__int64 __fastcall sub_18008951C(
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
  sub_180089A14(a1, a12, (__int64)a6, a7, a8);
  return sub_180089A14(v13, a5 - a12, (__int64)a6, a7, a8);
}
