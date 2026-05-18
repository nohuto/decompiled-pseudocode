/*
 * XREFs of sub_1800C0284 @ 0x1800C0284
 * Callers:
 *     sub_1800BECFC @ 0x1800BECFC (sub_1800BECFC.c)
 *     sub_1800C833C @ 0x1800C833C (sub_1800C833C.c)
 * Callees:
 *     sub_1800C02D8 @ 0x1800C02D8 (sub_1800C02D8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C0284(__int64 a1, __int64 *a2, unsigned int a3)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  v5[0] = 0LL;
  if ( v5 != a2 )
  {
    v5[0] = *a2;
    *a2 = 0LL;
  }
  sub_1800C02D8(a1, v5, &v6, a3);
  return sub_18000E854(a2);
}
