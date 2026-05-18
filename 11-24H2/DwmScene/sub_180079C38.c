/*
 * XREFs of sub_180079C38 @ 0x180079C38
 * Callers:
 *     sub_180079324 @ 0x180079324 (sub_180079324.c)
 *     sub_1800797BC @ 0x1800797BC (sub_1800797BC.c)
 *     sub_180079E2C @ 0x180079E2C (sub_180079E2C.c)
 * Callees:
 *     sub_180078C6C @ 0x180078C6C (sub_180078C6C.c)
 */

__int64 __fastcall sub_180079C38(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx

  result = *(unsigned int *)(a1 + 1172);
  v2 = a1 + 80;
  v3 = *(_QWORD *)(a1 + 80);
  v4 = (*(_QWORD *)(a1 + 88) - v3) >> 2;
  if ( result )
  {
    v5 = v4 + result - 1;
    result = ~(result - 1);
    v6 = result & v5;
    if ( v6 >= v4 )
    {
      if ( v6 <= v4 )
        return result;
      if ( v6 > (*(_QWORD *)(v2 + 16) - v3) >> 2 )
        return (__int64)sub_180078B14((const void **)v2, v6, v2);
      result = sub_180078C6C(*(_QWORD *)(v2 + 8), v6 - v4, v2);
    }
    else
    {
      result = v3 + 4 * v6;
    }
    *(_QWORD *)(v2 + 8) = result;
  }
  return result;
}
