/*
 * XREFs of ?VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z @ 0x140039718
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1400090A0 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140010190 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidMmReleaseDmaBuffer @ 0x140039700 (VidMmReleaseDmaBuffer.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x140090680 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x140092750 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400AC280 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchiDiscardQueuePacket @ 0x1400B0048 (VidSchiDiscardQueuePacket.c)
 *     VidSchSubmitPagingCommand @ 0x1400E35C0 (VidSchSubmitPagingCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmReleaseDmaBuffer(struct VIDMM_DMA_BUFFER *a1, char a2)
{
  __int64 v3; // rsi
  __int64 v5; // rax
  bool v6; // zf
  int v7; // eax
  int v8; // eax

  v3 = *((_QWORD *)a1 + 16);
  if ( g_IsInternalReleaseOrDbg )
  {
    v5 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v5 + 24) = a1;
    *(_QWORD *)(v5 + 32) = *(_QWORD *)(v3 + 8);
    WdLogGlobalForLineNumber = 3373;
  }
  if ( a2 )
  {
    v6 = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 8, 0xFFFFFFFF) == 1;
  }
  else
  {
    v7 = *((_DWORD *)a1 + 8);
    v6 = v7 == 0;
    if ( v7 > 0 )
    {
      v8 = v7 - 1;
      *((_DWORD *)a1 + 8) = v8;
      v6 = v8 == 0;
    }
  }
  if ( v6 )
    *((_BYTE *)a1 + 24) = 0;
}
