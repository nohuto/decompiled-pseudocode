/*
 * XREFs of sub_18000CF8C @ 0x18000CF8C
 * Callers:
 *     sub_18000E15C @ 0x18000E15C (sub_18000E15C.c)
 *     sub_18000E884 @ 0x18000E884 (sub_18000E884.c)
 * Callees:
 *     sub_18000CDC0 @ 0x18000CDC0 (sub_18000CDC0.c)
 *     sub_18000E684 @ 0x18000E684 (sub_18000E684.c)
 */

__int64 __fastcall sub_18000CF8C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  int v7; // r8d
  int v8; // r9d
  int v9; // r10d
  int v10; // r11d
  _DWORD v12[6]; // [rsp+50h] [rbp-18h] BYREF

  v12[0] = a7;
  v12[2] = 0;
  v12[1] = sub_18000E684(a7);
  return sub_18000CDC0(v10, v9, v7, v8, a5, a6, (__int64)v12);
}
