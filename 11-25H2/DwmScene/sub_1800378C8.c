/*
 * XREFs of sub_1800378C8 @ 0x1800378C8
 * Callers:
 *     sub_1800379B8 @ 0x1800379B8 (sub_1800379B8.c)
 * Callees:
 *     sub_180037B7C @ 0x180037B7C (sub_180037B7C.c)
 *     sub_180037E6C @ 0x180037E6C (sub_180037E6C.c)
 */

__int64 __fastcall sub_1800378C8(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v12; // r12d
  int v15; // edi

  v12 = a4 - a11;
  v15 = sub_180037E6C(a9, a2, a10, a4 - (int)a11, a12, a6, a7);
  sub_180037B7C(a1, a9, v15, a11, a12, a6, a7, a8);
  return sub_180037B7C(v15, a10, a3, v12, a5 - a12, a6, a7, a8);
}
