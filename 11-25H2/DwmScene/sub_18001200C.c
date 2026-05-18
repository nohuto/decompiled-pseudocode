/*
 * XREFs of sub_18001200C @ 0x18001200C
 * Callers:
 *     sub_180011CE0 @ 0x180011CE0 (sub_180011CE0.c)
 * Callees:
 *     sub_1800402C4 @ 0x1800402C4 (sub_1800402C4.c)
 */

__int64 __fastcall sub_18001200C(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v5[0] = v2;
  v3 = a2[1];
  a2[1] = 0LL;
  v5[1] = v3;
  return sub_1800402C4(a1, v5);
}
