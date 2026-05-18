/*
 * XREFs of sub_18004C754 @ 0x18004C754
 * Callers:
 *     sub_18007E444 @ 0x18007E444 (sub_18007E444.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18004A2F8 @ 0x18004A2F8 (sub_18004A2F8.c)
 *     sub_18004B2B4 @ 0x18004B2B4 (sub_18004B2B4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_18004C754(__int64 a1, __int64 *a2, __int64 a3)
{
  int v6; // ebx
  unsigned int i; // edi
  _BYTE v9[16]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v10; // [rsp+40h] [rbp-30h] BYREF

  sub_18004B2B4(a2);
  v6 = 1;
  for ( i = 0; i < 0x40; ++i )
  {
    if ( _bittest64(&a3, i) )
    {
      v6 |= 2u;
      sub_180016F54((__int64)&v10, a1 + 32LL * (int)i + 32);
      sub_18004A2F8(a2, (__int64)v9, (__int64)&v10);
      sub_180011A5C((__int64)&v10);
    }
  }
  return a2;
}
