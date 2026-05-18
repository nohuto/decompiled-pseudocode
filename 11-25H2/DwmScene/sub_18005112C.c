/*
 * XREFs of sub_18005112C @ 0x18005112C
 * Callers:
 *     sub_1800C1330 @ 0x1800C1330 (sub_1800C1330.c)
 * Callees:
 *     sub_180024550 @ 0x180024550 (sub_180024550.c)
 *     sub_18004E6D4 @ 0x18004E6D4 (sub_18004E6D4.c)
 *     sub_1800511BC @ 0x1800511BC (sub_1800511BC.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18005112C(_QWORD *a1, __int64 *a2, void **a3, __int64 a4)
{
  void *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rax
  void *v12; // rax
  _QWORD v14[7]; // [rsp+20h] [rbp-38h] BYREF

  v8 = *a3;
  v9 = a2[2];
  a2[2] = 0LL;
  v10 = a2[1];
  a2[1] = 0LL;
  v11 = *a2;
  *a2 = 0LL;
  v14[0] = v11;
  v14[1] = v10;
  v14[2] = v9;
  ((void (__fastcall *)(_QWORD *, _QWORD *, void *, __int64))sub_1800511BC)(a1, v14, v8, a4);
  *a1 = &Spectre::Engine::TextureImageSet::`vftable';
  v12 = *a3;
  *a3 = 0LL;
  a1[7] = v12;
  sub_18004E6D4((__int64)a2);
  sub_180024550(a3);
  return a1;
}
