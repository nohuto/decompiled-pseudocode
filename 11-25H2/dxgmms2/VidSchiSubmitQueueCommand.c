/*
 * XREFs of VidSchiSubmitQueueCommand @ 0x1400AE770
 * Callers:
 *     VidSchiDrainContextFromWorkerThread @ 0x14004FE18 (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiSubmitQueueCommandDirect @ 0x1400504CC (VidSchiSubmitQueueCommandDirect.c)
 * Callees:
 *     VidSchiSubmitMmIoFlipCommand @ 0x14001D940 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitSoftwareCommand @ 0x14001ECF8 (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiSubmitWaitCommand @ 0x14001EDA0 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x14001EFA0 (VidSchiSubmitSignalCommand.c)
 *     VidSchIsTDRPending @ 0x1400362C0 (VidSchIsTDRPending.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1400396D8 (VidSchiProcessCompletedQueuePacket.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     VidSchiSubmitPagingCommand @ 0x1400AE064 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1400AE8E0 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1400AEEB8 (VidSchiSubmitRenderCommand.c)
 */

void __fastcall VidSchiSubmitQueueCommand(LARGE_INTEGER *a1)
{
  LARGE_INTEGER v1; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  DWORD LowPart; // eax
  __int64 v6; // rbp
  LARGE_INTEGER *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8

  v1 = a1[11];
  v3 = *(_QWORD *)(v1.QuadPart + 104);
  v4 = *(_QWORD *)(v1.QuadPart + 96);
  LowPart = a1[6].LowPart;
  v6 = *(_QWORD *)(v3 + 32);
  if ( LowPart )
  {
    switch ( LowPart )
    {
      case 8u:
        VidSchiSubmitPagingCommand(a1);
        break;
      case 3u:
        VidSchiSubmitMmIoFlipCommand((struct _VIDSCH_QUEUE_PACKET *)a1);
        break;
      case 4u:
        VidSchiSubmitWaitCommand((struct _VIDSCH_QUEUE_PACKET *)a1);
        break;
      case 5u:
        VidSchiSubmitSignalCommand((struct _VIDSCH_QUEUE_PACKET *)a1);
        break;
      case 6u:
        v7 = a1 + 100;
        if ( a1[99].LowPart != 5 )
          v7 = (LARGE_INTEGER *)v7->QuadPart;
        ((void (__fastcall *)(LARGE_INTEGER *))a1[97].QuadPart)(v7);
        VidSchiProcessCompletedQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1, v8, v9);
        break;
      case 7u:
        VidSchiSubmitSoftwareCommand((struct _VIDSCH_QUEUE_PACKET *)a1);
        break;
    }
  }
  else
  {
    if ( (*(_BYTE *)(v6 + 3268) & 1) != 0
      || VidSchIsTDRPending(*(_QWORD *)(v3 + 32))
      || *(_BYTE *)(v3 + 204)
      || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 200), 0, 0) )
    {
      a1[8].LowPart &= ~4u;
    }
    if ( (a1[8].LowPart & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 3000));
      RtlSetBitEx(v6 + 544, *(unsigned __int16 *)(v4 + 4));
    }
    if ( (a1[94].LowPart & 0x8000000) != 0 )
      VidSchiSubmitRenderVirtualCommand((_VIDSCH_QUEUE_PACKET *)a1);
    else
      VidSchiSubmitRenderCommand((_VIDSCH_QUEUE_PACKET *)a1);
  }
}
