/*
 * XREFs of sub_18002CF90 @ 0x18002CF90
 * Callers:
 *     sub_18002BFE4 @ 0x18002BFE4 (sub_18002BFE4.c)
 *     sub_18005D888 @ 0x18005D888 (sub_18005D888.c)
 * Callees:
 *     sub_18002D5A4 @ 0x18002D5A4 (sub_18002D5A4.c)
 *     sub_18002DB30 @ 0x18002DB30 (sub_18002DB30.c)
 */

__int64 __fastcall sub_18002CF90(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  bool v5; // zf
  __int64 result; // rax
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_18002D5A4(a1, v7, a2);
  v5 = (unsigned __int8)sub_18002DB30(v4, v8, a2) == 0;
  result = v8;
  if ( v5 )
    return *(_QWORD *)a1;
  return result;
}
