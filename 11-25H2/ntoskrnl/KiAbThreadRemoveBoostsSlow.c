/*
 * XREFs of KiAbThreadRemoveBoostsSlow @ 0x14029BB60
 * Callers:
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiAbCrossThreadRelease @ 0x140407818 (KiAbCrossThreadRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x14041A670 (KiAbThreadRemoveBoosts.c)
 * Callees:
 *     KiCheckForThreadDispatch @ 0x140285CEC (KiCheckForThreadDispatch.c)
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     PsBoostThreadIoQoS @ 0x1402E4A70 (PsBoostThreadIoQoS.c)
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     PsBoostThreadIoEx @ 0x1402EA7E0 (PsBoostThreadIoEx.c)
 *     EtwTraceAutoBoostClearFloor @ 0x140311CF8 (EtwTraceAutoBoostClearFloor.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall KiAbThreadRemoveBoostsSlow(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        int a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  __int64 v6; // rbp
  ULONG_PTR v7; // rdi
  unsigned int v8; // esi
  char v9; // bp
  struct _SINGLE_LIST_ENTRY *v10; // r15
  bool i; // zf
  int v12; // eax
  unsigned int v13; // r14d
  int v14; // r12d
  char v15; // al
  char v16; // al
  unsigned int v17; // edx
  int v18; // eax
  struct _KPRCB *CurrentPrcb; // r14
  struct _SINGLE_LIST_ENTRY *Next; // rsi
  unsigned __int8 v21; // [rsp+30h] [rbp-48h]
  __int64 v22; // [rsp+38h] [rbp-40h] BYREF
  __int64 v23; // [rsp+88h] [rbp+10h]

  if ( a3 )
  {
    v23 = a2;
    v6 = a2;
    v7 = BugCheckParameter1;
    if ( (a3 & 0x40000000) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter1 + 860));
      LOBYTE(a2) = 1;
      PsBoostThreadIoEx(BugCheckParameter1, a2, 0LL, 0LL);
    }
    if ( a3 < 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 864));
      PsBoostThreadIoQoS(v7, 1LL);
    }
    v8 = a3 & 0x3FFFFFFF;
    if ( (a3 & 0x3FFFFFFF) != 0 )
    {
      v9 = 0;
      LOBYTE(BugCheckParameter1) = -1;
      v22 = 0LL;
      v21 = -1;
      if ( a4 )
      {
        v10 = a4;
      }
      else
      {
        v10 = (struct _SINGLE_LIST_ENTRY *)&v22;
        BugCheckParameter1 = KeGetCurrentIrql();
        v21 = BugCheckParameter1;
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(BugCheckParameter1);
      }
      for ( i = !_BitScanForward((unsigned int *)&v12, v8); !i; i = !_BitScanForward((unsigned int *)&v12, v8) )
      {
        v13 = 0;
        v14 = (char)v12 + 1;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 64), 0LL) )
        {
          do
          {
            if ( (++v13 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(BugCheckParameter1) )
            {
              HvlNotifyLongSpinWait(v13);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(v7 + 64) );
        }
        v15 = *(_BYTE *)(v14 + v7 + 824);
        if ( !v15 )
          KeBugCheckEx(0x157u, v7, v14, 2uLL, 0LL);
        v16 = v15 - 1;
        *(_BYTE *)(v14 + v7 + 824) = v16;
        if ( !v16 )
        {
          BugCheckParameter1 = (unsigned int)v14;
          v17 = *(_DWORD *)(v7 + 856) ^ (1 << v14);
          *(_DWORD *)(v7 + 856) = v17;
          if ( v17 < 1 << v14 && *(char *)(v7 + 195) <= 31 )
          {
            v18 = KiComputeThreadPriority(v7, 0LL);
            BugCheckParameter1 = (unsigned int)*(char *)(v7 + 195);
            if ( v18 < (int)BugCheckParameter1 )
              KiSetPriorityThread(v7, v10, (unsigned int)v18);
          }
        }
        *(_QWORD *)(v7 + 64) = 0LL;
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
            KiDeferredReadySingleThread(CurrentPrcb, (ULONG_PTR)&Next[-27], v10, 0LL);
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
        KiCheckForThreadDispatch(CurrentPrcb, v21);
      }
      v6 = v23;
    }
    if ( (WORD2(xmmword_140FC5B10) & 0x1000) != 0 )
      EtwTraceAutoBoostClearFloor(v7, v6, (unsigned int)a3);
  }
}
