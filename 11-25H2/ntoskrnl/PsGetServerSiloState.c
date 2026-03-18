/*
 * XREFs of PsGetServerSiloState @ 0x1403D7670
 * Callers:
 *     SepQueueWorkItem @ 0x1403D74A8 (SepQueueWorkItem.c)
 *     PspCompleteServerSiloShutdown @ 0x140762BE8 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140762C40 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspCatchCriticalBreak @ 0x140769208 (PspCatchCriticalBreak.c)
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
