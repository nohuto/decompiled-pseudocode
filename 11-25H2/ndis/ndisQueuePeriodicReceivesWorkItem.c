/*
 * XREFs of ndisQueuePeriodicReceivesWorkItem @ 0x1400446C0
 * Callers:
 *     ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x140043300 (-ndisPeriodicReceivesWorker@@YAXPEAX@Z.c)
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140043970 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?ndisTraceQueueWorkItem@@YAXXZ @ 0x1400CC4D8 (-ndisTraceQueueWorkItem@@YAXXZ.c)
 */

LONG __fastcall ndisQueuePeriodicReceivesWorkItem(__int64 a1, char a2)
{
  LONG result; // eax
  KIRQL v5; // al
  struct _NDIS_REFCOUNT_BLOCK *v6; // rcx
  KIRQL v7; // si
  KIRQL v8; // r14
  struct _KSEMAPHORE *v9; // rbx
  KSPIN_LOCK *p_Blink; // rcx
  _LIST_ENTRY *Flink; // rcx
  struct _KSEMAPHORE **v12; // rdi
  KSPIN_LOCK *v13; // rcx

  result = _InterlockedExchange((volatile __int32 *)(a1 + 3288), 1);
  if ( !result )
  {
    if ( HIBYTE(word_140127114) )
      ndisTraceQueueWorkItem();
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4432));
    v6 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4896);
    v7 = v5;
    if ( v6 )
      NdisReferenceWithTag(v6, 0x4Cu);
    ++*(_DWORD *)(a1 + 4440);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x14u,
        0xDu,
        (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
        a1,
        *(_DWORD *)(a1 + 4440));
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4432), v7);
    v8 = 2;
    v9 = (struct _KSEMAPHORE *)((char *)qword_140125540 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number);
    p_Blink = (KSPIN_LOCK *)&v9->Header.WaitListHead.Blink;
    if ( a2 )
      KeAcquireSpinLockAtDpcLevel(p_Blink);
    else
      v8 = KeAcquireSpinLockRaiseToDpc(p_Blink);
    Flink = v9->Header.WaitListHead.Flink;
    v12 = (struct _KSEMAPHORE **)(a1 + 3256);
    if ( (struct _KSEMAPHORE *)Flink->Flink != v9 )
      __fastfail(3u);
    v12[1] = (struct _KSEMAPHORE *)Flink;
    *v12 = v9;
    Flink->Flink = (_LIST_ENTRY *)v12;
    v13 = (KSPIN_LOCK *)&v9->Header.WaitListHead.Blink;
    v9->Header.WaitListHead.Flink = (_LIST_ENTRY *)v12;
    ++v9->Limit;
    if ( a2 )
      KeReleaseSpinLockFromDpcLevel(v13);
    else
      KeReleaseSpinLock(v13, v8);
    return KeReleaseSemaphore(v9 + 1, 0, 1, 0);
  }
  return result;
}
