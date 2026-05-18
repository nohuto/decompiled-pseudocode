/*
 * XREFs of sub_18001210C @ 0x18001210C
 * Callers:
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 * Callees:
 *     sub_180040424 @ 0x180040424 (sub_180040424.c)
 */

__int64 __fastcall sub_18001210C(__int64 a1, __int64 *a2)
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
  return sub_180040424(a1, v5);
}
