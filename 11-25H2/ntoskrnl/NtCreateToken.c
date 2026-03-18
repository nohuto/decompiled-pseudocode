/*
 * XREFs of NtCreateToken @ 0x1407837B0
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateTokenEx @ 0x1409974A0 (NtCreateTokenEx.c)
 */

__int64 __fastcall NtCreateToken(
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
        __int64 a12,
        __int64 a13)
{
  return NtCreateTokenEx(a1, a2, a3, a4, a5, a6, a7, a8, a9, 0LL, 0LL, 0LL, 0LL, a10, a11, a12, a13);
}
