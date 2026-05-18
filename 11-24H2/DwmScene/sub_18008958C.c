/*
 * XREFs of sub_18008958C @ 0x18008958C
 * Callers:
 *     sub_18008976C @ 0x18008976C (sub_18008976C.c)
 * Callees:
 *     sub_180089A4C @ 0x180089A4C (sub_180089A4C.c)
 *     sub_180089F3C @ 0x180089F3C (sub_180089F3C.c)
 */

__int64 __fastcall sub_18008958C(
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
  sub_180089A4C(a1, a12, (__int64)a6, a7, a8);
  return sub_180089A4C(v13, a5 - a12, (__int64)a6, a7, a8);
}
