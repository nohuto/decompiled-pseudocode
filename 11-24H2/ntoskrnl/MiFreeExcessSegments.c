/*
 * XREFs of MiFreeExcessSegments @ 0x14034B7B0
 * Callers:
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiCommitPoolMemory @ 0x14034C650 (MiCommitPoolMemory.c)
 *     MmResourcesAvailable @ 0x14041FA20 (MmResourcesAvailable.c)
 *     MiCountSystemPool @ 0x14044A3E0 (MiCountSystemPool.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PsGetNextPartition @ 0x14026227C (PsGetNextPartition.c)
 *     MiShouldTrimUnusedSegments @ 0x14048D3EC (MiShouldTrimUnusedSegments.c)
 */

int __fastcall MiFreeExcessSegments(ULONG *a1)
{
  _QWORD *NextPartition; // rax
  __int64 v2; // r10
  _QWORD *i; // rbx

  if ( !a1 )
    a1 = &MiSystemPartition;
  NextPartition = (_QWORD *)*((_QWORD *)a1 + 2108);
  if ( *((_QWORD *)a1 + 2408) >= (unsigned __int64)NextPartition )
  {
    LODWORD(NextPartition) = MiShouldTrimUnusedSegments(a1);
    if ( (_DWORD)NextPartition )
    {
      if ( v2 )
      {
        if ( *(_QWORD *)(v2 + 2088) )
          LODWORD(NextPartition) = KeSetEvent((PRKEVENT)(v2 + 1784), 0, 0);
      }
      else
      {
        NextPartition = PsGetNextPartition(0LL);
        for ( i = NextPartition; NextPartition; i = NextPartition )
        {
          if ( *(_QWORD *)(*i + 2088LL) )
            KeSetEvent((PRKEVENT)(*i + 1784LL), 0, 0);
          NextPartition = PsGetNextPartition(i);
        }
      }
    }
  }
  return (int)NextPartition;
}
