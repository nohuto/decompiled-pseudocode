/*
 * XREFs of sub_18007C5F8 @ 0x18007C5F8
 * Callers:
 *     sub_180041CD8 @ 0x180041CD8 (sub_180041CD8.c)
 *     sub_18004D1A0 @ 0x18004D1A0 (sub_18004D1A0.c)
 *     sub_18006C138 @ 0x18006C138 (sub_18006C138.c)
 *     sub_18007B9B0 @ 0x18007B9B0 (sub_18007B9B0.c)
 *     sub_18008B290 @ 0x18008B290 (sub_18008B290.c)
 *     sub_1800912C0 @ 0x1800912C0 (sub_1800912C0.c)
 *     sub_180091560 @ 0x180091560 (sub_180091560.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180079E74 @ 0x180079E74 (sub_180079E74.c)
 *     sub_18007C664 @ 0x18007C664 (sub_18007C664.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007C5F8(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int16 v5; // ax
  __int64 result; // rax
  __int64 v7; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = sub_180079E74(*(_QWORD *)(a1 + 16), a2);
  v8[0] = *a3;
  v8[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  result = sub_18007C664(a1, v5, v8);
  v7 = a3[1];
  if ( v7 )
    return sub_18001050C(v7);
  return result;
}
