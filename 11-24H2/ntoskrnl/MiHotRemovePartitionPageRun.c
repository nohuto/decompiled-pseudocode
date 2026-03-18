/*
 * XREFs of MiHotRemovePartitionPageRun @ 0x1407FC588
 * Callers:
 *     MiActOnPartitionNodePages @ 0x140688F24 (MiActOnPartitionNodePages.c)
 * Callees:
 *     MiRemovePhysicalMemory @ 0x1407E9DAC (MiRemovePhysicalMemory.c)
 */

__int64 __fastcall MiHotRemovePartitionPageRun(__int64 a1, __int64 a2, int a3, int a4, __int16 a5)
{
  int v5; // r8d

  if ( a3 == 3 )
    v5 = a4 != 0 ? 66080 : 65568;
  else
    v5 = 1048608;
  if ( (a5 & 0x200) != 0 )
  {
    v5 |= 0x80000u;
  }
  else if ( *((ULONG **)qword_140E2FF88 + ((*(_QWORD *)(48 * a1 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL)) == &MiSystemPartition
         && (a5 & 6) != 6 )
  {
    v5 |= 0x400000u;
  }
  return MiRemovePhysicalMemory(a1, a2, v5);
}
