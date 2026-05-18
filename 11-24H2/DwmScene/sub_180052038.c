/*
 * XREFs of sub_180052038 @ 0x180052038
 * Callers:
 *     sub_180051A70 @ 0x180051A70 (sub_180051A70.c)
 *     sub_180051B88 @ 0x180051B88 (sub_180051B88.c)
 * Callees:
 *     sub_18005131C @ 0x18005131C (sub_18005131C.c)
 *     sub_180051F34 @ 0x180051F34 (sub_180051F34.c)
 */

__int64 __fastcall sub_180052038(__int64 a1, unsigned int *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 *v7; // rax
  _QWORD v9[4]; // [rsp+28h] [rbp-20h] BYREF

  v7 = sub_180051F34(v9, a2, a4);
  sub_18005131C(a1, v7, a3, a4);
  return a1;
}
