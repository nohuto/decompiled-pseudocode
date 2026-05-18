/*
 * XREFs of sub_18009784C @ 0x18009784C
 * Callers:
 *     sub_1800978E4 @ 0x1800978E4 (sub_1800978E4.c)
 * Callees:
 *     sub_180096798 @ 0x180096798 (sub_180096798.c)
 *     sub_180096820 @ 0x180096820 (sub_180096820.c)
 *     sub_18009687C @ 0x18009687C (sub_18009687C.c)
 *     sub_1800969CC @ 0x1800969CC (sub_1800969CC.c)
 *     sub_180096B2C @ 0x180096B2C (sub_180096B2C.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18009784C(__int64 a1, __int64 a2, _QWORD *a3)
{
  char result; // al
  int v6; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v7; // [rsp+28h] [rbp-D0h]
  __int64 v8[24]; // [rsp+38h] [rbp-C0h] BYREF

  result = sub_1800969CC(a2);
  if ( result )
  {
    result = sub_180096B2C(a2, (__int64)&v6);
    if ( v6 == 2 )
    {
      *a3 = v7;
      sub_180096798((__int64)v8);
      sub_18009687C(a2, v8);
    }
    else
    {
      if ( v6 != 5 )
        return result;
      sub_180096798((__int64)v8);
      sub_18009687C(a2, v8);
    }
    return sub_180096820(v8);
  }
  return result;
}
