/*
 * XREFs of sub_18007C558 @ 0x18007C558
 * Callers:
 *     sub_180041CA4 @ 0x180041CA4 (sub_180041CA4.c)
 *     sub_18004D2C8 @ 0x18004D2C8 (sub_18004D2C8.c)
 *     sub_18006C298 @ 0x18006C298 (sub_18006C298.c)
 *     sub_18007BB10 @ 0x18007BB10 (sub_18007BB10.c)
 *     sub_18008B3F0 @ 0x18008B3F0 (sub_18008B3F0.c)
 *     sub_180091420 @ 0x180091420 (sub_180091420.c)
 *     sub_1800916C0 @ 0x1800916C0 (sub_1800916C0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18007A010 @ 0x18007A010 (sub_18007A010.c)
 *     sub_18007C5C4 @ 0x18007C5C4 (sub_18007C5C4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007C558(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int16 v5; // ax
  __int64 result; // rax
  __int64 v7; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = sub_18007A010(*(_QWORD *)(a1 + 16), a2);
  v8[0] = *a3;
  v8[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  result = sub_18007C5C4(a1, v5, v8);
  v7 = a3[1];
  if ( v7 )
    return sub_18001060C(v7);
  return result;
}
