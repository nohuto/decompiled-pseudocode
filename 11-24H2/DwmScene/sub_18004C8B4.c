/*
 * XREFs of sub_18004C8B4 @ 0x18004C8B4
 * Callers:
 *     sub_18007E5A4 @ 0x18007E5A4 (sub_18007E5A4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18004A458 @ 0x18004A458 (sub_18004A458.c)
 *     sub_18004B414 @ 0x18004B414 (sub_18004B414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_18004C8B4(__int64 a1, __int64 *a2, __int64 a3)
{
  int v6; // ebx
  unsigned int i; // edi
  _BYTE v9[16]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v10; // [rsp+40h] [rbp-30h] BYREF

  sub_18004B414(a2);
  v6 = 1;
  for ( i = 0; i < 0x40; ++i )
  {
    if ( _bittest64(&a3, i) )
    {
      v6 |= 2u;
      sub_180017054((__int64)&v10, a1 + 32LL * (int)i + 32);
      sub_18004A458(a2, (__int64)v9, (__int64)&v10);
      sub_180011B5C((__int64)&v10);
    }
  }
  return a2;
}
