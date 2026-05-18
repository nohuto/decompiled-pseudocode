/*
 * XREFs of sub_18002CE30 @ 0x18002CE30
 * Callers:
 *     sub_18002BE84 @ 0x18002BE84 (sub_18002BE84.c)
 *     sub_18005D728 @ 0x18005D728 (sub_18005D728.c)
 * Callees:
 *     sub_18002D444 @ 0x18002D444 (sub_18002D444.c)
 *     sub_18002D9D0 @ 0x18002D9D0 (sub_18002D9D0.c)
 */

__int64 __fastcall sub_18002CE30(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  bool v5; // zf
  __int64 result; // rax
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_18002D444(a1, v7, a2);
  v5 = (unsigned __int8)sub_18002D9D0(v4, v8, a2) == 0;
  result = v8;
  if ( v5 )
    return *(_QWORD *)a1;
  return result;
}
