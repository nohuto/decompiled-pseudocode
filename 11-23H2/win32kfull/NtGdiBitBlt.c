/*
 * XREFs of NtGdiBitBlt @ 0x1C0107830
 * Callers:
 *     <none>
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C0105030 (NtGdiBitBltInternal.c)
 */

__int64 __fastcall NtGdiBitBlt(
        __int64 a1,
        LONG a2,
        LONG a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        int a9,
        int a10,
        char a11)
{
  return NtGdiBitBltInternal(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11 & 0xFD);
}
