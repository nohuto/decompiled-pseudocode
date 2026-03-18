/*
 * XREFs of NtCreateProfileEx @ 0x1407C42A0
 * Callers:
 *     <none>
 * Callees:
 *     ExpProfileCreate @ 0x1407C3C30 (ExpProfileCreate.c)
 */

__int64 __fastcall NtCreateProfileEx(
        __int64 *a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        volatile void *a6,
        SIZE_T a7,
        int a8,
        unsigned __int16 a9,
        __int64 a10)
{
  SIZE_T Length; // [rsp+30h] [rbp-38h]

  LODWORD(Length) = a7;
  return ExpProfileCreate(a1, a2, a3, a4, a5, a6, Length, a8, a9, a10, 0);
}
