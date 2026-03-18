/*
 * XREFs of ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x140033960
 * Callers:
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x140008FCC (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     ?UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_NODE@@PEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x140051E5C (-UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VID.c)
 * Callees:
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x14000FF50 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140010190 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140012D7C (-VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1400209D4 (VidSchiCheckPendingDeviceCommand.c)
 *     memset @ 0x140056780 (memset.c)
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
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // r8
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  LARGE_INTEGER *v23; // rbx
  LARGE_INTEGER v24; // rax
  __int64 v25; // rax
  LARGE_INTEGER v26; // rcx
  __int128 v27; // [rsp+30h] [rbp-48h] BYREF

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
      v27 = 0LL;
      v7 = v5 + 6;
      v8 = 0;
      v9 = &v27;
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
    v14.QuadPart = v27;
    v15 = v6 + 20;
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = (_QWORD *)*v15;
        if ( (_QWORD *)*v15 == v15 || v16 == (_QWORD *)v6[26] )
        {
LABEL_25:
          v23 = (LARGE_INTEGER *)(*((_QWORD *)a2 + 23) + 112LL * *((unsigned int *)a2 + 49));
          memset(v23, 0, 0x70uLL);
          *((_DWORD *)a2 + 49) = (*((_DWORD *)a2 + 49) + 1) & (*((_DWORD *)a2 + 48) - 1);
          v23[1] = KeQueryPerformanceCounter(0LL);
          v24 = *(LARGE_INTEGER *)((char *)&v27 + 8);
          v23->LowPart = 9;
          v23[2].QuadPart = (LONGLONG)v6;
          v23[3] = v14;
          v6[8] = v14.QuadPart;
          v23[4] = v24;
          v6[11] = v24.QuadPart;
          VidSchiCheckPendingDeviceCommand(*(_QWORD **)(v6[5] + 8));
          v3 = a2;
          goto LABEL_7;
        }
        v17 = (struct _VIDSCH_QUEUE_PACKET *)(v16 - 4);
        WdLogSingleEntry1(4LL, v16 - 4);
        v18 = *((int *)v17 + 12);
        WdLogGlobalForLineNumber = 1460;
        if ( !(_DWORD)v18 )
        {
          v19 = *((unsigned int *)v17 + 314);
          v20 = *((_QWORD *)v17 + 156);
          v21 = v6[3 * v19 + 7];
          v22 = *((_QWORD *)&v27 + v19);
          if ( !*(_BYTE *)(v21 + 29) )
          {
            if ( *(_DWORD *)(v21 + 48) == 6 || *(_BYTE *)(v21 + 30) )
            {
              if ( v22 < v20 )
                goto LABEL_25;
            }
            else if ( (int)v22 - (int)v20 < 0 )
            {
              goto LABEL_25;
            }
          }
          goto LABEL_24;
        }
        if ( (_DWORD)v18 != 5 )
          break;
        if ( *((_QWORD **)v17 + 5) != v15 )
          goto LABEL_25;
        VidSchiCompleteHwQueueSignalPacket(a1, v17);
      }
      if ( (_DWORD)v18 == 3 )
        break;
      switch ( (_DWORD)v18 )
      {
        case 4:
          VidSchiCompleteHwQueueWaitPacket(a1, (LARGE_INTEGER *)v17);
          break;
        case 7:
          if ( *((_QWORD **)v17 + 5) != v15 )
            goto LABEL_25;
          goto LABEL_24;
        case 8:
LABEL_37:
          v25 = v6[7];
          v26 = *(LARGE_INTEGER *)((char *)v17 + 768);
          if ( !*(_BYTE *)(v25 + 29) )
          {
            if ( *(_DWORD *)(v25 + 48) == 6 || *(_BYTE *)(v25 + 30) )
            {
              if ( v14.QuadPart < (unsigned __int64)v26.QuadPart )
                goto LABEL_25;
            }
            else if ( (signed int)(v14.LowPart - v26.LowPart) < 0 )
            {
              goto LABEL_25;
            }
          }
LABEL_24:
          VidSchiCompleteHwQueuePacket((struct HwQueueStagingList ***)a1, v17, 1);
          break;
        default:
          goto LABEL_36;
      }
    }
LABEL_36:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 2048LL, v5 - 1, v17, v18);
    WdLogGlobalForLineNumber = 906;
    goto LABEL_37;
  }
}
