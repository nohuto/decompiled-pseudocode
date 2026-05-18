/*
 * XREFs of sub_18002C0B0 @ 0x18002C0B0
 * Callers:
 *     sub_18002B9F4 @ 0x18002B9F4 (sub_18002B9F4.c)
 * Callees:
 *     sub_180054B7C @ 0x180054B7C (sub_180054B7C.c)
 */

__int64 __fastcall sub_18002C0B0(__int64 a1, __int64 *a2)
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
  return sub_180054B7C(a1, v5);
}
