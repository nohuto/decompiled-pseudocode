/*
 * XREFs of sub_18002CDF4 @ 0x18002CDF4
 * Callers:
 *     sub_1800368E4 @ 0x1800368E4 (sub_1800368E4.c)
 *     sub_180064748 @ 0x180064748 (sub_180064748.c)
 * Callees:
 *     sub_18002D3F0 @ 0x18002D3F0 (sub_18002D3F0.c)
 */

__int64 __fastcall sub_18002CDF4(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 result; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  sub_18002D3F0(a1, v5, a2);
  result = v6;
  if ( *(_BYTE *)(v6 + 25) || *(_QWORD *)(v3 + 8) < *(_QWORD *)(v6 + 40) )
    return *(_QWORD *)v2;
  return result;
}
