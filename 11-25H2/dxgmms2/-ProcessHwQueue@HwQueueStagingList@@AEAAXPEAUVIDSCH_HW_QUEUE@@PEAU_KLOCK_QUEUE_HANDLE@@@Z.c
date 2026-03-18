/*
 * XREFs of ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001C750
 * Callers:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D740 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 * Callees:
 *     ?VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14001C9B0 (-VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001CBA0 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     ?VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1400368A4 (-VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14003699C (-VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?AddHwQueue@HwQueueStagingList@@QEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1400378BC (-AddHwQueue@HwQueueStagingList@@QEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

void __fastcall HwQueueStagingList::ProcessHwQueue(
        HwQueueStagingList *this,
        struct VIDSCH_HW_QUEUE *a2,
        struct _KLOCK_QUEUE_HANDLE *a3)
{
  __int64 v3; // r13
  _QWORD *v4; // rsi
  struct VIDSCH_HW_QUEUE *v8; // r9
  __int64 v9; // r14
  __int64 v10; // rdi
  bool v11; // al
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  _QWORD *v16; // rcx
  int v17; // eax
  __int64 v18; // r9
  __int64 *v19; // r9
  __int64 v20; // rax
  __int64 **v21; // rcx
  __int64 v22; // rcx
  __int64 **v23; // rax
  struct VIDSCH_HW_QUEUE *v24; // [rsp+58h] [rbp+10h] BYREF

  v3 = *((_QWORD *)a2 + 5);
  v4 = (_QWORD *)((char *)a2 + 160);
  v24 = 0LL;
  v8 = 0LL;
  v9 = *(_QWORD *)(v3 + 16);
  while ( 1 )
  {
    v10 = *((_QWORD *)a2 + 26);
    if ( (_QWORD *)v10 == v4 )
    {
      if ( (_QWORD *)*v4 == v4 )
      {
        v17 = *((_DWORD *)a2 + 31);
        if ( v17 )
        {
          if ( v17 == 1 && !*(_BYTE *)(*((_QWORD *)a2 + 5) + 144LL) )
            VidSchiNotifyReadyQueueRemoved(a2);
          *((_DWORD *)a2 + 31) = 0;
        }
        return;
      }
      if ( *((_DWORD *)a2 + 31) == 1 )
        return;
LABEL_14:
      if ( !*(_BYTE *)(*((_QWORD *)a2 + 5) + 144LL) )
        VidSchiNotifyReadyQueueAdded(a2);
      *((_DWORD *)a2 + 31) = 1;
      return;
    }
    if ( v8 )
    {
      HwQueueStagingList::AddHwQueue(this, a2);
      v19 = (__int64 *)(v18 + 176);
      v20 = *v19;
      if ( *v19 )
      {
        if ( *(__int64 **)(v20 + 8) != v19 )
          goto LABEL_27;
        v21 = (__int64 **)v19[1];
        if ( *v21 != v19 )
          goto LABEL_27;
        *v21 = (__int64 *)v20;
        *(_QWORD *)(v20 + 8) = v21;
      }
      v22 = *((_QWORD *)this + 1);
      v23 = (__int64 **)((char *)this + 8);
      if ( *(HwQueueStagingList **)(v22 + 8) == (HwQueueStagingList *)((char *)this + 8) )
      {
        *v19 = v22;
        v19[1] = (__int64)v23;
        *(_QWORD *)(v22 + 8) = v19;
        *v23 = v19;
        *((_BYTE *)this + 24) = 0;
        return;
      }
LABEL_27:
      __fastfail(3u);
    }
    v11 = VidSchiPacketBlockedOnWaitCondition((struct _VIDSCH_QUEUE_PACKET *)(v10 - 32));
    v12 = *((_DWORD *)a2 + 31);
    if ( v11 )
    {
      if ( *v4 == v10 )
      {
        if ( v12 != 2 )
        {
          if ( v12 == 1 && !*(_BYTE *)(*((_QWORD *)a2 + 5) + 144LL) )
            VidSchiNotifyReadyQueueRemoved(a2);
          *((_DWORD *)a2 + 31) = 2;
        }
        return;
      }
      if ( v12 == 1 )
        return;
      goto LABEL_14;
    }
    if ( v12 != 1 )
    {
      if ( !*(_BYTE *)(*((_QWORD *)a2 + 5) + 144LL) )
        VidSchiNotifyReadyQueueAdded(a2);
      *((_DWORD *)a2 + 31) = 1;
    }
    if ( !*(_BYTE *)(v9 + 16524) )
    {
      v13 = *(_QWORD *)(v9 + 24);
      v14 = *(_QWORD *)(v3 + 8);
      if ( (*(_BYTE *)(v13 + 3268) & 1) == 0
        && !*(_DWORD *)(v13 + 3244)
        && !*(_BYTE *)(v14 + 204)
        && !_InterlockedCompareExchange((volatile signed __int32 *)(v14 + 200), 0, 0)
        && (*(_DWORD *)(v10 + 16) & 0xFFFFFFF7) == 0 )
      {
        break;
      }
    }
    VidSchiReleasePacketToGpu(this, (struct _VIDSCH_QUEUE_PACKET *)(v10 - 32), &v24, a3);
    v8 = v24;
  }
  v15 = (_QWORD *)((char *)a2 + 192);
  if ( !*v15 )
  {
    v16 = *(_QWORD **)(v9 + 2768);
    if ( *v16 != v9 + 2760 )
      goto LABEL_27;
    *v15 = v9 + 2760;
    v15[1] = v16;
    *v16 = v15;
    *(_QWORD *)(v9 + 2768) = v15;
  }
}
