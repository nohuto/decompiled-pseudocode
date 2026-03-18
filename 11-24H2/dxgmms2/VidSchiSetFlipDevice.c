/*
 * XREFs of VidSchiSetFlipDevice @ 0x14001E0BC
 * Callers:
 *     VidSchiClearFlipDevice @ 0x14001CD04 (VidSchiClearFlipDevice.c)
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x14001D38C (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x14001DEC8 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14000DB70 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x1400122E0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x14001C74C (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchiCompletePendingFlip @ 0x14001CB08 (VidSchiCompletePendingFlip.c)
 *     VidSchiClearPeriodicFrameNotifications @ 0x14001CC18 (VidSchiClearPeriodicFrameNotifications.c)
 *     ?IsMockDriverStateEnabled@DXGADAPTER@@QEAA_NXZ @ 0x14001CCE0 (-IsMockDriverStateEnabled@DXGADAPTER@@QEAA_NXZ.c)
 *     ??_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z @ 0x14001D118 (--_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z.c)
 *     ?InitializeFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z @ 0x14001ECA0 (-InitializeFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x14002C91C (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x140031660 (-GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 *     ?GetFlipQueueRef@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x140042DD0 (-GetFlipQueueRef@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 *     ?DdiSetFlipQueueLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETFLIPQUEUELOGBUFFER@@@Z @ 0x140044478 (-DdiSetFlipQueueLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETFLIPQUEUELOGBUFFER@@@Z.c)
 *     ?ValidateMockDriverState@DXGADAPTER@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z @ 0x14004B708 (-ValidateMockDriverState@DXGADAPTER@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z.c)
 *     memset @ 0x140056340 (memset.c)
 *     VidSchControlVSyncDevice @ 0x1400D4B10 (VidSchControlVSyncDevice.c)
 *     VidSchIsVSyncAvailable @ 0x1400E7D10 (VidSchIsVSyncAvailable.c)
 *     VidSchiFlushPendingFlips @ 0x14010652C (VidSchiFlushPendingFlips.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiSetFlipDevice(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        struct _VIDSCH_DEVICE *a3,
        int a4,
        int a5,
        char a6,
        char a7)
{
  __int64 v7; // r12
  int v8; // r13d
  int v10; // r15d
  __int64 v12; // rdi
  int v13; // r14d
  struct _VIDSCH_DEVICE *v14; // rax
  struct _VIDSCH_GLOBAL *v16; // rdx
  struct _VIDSCH_GLOBAL *v17; // r13
  int v18; // r12d
  unsigned __int16 v19; // r9
  __int64 v20; // r14
  int j; // esi
  __int64 v22; // rax
  __int64 v23; // rcx
  VIDSCH_FLIP_QUEUE *v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // rdx
  void *v30; // rax
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // r14
  bool v34; // zf
  PVOID v35; // rdx
  unsigned int i; // r14d
  VIDSCH_FLIP_QUEUE *FlipQueue; // rax
  _QWORD *v38; // rsi
  __int64 v39; // rcx
  _QWORD *v40; // rax
  char *v41; // rbx
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // esi
  char v46; // cl
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned int k; // esi
  __int64 v51; // r15
  void *v52; // r12
  ADAPTER_RENDER *v53; // rcx
  PVOID BackTrace; // [rsp+30h] [rbp-91h] BYREF
  struct _VIDSCH_GLOBAL *v55; // [rsp+38h] [rbp-89h] BYREF
  unsigned int v56; // [rsp+40h] [rbp-81h]
  int v57; // [rsp+44h] [rbp-7Dh]
  unsigned __int64 v58; // [rsp+50h] [rbp-71h] BYREF
  __int128 v59; // [rsp+58h] [rbp-69h] BYREF
  unsigned int *v60; // [rsp+68h] [rbp-59h]
  int *v61; // [rsp+70h] [rbp-51h]
  __int64 v62; // [rsp+78h] [rbp-49h]
  PVOID v63; // [rsp+80h] [rbp-41h]
  char v64; // [rsp+88h] [rbp-39h]
  int v65; // [rsp+89h] [rbp-38h]
  __int16 v66; // [rsp+8Dh] [rbp-34h]
  char v67; // [rsp+8Fh] [rbp-32h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-31h] BYREF
  struct _VIDSCH_GLOBAL *v69; // [rsp+A8h] [rbp-19h] BYREF
  _QWORD v70[2]; // [rsp+B0h] [rbp-11h] BYREF
  char v71; // [rsp+C0h] [rbp-1h]
  int v72; // [rsp+C4h] [rbp+3h]
  PERESOURCE Resource; // [rsp+C8h] [rbp+7h]
  unsigned int v74; // [rsp+110h] [rbp+4Fh]
  unsigned int v75; // [rsp+118h] [rbp+57h] BYREF
  int v76; // [rsp+128h] [rbp+67h] BYREF

  v75 = a2;
  v7 = a4;
  v8 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v74 = 0;
  v10 = 1;
  v12 = *((_QWORD *)a1 + a2 + 429);
  v13 = 0;
  Resource = (PERESOURCE)((char *)a1 + 1032);
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1032), 1u);
  WdLogSingleEntry3(4LL, a3, v75, v7);
  WdLogGlobalForLineNumber = 23254;
  if ( (_DWORD)v7 )
  {
    v14 = *(struct _VIDSCH_DEVICE **)(v12 + 16);
    if ( v14 )
    {
      if ( v14 == a3 && *(_DWORD *)(v12 + 4) == (_DWORD)v7 )
        goto LABEL_5;
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 0x10000LL, a1, a3, v75);
      WdLogGlobalForLineNumber = 906;
LABEL_91:
      *(_QWORD *)BackTrace = v32;
LABEL_56:
      v13 = -1073741801;
      v56 = v75;
      v55 = a1;
      while ( 1 )
      {
        v57 = v10;
        if ( v10 == *((_DWORD *)a1 + 38) )
          break;
        FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v55);
        if ( FlipQueue )
        {
          VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(FlipQueue);
          *VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueueRef((VIDSCH_FLIP_QUEUE_ITERATOR *)&v55) = 0LL;
        }
        ++v10;
      }
      goto LABEL_65;
    }
    if ( (int)v7 >= 4 || *((_BYTE *)a1 + 156) )
    {
      if ( !(unsigned __int8)VidSchIsVSyncAvailable(a1, v75) )
      {
        v13 = -1073741823;
        goto LABEL_74;
      }
      LOBYTE(v43) = 1;
      v13 = VidSchControlVSyncDevice(a3, 1LL, v43, v75);
      if ( v13 < 0 )
        goto LABEL_74;
    }
    if ( (int)v7 >= 3 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 248, &LockHandle);
      v27 = v75;
      v10 = -1;
      v74 = v75;
      v28 = -1;
      while ( 1 )
      {
        v8 = v13;
        v76 = v28;
        if ( v28 == *((_DWORD *)a1 + 38) )
          break;
        v29 = *((_QWORD *)a1 + v27 + 429);
        if ( v28 == v10 )
LABEL_63:
          v30 = (void *)(v29 + 32);
        else
          v30 = (void *)(v29 + 8 * (v28 + 5LL));
        BackTrace = v30;
        v31 = operator new(89720LL, 0x39616956u, 64LL);
        v32 = 0LL;
        v33 = v31;
        if ( !v31 )
          goto LABEL_91;
        v34 = v76 == v10;
        *(_DWORD *)(v31 + 84) = v76;
        *(_QWORD *)(v31 + 56) = 0LL;
        *(_QWORD *)(v31 + 64) = 0LL;
        *(_BYTE *)(v31 + 80) = v34;
        *(_QWORD *)(v31 + 72) = 0LL;
        *(_QWORD *)(v31 + 88) = 0LL;
        *(_QWORD *)(v31 + 96) = 0LL;
        *(_QWORD *)(v31 + 104) = 0LL;
        *(_DWORD *)(v31 + 112) = 0;
        memset((void *)(v31 + 120), 0, 0x15E00uLL);
        v35 = BackTrace;
        *(_OWORD *)v33 = 0LL;
        *(_OWORD *)(v33 + 16) = 0LL;
        *(_OWORD *)(v33 + 32) = 0LL;
        *(_QWORD *)(v33 + 48) = 0LL;
        *(_QWORD *)v35 = v33;
        for ( i = 0; i < 0x40; ++i )
        {
          if ( (int)_VIDSCH_FLIP_QUEUE_ENTRY::InitializeFlipQueueEntry(
                      (_VIDSCH_FLIP_QUEUE_ENTRY *)(*(_QWORD *)v35 + 120LL + 1400LL * i),
                      a1) < 0 )
            goto LABEL_56;
          v35 = BackTrace;
        }
        v13 = v8;
        v28 = v76 + 1;
        *(_DWORD *)(*(_QWORD *)v35 + 76LL) = 63;
        v27 = v74;
      }
      *(_BYTE *)(v12 + 8) = a6;
      *(_DWORD *)(v12 + 4) = v7;
      *(_QWORD *)(v12 + 16) = a3;
LABEL_65:
      v38 = (_QWORD *)((char *)a3 + 104);
      v39 = *v38;
      if ( *(_QWORD **)(*v38 + 8LL) != v38
        || (v40 = (_QWORD *)v38[1], (_QWORD *)*v40 != v38)
        || (*v40 = v39,
            v41 = (char *)a1 + 352,
            *(_QWORD *)(v39 + 8) = v40,
            v42 = *(_QWORD *)v41,
            *(char **)(*(_QWORD *)v41 + 8LL) != v41) )
      {
        __fastfail(3u);
      }
      *v38 = v42;
      v38[1] = v41;
      *(_QWORD *)(v42 + 8) = v38;
      *(_QWORD *)v41 = v38;
      goto LABEL_75;
    }
LABEL_74:
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 248, &LockHandle);
    *(_BYTE *)(v12 + 8) = a6;
    *(_DWORD *)(v12 + 4) = v7;
    *(_QWORD *)(v12 + 16) = a3;
LABEL_75:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_5;
  }
  if ( !a3 || a3 == *(struct _VIDSCH_DEVICE **)(v12 + 16) )
  {
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0pq_EtwWriteTransfer();
    VidSchiClearPeriodicFrameNotifications((__int64)a1, v75);
    LODWORD(v7) = (_DWORD)a1 + 1984;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 248, &LockHandle);
    v10 = a5;
    v69 = a1;
    v70[1] = v70;
    v71 = 0;
    v70[0] = v70;
    v72 = 2;
    VidSchiCompletePendingFlip((__int64)&v69, (__int64)a1, v75, a5);
    if ( !v71 && v72 )
      HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v69, 0LL);
    if ( v10 == 6 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiFlushPendingFlips(a1);
      if ( a7 )
      {
        if ( (unsigned int)VidSchiSubmitDisablePlanesFlip(a3, v75) == -1073741267 && !*(_BYTE *)(v12 + 78948) )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 281LL, 61441LL, a1, v75, 0LL);
          WdLogGlobalForLineNumber = 906;
          goto LABEL_63;
        }
        VidSchiFlushPendingFlips(a1);
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 248, &LockHandle);
    }
    if ( DXGADAPTER::IsMockDriverStateEnabled(*((DXGADAPTER **)a1 + 2)) && v10 != 9 )
    {
      BackTrace = 0LL;
      RtlCaptureStackBackTrace(2u, 1u, &BackTrace, 0LL);
      LOWORD(v45) = *(_WORD *)(v12 + 44296);
      while ( (_WORD)v45 )
      {
        v76 = 0;
        v46 = -1;
        v34 = !_BitScanForward((unsigned int *)&v47, (unsigned __int16)v45);
        if ( !v34 )
          v46 = v47;
        v48 = (unsigned int)v46;
        v49 = *((_QWORD *)a1 + 2);
        v76 = v48;
        v55 = *(struct _VIDSCH_GLOBAL **)((v48 << 12) + v12 + 3336);
        *(_DWORD *)((char *)&v59 + 9) = 0;
        *(_WORD *)((char *)&v59 + 13) = 0;
        HIBYTE(v59) = 0;
        v65 = 0;
        v66 = 0;
        v67 = 0;
        *(_QWORD *)&v59 = &v55;
        v60 = &v75;
        v61 = &v76;
        v63 = BackTrace;
        v58 = 1LL;
        v64 = 0;
        BYTE8(v59) = 1;
        v62 = 0LL;
        DXGADAPTER::ValidateMockDriverState(v49, 0LL, &v58, v44);
        v45 = (unsigned __int16)v45 & ~(1 << v76);
      }
    }
    v17 = *(struct _VIDSCH_GLOBAL **)(v12 + 16);
    v18 = *(_DWORD *)(v12 + 4);
    v19 = *(_WORD *)(v12 + 44296);
    *((_QWORD *)&v59 + 1) = &v59;
    v55 = v17;
    *(_QWORD *)&v59 = &v59;
    v76 = v18;
    v58 = (unsigned __int64)a1;
    LOBYTE(v60) = 0;
    HIDWORD(v60) = 2;
    VidSchiUnreferenceDisplayingAllocations(
      (struct HwQueueStagingList *)&v58,
      v16,
      (struct _VIDSCH_PRESENT_INFO *)v12,
      v19);
    if ( !(_BYTE)v60 && HIDWORD(v60) )
      HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v58, 0LL);
    v20 = v75;
    for ( j = -1; j != *((_DWORD *)a1 + 38); ++j )
    {
      v22 = *((_QWORD *)a1 + v20 + 429);
      if ( j == -1 )
        v23 = *(_QWORD *)(v22 + 32);
      else
        v23 = *(_QWORD *)(v22 + 8LL * j + 40);
      if ( v23 )
      {
        if ( j == -1 )
          v24 = *(VIDSCH_FLIP_QUEUE **)(v22 + 32);
        else
          v24 = *(VIDSCH_FLIP_QUEUE **)(v22 + 8LL * j + 40);
        if ( v24 )
          VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(v24);
        v25 = *((_QWORD *)a1 + v20 + 429);
        if ( j == -1 )
          v26 = (_QWORD *)(v25 + 32);
        else
          v26 = (_QWORD *)(v25 + 8LL * j + 40);
        *v26 = 0LL;
      }
    }
    *(_BYTE *)(v12 + 8) = a6;
    *(_DWORD *)(v12 + 4) = 0;
    *(_QWORD *)(v12 + 16) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v13 = 0;
    if ( *((_BYTE *)a1 + 59) )
    {
      for ( k = 0; k < *((_DWORD *)a1 + 38); ++k )
      {
        v51 = 304LL * k;
        v52 = *(void **)(v51 + v12 + 448);
        if ( v52 )
        {
          *(_QWORD *)(v51 + v12 + 448) = 0LL;
          v53 = (ADAPTER_RENDER *)*((_QWORD *)a1 + 1);
          v59 = 0LL;
          v58 = __PAIR64__(k, v75);
          ADAPTER_RENDER::DdiSetFlipQueueLogBuffer(v53, (const struct _DXGKARG_SETFLIPQUEUELOGBUFFER *)&v58);
          *(_DWORD *)(v51 + v12 + 376) = 0;
          ExFreePoolWithTag(v52, 0);
        }
      }
    }
    if ( v55 && (v76 >= 4 || *((_BYTE *)a1 + 156)) )
      v13 = VidSchControlVSyncDevice(v55, 1LL, 0LL, v75);
  }
LABEL_5:
  ExReleaseResourceLite(Resource);
  return (unsigned int)v13;
}
