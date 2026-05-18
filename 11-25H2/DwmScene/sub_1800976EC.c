/*
 * XREFs of sub_1800976EC @ 0x1800976EC
 * Callers:
 *     sub_180097784 @ 0x180097784 (sub_180097784.c)
 * Callees:
 *     sub_180096638 @ 0x180096638 (sub_180096638.c)
 *     sub_1800966C0 @ 0x1800966C0 (sub_1800966C0.c)
 *     sub_18009671C @ 0x18009671C (sub_18009671C.c)
 *     sub_18009686C @ 0x18009686C (sub_18009686C.c)
 *     sub_1800969CC @ 0x1800969CC (sub_1800969CC.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800976EC(__int64 a1, __int64 a2, _QWORD *a3)
{
  char result; // al
  int v6; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v7; // [rsp+28h] [rbp-D0h]
  __int64 v8[24]; // [rsp+38h] [rbp-C0h] BYREF

  result = sub_18009686C(a2);
  if ( result )
  {
    result = sub_1800969CC(a2, (__int64)&v6);
    if ( v6 == 2 )
    {
      *a3 = v7;
      sub_180096638((__int64)v8);
      sub_18009671C(a2, v8);
    }
    else
    {
      if ( v6 != 5 )
        return result;
      sub_180096638((__int64)v8);
      sub_18009671C(a2, v8);
    }
    return sub_1800966C0(v8);
  }
  return result;
}
