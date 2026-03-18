/*
 * XREFs of ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x140026FB0
 * Callers:
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x140008B04 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     ?UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_NODE@@PEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400518DC (-UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VID.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x140015574 (VidSchiCheckPendingDeviceCommand.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140028748 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140028980 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14002A774 (-VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     memset @ 0x140056340 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiUnwaitNodeHwQueueProgress(struct HwQueueStagingList *a1, struct _VIDSCH_NODE *a2)
{
  char *v2; // r13
  struct _VIDSCH_NODE *v3; // rbx
  char *v4; // rsi
  __int64 *v5; // rdi
  __int64 *v6; // rbp
  __int64 *v7; // rax
  char v8; // r10
  __int128 *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned int *v12; // r9
  __int64 v13; // r9
  LARGE_INTEGER v14; // r12
  _QWORD *v15; // rbx
  _QWORD *v16; // rax
  struct _VIDSCH_QUEUE_PACKET *v17; // r15
  bool v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned __int64 v21; // r8
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  LARGE_INTEGER *v24; // rbx
  LARGE_INTEGER v25; // rax
  __int64 v26; // rax
  LARGE_INTEGER v27; // rcx
  __int128 v28; // [rsp+30h] [rbp-48h] BYREF

  v2 = (char *)a2 + 1712;
  v3 = a2;
  v4 = (char *)*((_QWORD *)a2 + 214);
  if ( v4 != (char *)a2 + 1712 )
  {
    while ( 1 )
    {
      v5 = (__int64 *)*((_QWORD *)v4 + 2);
      if ( v5 != (__int64 *)(v4 + 16) )
        break;
LABEL_8:
      v4 = *(char **)v4;
      if ( v4 == v2 )
        return;
    }
    while ( 1 )
    {
      v6 = v5 - 1;
      v28 = 0LL;
      v7 = v5 + 6;
      v8 = 0;
      v9 = &v28;
      v10 = 2LL;
      do
      {
        v11 = *v7;
        if ( *v7 )
        {
          if ( *(_DWORD *)(v11 + 48) == 6 )
          {
            v13 = **(_QWORD **)(v11 + 72);
          }
          else
          {
            v12 = *(unsigned int **)(v11 + 72);
            if ( *(_BYTE *)(v11 + 30) )
              v13 = *(_QWORD *)v12;
            else
              v13 = *v12;
          }
          *(_QWORD *)v9 = v13;
          if ( v13 != v7[1] )
            v8 = 1;
        }
        v7 += 3;
        v9 = (__int128 *)((char *)v9 + 8);
        --v10;
      }
      while ( v10 );
      if ( v8 )
        break;
LABEL_7:
      v5 = (__int64 *)*v5;
      if ( v5 == (__int64 *)(v4 + 16) )
        goto LABEL_8;
    }
    _InterlockedExchange((volatile __int32 *)v3 + 126, 1);
    v14.QuadPart = v28;
    v15 = v6 + 20;
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = (_QWORD *)*v15;
        if ( (_QWORD *)*v15 == v15 || v16 == (_QWORD *)v6[26] )
        {
LABEL_25:
          v24 = (LARGE_INTEGER *)(*((_QWORD *)a2 + 23) + 112LL * *((unsigned int *)a2 + 49));
          memset(v24, 0, 0x70uLL);
          *((_DWORD *)a2 + 49) = (*((_DWORD *)a2 + 49) + 1) & (*((_DWORD *)a2 + 48) - 1);
          v24[1] = KeQueryPerformanceCounter(0LL);
          v25 = *(LARGE_INTEGER *)((char *)&v28 + 8);
          v24->LowPart = 9;
          v24[2].QuadPart = (LONGLONG)v6;
          v24[3] = v14;
          v6[8] = v14.QuadPart;
          v24[4] = v25;
          v6[11] = v25.QuadPart;
          VidSchiCheckPendingDeviceCommand(*(_QWORD **)(v6[5] + 8));
          v3 = a2;
          goto LABEL_7;
        }
        v17 = (struct _VIDSCH_QUEUE_PACKET *)(v16 - 4);
        WdLogSingleEntry1(4LL, v16 - 4);
        v19 = *((int *)v17 + 12);
        WdLogGlobalForLineNumber = 1468;
        if ( !(_DWORD)v19 )
        {
          v20 = *((unsigned int *)v17 + 314);
          v21 = *((_QWORD *)v17 + 156);
          v22 = v6[3 * v20 + 7];
          v23 = *((_QWORD *)&v28 + v20);
          if ( !*(_BYTE *)(v22 + 29) )
          {
            if ( *(_DWORD *)(v22 + 48) == 6 || *(_BYTE *)(v22 + 30) )
            {
              if ( v23 < v21 )
                goto LABEL_25;
            }
            else if ( (int)v23 - (int)v21 < 0 )
            {
              goto LABEL_25;
            }
          }
          goto LABEL_24;
        }
        if ( (_DWORD)v19 != 5 )
          break;
        if ( *((_QWORD **)v17 + 5) != v15 )
          goto LABEL_25;
        VidSchiCompleteHwQueueSignalPacket(a1, v17, v18);
      }
      if ( (_DWORD)v19 == 3 )
        break;
      switch ( (_DWORD)v19 )
      {
        case 4:
          VidSchiCompleteHwQueueWaitPacket(a1, v17);
          break;
        case 7:
          if ( *((_QWORD **)v17 + 5) != v15 )
            goto LABEL_25;
          goto LABEL_24;
        case 8:
LABEL_37:
          v26 = v6[7];
          v27 = *(LARGE_INTEGER *)((char *)v17 + 768);
          if ( !*(_BYTE *)(v26 + 29) )
          {
            if ( *(_DWORD *)(v26 + 48) == 6 || *(_BYTE *)(v26 + 30) )
            {
              if ( v14.QuadPart < (unsigned __int64)v27.QuadPart )
                goto LABEL_25;
            }
            else if ( (signed int)(v14.LowPart - v27.LowPart) < 0 )
            {
              goto LABEL_25;
            }
          }
LABEL_24:
          VidSchiCompleteHwQueuePacket(a1, v17, 1);
          break;
        default:
          goto LABEL_36;
      }
    }
LABEL_36:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 2048LL, v5 - 1, v17, v19);
    WdLogGlobalForLineNumber = 906;
    goto LABEL_37;
  }
}
