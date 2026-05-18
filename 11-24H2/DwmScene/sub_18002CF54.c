/*
 * XREFs of sub_18002CF54 @ 0x18002CF54
 * Callers:
 *     sub_180036A44 @ 0x180036A44 (sub_180036A44.c)
 *     sub_1800648A8 @ 0x1800648A8 (sub_1800648A8.c)
 * Callees:
 *     sub_18002D550 @ 0x18002D550 (sub_18002D550.c)
 */

__int64 __fastcall sub_18002CF54(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 result; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  sub_18002D550(a1, v5, a2);
  result = v6;
  if ( *(_BYTE *)(v6 + 25) || *(_QWORD *)(v3 + 8) < *(_QWORD *)(v6 + 40) )
    return *(_QWORD *)v2;
  return result;
}
