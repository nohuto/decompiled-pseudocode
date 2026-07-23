/*
 * XREFs of MiIncreaseExposedCommit @ 0x14044DBA8
 * Callers:
 *     MiInsertPartitionPages @ 0x14068BA00 (MiInsertPartitionPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiIncreaseExposedCommit(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v3; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rcx

  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 19328), a2);
  result = *(_QWORD *)(a1 + 16832);
  v5 = a2 + v3;
  do
  {
    if ( v5 <= result )
      break;
    v6 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16832), v5, result);
  }
  while ( v6 != result );
  return result;
}
