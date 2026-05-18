/*
 * XREFs of sub_180013F9C @ 0x180013F9C
 * Callers:
 *     sub_180013BCC @ 0x180013BCC (sub_180013BCC.c)
 * Callees:
 *     sub_180046FF8 @ 0x180046FF8 (sub_180046FF8.c)
 */

__int64 __fastcall sub_180013F9C(__int64 a1, __int64 *a2)
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
  return sub_180046FF8(a1, v5);
}
