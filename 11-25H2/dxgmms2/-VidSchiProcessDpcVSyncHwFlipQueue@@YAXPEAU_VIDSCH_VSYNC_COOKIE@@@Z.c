/*
 * XREFs of ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14002C51C
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x14000779C (VidSchDdiNotifyDpcWorker.c)
 *     VidSchDdiNotifyDpc @ 0x1400079E0 (VidSchDdiNotifyDpc.c)
 * Callees:
 *     ?VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x140009AE0 (-VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D740 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14002CB0C (-VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x14002D068 (-VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiCommitFlipQueueLogUpdate@@YAXAEAU_VIDSCH_PLANE_STATE@@IIQEAK_N@Z @ 0x14002D55C (-VidSchiCommitFlipQueueLogUpdate@@YAXAEAU_VIDSCH_PLANE_STATE@@IIQEAK_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14002D9EC (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@I_K_N@Z @ 0x14002DA0C (-SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@I_K_N@Z.c)
 *     McTemplateK0pqxqqipqx_EtwWriteTransfer @ 0x14002E078 (McTemplateK0pqxqqipqx_EtwWriteTransfer.c)
 *     McTemplateK0pqXR1qqqXR5qQR7tXR1_EtwWriteTransfer @ 0x14002E240 (McTemplateK0pqXR1qqqXR5qQR7tXR1_EtwWriteTransfer.c)
 *     ?VidSchiTraceHwFlipQueueLogUpdate@@YAXPEAU_VIDSCH_GLOBAL@@_KIIK@Z @ 0x14002E5BC (-VidSchiTraceHwFlipQueueLogUpdate@@YAXPEAU_VIDSCH_GLOBAL@@_KIIK@Z.c)
 *     McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer @ 0x14004010C (McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer.c)
 *     ?VidSchiStallingFlipEntryUnblocked@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAI@Z @ 0x14004B93C (-VidSchiStallingFlipEntryUnblocked@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSC.c)
 *     ?VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPEAU_KEVENT@@PEA_KPEAIPEA_NQEAKPEAPEAU_VIDSCH_DEVICE@@@Z @ 0x14005451C (-VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPE.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     memset @ 0x140056780 (memset.c)
 */

void __fastcall VidSchiProcessDpcVSyncHwFlipQueue(struct _VIDSCH_VSYNC_COOKIE *a1)
{
  __int64 v1; // rdi
  unsigned int v3; // eax
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned int v9; // ebx
  void (__fastcall *v10)(_QWORD, _QWORD); // rax
  unsigned int i; // ebx
  __int64 v12; // r10
  unsigned int v13; // r8d
  __int64 v14; // rcx
  int v15; // r8d
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v16; // r8
  unsigned __int64 v17; // rdx
  int v18; // r12d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  unsigned int j; // ebx
  __int64 v23; // r9
  bool v24; // zf
  int v25; // edx
  __int64 v26; // rcx
  bool v27[8]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v28; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v29[2]; // [rsp+88h] [rbp-80h] BYREF
  char v30; // [rsp+98h] [rbp-70h]
  int v31; // [rsp+9Ch] [rbp-6Ch]
  struct _VIDSCH_DEVICE *v32[2]; // [rsp+A0h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp-58h] BYREF
  __int16 v34; // [rsp+C8h] [rbp-40h]
  unsigned int v35[4]; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v36; // [rsp+E0h] [rbp-28h]
  __int64 v37; // [rsp+F0h] [rbp-18h]
  unsigned __int64 v38[10]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v39[10]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v40[10]; // [rsp+198h] [rbp+90h] BYREF

  v1 = *((_QWORD *)a1 + 6);
  *(_DWORD *)&v27[4] = 0;
  memset(v38, 0, sizeof(v38));
  v37 = 0LL;
  v3 = *(_DWORD *)(v1 + 152);
  *(_OWORD *)v35 = 0LL;
  v36 = 0LL;
  if ( v3 )
    memset(v35, -1, 4LL * v3);
  v4 = *((unsigned int *)a1 + 27);
  if ( (_DWORD)v4 != -1 && (unsigned int)v4 < *(_DWORD *)(v1 + 40) )
  {
    _mm_lfence();
    v5 = *(_QWORD *)(v1 + 8 * v4 + 3432);
    v32[1] = (struct _VIDSCH_DEVICE *)(v1 + 1984);
    v27[0] = 0;
    v32[0] = 0LL;
    v34 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1984), &LockHandle);
    LOBYTE(v34) = 1;
    v28 = v1;
    v29[1] = v29;
    v30 = 0;
    v29[0] = v29;
    v31 = 2;
    VidSchiRecordVSyncTiming(a1, v6);
    v7 = v1;
    if ( *(_BYTE *)(v1 + 2468) )
      v7 = v1 + 4 * v4;
    _InterlockedExchange((volatile __int32 *)(v7 + 2528), 0);
    if ( (*(int *)(v5 + 4) >= 4 || *(_BYTE *)(v1 + 156)) && *((_DWORD *)a1 + 4) == 18 )
    {
      if ( *(_QWORD *)(v5 + 32) )
      {
        for ( i = 0; i < *((_DWORD *)a1 + 32); ++i )
        {
          v12 = *((unsigned int *)a1 + i + 33);
          v13 = *((_DWORD *)a1 + i + 43);
          v14 = v5 + 304 * v12 + 152;
          if ( *(_DWORD *)(v14 + 224) != v13 )
            VidSchiCommitFlipQueueLogUpdate((struct _VIDSCH_PLANE_STATE *)v14, v12, v13, v35, 1);
        }
      }
      VidSchiCompleteFlipsFromLatestPresentId(
        (struct HwQueueStagingList *)&v28,
        (struct _VIDSCH_GLOBAL *)v1,
        v4,
        *((_DWORD *)a1 + 29),
        0LL,
        v38,
        (unsigned int *)&v27[4],
        v27,
        v35,
        v32);
      if ( bTracingEnabled )
      {
        v17 = *((_QWORD *)a1 + 11);
        if ( v17 > 0xFFFFFFFF )
        {
          WdLogSingleEntry1(3LL, v17);
          WdLogGlobalForLineNumber = 7003;
        }
        v18 = *((_DWORD *)a1 + 22);
        if ( (*((_BYTE *)a1 + 124) & 1) == 0 && Microsoft_Windows_DxgKrnlEnableBits < 0 )
        {
          if ( v32[0] )
            v25 = *(_DWORD *)(v1 + 2800);
          else
            v25 = 0;
          if ( v32[0] )
          {
            v26 = *((_QWORD *)v32[0] + 1);
            if ( !v26 )
              LODWORD(v26) = v32[0];
          }
          else
          {
            LODWORD(v26) = 0;
          }
          McTemplateK0pqxqqipqx_EtwWriteTransfer(
            v26,
            v25,
            v15,
            *(_QWORD *)(v1 + 16),
            *((_DWORD *)a1 + 28),
            *((_QWORD *)a1 + 16),
            *((_DWORD *)a1 + 27),
            v18,
            *((_QWORD *)a1 + 7),
            v26,
            v25,
            v38[0]);
        }
        if ( *((_DWORD *)a1 + 4) == 18 )
        {
          memset(v40, 0, sizeof(v40));
          memset(v39, 0, sizeof(v39));
          for ( j = 0; j < *((_DWORD *)a1 + 32); ++j )
          {
            v23 = *((unsigned int *)a1 + j + 33);
            v20 = 304 * v23;
            v24 = (byte_140081244 & 4) == 0;
            v40[v23] = *(_QWORD *)(304 * v23 + v5 + 400);
            v39[v23] = *(_QWORD *)(304 * v23 + v5 + 424);
            if ( !v24 && v35[v23] != -1 )
              VidSchiTraceHwFlipQueueLogUpdate((struct _VIDSCH_GLOBAL *)v1, *((_QWORD *)a1 + 11), v4, v23, v35[v23]);
          }
          if ( (*((_BYTE *)a1 + 124) & 1) != 0 )
          {
            if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
              McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer(
                v20,
                v19,
                v21,
                *(_QWORD *)(v1 + 16),
                *(_DWORD *)(v1 + 152),
                (__int64)v40,
                *((_DWORD *)a1 + 27),
                v18,
                *(_DWORD *)&v27[4],
                (__int64)v38,
                (__int64)v39);
          }
          else if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
          {
            McTemplateK0pqXR1qqqXR5qQR7tXR1_EtwWriteTransfer(
              (unsigned int)v39,
              v19,
              v21,
              *(_QWORD *)(v1 + 16),
              *(_DWORD *)(v1 + 152),
              (__int64)v40,
              *((_DWORD *)a1 + 27),
              v18,
              *(_DWORD *)&v27[4],
              (__int64)v38,
              0,
              0LL,
              *((_BYTE *)a1 + 104) == 0,
              (__int64)v39);
          }
        }
      }
      v16 = *(struct _VIDSCH_FLIP_QUEUE_ENTRY **)(v5 + 120);
      if ( v16
        && VidSchiStallingFlipEntryUnblocked((struct _VIDSCH_GLOBAL *)v1, (struct _VIDSCH_PRESENT_INFO *)v5, v16, 0LL) )
      {
        *(_QWORD *)(v5 + 120) = 0LL;
      }
      VidSchiSubmitNextFlipRange((struct HwQueueStagingList *)&v28, (struct _VIDSCH_GLOBAL *)v1, v4);
    }
    VidSchiUpdateInterruptTargetsForAllPlanes((struct _VIDSCH_GLOBAL *)v1, v4);
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v28, 0LL);
    if ( (_BYTE)v34 )
    {
      if ( HIBYTE(v34) )
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      else
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      LOBYTE(v34) = 0;
    }
    if ( (*((_BYTE *)a1 + 124) & 1) == 0 )
    {
      ADAPTER_DISPLAY::SignalVerticalBlankEvent(
        *(ADAPTER_DISPLAY **)(*(_QWORD *)(v1 + 16) + 3120LL),
        *(struct DXGADAPTER **)(v1 + 16),
        v4,
        *(_QWORD *)(v5 + 44352),
        *((_BYTE *)a1 + 104) == 0);
      v8 = *(_QWORD *)(v5 + 44352);
      if ( v8 > 0xFFFFFFFF )
      {
        WdLogSingleEntry1(3LL, v8);
        WdLogGlobalForLineNumber = 7003;
      }
      v9 = *(_DWORD *)(v5 + 44352);
      DXGGLOBAL::GetGlobal();
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        *(_QWORD *)(*(_QWORD *)(v1 + 16) + 412LL),
        *((unsigned int *)a1 + 28),
        v9,
        *(_QWORD *)(v5 + 44368));
      v10 = *(void (__fastcall **)(_QWORD, _QWORD))(v1 + 3336);
      if ( v10 )
        v10(*(_QWORD *)(v1 + 3352), (unsigned int)v4);
    }
    if ( !v30 && v31 )
      HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v28, 0LL);
    if ( (_BYTE)v34 )
    {
      if ( HIBYTE(v34) )
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      else
        KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
}
