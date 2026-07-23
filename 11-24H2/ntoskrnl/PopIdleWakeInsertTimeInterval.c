/*
 * XREFs of PopIdleWakeInsertTimeInterval @ 0x1404A4828
 * Callers:
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x1404A462C (PopIdleWakeStopActiveIntervalAccounting.c)
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x1404A4D20 (PopIdleWakeNotifyIdleResiliencyState.c)
 * Callees:
 *     <none>
 */

void __fastcall PopIdleWakeInsertTimeInterval(unsigned __int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r10
  __int64 v7; // r9

  LODWORD(v6) = 0;
  while ( (unsigned int)v6 < a2 )
  {
    v7 = (unsigned int)v6;
    v6 = (unsigned int)(v6 + 1);
    if ( a1 >= *(_QWORD *)(a5 + 8 * v7) && a1 < *(_QWORD *)(a5 + 8 * v6) )
    {
      ++*(_DWORD *)(a3 + 4 * v7);
      if ( a4 )
        *(_QWORD *)(a4 + 8 * v7) += a1;
      return;
    }
  }
}
