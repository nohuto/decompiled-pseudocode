/*
 * XREFs of NdisIMQueueMiniportCallback @ 0x14009F540
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qLq @ 0x140049F00 (WPP_RECORDER_SF_qLq.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009D670 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NdisIMQueueMiniportCallback(
        struct _NDIS_MINIPORT_BLOCK *a1,
        void (__fastcall *a2)(void *, __int64),
        __int64 a3)
{
  KIRQL v6; // al
  unsigned __int64 *p_Lock; // rcx
  KIRQL v8; // r12
  int v9; // edx
  bool v10; // zf
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 Pool2; // rax
  int v14; // edx
  _SINGLE_LIST_ENTRY *v15; // rsi
  int v16; // esi

  v6 = KfRaiseIrql(2u);
  p_Lock = &a1->Lock;
  v8 = v6;
  if ( KeGetCurrentThread() == a1->MiniportThread )
  {
    KeAcquireSpinLockAtDpcLevel(p_Lock);
LABEL_5:
    v11 = 0;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    a2(a1->MiniportAdapterContext, a3);
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    ndisMProcessDeferred(a1);
    a1->LockAcquired = 0;
    a1->LockThread = 0LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    goto LABEL_26;
  }
  KeAcquireSpinLockAtDpcLevel(p_Lock);
  v10 = a1->LockAcquired == 0;
  a1->MiniportThread = KeGetCurrentThread();
  if ( v10 )
  {
    a1->LockAcquired = 1;
    a1->LockThread = KeGetCurrentThread();
    goto LABEL_5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      12,
      46,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      a3);
  }
  v12 = 32LL;
  if ( !a2 )
    v12 = 24LL;
  Pool2 = ExAllocatePool2(64LL, v12, 1769423950LL);
  v15 = (_SINGLE_LIST_ENTRY *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 8) = 6;
    *(_QWORD *)(Pool2 + 16) = a3;
    if ( a2 )
      *(_QWORD *)(Pool2 + 24) = a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v14,
        0xCu,
        0x30u,
        (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
        Pool2,
        6,
        a3);
    v15->Next = (_SINGLE_LIST_ENTRY *)a1->WorkQueue[6];
    a1->WorkQueue[6].Next = v15;
    v16 = 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v14,
        12,
        47,
        (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
        (char)a1);
    }
    v16 = -1073741823;
  }
  if ( (a1->Flags & 0x48000) == 0x8000 && !v16 )
    KeInsertQueueDpc(&a1->DeferredDpc, 0LL, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v14,
      12,
      49,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      a3);
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  v11 = -1073741670;
  if ( !v16 )
    v11 = 259;
LABEL_26:
  if ( v8 != 2 )
    KeLowerIrql(v8);
  return v11;
}
