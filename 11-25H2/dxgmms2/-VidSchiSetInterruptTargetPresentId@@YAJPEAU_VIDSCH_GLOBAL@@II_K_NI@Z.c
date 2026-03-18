/*
 * XREFs of ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14002CBC4
 * Callers:
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1400150F0 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x140019D10 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QU.c)
 *     ?VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14002CB0C (-VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiReprogramVSyncSuppressionForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@IIPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@_K_NPEAI@Z @ 0x14002FC94 (-VidSchiReprogramVSyncSuppressionForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@IIPEAU_VIDSCH_DEVICE@@PEAU.c)
 *     ?VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEA_NPEAIII@Z @ 0x1400301B8 (-VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x14003E494 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     ?VidSchiKeepInterruptTargetEnabledForFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@@Z @ 0x14004A75C (-VidSchiKeepInterruptTargetEnabledForFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@.c)
 *     ?VidSchiSuppressVSyncForAllFlipEntries@@YAJPEAU_VIDSCH_GLOBAL@@IU_LUID@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x140054ABC (-VidSchiSuppressVSyncForAllFlipEntries@@YAJPEAU_VIDSCH_GLOBAL@@IU_LUID@@IPEAU_VIDSCH_DEVICE@@PEA.c)
 *     VidSchiEnsureHwFlipQueueLog @ 0x1400D761C (VidSchiEnsureHwFlipQueueLog.c)
 *     VidSchIsVSyncEnabled @ 0x1400D9780 (VidSchIsVSyncEnabled.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1401057E8 (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiFlushPendingFlips @ 0x14010845C (VidSchiFlushPendingFlips.c)
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?VSyncStateChange@VSYNC_TIME_STATS@@QEAAXW4_DXGK_CRTC_VSYNC_STATE@@0@Z @ 0x14002D770 (-VSyncStateChange@VSYNC_TIME_STATS@@QEAAXW4_DXGK_CRTC_VSYNC_STATE@@0@Z.c)
 *     ?VidSchiVSyncDisabledOnAllPlanes@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@I@Z @ 0x14002D93C (-VidSchiVSyncDisabledOnAllPlanes@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@I@Z.c)
 *     McTemplateK0pqqqxq_EtwWriteTransfer @ 0x14002DCB0 (McTemplateK0pqqqxq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 */

__int64 __fastcall VidSchiSetInterruptTargetPresentId(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        bool a5,
        unsigned int a6)
{
  __int64 v10; // r11
  __int64 v11; // r14
  __int64 v12; // rsi
  KSPIN_LOCK *v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  enum _DXGK_CRTC_VSYNC_STATE v20; // edx
  enum _DXGK_CRTC_VSYNC_STATE v21; // r8d
  __int64 v22; // r9
  __int64 v23; // rcx
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // r12d
  bool v28; // [rsp+50h] [rbp-59h]
  _BYTE v29[3]; // [rsp+51h] [rbp-58h] BYREF
  unsigned int v30; // [rsp+54h] [rbp-55h]
  KSPIN_LOCK *v31; // [rsp+58h] [rbp-51h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-49h] BYREF
  __int16 v33; // [rsp+78h] [rbp-31h]
  struct _VIDSCH_GLOBAL *v34; // [rsp+80h] [rbp-29h] BYREF
  unsigned int v35; // [rsp+88h] [rbp-21h]
  unsigned int v36; // [rsp+8Ch] [rbp-1Dh]
  unsigned __int64 v37; // [rsp+90h] [rbp-19h]
  __int64 v38; // [rsp+98h] [rbp-11h]

  v33 = 0;
  v10 = a3;
  v11 = 304LL * a3;
  v30 = a3;
  v12 = *((_QWORD *)a1 + a2 + 429);
  v13 = (KSPIN_LOCK *)((char *)a1 + 1984);
  v14 = a2;
  v28 = 0;
  v31 = v13;
  if ( a5 )
  {
    KeAcquireInStackQueuedSpinLock(v13, &LockHandle);
    v14 = a2;
    LOBYTE(v33) = 1;
    v10 = a3;
  }
  if ( a4 > *(_QWORD *)(v11 + v12 + 392) )
  {
    v17 = *((_QWORD *)a1 + 2);
    v18 = (*(_DWORD *)(v17 + 2976) & 0x10) != 0 ? a2 : 0;
    if ( (unsigned int)v18 < 0x10 && *(_DWORD *)(v17 + 4 * v18 + 3152)
      || *((_DWORD *)a1 + 5 * v14 + 539)
      || *((_DWORD *)a1 + 217) )
    {
      a4 = *(_QWORD *)(v11 + v12 + 400);
    }
    else
    {
      a4 = *(_QWORD *)(v11 + v12 + 392);
      if ( *(_DWORD *)(v11 + v12 + 196) <= a6 + *(_DWORD *)(v11 + v12 + 200) )
      {
        a4 += a6 + 1LL;
        v28 = VidSchiVSyncDisabledOnAllPlanes(a1, (struct _VIDSCH_PRESENT_INFO *)v12, a3);
      }
    }
  }
  else if ( a4 < *(_QWORD *)(v11 + v12 + 400) )
  {
    a4 = *(_QWORD *)(v11 + v12 + 400);
  }
  v15 = *(_QWORD *)(v11 + v12 + 424);
  if ( v15 == a4 )
  {
    if ( (_BYTE)v33 )
    {
      if ( HIBYTE(v33) )
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      else
        KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    return 0LL;
  }
  else
  {
    v19 = *(_QWORD *)(v12 + 8 * v10 + 3256);
    v20 = v19 < v15 ? DXGK_VSYNC_DISABLE_NO_PHASE : DXGK_VSYNC_ENABLE;
    v21 = v19 >= a4 ? DXGK_VSYNC_DISABLE_NO_PHASE : DXGK_VSYNC_ENABLE;
    if ( v21 != v20 )
      VSYNC_TIME_STATS::VSyncStateChange((VSYNC_TIME_STATS *)(v12 + 78656), v20, v21);
    v22 = *((unsigned int *)a1 + 8);
    v23 = *((_QWORD *)a1 + 3);
    v38 = 0LL;
    v34 = a1;
    v35 = a2;
    v36 = a3;
    v37 = a4;
    v29[0] = 0;
    DpSynchronizeExecution(v23, VidSchiSetInterruptTargetPresentIdAtISR, &v34, v22, v29);
    v27 = v38;
    if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0pqqqxq_EtwWriteTransfer(
        v25,
        v24,
        v26,
        *((_QWORD *)a1 + 2),
        a2,
        v30,
        *(_DWORD *)(v11 + v12 + 196),
        a4,
        v38);
    if ( v27 < 0 )
    {
      if ( g_BreakOnSetInterruptTargetPresentIdErrors && !KdRefreshDebuggerNotPresent() )
      {
        DbgPrintEx(
          0x65u,
          0,
          "\n"
          "The GPU Scheduler detected driver failing to set interrupt target PresentId.\n"
          "We broke into the debugger to allow a chance for debugging this issue.\n"
          "VidPnSourceId = %d.\n"
          "Plane = %d.\n"
          "InterruptTargetPresentId = 0x%I64x.\n"
          "We broke into the debugger to allow a chance for debugging this issue.\n"
          "To disable debug breaks on these failures, run \"?? dxgmms2!g_BreakOnSetInterruptTargetPresentIdErrors=0\" com"
          "mand,\n"
          "or \"ed 0x%p 0\"\n"
          "\n",
          a2,
          v30,
          a4,
          (const void *)&g_BreakOnSetInterruptTargetPresentIdErrors);
        __debugbreak();
      }
      v27 = 0;
    }
    *(_QWORD *)(v11 + v12 + 424) = a4;
    if ( v28 )
    {
      if ( *((_BYTE *)a1 + 2468) )
      {
        *((_DWORD *)a1 + 631) |= 1 << a2;
        if ( *((_DWORD *)a1 + 630) != 1 )
        {
          ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)a1 + 2488), CriticalWorkQueue);
          *((_DWORD *)a1 + 630) = 1;
        }
      }
      else if ( !_InterlockedExchange((volatile __int32 *)a1 + 630, 1) )
      {
        ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)a1 + 2488), CriticalWorkQueue);
      }
    }
    AcquireSpinLock::Release((AcquireSpinLock *)&v31);
    return (unsigned int)v27;
  }
}
