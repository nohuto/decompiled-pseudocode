/*
 * XREFs of KiAbThreadRemoveBoostsSlow @ 0x14031FE60
 * Callers:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14028D3B0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiAbCrossThreadRelease @ 0x1402F2188 (KiAbCrossThreadRelease.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KiAbThreadRemoveBoosts @ 0x1403206B0 (KiAbThreadRemoveBoosts.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14027E3A0 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x14027E9B0 (PsBoostThreadIoQoS.c)
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiCheckForThreadDispatch @ 0x1402C5DAC (KiCheckForThreadDispatch.c)
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     EtwTraceAutoBoostClearFloor @ 0x1403C11EC (EtwTraceAutoBoostClearFloor.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall KiAbThreadRemoveBoostsSlow(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        int a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  __int64 v6; // rbp
  unsigned int v8; // esi
  char v9; // bp
  struct _SINGLE_LIST_ENTRY *v10; // r15
  __int64 CurrentIrql; // rcx
  bool i; // zf
  int v13; // eax
  unsigned int v14; // r14d
  int v15; // r12d
  char v16; // al
  char v17; // al
  unsigned int v18; // edx
  unsigned int v19; // eax
  __int64 v20; // r9
  struct _KPRCB *CurrentPrcb; // r14
  struct _SINGLE_LIST_ENTRY *Next; // rsi
  unsigned __int8 v23; // [rsp+30h] [rbp-48h]
  __int64 v24; // [rsp+38h] [rbp-40h] BYREF

  if ( a3 )
  {
    v6 = a2;
    if ( (a3 & 0x40000000) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter1 + 860));
      PsBoostThreadIoEx(BugCheckParameter1, 1, 0, 0LL);
    }
    if ( a3 < 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter1 + 864));
      PsBoostThreadIoQoS(BugCheckParameter1, 1);
    }
    v8 = a3 & 0x3FFFFFFF;
    if ( (a3 & 0x3FFFFFFF) != 0 )
    {
      v9 = 0;
      v24 = 0LL;
      v23 = -1;
      if ( a4 )
      {
        v10 = a4;
      }
      else
      {
        v10 = (struct _SINGLE_LIST_ENTRY *)&v24;
        CurrentIrql = KeGetCurrentIrql();
        v23 = CurrentIrql;
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      }
      for ( i = !_BitScanForward((unsigned int *)&v13, v8); !i; i = !_BitScanForward((unsigned int *)&v13, v8) )
      {
        v14 = 0;
        v15 = (char)v13 + 1;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        {
          do
          {
            if ( (++v14 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v14);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(BugCheckParameter1 + 64) );
        }
        v16 = *(_BYTE *)(v15 + BugCheckParameter1 + 824);
        if ( !v16 )
          KeBugCheckEx(0x157u, BugCheckParameter1, v15, 2uLL, 0LL);
        v17 = v16 - 1;
        *(_BYTE *)(v15 + BugCheckParameter1 + 824) = v17;
        if ( !v17 )
        {
          v18 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v15);
          *(_DWORD *)(BugCheckParameter1 + 856) = v18;
          if ( v18 < 1 << v15 && *(char *)(BugCheckParameter1 + 195) <= 31 )
          {
            v19 = KiComputeThreadPriority(BugCheckParameter1, 0, 0);
            if ( (int)v19 < *(char *)(BugCheckParameter1 + 195) )
              KiSetPriorityThread((_KTHREAD *)BugCheckParameter1, (__int64)v10, v19, v20);
          }
        }
        *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
        v8 &= v8 - 1;
      }
      if ( !a4 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        Next = v10->Next;
        if ( v10->Next )
        {
          v10->Next = Next->Next;
          do
          {
            KiDeferredReadySingleThread(CurrentPrcb, (unsigned __int64)&Next[-27], v10, 0LL);
            Next = v10->Next;
            ++v9;
            if ( v10->Next )
              v10->Next = Next->Next;
            if ( (v9 & 0xF) == 0 )
              KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
          }
          while ( Next );
        }
        KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
        KiCheckForThreadDispatch(CurrentPrcb, v23);
      }
      v6 = a2;
    }
    if ( (WORD2(xmmword_140FC6B50) & 0x1000) != 0 )
      EtwTraceAutoBoostClearFloor(BugCheckParameter1, v6, (unsigned int)a3);
  }
}
