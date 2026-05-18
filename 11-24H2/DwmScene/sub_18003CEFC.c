/*
 * XREFs of sub_18003CEFC @ 0x18003CEFC
 * Callers:
 *     sub_18003EA2C @ 0x18003EA2C (sub_18003EA2C.c)
 * Callees:
 *     sub_18003CF9C @ 0x18003CF9C (sub_18003CF9C.c)
 *     sub_18003D0F4 @ 0x18003D0F4 (sub_18003D0F4.c)
 */

__int64 __fastcall sub_18003CEFC(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  bool v5; // zf
  __int64 result; // rax
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_18003CF9C(a1, v7);
  v5 = (unsigned __int8)sub_18003D0F4(v4, v8, a2) == 0;
  result = v8;
  if ( v5 )
    return *(_QWORD *)a1;
  return result;
}
