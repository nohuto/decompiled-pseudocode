/*
 * XREFs of ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140011A80
 * Callers:
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1400118C0 (VidSchiSubmitCommandPacketToHwQueue.c)
 * Callees:
 *     ?VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140011550 (-VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x1400122E0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140035354 (-VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140035468 (-VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

void __fastcall VidSchiInsertCommandToHwQueue(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  _QWORD *v6; // rbp
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  _QWORD *v9; // r8
  bool v10; // di
  __int64 *v11; // rbx
  __int64 *v12; // rax
  int v13; // eax
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+38h] [rbp-20h] BYREF
  __int64 *v16; // [rsp+40h] [rbp-18h]
  char v17; // [rsp+48h] [rbp-10h]
  int v18; // [rsp+4Ch] [rbp-Ch]

  v1 = *((_QWORD *)a1 + 12);
  v3 = *(_QWORD *)(v1 + 40);
  v4 = *(_QWORD *)(v3 + 16);
  v5 = *(_QWORD *)(v3 + 8);
  v14 = *(_QWORD *)(v4 + 24);
  v17 = 0;
  v18 = 1;
  v16 = &v15;
  v15 = (__int64)&v15;
  _InterlockedIncrement((volatile signed __int32 *)(v14 + 780));
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 3012));
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 1836));
  if ( (unsigned int)(*((_DWORD *)a1 + 12) - 4) > 1 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 1840));
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 308));
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 148));
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 13) = 6;
  WdLogSingleEntry2(4LL, a1, v1);
  v6 = (_QWORD *)(v1 + 160);
  WdLogGlobalForLineNumber = 4872;
  v7 = *(_QWORD **)(v1 + 168);
  v8 = (_QWORD *)((char *)a1 + 32);
  if ( *v7 != v1 + 160 )
LABEL_4:
    __fastfail(3u);
  *v8 = v6;
  *((_QWORD *)a1 + 5) = v7;
  *v7 = v8;
  *(_QWORD *)(v1 + 168) = v8;
  v9 = *(_QWORD **)(v1 + 208);
  if ( v9 == v6 )
  {
    v10 = !VidSchiPacketBlockedOnWaitCondition(a1);
    WdLogSingleEntry3(4LL, v1, v8, v10);
    WdLogGlobalForLineNumber = 4904;
    *(_QWORD *)(v1 + 208) = v8;
    if ( v10 )
    {
      if ( *(_DWORD *)(v1 + 124) != 1 )
      {
        if ( !*(_BYTE *)(*(_QWORD *)(v1 + 40) + 144LL) )
          VidSchiNotifyReadyQueueAdded((struct VIDSCH_HW_QUEUE *)v1);
        *(_DWORD *)(v1 + 124) = 1;
      }
      v11 = (__int64 *)(v1 + 176);
      if ( !*v11 )
      {
        v12 = v16;
        if ( (__int64 *)*v16 != &v15 )
          goto LABEL_4;
        v11[1] = (__int64)v16;
        *v11 = (__int64)&v15;
        *v12 = (__int64)v11;
        v16 = v11;
        v17 = 0;
      }
    }
    else if ( (_QWORD *)*v6 == v8 )
    {
      v13 = *(_DWORD *)(v1 + 124);
      if ( v13 != 2 )
      {
        if ( v13 == 1 && !*(_BYTE *)(*(_QWORD *)(v1 + 40) + 144LL) )
          VidSchiNotifyReadyQueueRemoved((struct VIDSCH_HW_QUEUE *)v1);
        *(_DWORD *)(v1 + 124) = 2;
      }
    }
  }
  else
  {
    WdLogSingleEntry4(4LL, v1, v9);
    WdLogGlobalForLineNumber = 4892;
  }
  if ( !v17 )
  {
    if ( v18 )
      HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v14, 0LL);
  }
}
