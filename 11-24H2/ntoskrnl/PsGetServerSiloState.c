/*
 * XREFs of PsGetServerSiloState @ 0x1403C377C
 * Callers:
 *     SepQueueWorkItem @ 0x1403C35C4 (SepQueueWorkItem.c)
 *     PspCompleteServerSiloShutdown @ 0x1407727C8 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140772820 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspCatchCriticalBreak @ 0x140778FB8 (PspCatchCriticalBreak.c)
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
