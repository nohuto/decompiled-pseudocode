/*
 * XREFs of NtLoadKeyEx @ 0x140913030
 * Callers:
 *     NtLoadKey @ 0x140A837B0 (NtLoadKey.c)
 * Callees:
 *     CmLoadDifferencingKey @ 0x140913148 (CmLoadDifferencingKey.c)
 */

__int64 __fastcall NtLoadKeyEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  char v9; // [rsp+50h] [rbp-28h]
  char PreviousMode; // [rsp+60h] [rbp-18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = 0;
  return CmLoadDifferencingKey(a1, a2, a3, 0LL, a4, a5, a6, a7, a8, 0LL, v9, 0LL, PreviousMode);
}
