/*
 * XREFs of sub_18004AC24 @ 0x18004AC24
 * Callers:
 *     sub_18004CD78 @ 0x18004CD78 (sub_18004CD78.c)
 *     sub_18005AF9C @ 0x18005AF9C (sub_18005AF9C.c)
 *     sub_180073668 @ 0x180073668 (sub_180073668.c)
 * Callees:
 *     sub_18004A230 @ 0x18004A230 (sub_18004A230.c)
 */

__int64 __fastcall sub_18004AC24(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  sub_18004A230(a1, (__int64)&v5, a3);
  *(_QWORD *)a2 = v5;
  *(_BYTE *)(a2 + 8) = v6;
  return a2;
}
