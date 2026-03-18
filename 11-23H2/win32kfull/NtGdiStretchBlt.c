/*
 * XREFs of NtGdiStretchBlt @ 0x1C0070E90
 * Callers:
 *     <none>
 * Callees:
 *     GreStretchBltInternal @ 0x1C0100110 (GreStretchBltInternal.c)
 */

__int64 __fastcall NtGdiStretchBlt(
        HDC a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return GreStretchBltInternal(a1, a5, a6, a7, a8, a9, a10, a11, a12, 0);
}
