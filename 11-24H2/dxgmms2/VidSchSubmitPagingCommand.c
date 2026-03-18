/*
 * XREFs of VidSchSubmitPagingCommand @ 0x1400E2E98
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400B4660 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 * Callees:
 *     VidSchiSubmitCommandPacketToQueue @ 0x140004B80 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x140020F30 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiInterlockedInsertTailList @ 0x140023690 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x140034A80 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchIsTDRPending @ 0x140034DF0 (VidSchIsTDRPending.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x140036F0C (VidSchiSchedulerNodeToDriverEngine.c)
 *     ?VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z @ 0x1400383E8 (-VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z.c)
 *     VidSchiSetPriorityContext @ 0x140047D78 (VidSchiSetPriorityContext.c)
 *     memset @ 0x140056340 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1400B5584 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1400B5974 (VidSchRegisterCompletionEvent.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1400E31E8 (VidSchiSubmitHwPagingCommand.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchSubmitPagingCommand(__int64 a1, __int128 *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // r14
  KSPIN_LOCK *v7; // r12
  size_t v8; // r15
  _QWORD *v9; // rax
  _DWORD *Pool2; // rbx
  __int64 v11; // r14
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  struct _KTHREAD *CurrentThread; // rax
  __int128 v15; // xmm0
  __int64 v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  KPRIORITY PriorityThread; // eax
  _QWORD v23[20]; // [rsp+30h] [rbp-C8h] BYREF

  v3 = a1;
  if ( !VidSchIsTDRPending(a1) )
  {
    if ( *(_BYTE *)(v3 + 55) )
    {
      VidSchiSubmitHwPagingCommand(v3, a2);
      return;
    }
    v4 = (unsigned int)VidSchiSchedulerNodeToDriverEngine(v3, *((_DWORD *)a2 + 17));
    v5 = *(_QWORD *)(*(_QWORD *)(v3 + 320) + 8 * v4);
    if ( *((_BYTE *)a2 + 72) )
    {
      v21 = *(_QWORD *)(*(_QWORD *)(v3 + 344) + 8 * v4);
      if ( v21 )
        v5 = v21;
    }
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 96) + 24LL);
    v7 = (KSPIN_LOCK *)(v6 + 1992);
    v8 = *(_DWORD *)(v6 + 152) * ((*(_DWORD *)(v6 + 76) << 6) + ((8 * *(_DWORD *)(v6 + 76) + 231) & 0xFFFFFFF8))
       + 8 * (*(_DWORD *)(v6 + 76) + 171);
    if ( (unsigned int)v8 <= 0x640 )
      v8 = 1600LL;
    v9 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v6 + 1992), (_QWORD **)(v5 + 712), (_DWORD *)(v5 + 728));
    if ( !v9 )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(64LL, v8, 895576406LL);
      if ( Pool2 )
        goto LABEL_13;
      memset(v23, 0, sizeof(v23));
      v19 = *(_QWORD *)(v5 + 96);
      LODWORD(v23[4]) |= 0x40u;
      LODWORD(v23[2]) = 1;
      LODWORD(v23[6]) = *(unsigned __int16 *)(v19 + 4);
      VidSchRegisterCompletionEvent(v6, (__int64)v23);
      do
      {
        v20 = VidSchiInterlockedRemoveHeadListIfExist(
                (KSPIN_LOCK *)(v6 + 1992),
                (_QWORD **)(v5 + 712),
                (_DWORD *)(v5 + 728));
        if ( v20 )
          Pool2 = v20 - 1;
        else
          VidSchWaitForCompletionEvent(v6, (__int64)v23, 19);
      }
      while ( !Pool2 );
      VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v6 + 2000), v23, 0LL);
      v3 = a1;
LABEL_12:
      memset(Pool2, 0, v8);
LABEL_13:
      v11 = (__int64)(Pool2 + 14);
      *((_QWORD *)Pool2 + 7) = MEMORY[0xFFFFF78000000320];
      Pool2[13] = 1;
      VidSchiInterlockedInsertTailList(v7, v5 + 760, (_QWORD *)Pool2 + 1, (_DWORD *)(v5 + 776));
LABEL_14:
      v12 = *a2;
      v13 = a2[1];
      *Pool2 = 895576406;
      Pool2[12] = 8;
      *(_QWORD *)v11 = MEMORY[0xFFFFF78000000320];
      Pool2[13] = 2;
      *((_QWORD *)Pool2 + 11) = v5;
      CurrentThread = KeGetCurrentThread();
      *((_OWORD *)Pool2 + 47) = v12;
      *((_QWORD *)Pool2 + 13) = CurrentThread;
      v15 = a2[2];
      v16 = *(_QWORD *)a2;
      *((_OWORD *)Pool2 + 48) = v13;
      *((_QWORD *)Pool2 + 9) = v16;
      v17 = a2[3];
      *((_OWORD *)Pool2 + 49) = v15;
      v18 = a2[4];
      *((_OWORD *)Pool2 + 50) = v17;
      *((_OWORD *)Pool2 + 51) = v18;
      if ( (*(_DWORD *)(v3 + 2792) & 4) != 0 )
      {
        PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
        VidSchiSetPriorityContext((struct _VIDSCH_CONTEXT *)v5, PriorityThread);
      }
      VidSchiSubmitCommandPacketToQueue((__int64)Pool2);
      return;
    }
    Pool2 = v9 - 1;
    if ( !*(_BYTE *)(v6 + 7059) || !Pool2[13] && !*((_QWORD *)Pool2 + 22) && !*((_QWORD *)Pool2 + 23) )
    {
      if ( v9 == (_QWORD *)8 )
      {
        v11 = 56LL;
        goto LABEL_14;
      }
      goto LABEL_12;
    }
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 61440LL, v6, 0LL, 0LL);
    WdLogGlobalForLineNumber = 906;
  }
  if ( (*(_DWORD *)a2 & 0x100) != 0 )
    VidMmReleaseDmaBuffer(*((struct VIDMM_DMA_BUFFER **)a2 + 1), 1);
}
