/*
 * XREFs of CiSchedulerUpdateTaskIndexPriorities @ 0x140002F70
 * Callers:
 *     CiSchedulerCancelTaskIndexYield @ 0x140001800 (CiSchedulerCancelTaskIndexYield.c)
 *     CiSchedulerProcessDeadlines @ 0x140001BB0 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerSleep @ 0x140001F80 (CiSchedulerSleep.c)
 *     CiSchedulerWait @ 0x140002650 (CiSchedulerWait.c)
 * Callees:
 *     CiLogSchedulerEvent @ 0x140003860 (CiLogSchedulerEvent.c)
 */

void __fastcall CiSchedulerUpdateTaskIndexPriorities(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *i; // rsi
  __int64 v3; // rax
  unsigned __int8 v4; // dl
  unsigned int v5; // ebp

  v1 = *(__int64 **)(a1 + 32);
  for ( i = (__int64 *)(a1 + 32); v1 != i; v1 = (__int64 *)*v1 )
  {
    if ( (*((_BYTE *)v1 + 68) & 1) == 0 )
    {
      if ( CiThreadsMovedUp )
      {
        v3 = *(v1 - 1);
        if ( *(_QWORD *)(v3 + 120) || !*(_BYTE *)(v3 + 132) && *(_QWORD *)(v3 + 80) )
        {
          v4 = *(_BYTE *)(*(v1 - 2) + 40);
          if ( v4 > *((_BYTE *)v1 + 24) )
            v4 = *((_BYTE *)v1 + 24);
        }
        else
        {
          v4 = *((_BYTE *)v1 + 24);
        }
      }
      else
      {
        v4 = *((_BYTE *)v1 + 26);
      }
      v5 = v4;
      if ( *((unsigned __int8 *)v1 + 27) != v4 )
      {
        *((_BYTE *)v1 + 27) = v4;
        if ( byte_14000A0D0 )
          CiLogSchedulerEvent(v1 - 10, v4);
        KeSetActualBasePriorityThread(v1[2], v5);
      }
    }
  }
}
