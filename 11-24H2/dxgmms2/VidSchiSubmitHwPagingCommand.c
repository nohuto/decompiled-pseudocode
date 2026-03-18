/*
 * XREFs of VidSchiSubmitHwPagingCommand @ 0x1400E31E8
 * Callers:
 *     VidSchSubmitPagingCommand @ 0x1400E2E98 (VidSchSubmitPagingCommand.c)
 * Callees:
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1400118C0 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x140036F0C (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1400E4CE0 (VidSchiAllocateHwQueuePacket.c)
 */

void __fastcall VidSchiSubmitHwPagingCommand(__int64 a1, __int128 *a2)
{
  unsigned int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 HwQueuePacket; // rax
  __int128 v8; // xmm0
  __int64 v9; // r8
  __int128 v10; // xmm1
  __int64 v11; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0

  v3 = VidSchiSchedulerNodeToDriverEngine(a1, *((_DWORD *)a2 + 17));
  LOBYTE(v4) = 1;
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 336) + 8LL * v3);
  HwQueuePacket = VidSchiAllocateHwQueuePacket(v6, v4);
  v8 = *a2;
  v9 = HwQueuePacket;
  v10 = a2[1];
  *(_DWORD *)HwQueuePacket = 895576406;
  *(_DWORD *)(HwQueuePacket + 48) = 8;
  *(_QWORD *)(HwQueuePacket + 56) = MEMORY[0xFFFFF78000000320];
  v11 = *(_QWORD *)a2;
  *(_DWORD *)(v9 + 52) = 2;
  *(_QWORD *)(v9 + 96) = v6;
  CurrentThread = KeGetCurrentThread();
  *(_OWORD *)(v9 + 752) = v8;
  *(_QWORD *)(v9 + 104) = CurrentThread;
  v13 = a2[2];
  *(_OWORD *)(v9 + 768) = v10;
  *(_QWORD *)(v9 + 72) = v11;
  v14 = a2[3];
  *(_OWORD *)(v9 + 784) = v13;
  v15 = a2[4];
  *(_OWORD *)(v9 + 800) = v14;
  *(_OWORD *)(v9 + 816) = v15;
  VidSchiSubmitCommandPacketToHwQueue((struct _VIDSCH_QUEUE_PACKET *)v9);
}
