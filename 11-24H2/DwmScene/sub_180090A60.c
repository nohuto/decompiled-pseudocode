/*
 * XREFs of sub_180090A60 @ 0x180090A60
 * Callers:
 *     sub_18008DA68 @ 0x18008DA68 (sub_18008DA68.c)
 * Callees:
 *     _o_ceilf @ 0x18000C41C (_o_ceilf.c)
 */

__int64 __fastcall sub_180090A60(__int64 a1, __int64 a2)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 result; // rax

  if ( a2 < 0 )
    v2 = (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1))
       + (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1));
  else
    v2 = (float)(int)a2;
  v3 = v2 / *(float *)&dword_1801C9A60;
  o_ceilf();
  v4 = 0LL;
  if ( v3 >= 9.223372e18 )
  {
    v3 = v3 - 9.223372e18;
    if ( v3 < 9.223372e18 )
      v4 = 0x8000000000000000uLL;
  }
  v5 = v4 + (unsigned int)(int)v3;
  v6 = 8LL;
  if ( v5 > 8 )
    v6 = v5;
  result = qword_1801C9A98;
  if ( qword_1801C9A98 < v6 )
  {
    if ( (unsigned __int64)qword_1801C9A98 < 0x200 && 8 * qword_1801C9A98 >= v6 )
      return 8 * qword_1801C9A98;
    return v6;
  }
  return result;
}
