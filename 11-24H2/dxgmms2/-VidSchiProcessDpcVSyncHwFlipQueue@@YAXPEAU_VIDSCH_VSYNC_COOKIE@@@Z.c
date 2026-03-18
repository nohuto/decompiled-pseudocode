/*
 * XREFs of ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x140009AFC
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x14000779C (VidSchDdiNotifyDpcWorker.c)
 *     VidSchDdiNotifyDpc @ 0x1400079E0 (VidSchDdiNotifyDpc.c)
 * Callees:
 *     ?VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14000A0EC (-VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x14000A648 (-VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14000A8F8 (-VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x1400122E0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140035A00 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@I_K_N@Z @ 0x140036C4C (-SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@I_K_N@Z.c)
 *     ?VidSchiCommitFlipQueueLogUpdate@@YAXAEAU_VIDSCH_PLANE_STATE@@IIQEAK_N@Z @ 0x14003A25C (-VidSchiCommitFlipQueueLogUpdate@@YAXAEAU_VIDSCH_PLANE_STATE@@IIQEAK_N@Z.c)
 *     McTemplateK0pqXR1qqqXR5qQR7tXR1_EtwWriteTransfer @ 0x14003A540 (McTemplateK0pqXR1qqqXR5qQR7tXR1_EtwWriteTransfer.c)
 *     McTemplateK0pqxqqipqx_EtwWriteTransfer @ 0x14003AF88 (McTemplateK0pqxqqipqx_EtwWriteTransfer.c)
 *     McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer @ 0x14003E11C (McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer.c)
 *     ?VidSchiTraceHwFlipQueueLogUpdate@@YAXPEAU_VIDSCH_GLOBAL@@_KIIK@Z @ 0x14003ECA4 (-VidSchiTraceHwFlipQueueLogUpdate@@YAXPEAU_VIDSCH_GLOBAL@@_KIIK@Z.c)
 *     ?VidSchiStallingFlipEntryUnblocked@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAI@Z @ 0x14004B04C (-VidSchiStallingFlipEntryUnblocked@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSC.c)
 *     ?VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPEAU_KEVENT@@PEA_KPEAIPEA_NQEAKPEAPEAU_VIDSCH_DEVICE@@@Z @ 0x1400540EC (-VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPE.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     memset @ 0x140056340 (memset.c)
 */

void __fastcall VidSchiProcessDpcVSyncHwFlipQueue(struct _VIDSCH_VSYNC_COOKIE *a1)
{
  __int64 v1; // rdi
  unsigned int v3; // eax
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned int v8; // ebx
  void (__fastcall *v9)(_QWORD, _QWORD); // rax
  unsigned int i; // ebx
  __int64 v11; // r10
  unsigned int v12; // r8d
  __int64 v13; // rcx
  int v14; // r8d
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v15; // r8
  unsigned __int64 v16; // rdx
  int v17; // r12d
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  unsigned int j; // ebx
  __int64 v22; // r9
  bool v23; // zf
  int v24; // edx
  __int64 v25; // rcx
  bool v26[8]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v27; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v28[2]; // [rsp+88h] [rbp-80h] BYREF
  char v29; // [rsp+98h] [rbp-70h]
  int v30; // [rsp+9Ch] [rbp-6Ch]
  struct _VIDSCH_DEVICE *v31[2]; // [rsp+A0h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp-58h] BYREF
  __int16 v33; // [rsp+C8h] [rbp-40h]
  unsigned int v34[4]; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v35; // [rsp+E0h] [rbp-28h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  unsigned __int64 v37[10]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v38[10]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v39[10]; // [rsp+198h] [rbp+90h] BYREF

  v1 = *((_QWORD *)a1 + 6);
  *(_DWORD *)&v26[4] = 0;
  memset(v37, 0, sizeof(v37));
  v36 = 0LL;
  v3 = *(_DWORD *)(v1 + 152);
  *(_OWORD *)v34 = 0LL;
  v35 = 0LL;
  if ( v3 )
    memset(v34, -1, 4LL * v3);
  v4 = *((unsigned int *)a1 + 27);
  if ( (_DWORD)v4 != -1 && (unsigned int)v4 < *(_DWORD *)(v1 + 40) )
  {
    _mm_lfence();
    v5 = *(_QWORD *)(v1 + 8 * v4 + 3432);
    v31[1] = (struct _VIDSCH_DEVICE *)(v1 + 1984);
    v26[0] = 0;
    v31[0] = 0LL;
    v33 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1984), &LockHandle);
    LOBYTE(v33) = 1;
    v27 = v1;
    v28[1] = v28;
    v29 = 0;
    v28[0] = v28;
    v30 = 2;
    VidSchiRecordVSyncTiming(a1);
    v6 = v1;
    if ( *(_BYTE *)(v1 + 2468) )
      v6 = v1 + 4 * v4;
    _InterlockedExchange((volatile __int32 *)(v6 + 2528), 0);
    if ( (*(int *)(v5 + 4) >= 4 || *(_BYTE *)(v1 + 156)) && *((_DWORD *)a1 + 4) == 18 )
    {
      if ( *(_QWORD *)(v5 + 32) )
      {
        for ( i = 0; i < *((_DWORD *)a1 + 32); ++i )
        {
          v11 = *((unsigned int *)a1 + i + 33);
          v12 = *((_DWORD *)a1 + i + 43);
          v13 = v5 + 304 * v11 + 152;
          if ( *(_DWORD *)(v13 + 224) != v12 )
            VidSchiCommitFlipQueueLogUpdate((struct _VIDSCH_PLANE_STATE *)v13, v11, v12, v34, 1);
        }
      }
      VidSchiCompleteFlipsFromLatestPresentId(
        (struct HwQueueStagingList *)&v27,
        (struct _VIDSCH_GLOBAL *)v1,
        v4,
        *((_DWORD *)a1 + 29),
        0LL,
        v37,
        (unsigned int *)&v26[4],
        v26,
        v34,
        v31);
      if ( bTracingEnabled )
      {
        v16 = *((_QWORD *)a1 + 11);
        if ( v16 > 0xFFFFFFFF )
        {
          WdLogSingleEntry1(3LL, v16);
          WdLogGlobalForLineNumber = 7016;
        }
        v17 = *((_DWORD *)a1 + 22);
        if ( (*((_BYTE *)a1 + 124) & 1) == 0 && Microsoft_Windows_DxgKrnlEnableBits < 0 )
        {
          if ( v31[0] )
            v24 = *(_DWORD *)(v1 + 2800);
          else
            v24 = 0;
          if ( v31[0] )
          {
            v25 = *((_QWORD *)v31[0] + 1);
            if ( !v25 )
              LODWORD(v25) = v31[0];
          }
          else
          {
            LODWORD(v25) = 0;
          }
          McTemplateK0pqxqqipqx_EtwWriteTransfer(
            v25,
            v24,
            v14,
            *(_QWORD *)(v1 + 16),
            *((_DWORD *)a1 + 28),
            *((_QWORD *)a1 + 16),
            *((_DWORD *)a1 + 27),
            v17,
            *((_QWORD *)a1 + 7),
            v25,
            v24,
            v37[0]);
        }
        if ( *((_DWORD *)a1 + 4) == 18 )
        {
          memset(v39, 0, sizeof(v39));
          memset(v38, 0, sizeof(v38));
          for ( j = 0; j < *((_DWORD *)a1 + 32); ++j )
          {
            v22 = *((unsigned int *)a1 + j + 33);
            v19 = 304 * v22;
            v23 = (byte_140081244 & 4) == 0;
            v39[v22] = *(_QWORD *)(304 * v22 + v5 + 400);
            v38[v22] = *(_QWORD *)(304 * v22 + v5 + 424);
            if ( !v23 && v34[v22] != -1 )
              VidSchiTraceHwFlipQueueLogUpdate((struct _VIDSCH_GLOBAL *)v1, *((_QWORD *)a1 + 11), v4, v22, v34[v22]);
          }
          if ( (*((_BYTE *)a1 + 124) & 1) != 0 )
          {
            if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
              McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer(
                v19,
                v18,
                v20,
                *(_QWORD *)(v1 + 16),
                *(_DWORD *)(v1 + 152),
                (__int64)v39,
                *((_DWORD *)a1 + 27),
                v17,
                *(_DWORD *)&v26[4],
                (__int64)v37,
                (__int64)v38);
          }
          else if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
          {
            McTemplateK0pqXR1qqqXR5qQR7tXR1_EtwWriteTransfer(
              (unsigned int)v38,
              v18,
              v20,
              *(_QWORD *)(v1 + 16),
              *(_DWORD *)(v1 + 152),
              (__int64)v39,
              *((_DWORD *)a1 + 27),
              v17,
              *(_DWORD *)&v26[4],
              (__int64)v37,
              0,
              0LL,
              *((_BYTE *)a1 + 104) == 0,
              (__int64)v38);
          }
        }
      }
      v15 = *(struct _VIDSCH_FLIP_QUEUE_ENTRY **)(v5 + 120);
      if ( v15
        && VidSchiStallingFlipEntryUnblocked((struct _VIDSCH_GLOBAL *)v1, (struct _VIDSCH_PRESENT_INFO *)v5, v15, 0LL) )
      {
        *(_QWORD *)(v5 + 120) = 0LL;
      }
      VidSchiSubmitNextFlipRange((struct HwQueueStagingList *)&v27, (struct _VIDSCH_GLOBAL *)v1, v4);
    }
    VidSchiUpdateInterruptTargetsForAllPlanes((struct _VIDSCH_GLOBAL *)v1, v4);
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v27, 0LL);
    if ( (_BYTE)v33 )
    {
      if ( HIBYTE(v33) )
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      else
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      LOBYTE(v33) = 0;
    }
    if ( (*((_BYTE *)a1 + 124) & 1) == 0 )
    {
      ADAPTER_DISPLAY::SignalVerticalBlankEvent(
        *(ADAPTER_DISPLAY **)(*(_QWORD *)(v1 + 16) + 3120LL),
        *(struct DXGADAPTER **)(v1 + 16),
        v4,
        *(_QWORD *)(v5 + 44352),
        *((_BYTE *)a1 + 104) == 0);
      v7 = *(_QWORD *)(v5 + 44352);
      if ( v7 > 0xFFFFFFFF )
      {
        WdLogSingleEntry1(3LL, v7);
        WdLogGlobalForLineNumber = 7016;
      }
      v8 = *(_DWORD *)(v5 + 44352);
      DXGGLOBAL::GetGlobal();
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        *(_QWORD *)(*(_QWORD *)(v1 + 16) + 412LL),
        *((unsigned int *)a1 + 28),
        v8,
        *(_QWORD *)(v5 + 44368));
      v9 = *(void (__fastcall **)(_QWORD, _QWORD))(v1 + 3336);
      if ( v9 )
        v9(*(_QWORD *)(v1 + 3352), (unsigned int)v4);
    }
    if ( !v29 && v30 )
      HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v27, 0LL);
    if ( (_BYTE)v33 )
    {
      if ( HIBYTE(v33) )
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      else
        KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
}
