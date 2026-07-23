/*
 * XREFs of PfpPowerActionDpcRoutine @ 0x1405C9BD0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PfpPowerActionDpcRoutine(
        struct _KDPC *Dpc,
        _DWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // ebx
  PVOID v5; // rdi
  int v6; // eax

  v4 = DeferredContext[40];
  v5 = DeferredContext;
  KxAcquireSpinLock(&qword_140E67038);
  v6 = *((_DWORD *)v5 + 41);
  if ( v4 )
  {
    if ( dword_140E67040 == v6 && qword_140E67028 )
    {
      *((_QWORD *)v5 + 16) = 0LL;
      *((_QWORD *)v5 + 18) = PfpServiceMainThreadUnboost;
      *((_QWORD *)v5 + 19) = v5;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v5 + 4, DelayedWorkQueue);
      v5 = 0LL;
    }
  }
  else if ( dword_140E67044 == v6 )
  {
    _InterlockedAnd((_DWORD *)&xmmword_140F0E6E8 + 1, 0xFFFFFFFE);
  }
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140E67038);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
