/*
 * XREFs of PfpPowerActionDpcRoutine @ 0x1405C7E90
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  KxAcquireSpinLock(&qword_140E66C28);
  v6 = *((_DWORD *)v5 + 41);
  if ( v4 )
  {
    if ( dword_140E66C30 == v6 && qword_140E66C18 )
    {
      *((_QWORD *)v5 + 16) = 0LL;
      *((_QWORD *)v5 + 18) = PfpServiceMainThreadUnboost;
      *((_QWORD *)v5 + 19) = v5;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v5 + 4, DelayedWorkQueue);
      v5 = 0LL;
    }
  }
  else if ( dword_140E66C34 == v6 )
  {
    _InterlockedAnd((_DWORD *)&xmmword_140F0DD48 + 1, 0xFFFFFFFE);
  }
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140E66C28);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
