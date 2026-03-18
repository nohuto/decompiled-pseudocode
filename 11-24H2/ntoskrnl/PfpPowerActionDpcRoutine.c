/*
 * XREFs of PfpPowerActionDpcRoutine @ 0x1405CC460
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  KxAcquireSpinLock(&qword_140E66EE8);
  v6 = *((_DWORD *)v5 + 41);
  if ( v4 )
  {
    if ( dword_140E66EF0 == v6 && qword_140E66ED8 )
    {
      *((_QWORD *)v5 + 16) = 0LL;
      *((_QWORD *)v5 + 18) = PfpServiceMainThreadUnboost;
      *((_QWORD *)v5 + 19) = v5;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v5 + 4, DelayedWorkQueue);
      v5 = 0LL;
    }
  }
  else if ( dword_140E66EF4 == v6 )
  {
    _InterlockedAnd((_DWORD *)&xmmword_140F0E408 + 1, 0xFFFFFFFE);
  }
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140E66EE8);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
