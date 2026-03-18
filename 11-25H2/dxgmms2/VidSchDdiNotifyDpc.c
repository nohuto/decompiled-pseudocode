/*
 * XREFs of VidSchDdiNotifyDpc @ 0x1400079E0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1400031E4 (VidSchiProcessPeriodicNotificationCookie.c)
 *     VidSchiProcessDpcDmaPacket @ 0x140007D68 (VidSchiProcessDpcDmaPacket.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1400080A0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x140008FCC (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14002C51C (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x14002EFEC (VidSchiProcessSuspendContextCompletedDpc.c)
 *     VidSchiProcessNativeFenceSignaledDpc @ 0x1400469A0 (VidSchiProcessNativeFenceSignaledDpc.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x140049CC8 (VidSchiProcessHwQueuePageFaultedDpc.c)
 *     ?ApertureCorruptionCheck@VIDMM_PHYSICAL_ADAPTER@@QEBAJ_N@Z @ 0x14004B334 (-ApertureCorruptionCheck@VIDMM_PHYSICAL_ADAPTER@@QEBAJ_N@Z.c)
 *     VidSchiProcessGpuEngineTimeoutDpc @ 0x14004B75C (VidSchiProcessGpuEngineTimeoutDpc.c)
 *     ?VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140051EE8 (-VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VidSchDdiNotifyDpc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 DxgAdapter; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r15
  union _SLIST_HEADER *v8; // r14
  PSLIST_ENTRY v9; // rax
  int v10; // r8d
  _QWORD *v11; // rbx
  _QWORD *p_Next; // rcx
  int v13; // r13d
  unsigned int v14; // ecx
  struct _SLIST_ENTRY *v15; // rdi
  struct _VIDSCH_DMA_PACKET *v16; // rsi
  __int64 v17; // rbp
  unsigned __int16 i; // di
  __int64 result; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  struct _VIDSCH_VSYNC_COOKIE *v22; // rcx
  struct _SLIST_ENTRY *Next; // rsi
  unsigned int v24; // [rsp+20h] [rbp-58h] BYREF
  __int64 v25; // [rsp+28h] [rbp-50h]
  char v26; // [rsp+30h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-40h] BYREF

  v24 = -1;
  v25 = 0LL;
  if ( (qword_140081010 & 2) != 0 )
  {
    v26 = 1;
    v24 = 5043;
    if ( (byte_140081242 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 5043LL);
  }
  else
  {
    v26 = 0;
  }
  ((void (__fastcall *)(unsigned int *, __int64))DxgCoreInterface[82])(&v24, 5043LL);
  if ( (DpiGetSchedulerCallbackState(a1) & 1) != 0 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    DxgAdapter = DpiGetDxgAdapter(a1);
    v5 = DxgAdapter;
    if ( DxgAdapter )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(DxgAdapter + 3128) + 744LL);
      if ( v6 )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 2008), &LockHandle);
        v7 = *(_QWORD *)(v5 + 3128);
        v8 = *(union _SLIST_HEADER **)(v7 + 744);
        v9 = ExpInterlockedFlushSList(v8 + 127);
        v11 = 0LL;
        if ( v9 )
        {
          do
          {
            p_Next = &v9->Next;
            v9 = v9->Next;
            *p_Next = v11;
            v11 = p_Next;
          }
          while ( v9 );
          v13 = 263304;
          do
          {
            v14 = *((_DWORD *)v11 - 4);
            v15 = (struct _SLIST_ENTRY *)(v11 - 2);
            v11 = (_QWORD *)*v11;
            if ( ((v14 - 1) & 0xFFFFFFF6) != 0 || v14 == 10 )
            {
              switch ( v14 )
              {
                case 0xBu:
                  VidSchiProcessMonitoredFenceSignaledDpc(v15);
                  break;
                case 0x13u:
                  VidSchiProcessNativeFenceSignaledDpc(v15);
                  break;
                case 0xFu:
                  Next = v15[2].Next;
                  ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[706], v15);
                  if ( (byte_140081243 & 8) != 0 )
                    VidSchiAsyncReCreateSchedulingLog((struct _VIDSCH_NODE *)Next);
                  break;
                case 0x10u:
                  VidSchiProcessGpuEngineTimeoutDpc(v15);
                  break;
                case 0xCu:
                  VidSchiProcessHwQueuePageFaultedDpc(v15);
                  break;
                case 0x11u:
                  VidSchiProcessSuspendContextCompletedDpc(v15);
                  break;
                default:
                  if ( v14 <= 0x12 && _bittest(&v13, v14) )
                  {
                    v22 = (struct _VIDSCH_VSYNC_COOKIE *)&v15[-1];
                    if ( *((_BYTE *)&v15[2].Next[3].Next + 11) )
                      VidSchiProcessDpcVSyncHwFlipQueue(v22);
                    else
                      VidSchiProcessDpcVSyncCookie(v22);
                    ExpInterlockedPushEntrySList(
                      (PSLIST_HEADER)(*(&v8[214].Region + *((unsigned int *)&v15[5].Next + 3)) + 44848),
                      v15);
                  }
                  else if ( v14 == 14 )
                  {
                    VidSchiProcessPeriodicNotificationCookie((struct _VIDSCH_GLOBAL *)v8, (__int64)&v15[-1], v10);
                  }
                  break;
              }
            }
            else
            {
              v16 = (struct _VIDSCH_DMA_PACKET *)&v15[-1];
              _InterlockedExchange((volatile __int32 *)&v15[2].Next[6].Next[31].Next + 2, 1);
              if ( (VIDMM_GLOBAL::_Config & 0x10) != 0 )
              {
                v17 = *(_QWORD *)(v7 + 768);
                for ( i = 0; (unsigned int)i < *(_DWORD *)(v17 + 6944); ++i )
                {
                  if ( VIDMM_PHYSICAL_ADAPTER::ApertureCorruptionCheck(
                         *(VIDMM_PHYSICAL_ADAPTER **)(*(_QWORD *)(v17 + 40232) + 8LL * i),
                         1) < 0 )
                    break;
                }
              }
              VidSchiProcessDpcDmaPacket(v16);
            }
          }
          while ( v11 );
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
    }
  }
  result = ((__int64 (__fastcall *)(unsigned int *))DxgCoreInterface[83])(&v24);
  if ( v26 )
  {
    if ( (byte_140081242 & 1) != 0 )
      return McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v24);
  }
  return result;
}
