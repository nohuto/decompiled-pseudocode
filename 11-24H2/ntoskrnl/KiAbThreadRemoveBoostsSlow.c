/*
 * XREFs of KiAbThreadRemoveBoostsSlow @ 0x140340980
 * Callers:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14025CDA0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x140323370 (KiAbConvertWaiterToOwnerEntry.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KiAbThreadRemoveBoosts @ 0x1403411D0 (KiAbThreadRemoveBoosts.c)
 *     KiAbCrossThreadRelease @ 0x1403D86A8 (KiAbCrossThreadRelease.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14024DD90 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x14024E3A0 (PsBoostThreadIoQoS.c)
 *     KiComputeThreadPriority @ 0x14024FA80 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiCheckForThreadDispatch @ 0x14031D21C (KiCheckForThreadDispatch.c)
 *     KiDeferredReadySingleThread @ 0x14031ED40 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x14031FCD0 (KiFlushSoftwareInterruptBatch.c)
 *     EtwTraceAutoBoostClearFloor @ 0x1404CB770 (EtwTraceAutoBoostClearFloor.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall KiAbThreadRemoveBoostsSlow(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        __int64 a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  int v4; // ebx
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

  if ( (_DWORD)a3 )
  {
    v4 = a3;
    v6 = a2;
    if ( (a3 & 0x40000000) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter1 + 860));
      PsBoostThreadIoEx(BugCheckParameter1, 1, 0LL, 0LL);
    }
    if ( v4 < 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter1 + 864));
      PsBoostThreadIoQoS(BugCheckParameter1, 1, a3);
    }
    v8 = v4 & 0x3FFFFFFF;
    if ( (v4 & 0x3FFFFFFF) != 0 )
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
    if ( (WORD2(xmmword_140FC5B10) & 0x1000) != 0 )
      EtwTraceAutoBoostClearFloor(BugCheckParameter1, v6, (unsigned int)v4);
  }
}
