/*
 * XREFs of MiFreeExcessSegments @ 0x1402EA170
 * Callers:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiCommitPoolMemory @ 0x1402EB010 (MiCommitPoolMemory.c)
 *     MmResourcesAvailable @ 0x14042DCF0 (MmResourcesAvailable.c)
 *     MiCountSystemPool @ 0x140455630 (MiCountSystemPool.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     PsGetNextPartition @ 0x1403D42FC (PsGetNextPartition.c)
 *     MiShouldTrimUnusedSegments @ 0x14049257C (MiShouldTrimUnusedSegments.c)
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
