/*
 * XREFs of sub_180041B10 @ 0x180041B10
 * Callers:
 *     sub_180090770 @ 0x180090770 (sub_180090770.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180041B10(__int64 a1, char a2, char a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx

  result = 1LL << a2;
  v4 = *(_QWORD *)(a1 + 160);
  if ( a3 )
  {
    v5 = result | v4;
  }
  else
  {
    result = ~result;
    v5 = result & v4;
  }
  *(_QWORD *)(a1 + 160) = v5;
  return result;
}
