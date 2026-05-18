/*
 * XREFs of sub_18006CF4C @ 0x18006CF4C
 * Callers:
 *     sub_18006D080 @ 0x18006D080 (sub_18006D080.c)
 * Callees:
 *     sub_180028AD0 @ 0x180028AD0 (sub_180028AD0.c)
 *     sub_18002922C @ 0x18002922C (sub_18002922C.c)
 *     sub_18002B468 @ 0x18002B468 (sub_18002B468.c)
 *     sub_18006CFF4 @ 0x18006CFF4 (sub_18006CFF4.c)
 */

__int64 __fastcall sub_18006CF4C(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = a3;
  v3 = 0x86BCA1AF286BCA1BuLL * ((a1[1] - *a1) >> 3);
  v8 = sub_18002B468(a1, 0xF0uLL);
  v6 = sub_180028AD0(v5, &v8);
  sub_18006CFF4(v6 + 152 * v3, 240 - v3, a1);
  sub_18002922C(*a1, a1[1], v6);
  return sub_18002B4B0((__int64)a1, v6, 240LL, v8);
}
