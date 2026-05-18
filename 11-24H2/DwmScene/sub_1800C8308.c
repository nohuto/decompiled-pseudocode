/*
 * XREFs of sub_1800C8308 @ 0x1800C8308
 * Callers:
 *     sub_1800C97A0 @ 0x1800C97A0 (sub_1800C97A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_18001B5A8 @ 0x18001B5A8 (sub_18001B5A8.c)
 *     sub_180027BEC @ 0x180027BEC (sub_180027BEC.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 *     sub_180051B88 @ 0x180051B88 (sub_180051B88.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800C8308(__int64 a1, __int64 *a2, int a3, unsigned int a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rcx
  _BYTE v13[32]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v14[32]; // [rsp+80h] [rbp-48h] BYREF

  v8 = *a2;
  v9 = sub_180027BEC(*(_QWORD *)a1, (__int64)v14);
  v10 = sub_18001B5A8((__int64)v13, v9, (__int64)"Texture");
  sub_180027D84(v8, v10);
  sub_180011B5C((__int64)v14);
  result = sub_180051B88(
             *a2,
             **(_DWORD **)(a1 + 8),
             **(_DWORD **)(a1 + 16),
             0,
             a3,
             0,
             **(_DWORD **)(a1 + 24) | a4,
             0LL,
             0,
             **(_QWORD **)(a1 + 32));
  v12 = a2[1];
  if ( v12 )
    return sub_18001060C(v12);
  return result;
}
