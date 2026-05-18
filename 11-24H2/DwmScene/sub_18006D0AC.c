/*
 * XREFs of sub_18006D0AC @ 0x18006D0AC
 * Callers:
 *     sub_18006D1E0 @ 0x18006D1E0 (sub_18006D1E0.c)
 * Callees:
 *     sub_180028C30 @ 0x180028C30 (sub_180028C30.c)
 *     sub_18002938C @ 0x18002938C (sub_18002938C.c)
 *     sub_18002B5C8 @ 0x18002B5C8 (sub_18002B5C8.c)
 *     sub_18006D154 @ 0x18006D154 (sub_18006D154.c)
 */

__int64 __fastcall sub_18006D0AC(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = a3;
  v3 = 0x86BCA1AF286BCA1BuLL * ((a1[1] - *a1) >> 3);
  v8 = sub_18002B5C8(a1, 0xF0uLL);
  v6 = sub_180028C30(v5, &v8);
  sub_18006D154(v6 + 152 * v3, 240 - v3, a1);
  sub_18002938C(*a1, a1[1], v6);
  return sub_18002B610((__int64)a1, v6, 240LL, v8);
}
