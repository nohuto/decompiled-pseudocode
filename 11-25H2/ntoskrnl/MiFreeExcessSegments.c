/*
 * XREFs of MiFreeExcessSegments @ 0x1403BE140
 * Callers:
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiCommitPoolMemory @ 0x1402C2C90 (MiCommitPoolMemory.c)
 *     MmResourcesAvailable @ 0x140433160 (MmResourcesAvailable.c)
 *     MiCountSystemPool @ 0x14045554C (MiCountSystemPool.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     PsGetNextPartition @ 0x1403BE1E8 (PsGetNextPartition.c)
 *     MiShouldTrimUnusedSegments @ 0x1403BE244 (MiShouldTrimUnusedSegments.c)
 */

int __fastcall MiFreeExcessSegments(ULONG *a1)
{
  unsigned __int64 NextPartition; // rax
  __int64 v2; // r10
  unsigned __int64 i; // rbx

  if ( !a1 )
    a1 = &MiSystemPartition;
  NextPartition = *((_QWORD *)a1 + 2108);
  if ( *((_QWORD *)a1 + 2408) >= NextPartition )
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
          if ( *(_QWORD *)(*(_QWORD *)i + 2088LL) )
            KeSetEvent((PRKEVENT)(*(_QWORD *)i + 1784LL), 0, 0);
          NextPartition = PsGetNextPartition(i);
        }
      }
    }
  }
  return NextPartition;
}
