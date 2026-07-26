/*
 * XREFs of NdisMPromoteMiniport @ 0x14009FC70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14004A050 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z @ 0x14008D190 (-NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z.c)
 */

NDIS_STATUS __stdcall NdisMPromoteMiniport(NDIS_HANDLE MiniportHandle)
{
  NDIS_STATUS v1; // esi
  struct _WORK_QUEUE_ITEM *Pool2; // r14
  __int64 v4; // r15
  KIRQL v5; // dl
  __int64 v6; // rbx
  KIRQL v7; // dl
  __int64 i; // rax
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  NewIrql = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      106,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)MiniportHandle);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, &NewIrql);
  if ( (*((_DWORD *)MiniportHandle + 30) & 0x10000000) == 0
    || *((NDIS_HANDLE *)MiniportHandle + 22) == MiniportHandle
    || (*((_DWORD *)MiniportHandle + 31) & 0x20000) != 0 )
  {
    *((_QWORD *)MiniportHandle + 65) = 0LL;
    v1 = -1073741637;
    KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, NewIrql);
  }
  else
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 1769423950LL);
    if ( Pool2 )
    {
      v4 = *((_QWORD *)MiniportHandle + 22);
      Pool2->List.Flink = 0LL;
      Pool2->WorkerRoutine = (void (__fastcall *)(void *))ndisMQueuedPromoteMiniport;
      Pool2->Parameter = MiniportHandle;
      _InterlockedAnd((volatile signed __int32 *)MiniportHandle + 30, 0xEFFFFFFF);
      ndisReferenceMiniportNoCheck((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, 0x21u);
      v5 = NewIrql;
      *((_QWORD *)MiniportHandle + 65) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, v5);
      v6 = *((_QWORD *)MiniportHandle + 470);
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 392));
      for ( i = *(_QWORD *)(v6 + 16); i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_QWORD *)(i + 176) == v4 )
          *(_QWORD *)(i + 176) = MiniportHandle;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 392), v7);
      ExQueueWorkItem(Pool2, (WORK_QUEUE_TYPE)40);
    }
    else
    {
      *((_QWORD *)MiniportHandle + 65) = 0LL;
      v1 = -1073741670;
      KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, NewIrql);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      107,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)MiniportHandle);
  NdisTraceLoggingRareMiniportPath();
  return v1;
}
