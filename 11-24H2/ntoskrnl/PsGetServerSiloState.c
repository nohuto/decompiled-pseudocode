/*
 * XREFs of PsGetServerSiloState @ 0x140349D3C
 * Callers:
 *     SepQueueWorkItem @ 0x140349B84 (SepQueueWorkItem.c)
 *     PspCompleteServerSiloShutdown @ 0x1407725A8 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140772600 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspCatchCriticalBreak @ 0x140778EB8 (PspCatchCriticalBreak.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloState(__int64 a1)
{
  if ( a1 )
    return *(unsigned int *)(*(_QWORD *)(a1 + 1504) + 1272LL);
  else
    return 1LL;
}
