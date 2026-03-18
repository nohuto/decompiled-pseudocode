/*
 * XREFs of VidSchiRun_PriorityTable @ 0x1400B68B0
 * Callers:
 *     VidSchiWorkerThread @ 0x1400A6B00 (VidSchiWorkerThread.c)
 * Callees:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1400124E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitSoftwareCommand @ 0x140013898 (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiSubmitWaitCommand @ 0x140013940 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x140013B40 (VidSchiSubmitSignalCommand.c)
 *     VidSchiSetTransferContextRunningTime @ 0x140018430 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiScheduleCommandToRun @ 0x140018790 (VidSchiScheduleCommandToRun.c)
 *     VidSchiRewindPacket @ 0x14001B49C (VidSchiRewindPacket.c)
 *     VidSchiDecrementContextReference @ 0x140020D30 (VidSchiDecrementContextReference.c)
 *     VidSchiIncrementContextReference @ 0x140023740 (VidSchiIncrementContextReference.c)
 *     VidSchiAdjustWorkerThreadPriority @ 0x140032E60 (VidSchiAdjustWorkerThreadPriority.c)
 *     ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x140034B10 (-VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchIsTDRPending @ 0x140034DF0 (VidSchIsTDRPending.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1400383A8 (VidSchiProcessCompletedQueuePacket.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     VidSchiRecoverFromTDR @ 0x1400912A0 (VidSchiRecoverFromTDR.c)
 *     VidSchiSubmitPagingCommand @ 0x1400B6414 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1400B6C90 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1400B7268 (VidSchiSubmitRenderCommand.c)
 */

void __fastcall VidSchiRun_PriorityTable(struct _VIDSCH_GLOBAL *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  struct _VIDSCH_CONTEXT *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r15
  int v8; // eax
  __int64 v9; // r14
  int v10; // eax
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  char v14; // [rsp+50h] [rbp+8h] BYREF

  while ( 1 )
  {
    v14 = 0;
    v2 = VidSchiScheduleCommandToRun(a1, &v14);
    v3 = v2;
    if ( v2 )
    {
      v4 = *(struct _VIDSCH_CONTEXT **)(v2 + 88);
      if ( v14 && (unsigned int)(*((_DWORD *)a1 + 811) - 2) > 1 )
      {
        VidSchiSetTransferContextRunningTime((__int64)v4, 0LL, 0);
        VidSchiRewindPacket(v3, 0, 1, 0);
        VidschiUnselectContext(v4);
      }
      else
      {
        VidSchiIncrementContextReference((__int64)v4);
        v5 = *(_QWORD *)(v3 + 88);
        v6 = *(_QWORD *)(v5 + 104);
        v7 = *(_QWORD *)(v5 + 96);
        v8 = *(_DWORD *)(v3 + 48);
        v9 = *(_QWORD *)(v6 + 32);
        if ( v8 )
        {
          switch ( v8 )
          {
            case 8:
              VidSchiSubmitPagingCommand((LARGE_INTEGER *)v3);
              break;
            case 3:
              VidSchiSubmitMmIoFlipCommand((struct _VIDSCH_QUEUE_PACKET *)v3);
              break;
            case 4:
              VidSchiSubmitWaitCommand((struct _VIDSCH_QUEUE_PACKET *)v3);
              break;
            case 5:
              VidSchiSubmitSignalCommand((struct _VIDSCH_QUEUE_PACKET *)v3);
              break;
            case 6:
              v11 = (_QWORD *)(v3 + 800);
              if ( *(_DWORD *)(v3 + 792) != 5 )
                v11 = (_QWORD *)*v11;
              (*(void (__fastcall **)(_QWORD *))(v3 + 776))(v11);
              VidSchiProcessCompletedQueuePacket((struct _VIDSCH_QUEUE_PACKET *)v3, v12, v13);
              break;
            case 7:
              VidSchiSubmitSoftwareCommand((struct _VIDSCH_QUEUE_PACKET *)v3);
              break;
          }
        }
        else
        {
          if ( (*(_BYTE *)(v9 + 3268) & 1) != 0
            || VidSchIsTDRPending(*(_QWORD *)(v6 + 32))
            || *(_BYTE *)(v6 + 204)
            || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 200), 0, 0) )
          {
            *(_DWORD *)(v3 + 64) &= ~4u;
          }
          if ( (*(_DWORD *)(v3 + 64) & 4) != 0 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v7 + 3000));
            RtlSetBitEx(v9 + 544, *(unsigned __int16 *)(v7 + 4));
          }
          if ( (*(_DWORD *)(v3 + 752) & 0x8000000) != 0 )
            VidSchiSubmitRenderVirtualCommand((_VIDSCH_QUEUE_PACKET *)v3);
          else
            VidSchiSubmitRenderCommand((_VIDSCH_QUEUE_PACKET *)v3);
        }
        VidSchiAdjustWorkerThreadPriority((__int64)v4);
        VidSchiSetTransferContextRunningTime((__int64)v4, 0LL, 0);
        VidschiUnselectContext(v4);
        VidSchiDecrementContextReference(v4, 0);
      }
    }
    if ( VidSchIsTDRPending((__int64)a1) )
    {
      v10 = *((_DWORD *)a1 + 811);
      if ( v10 != 2 && v10 != 3 )
        break;
    }
  }
  VidSchiRecoverFromTDR((__int64)a1);
}
