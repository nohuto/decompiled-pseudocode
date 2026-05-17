/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x1800F5780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlEnumerateGenericTableAvl(__int64 a1, char a2, __int64 a3)
{
  if ( a2 )
    *(_QWORD *)(a1 + 56) = 0LL;
  return RtlEnumerateGenericTableWithoutSplayingAvl(a1, (__int64 *)(a1 + 56), a3);
}
