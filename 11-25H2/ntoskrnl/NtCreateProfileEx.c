/*
 * XREFs of NtCreateProfileEx @ 0x1407B24A0
 * Callers:
 *     <none>
 * Callees:
 *     ExpProfileCreate @ 0x1407B1E2C (ExpProfileCreate.c)
 */

__int64 __fastcall NtCreateProfileEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        volatile void *a6,
        SIZE_T a7,
        int a8)
{
  SIZE_T Length; // [rsp+30h] [rbp-38h]

  LODWORD(Length) = a7;
  return ExpProfileCreate(a1, a2, a3, a4, a5, a6, Length, a8);
}
