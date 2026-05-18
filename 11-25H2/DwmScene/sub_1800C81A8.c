/*
 * XREFs of sub_1800C81A8 @ 0x1800C81A8
 * Callers:
 *     sub_1800C9640 @ 0x1800C9640 (sub_1800C9640.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_18001B448 @ 0x18001B448 (sub_18001B448.c)
 *     sub_180027A8C @ 0x180027A8C (sub_180027A8C.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_180051A28 @ 0x180051A28 (sub_180051A28.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800C81A8(__int64 a1, __int64 *a2, int a3, unsigned int a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rcx
  _BYTE v13[32]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v14[32]; // [rsp+80h] [rbp-48h] BYREF

  v8 = *a2;
  v9 = sub_180027A8C(*(_QWORD *)a1, (__int64)v14);
  v10 = sub_18001B448((__int64)v13, v9, (__int64)"Texture");
  sub_180027C24(v8, v10);
  sub_180011A5C((__int64)v14);
  result = sub_180051A28(
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
    return sub_18001050C(v12);
  return result;
}
