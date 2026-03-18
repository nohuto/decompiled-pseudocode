/*
 * XREFs of ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400B3810
 * Callers:
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x14008FF64 (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@33W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400960E0 (-PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAV.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400B1AC0 (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CleanupMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400B1BBC (-CleanupMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400B3090 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?ProcessSegmentOfferLists@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400CF570 (-ProcessSegmentOfferLists@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400E2548 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?CheckMemorySegmentsFState@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400E6508 (-CheckMemorySegmentsFState@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ProcessPendingOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400EB160 (-ProcessPendingOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400ECFEC (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x140114F00 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 * Callees:
 *     VidSchSubmitWaitToHwQueue @ 0x1400034F0 (VidSchSubmitWaitToHwQueue.c)
 *     VidSchWaitForSingleSyncObject @ 0x140003F10 (VidSchWaitForSingleSyncObject.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x14000D490 (McTemplateK0p_EtwWriteTransfer.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x14000FC30 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x14001F580 (VidSchSignalSyncObjectsFromCpu.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x14001F7C4 (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     VidSchiMarkFlipQueuesRunningStateOnPresentInfo @ 0x14003A9EC (VidSchiMarkFlipQueuesRunningStateOnPresentInfo.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400B3D10 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1400B3FB0 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400B4060 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400B4660 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1400B4E34 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400B5080 (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x140103050 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x140110C24 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::EndPreparation(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _KEVENT *a3,
        void *a4,
        _DWORD *a5,
        struct _VIDSCH_SYNC_OBJECT *a6)
{
  bool v6; // r13
  __int64 v7; // r12
  char v8; // r15
  unsigned int v10; // r14d
  unsigned int v11; // edi
  __int64 v12; // r15
  __int64 v13; // rcx
  _QWORD **v14; // rdi
  _QWORD *v15; // r14
  unsigned int v16; // edi
  __int64 v17; // rbp
  __int64 v18; // rdx
  int v19; // r8d
  __int64 *v20; // r9
  unsigned int v21; // ecx
  _QWORD *v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // ecx
  _QWORD *v25; // rax
  VIDMM_DEVICE *v26; // r9
  _QWORD *v27; // rcx
  __int64 v28; // rcx
  struct _KEVENT *v29; // rbp
  unsigned int v30; // edi
  unsigned int v31; // edi
  _DWORD *v32; // r12
  struct _VIDSCH_SYNC_OBJECT *v33; // r13
  __int64 v34; // rbp
  char v35; // r15
  unsigned int v36; // r14d
  unsigned int v37; // edi
  __int64 v38; // rbp
  __int64 v39; // rcx
  __int64 v40; // rcx
  bool v41; // [rsp+98h] [rbp+10h] BYREF
  PRKEVENT Event; // [rsp+A0h] [rbp+18h]
  char v43; // [rsp+A8h] [rbp+20h]

  v43 = (char)a4;
  Event = a3;
  v6 = 0;
  v7 = a2;
  v41 = 0;
  *((_QWORD *)this + 465) = (char *)this + 3712;
  *((_QWORD *)this + 464) = (char *)this + 3712;
  v8 = (char)a4;
  if ( a2 == -1 )
  {
    v10 = 0;
    if ( *((_DWORD *)this + 1736) )
    {
      do
      {
        v11 = 0;
        v12 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * v10);
        if ( *(_DWORD *)(v12 + 64) )
        {
          do
          {
            v13 = *(_QWORD *)(*(_QWORD *)(v12 + 1648) + 8LL * v11);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 152LL))(v13);
            ++v11;
          }
          while ( v11 < *(_DWORD *)(v12 + 64) );
        }
        if ( (byte_140081241 & 1) != 0 )
          McTemplateK0p_EtwWriteTransfer();
        if ( *((_DWORD *)this + v10 + 414) != *((_DWORD *)this + v10 + 478)
          || *((_DWORD *)this + v10 + 542) != *((_DWORD *)this + v10 + 606) )
        {
          VIDMM_GLOBAL::FlushPagingBufferInternal(this, v10, 0, 0LL, 0LL, 0, 0);
        }
        ++v10;
      }
      while ( v10 < *((_DWORD *)this + 1736) );
      v8 = v43;
    }
  }
  else
  {
    v37 = 0;
    v38 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * a2);
    if ( *(_DWORD *)(v38 + 64) )
    {
      do
      {
        v39 = *(_QWORD *)(*(_QWORD *)(v38 + 1648) + 8LL * v37);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 152LL))(v39);
        ++v37;
      }
      while ( v37 < *(_DWORD *)(v38 + 64) );
    }
    if ( v8 )
    {
      VIDMM_GLOBAL::SignalMonitoredFence(this, v7, a6, (unsigned __int64)a5, &v41);
      v6 = v41;
    }
    VIDMM_GLOBAL::EndPreparationOnPhysicalAdapter(this, v7);
  }
  v14 = (_QWORD **)((char *)this + 44752);
  if ( *v14 != v14 )
  {
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, v7);
    v15 = *v14;
    while ( v15 != v14 )
    {
      v25 = (_QWORD *)*v15;
      v26 = (VIDMM_DEVICE *)(v15 - 37);
      if ( *(_QWORD **)(*v15 + 8LL) != v15 || (v27 = (_QWORD *)v15[1], (_QWORD *)*v27 != v15) )
        __fastfail(3u);
      *v27 = v25;
      v25[1] = v27;
      *v15 = 0LL;
      v15 = v25;
      if ( (*((_BYTE *)v26 + 312) & 7) != 0 )
      {
        v28 = *((_QWORD *)v26 + 4);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 63LL, v26, v28, 0LL);
        WdLogGlobalForLineNumber = 195;
        goto LABEL_34;
      }
      VIDMM_DEVICE::ResumeSchedulerDevice(v26);
    }
  }
  LODWORD(v15) = 1;
  if ( *((_BYTE *)this + 44768) )
  {
    v16 = 0;
    v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 744LL);
    if ( *(_DWORD *)(v17 + 40) )
    {
      do
      {
        if ( 1 << v16 )
        {
          v18 = *(_QWORD *)(v17 + 8LL * v16 + 3432);
          if ( v18 )
            VidSchiMarkFlipQueuesRunningStateOnPresentInfo(v17, v18, 1u, 0LL);
        }
        ++v16;
      }
      while ( v16 < *(_DWORD *)(v17 + 40) );
    }
    VidSchiUnwaitFlipQueueUnderSchedulerSpinLock(v17);
    *((_BYTE *)this + 44768) = 0;
  }
  if ( v8 && !v6 )
  {
    v19 = 0;
    v20 = 0LL;
    v21 = 0;
    v22 = 0LL;
    v23 = *(_QWORD *)(*((_QWORD *)this + 2) + 744LL);
    if ( *(_BYTE *)(v23 + 55) )
    {
      v22 = *(_QWORD **)(v23 + 336);
      if ( !*v22 )
      {
        VidSchSignalSyncObjectsFromCpu(1u, &a6, 0, (char *)&a5);
        goto LABEL_25;
      }
      if ( (_DWORD)v7 == -1 )
      {
        v21 = *(_DWORD *)(v23 + 76);
      }
      else
      {
        v21 = 1;
        v22 += v7;
      }
    }
    else if ( (_DWORD)v7 == -1 )
    {
      v19 = *(_DWORD *)(v23 + 76);
      v20 = *(__int64 **)(v23 + 320);
    }
    else
    {
      v19 = 1;
      v20 = (__int64 *)(*(_QWORD *)(v23 + 320) + 8 * v7);
    }
    VidSchSignalSyncObjectsFromGpu(v21, (__int64)v22, v19, v20, 1u, (__int64)&a6, 0, (unsigned __int64 *)&a5, 0);
LABEL_25:
    if ( (_DWORD)v7 == -1 )
    {
      v24 = *((_DWORD *)this + 1736);
      if ( v24 > 1 )
      {
        v31 = 0;
        v32 = a5;
        v33 = a6;
        v34 = *(_QWORD *)(*((_QWORD *)this + 2) + 744LL);
        v35 = *(_BYTE *)(v34 + 55);
        v36 = (1 << v24) - 1;
        if ( 1 << v24 != 1 )
        {
          do
          {
            if ( v31 >= *(_DWORD *)(v34 + 76) )
              break;
            if ( (v36 & 1) != 0 )
            {
              if ( v35 )
              {
                v40 = *(_QWORD *)(8LL * v31 + *(_QWORD *)(v34 + 336));
                if ( v40 )
                  VidSchSubmitWaitToHwQueue(v40, (__int64)v33, v32);
              }
              else
              {
                VidSchWaitForSingleSyncObject(
                  *(_QWORD *)(*(_QWORD *)(v34 + 320) + 8LL * v31),
                  (__int64)v33,
                  (unsigned __int64)v32);
              }
            }
            ++v31;
            v36 >>= 1;
          }
          while ( v36 );
        }
      }
    }
    goto LABEL_27;
  }
LABEL_34:
  v29 = Event;
  if ( Event )
  {
    if ( (_DWORD)v7 == -1 )
    {
      v30 = *((_DWORD *)this + 1736);
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
        VIDMM_GLOBAL::FlushPagingBuffer(this, 0, (void (*)(void *))a3, a4);
      VIDMM_GLOBAL::WaitForFences(
        this,
        (struct _VIDSCH_SYNC_OBJECT **)this + 740,
        (const unsigned __int64 *)this + 676,
        v30,
        0LL,
        0LL);
    }
    else
    {
      VIDMM_GLOBAL::xWaitForAllPagingEngines(
        this,
        (struct _VIDSCH_SYNC_OBJECT **)this + v7 + 740,
        (const unsigned __int64 *)this + v7 + 676,
        (unsigned int)v15,
        0LL,
        v7);
    }
    KeSetEvent(v29, 0, 0);
  }
LABEL_27:
  *((_QWORD *)this + 870) = 0LL;
  *((_QWORD *)this + 871) = 0LL;
  *((_DWORD *)this + 2) = 0;
}
