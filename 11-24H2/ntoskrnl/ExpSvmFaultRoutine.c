/*
 * XREFs of ExpSvmFaultRoutine @ 0x140657EF0
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 */

char __fastcall ExpSvmFaultRoutine(unsigned int a1)
{
  __int64 v1; // rdx
  signed __int32 v2; // eax

  v1 = 104LL * a1;
  v2 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + ExpSvmWorkQueues + 96), 1, 0);
  if ( !v2 )
    LOBYTE(v2) = KeInsertQueueDpc((PRKDPC)(v1 + ExpSvmWorkQueues + 32), 0LL, 0LL);
  return v2;
}
