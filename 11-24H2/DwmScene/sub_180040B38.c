/*
 * XREFs of sub_180040B38 @ 0x180040B38
 * Callers:
 *     sub_1800418A4 @ 0x1800418A4 (sub_1800418A4.c)
 *     sub_180041E6C @ 0x180041E6C (sub_180041E6C.c)
 * Callees:
 *     sub_180040BC8 @ 0x180040BC8 (sub_180040BC8.c)
 */

__int64 __fastcall sub_180040B38(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  _WORD *v3; // r11
  __int64 result; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  sub_180040BC8(a1, v5, a2);
  result = v6;
  if ( *(_BYTE *)(v6 + 25) || *v3 < *(_WORD *)(v6 + 28) )
    return *(_QWORD *)v2;
  return result;
}
