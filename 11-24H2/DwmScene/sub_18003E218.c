/*
 * XREFs of sub_18003E218 @ 0x18003E218
 * Callers:
 *     sub_18006BAB4 @ 0x18006BAB4 (sub_18006BAB4.c)
 * Callees:
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18002863C @ 0x18002863C (sub_18002863C.c)
 *     sub_18003C9A8 @ 0x18003C9A8 (sub_18003C9A8.c)
 *     sub_18003D74C @ 0x18003D74C (sub_18003D74C.c)
 *     sub_18003ED1C @ 0x18003ED1C (sub_18003ED1C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 **__fastcall sub_18003E218(__int64 **a1, __int64 a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  _BYTE v7[32]; // [rsp+28h] [rbp-20h] BYREF

  v4 = 0LL;
  v5 = sub_18001B1F8(216LL);
  if ( v5 )
    v4 = (__int64 *)sub_18003D74C(v5, a2);
  sub_18003C9A8(a1, v4);
  sub_18002863C((__int64)(*a1 + 2), (__int64)v7);
  sub_18003ED1C(*a1);
  sub_180011044((__int64)v7);
  return a1;
}
