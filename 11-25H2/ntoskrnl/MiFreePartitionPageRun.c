/*
 * XREFs of MiFreePartitionPageRun @ 0x14067EC40
 * Callers:
 *     MiActOnPartitionNodePages @ 0x14067D694 (MiActOnPartitionNodePages.c)
 * Callees:
 *     MiFreeMdlPageRun @ 0x14038C69C (MiFreeMdlPageRun.c)
 *     MiInsertHugeRangeInPartition @ 0x14067EDC8 (MiInsertHugeRangeInPartition.c)
 */

__int64 __fastcall MiFreePartitionPageRun(__int64 a1, ULONG_PTR a2, unsigned __int64 a3, __int16 a4, int a5)
{
  ULONG_PTR v5; // rdi
  __int64 result; // rax
  unsigned __int64 i; // rbx

  v5 = a2;
  if ( a2 <= qword_140E2D9A0 )
  {
    result = *(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) >> 54;
    if ( (*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
      return MiFreeMdlPageRun(a2, a3, a5 != 0, (a4 & 0x800 | 0x1000u) >> 11, 0LL);
  }
  for ( i = a3 >> 18; i; --i )
  {
    result = MiInsertHugeRangeInPartition(v5, a5 != 0);
    v5 += 0x40000LL;
  }
  return result;
}
