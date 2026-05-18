/*
 * XREFs of sub_180051ED8 @ 0x180051ED8
 * Callers:
 *     sub_180051910 @ 0x180051910 (sub_180051910.c)
 *     sub_180051A28 @ 0x180051A28 (sub_180051A28.c)
 * Callees:
 *     sub_1800511BC @ 0x1800511BC (sub_1800511BC.c)
 *     sub_180051DD4 @ 0x180051DD4 (sub_180051DD4.c)
 */

__int64 __fastcall sub_180051ED8(__int64 a1, unsigned int *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 *v7; // rax
  _QWORD v9[4]; // [rsp+28h] [rbp-20h] BYREF

  v7 = sub_180051DD4(v9, a2, a4);
  sub_1800511BC(a1, v7, a3, a4);
  return a1;
}
