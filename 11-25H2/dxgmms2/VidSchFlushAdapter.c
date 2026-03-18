/*
 * XREFs of VidSchFlushAdapter @ 0x1400A5430
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1400FBC20 (VidSchiHandleControlEvent.c)
 *     VidSchTerminateAdapter @ 0x1400FBC90 (VidSchTerminateAdapter.c)
 *     VidSchiWaitForSchedulerEvents @ 0x140115870 (VidSchiWaitForSchedulerEvents.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchiClearFlipDevice @ 0x140028164 (VidSchiClearFlipDevice.c)
 *     VidSchIsTDRPending @ 0x1400362C0 (VidSchIsTDRPending.c)
 *     VidSchIsWorkerThread @ 0x140036A80 (VidSchIsWorkerThread.c)
 *     VidSchiInterlockedReadUlong @ 0x14003FFE4 (VidSchiInterlockedReadUlong.c)
 *     VidSchiGetSchedulerStatus @ 0x14004FE78 (VidSchiGetSchedulerStatus.c)
 *     VidSchiUnlinkCrossAdapterSyncObjects @ 0x140050720 (VidSchiUnlinkCrossAdapterSyncObjects.c)
 *     VidSchiUnwaitAllContexts @ 0x140050800 (VidSchiUnwaitAllContexts.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x140050B38 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x140050EF8 (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x140050FC0 (-VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiCleanupQueuedCommand @ 0x1400534C0 (VidSchiCleanupQueuedCommand.c)
 *     VidSchiCompleteAllPendingCommand @ 0x140053568 (VidSchiCompleteAllPendingCommand.c)
 *     memset @ 0x140056780 (memset.c)
 *     VidSchiBlockDriverCallback @ 0x14008F928 (VidSchiBlockDriverCallback.c)
 *     VidSchiCancelDelayTimerDevice @ 0x1400A4F1C (VidSchiCancelDelayTimerDevice.c)
 *     VidSchiWaitFlushCompletion @ 0x1400ACD5C (VidSchiWaitFlushCompletion.c)
 *     VidSchiHandleControlEvent @ 0x1400FBC20 (VidSchiHandleControlEvent.c)
 *     VidSchResumeAdapter @ 0x140101FA0 (VidSchResumeAdapter.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x140112850 (VidSchiWaitForEmptyHwQueue.c)
 *     VidSchiRequestSchedulerStatus @ 0x140115710 (VidSchiRequestSchedulerStatus.c)
 */

__int64 __fastcall VidSchFlushAdapter(struct _VIDSCH_GLOBAL *a1, int a2)
{
  unsigned int v2; // edi
  int v5; // r12d
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v9; // r14
  struct _VIDSCH_GLOBAL *i; // r14
  __int64 v11; // rcx
  _QWORD v12[20]; // [rsp+58h] [rbp-59h] BYREF

  v2 = 0;
  v5 = 0;
  if ( a1 )
  {
    if ( a2 == 17 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread != *((struct _KTHREAD **)a1 + 22) && CurrentThread != *((struct _KTHREAD **)a1 + 23) )
        *((_BYTE *)a1 + 3268) |= 3u;
    }
    if ( VidSchIsWorkerThread((__int64)a1) )
    {
      if ( a2 )
      {
        if ( VidSchIsTDRPending((__int64)a1) )
        {
          v9 = (_DWORD *)((char *)a1 + 3244);
          if ( *((_DWORD *)a1 + 811) == 3 )
          {
            VidSchiBlockDriverCallback((__int64)a1);
            *((_DWORD *)a1 + 9) = 23;
            RtlClearAllBitsEx((char *)a1 + 640);
            VidSchiCompleteAllPendingCommand((__int64)a1);
          }
        }
        else
        {
          VidSchiWaitForEmptyHwQueue(a1);
          v9 = (_DWORD *)((char *)a1 + 3244);
        }
        if ( a2 == 17 || *v9 == 3 )
        {
          VidSchiUnlinkCrossAdapterSyncObjects((__int64)a1);
          VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel(a1);
        }
        VidSchRundownUnorderedWaiterGlobal(a1);
        for ( i = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 44);
              i != (struct _VIDSCH_GLOBAL *)((char *)a1 + 352);
              i = *(struct _VIDSCH_GLOBAL **)i )
        {
          VidSchiCancelDelayTimerDevice(0LL, (__int64)i - 104);
        }
        VidSchResumeAdapter(a1, 0LL);
        VidSchiUnwaitAllContexts((__int64)a1);
        VidSchiClearFlipDevice(a1, 0LL, 9, 0xFFFFFFFD, 0);
        VidSchiCleanupQueuedCommand(a1);
        if ( (unsigned int)(*((_DWORD *)a1 + 93) - 2) > 1 )
          VidSchiHandleControlEvent(a1);
      }
    }
    else if ( *(_BYTE *)(*((_QWORD *)a1 + 1) + 1025LL) || *(_DWORD *)(*((_QWORD *)a1 + 2) + 200LL) == 6 )
    {
      v5 = VidSchiRequestSchedulerStatus(a1, 3LL, 1LL);
    }
    else if ( (unsigned int)VidSchiGetSchedulerStatus((__int64)a1) == 1 )
    {
      v5 = VidSchRundownUnorderedWaiter<_VIDSCH_GLOBAL>(v11, (__int64)a1, a2);
      if ( v5 >= 0 && (a2 & 1) != 0 )
      {
        if ( VidSchIsTDRPending((__int64)a1) || a2 == 17 )
          VidSchiUnwaitAllContexts((__int64)a1);
        memset(v12, 0, sizeof(v12));
        if ( *((_DWORD *)a1 + 195) )
        {
          LODWORD(v12[4]) |= 0x10u;
          v12[5] = (char *)a1 + 780;
          LODWORD(v12[2]) = 1;
          VidSchiWaitFlushCompletion(a1, v12, 26LL);
        }
        if ( *((_DWORD *)a1 + 198) )
        {
          memset(v12, 0, sizeof(v12));
          LODWORD(v12[4]) |= 0x10u;
          LODWORD(v12[2]) = 3;
          v12[5] = (char *)a1 + 792;
          VidSchiWaitFlushCompletion(a1, v12, 25LL);
        }
        if ( a2 != 5 )
        {
          VidSchiClearFlipDevice(a1, 0LL, 9, 0xFFFFFFFD, 0);
          VidSchiInterlockedReadUlong((KSPIN_LOCK *)a1 + 251, (_DWORD *)a1 + 198);
        }
      }
    }
    LOBYTE(v2) = a2 == 17;
    _InterlockedOr((volatile signed __int32 *)a1 + 1763, v2);
    return (unsigned int)v5;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1883;
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
    return 3221225485LL;
  }
}
