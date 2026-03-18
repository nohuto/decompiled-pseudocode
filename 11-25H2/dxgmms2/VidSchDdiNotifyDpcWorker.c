/*
 * XREFs of VidSchDdiNotifyDpcWorker @ 0x14000779C
 * Callers:
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x140024534 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiForceTdr @ 0x140053740 (VidSchiForceTdr.c)
 * Callees:
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1400031E4 (VidSchiProcessPeriodicNotificationCookie.c)
 *     VidSchiProcessDpcDmaPacket @ 0x140007D68 (VidSchiProcessDpcDmaPacket.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1400080A0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x140008FCC (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14002C51C (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x14002EFEC (VidSchiProcessSuspendContextCompletedDpc.c)
 *     VidSchiProcessNativeFenceSignaledDpc @ 0x1400469A0 (VidSchiProcessNativeFenceSignaledDpc.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x140049CC8 (VidSchiProcessHwQueuePageFaultedDpc.c)
 *     ?ApertureCorruptionCheck@VIDMM_PHYSICAL_ADAPTER@@QEBAJ_N@Z @ 0x14004B334 (-ApertureCorruptionCheck@VIDMM_PHYSICAL_ADAPTER@@QEBAJ_N@Z.c)
 *     VidSchiProcessGpuEngineTimeoutDpc @ 0x14004B75C (VidSchiProcessGpuEngineTimeoutDpc.c)
 *     ?VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140051EE8 (-VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchDdiNotifyDpcWorker(__int64 a1, int a2)
{
  union _SLIST_HEADER *v2; // r14
  PSLIST_ENTRY v5; // rax
  _QWORD *v6; // rbx
  _QWORD *p_Next; // r8
  struct _SLIST_ENTRY *v8; // rdi
  unsigned int Next; // ecx
  struct _SLIST_ENTRY *v10; // rbp
  __int64 v11; // rsi
  unsigned __int16 v12; // di
  int v13; // eax
  struct _VIDSCH_VSYNC_COOKIE *v14; // rcx
  struct _SLIST_ENTRY *v15; // rsi
  union _SLIST_HEADER *v16; // [rsp+50h] [rbp+8h]

  v2 = *(union _SLIST_HEADER **)(a1 + 744);
  v16 = v2;
  v5 = ExpInterlockedFlushSList(v2 + 127);
  v6 = 0LL;
  if ( v5 )
  {
    do
    {
      p_Next = &v5->Next;
      v5 = v5->Next;
      *p_Next = v6;
      v6 = p_Next;
    }
    while ( v5 );
    do
    {
      v8 = (struct _SLIST_ENTRY *)(v6 - 2);
      v6 = (_QWORD *)*v6;
      Next = (unsigned int)v8->Next;
      if ( ((LODWORD(v8->Next) - 1) & 0xFFFFFFF6) != 0 || Next == 10 )
      {
        switch ( Next )
        {
          case 0xBu:
            VidSchiProcessMonitoredFenceSignaledDpc(v8);
            break;
          case 0x13u:
            VidSchiProcessNativeFenceSignaledDpc(v8);
            break;
          case 0xFu:
            v15 = v8[2].Next;
            ExpInterlockedPushEntrySList((PSLIST_HEADER)&v15[706], v8);
            if ( (byte_140081243 & 8) != 0 )
              VidSchiAsyncReCreateSchedulingLog((struct _VIDSCH_NODE *)v15);
            break;
          case 0x10u:
            VidSchiProcessGpuEngineTimeoutDpc(v8);
            break;
          case 0xCu:
            VidSchiProcessHwQueuePageFaultedDpc(v8);
            break;
          case 0x11u:
            VidSchiProcessSuspendContextCompletedDpc(v8);
            break;
          default:
            if ( Next <= 0x12 && (v13 = 263304, _bittest(&v13, Next)) )
            {
              v14 = (struct _VIDSCH_VSYNC_COOKIE *)&v8[-1];
              if ( *((_BYTE *)&v8[2].Next[3].Next + 11) )
                VidSchiProcessDpcVSyncHwFlipQueue(v14);
              else
                VidSchiProcessDpcVSyncCookie(v14);
              ExpInterlockedPushEntrySList(
                (PSLIST_HEADER)(*(&v2[214].Region + *((unsigned int *)&v8[5].Next + 3)) + 44848),
                v8);
            }
            else if ( Next == 14 )
            {
              VidSchiProcessPeriodicNotificationCookie((struct _VIDSCH_GLOBAL *)v2, (__int64)&v8[-1], (int)p_Next);
            }
            break;
        }
      }
      else
      {
        v10 = v8 - 1;
        if ( a2 )
        {
          _InterlockedExchange((volatile __int32 *)&v10[3].Next[6].Next[31].Next + 2, 1);
          if ( (VIDMM_GLOBAL::_Config & 0x10) != 0 )
          {
            v11 = *(_QWORD *)(a1 + 768);
            v12 = 0;
            if ( *(_DWORD *)(v11 + 6944) )
            {
              do
              {
                if ( VIDMM_PHYSICAL_ADAPTER::ApertureCorruptionCheck(
                       *(VIDMM_PHYSICAL_ADAPTER **)(*(_QWORD *)(v11 + 40232) + 8LL * v12),
                       1) < 0 )
                  break;
                ++v12;
              }
              while ( (unsigned int)v12 < *(_DWORD *)(v11 + 6944) );
              v2 = v16;
            }
          }
        }
        VidSchiProcessDpcDmaPacket((struct _VIDSCH_DMA_PACKET *)v10);
      }
    }
    while ( v6 );
  }
}
