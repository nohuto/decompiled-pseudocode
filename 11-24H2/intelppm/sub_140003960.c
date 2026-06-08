/*
 * XREFs of sub_140003960 @ 0x140003960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140003960(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  __int64 result; // rax

  v3 = 0LL;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 1080) + 312LL);
  if ( v4 )
    v3 = v4 + 40LL * a2;
  else
    v4 = 0LL;
  v5 = *(_QWORD *)(v3 + 16);
  v6 = a3 - v5 + 0xFFFFFFFF;
  if ( a3 >= v5 )
    v6 = a3 - v5;
  result = *(_QWORD *)(v4 + 32) * v6;
  *(_QWORD *)(v3 + 32) += result;
  return result;
}
