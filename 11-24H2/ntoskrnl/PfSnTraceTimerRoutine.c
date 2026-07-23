/*
 * XREFs of PfSnTraceTimerRoutine @ 0x140314FF0
 * Callers:
 *     KiProcessExpiredTimerList @ 0x140315CC0 (KiProcessExpiredTimerList.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     PfSnTraceGetLogEntry @ 0x14022BD20 (PfSnTraceGetLogEntry.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
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
  if ( *((_DWORD *)DeferredContext + 82) >= dword_140E66FA4 )
  {
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)DeferredContext + 100, 4, 0) == 0;
    goto LABEL_9;
  }
  KxAcquireSpinLock((PKSPIN_LOCK)DeferredContext + 34);
  if ( !*((_DWORD *)DeferredContext + 100) && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)DeferredContext + 45) )
    KiSetTimerEx(
      (_DWORD)DeferredContext + 136,
      *((_QWORD *)DeferredContext + 25),
      0,
      0,
      (__int64)(DeferredContext + 208));
  KxReleaseSpinLock((volatile signed __int64 *)DeferredContext + 34);
LABEL_11:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)DeferredContext + 45);
}
