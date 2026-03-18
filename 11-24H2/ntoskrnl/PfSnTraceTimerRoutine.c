/*
 * XREFs of PfSnTraceTimerRoutine @ 0x14047FAD0
 * Callers:
 *     KiProcessExpiredTimerList @ 0x1403358E0 (KiProcessExpiredTimerList.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     PfSnTraceGetLogEntry @ 0x140276790 (PfSnTraceGetLogEntry.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     KiSetTimerEx @ 0x1403347A0 (KiSetTimerEx.c)
 */

void __fastcall PfSnTraceTimerRoutine(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v5; // r8d
  int v6; // eax
  unsigned __int64 *v7; // rcx
  bool v8; // zf
  unsigned __int64 *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  if ( *((_DWORD *)DeferredContext + 100) )
    goto LABEL_11;
  v5 = *((_DWORD *)DeferredContext + 85);
  if ( *((_DWORD *)DeferredContext + 83) <= v5 )
    v5 = *((_DWORD *)DeferredContext + 83);
  v6 = *((_DWORD *)DeferredContext + 81);
  if ( v6 > v5 )
    v6 = v5;
  *(_DWORD *)&DeferredContext[4 * (*((_DWORD *)DeferredContext + 82))++ + 284] = v5 - v6;
  *((_DWORD *)DeferredContext + 81) = v5;
  if ( (int)PfSnTraceGetLogEntry((__int64)DeferredContext, 1u, &v9) < 0 )
  {
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)DeferredContext + 100, 10, 0) == 0;
LABEL_9:
    if ( v8 )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(DeferredContext + 368), DelayedWorkQueue);
    goto LABEL_11;
  }
  v7 = v9;
  *v9 &= 0xFuLL;
  v7[1] = 0LL;
  *v7 = *v7 & 0xFFFFFFFFFFFFFFF0uLL | 4;
  if ( *((_DWORD *)DeferredContext + 82) >= dword_140E66E54 )
  {
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)DeferredContext + 100, 4, 0) == 0;
    goto LABEL_9;
  }
  KxAcquireSpinLock((PKSPIN_LOCK)DeferredContext + 34);
  if ( !*((_DWORD *)DeferredContext + 100) && ExAcquireRundownProtection((PEX_RUNDOWN_REF)DeferredContext + 45) )
    KiSetTimerEx(
      (__int64)(DeferredContext + 136),
      *((_QWORD *)DeferredContext + 25),
      0,
      0,
      (__int64)(DeferredContext + 208));
  KxReleaseSpinLock((volatile signed __int64 *)DeferredContext + 34);
LABEL_11:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)DeferredContext + 45);
}
