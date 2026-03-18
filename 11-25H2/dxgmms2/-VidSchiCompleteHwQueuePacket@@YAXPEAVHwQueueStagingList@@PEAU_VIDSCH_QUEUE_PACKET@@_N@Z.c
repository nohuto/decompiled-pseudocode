/*
 * XREFs of ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140010190
 * Callers:
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1400118F0 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x140019D10 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QU.c)
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001CBA0 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x140033960 (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z.c)
 *     ?SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1400479E0 (-SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x140052348 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 * Callees:
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140011180 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1400117BC (-VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     ?VidSchiIsFocusHwContext@@YA_NPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x14001298C (-VidSchiIsFocusHwContext@@YA_NPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x140012ACC (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x140014038 (VidSchiSubmitPresentHistoryToken.c)
 *     VidSchiFlushPendingTokenList @ 0x14002906C (VidSchiFlushPendingTokenList.c)
 *     VidSchiSignalRegisteredEvent @ 0x14002F320 (VidSchiSignalRegisteredEvent.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x140036410 (McTemplateK0pp_EtwWriteTransfer.c)
 *     ?VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z @ 0x140039718 (-VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z.c)
 *     VidMmUnreferenceDmaBuffer @ 0x14003BD20 (VidMmUnreferenceDmaBuffer.c)
 *     ?DdiNotifyFocusPresent@ADAPTER_RENDER@@QEAAJXZ @ 0x140040520 (-DdiNotifyFocusPresent@ADAPTER_RENDER@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

void __fastcall VidSchiCompleteHwQueuePacket(struct HwQueueStagingList ***a1, struct _VIDSCH_QUEUE_PACKET *a2, char a3)
{
  unsigned __int64 v4; // r8
  struct _VIDSCH_QUEUE_PACKET *v5; // r13
  int v6; // esi
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 i; // rcx
  __int64 v10; // r15
  int v11; // eax
  int v12; // edx
  int v13; // r14d
  unsigned int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // rsi
  struct _KEVENT **v17; // rdi
  KIRQL v18; // r14
  struct _KEVENT *v19; // rsi
  unsigned int v20; // eax
  int v21; // ecx
  unsigned int j; // edi
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // ecx
  BOOL v27; // eax
  struct HwQueueStagingList *v28; // rdx
  struct HwQueueStagingList **v29; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r10
  unsigned int v33; // r9d
  bool v34; // zf
  int v35; // eax
  char v36; // cl
  int v37; // eax
  unsigned int v38; // r14d
  int v39; // eax
  char v40; // di
  __int64 v41; // r10
  __int64 v42; // r11
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rax
  struct _KEVENT *v48; // r14
  struct _KEVENT *v49; // rsi
  int Flink; // ecx
  BOOL v51; // eax
  __int64 v52; // rcx
  LARGE_INTEGER PerformanceCounter; // rcx
  signed __int64 v54; // rax
  __int64 v55; // r10
  unsigned __int64 v56; // r9
  unsigned __int64 v57; // rax
  unsigned int v58; // eax
  char v59; // al
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rcx
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rcx
  __int64 v65; // r9
  struct _KEVENT *v66; // rdi
  KIRQL v67; // r14
  struct _KEVENT *v68; // rsi
  int v69; // ecx
  BOOL v70; // eax
  struct _KEVENT *v71; // rdi
  KIRQL v72; // r14
  struct _KEVENT *v73; // rsi
  int v74; // ecx
  BOOL v75; // eax
  struct _KEVENT *v76; // rdi
  KIRQL v77; // r14
  struct _KEVENT *v78; // rsi
  int v79; // ecx
  BOOL v80; // eax
  __int64 v81; // r9
  __int64 v82; // rcx
  __int64 v83; // rax
  int v84; // [rsp+40h] [rbp-C0h]
  KIRQL v85; // [rsp+44h] [rbp-BCh]
  unsigned int v86; // [rsp+48h] [rbp-B8h]
  int v87; // [rsp+4Ch] [rbp-B4h]
  __int64 v88; // [rsp+50h] [rbp-B0h]
  int v89; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v90; // [rsp+60h] [rbp-A0h]
  __int64 v92; // [rsp+80h] [rbp-80h]
  __int64 v93; // [rsp+88h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE v94; // [rsp+90h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v95; // [rsp+A8h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE v97; // [rsp+D8h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE v98; // [rsp+F0h] [rbp-10h] BYREF
  struct _KLOCK_QUEUE_HANDLE v99; // [rsp+108h] [rbp+8h] BYREF
  __int128 v100; // [rsp+120h] [rbp+20h] BYREF
  __int64 v101; // [rsp+130h] [rbp+30h]
  int v102; // [rsp+138h] [rbp+38h]

  v87 = 0;
  v4 = *((_QWORD *)a2 + 12);
  v5 = a2;
  v90 = v4;
  v6 = 0;
  v84 = 0;
  v89 = 0;
  v7 = *(_QWORD *)(v4 + 40);
  v8 = *(_QWORD *)(v7 + 8);
  i = *(_QWORD *)(v7 + 16);
  v88 = i;
  v93 = v8;
  v10 = *(_QWORD *)(v8 + 32);
  v92 = *(_QWORD *)(v8 + 40);
  if ( (*((_DWORD *)a2 + 16) & 0x20) != 0 && (byte_140081241 & 1) != 0 )
  {
    v63 = *((_QWORD *)a2 + 11);
    if ( v63 )
    {
      v64 = *(_QWORD *)(v63 + 56);
      if ( !v64 || (*(_DWORD *)(v63 + 112) & 0x40) != 0 )
        v64 = v63;
    }
    else
    {
      v64 = *(_QWORD *)(v4 + 48);
      if ( !v64 )
        v64 = v4;
    }
    McTemplateK0pp_EtwWriteTransfer(v64, &AbortQueuePacket, v4, v5, v64);
    v4 = v90;
    i = v88;
  }
  v11 = *((_DWORD *)v5 + 12);
  if ( v11 )
  {
    if ( v11 == 8 )
    {
      if ( (byte_140081241 & 1) != 0 )
      {
        v81 = *(_QWORD *)(*((_QWORD *)v5 + 12) + 48LL);
        if ( !v81 )
          v81 = *((_QWORD *)v5 + 12);
        McTemplateK0pp_EtwWriteTransfer(*((_QWORD *)v5 + 96), &EventDmaCompleteByGpu, v4, v81, *((_QWORD *)v5 + 96));
      }
      --*(_DWORD *)(v90 + 152);
      _InterlockedIncrement64((volatile signed __int64 *)(v88 + 1744));
      if ( (*((_DWORD *)v5 + 188) & 0x100) != 0 )
        VidMmReleaseDmaBuffer(*((struct VIDMM_DMA_BUFFER **)v5 + 95), 1);
    }
    else if ( v11 == 3 )
    {
      VidSchiReleaseFlipFencesReference(
        (struct _VIDSCH_GLOBAL *)v10,
        (struct _VIDSCH_QUEUE_PACKET *)((char *)v5 + 1352));
    }
  }
  else
  {
    if ( (byte_140081241 & 1) != 0 )
    {
      v65 = *(_QWORD *)(*((_QWORD *)v5 + 12) + 48LL);
      if ( !v65 )
        v65 = *((_QWORD *)v5 + 12);
      McTemplateK0pp_EtwWriteTransfer(*((_QWORD *)v5 + 156), &EventDmaCompleteByGpu, v4, v65, *((_QWORD *)v5 + 156));
      v4 = v90;
      i = v88;
    }
    --*(_DWORD *)(v4 + 152);
    _InterlockedIncrement64((volatile signed __int64 *)(i + 1744));
    v15 = *((_QWORD *)v5 + 95);
    if ( v15 )
    {
      VidMmUnreferenceDmaBuffer(v15, 0LL);
      if ( (*((_DWORD *)v5 + 18) & 0x100) != 0 )
        VidMmReleaseDmaBuffer(*((struct VIDMM_DMA_BUFFER **)v5 + 95), 0);
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)v5 + 238); i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 0x10 )
        break;
      a2 = (struct _VIDSCH_QUEUE_PACKET *)*((_QWORD *)v5 + (unsigned int)i + 120);
      *((_QWORD *)v5 + (unsigned int)i + 120) = 0LL;
      if ( a2 )
        _InterlockedDecrement((volatile signed __int32 *)a2 + 26);
    }
    if ( (*((_DWORD *)v5 + 20) & 0x80u) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 868));
      v16 = *(_QWORD *)(v10 + 8LL * *((unsigned int *)v5 + 42) + 3432);
      if ( _InterlockedExchange((volatile __int32 *)(v16 + 44420), 0) )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v54 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 44432), 0LL, 0LL);
        v55 = *(_QWORD *)(v16 + 44304);
        v56 = v54;
        v57 = PerformanceCounter.QuadPart - v55;
        if ( v56 )
        {
          if ( v57 > v56 )
          {
            v4 = v57 / v56;
            if ( (unsigned int)(v57 / v56) )
              PerformanceCounter.QuadPart = v55 + v4 * v56;
            if ( (_DWORD)v4 )
            {
              *(_QWORD *)(v16 + 44312) += (unsigned int)v4;
              v58 = *(_DWORD *)(v16 + 44416) + 1;
              *(_DWORD *)(v16 + 44416) = v58;
              if ( v58 < *(_DWORD *)(v16 + 83092) )
              {
                v59 = 1;
              }
              else
              {
                *(_DWORD *)(v16 + 44328) += v4;
                v59 = 0;
                *(_DWORD *)(v16 + 44416) = 0;
                *(LARGE_INTEGER *)(v16 + 44320) = PerformanceCounter;
              }
              *(_BYTE *)(v16 + 44344) = v59;
              *(LARGE_INTEGER *)(v16 + 44304) = PerformanceCounter;
              if ( *(_BYTE *)(v16 + 8) )
              {
                if ( !*(_BYTE *)(v10 + 156) )
                {
                  v60 = *(_QWORD *)(v10 + 8);
                  v101 = 0LL;
                  v102 = 0;
                  v100 = 0LL;
                  v61 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int128 *))DxgCoreInterface[64])(
                          v60,
                          0LL,
                          0LL,
                          &v100);
                  v62 = 0LL;
                  if ( v61 >= 0 )
                    v62 = *((_QWORD *)&v100 + 1);
                  *(_QWORD *)(v16 + 44336) = v62;
                }
              }
            }
          }
        }
      }
      v6 = 0;
      a2 = (struct _VIDSCH_QUEUE_PACKET *)(v10 + 8LL * *((unsigned int *)v5 + 42));
      *((_QWORD *)v5 + 18) = *(_QWORD *)(*((_QWORD *)a2 + 429) + 44304LL);
      i = *(_QWORD *)(*((_QWORD *)a2 + 429) + 44312LL);
      *((_QWORD *)v5 + 17) = i;
    }
  }
  if ( a3 )
  {
    if ( (*((_DWORD *)v5 + 12) & 0xFFFFFFF7) == 0 )
    {
      ++*(_QWORD *)(v92 + 2848);
      if ( bTracingEnabled )
      {
        if ( (byte_140081244 & 8) != 0
          && *(_BYTE *)(((__int64 (__fastcall *)(__int64, struct _VIDSCH_QUEUE_PACKET *, unsigned __int64, __int64))DxgCoreInterface[3])(
                          i,
                          a2,
                          v4,
                          1LL)
                      + 305640)
          && !_InterlockedCompareExchange((volatile signed __int32 *)(v88 + 3072), 1, 0) )
        {
          ExQueueWorkItem((PWORK_QUEUE_ITEM)(v88 + 3040), NormalWorkQueue);
        }
      }
    }
  }
  v12 = *((_DWORD *)v5 + 18);
  *((_QWORD *)v5 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v5 + 13) = 16;
  if ( (v12 & 0x40020) == 0x40000 || (v12 & 0x4000) != 0 )
  {
    if ( (v12 & 0x400) == 0 || (v13 = 0, (v12 & 0x800) != 0) )
      v13 = 1;
    v14 = *((_DWORD *)v5 + 42);
    v86 = v14;
    if ( (v12 & 0x40000) != 0 )
    {
      v6 = v13;
      if ( (v12 & 0x4000) == 0 )
        v6 = 0;
    }
    else
    {
      if ( (v12 & 4) != 0 )
      {
        if ( *((_DWORD *)v5 + 218) != 1 )
        {
          if ( (*((_DWORD *)v5 + 16) & 2) != 0 )
          {
LABEL_97:
            if ( (*((_DWORD *)v5 + 18) & 0x40080) != 0 && *((_QWORD *)v5 + 19) && *((_QWORD *)v5 + 20) && v13 )
              VidSchiSubmitPresentHistoryToken((_DWORD)a1, (_DWORD)v5, 0, 0, 0LL);
            if ( v87 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v10 + 792));
              if ( *(_BYTE *)(v10 + 2468) )
                v47 = v10 + 4LL * v86;
              else
                v47 = v10;
              _InterlockedDecrement((volatile signed __int32 *)(v47 + 796));
              _InterlockedDecrement((volatile signed __int32 *)(v8 + 1828));
              _InterlockedDecrement((volatile signed __int32 *)(v8 + 4LL * v86 + 1764));
            }
            v48 = (struct _KEVENT *)(v10 + 1944);
            memset(&v95, 0, sizeof(v95));
            v85 = KfRaiseIrql(2u);
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 2000), &v95);
            if ( *(struct _KEVENT **)&v48->Header.Lock == v48 )
            {
LABEL_115:
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v95);
              KeLowerIrql(v85);
              goto LABEL_31;
            }
            v49 = *(struct _KEVENT **)&v48->Header.Lock;
            while ( 1 )
            {
              if ( LODWORD(v49->Header.WaitListHead.Blink) == 4 )
              {
                v51 = *(_DWORD *)(*(_QWORD *)&v49[1].Header.Lock + 4LL * LODWORD(v49[1].Header.WaitListHead.Blink) + 1700) < *(_DWORD *)(*(_QWORD *)&v49[1].Header.Lock + 244LL);
              }
              else
              {
                if ( ((__int64)v49[1].Header.WaitListHead.Flink & 0x10) == 0 )
                  goto LABEL_112;
                Flink = (int)v49[1].Header.WaitListHead.Blink->Flink;
                HIDWORD(v49[5].Header.WaitListHead.Blink) = Flink;
                v51 = Flink == 0;
              }
              if ( v51 )
              {
LABEL_112:
                ++v49[5].Header.LockNV;
                KeSetEvent(v49 + 4, 0, 0);
              }
              v49 = *(struct _KEVENT **)&v49->Header.Lock;
              if ( v49 == v48 )
              {
                v6 = v84;
                goto LABEL_115;
              }
            }
          }
          if ( !v13 )
            goto LABEL_194;
          v87 = 1;
          v6 = 1;
          v84 = 1;
          v89 = 1;
LABEL_16:
          if ( VidSchiIsFocusHwContext((struct VIDSCH_HW_CONTEXT *)v7) )
          {
            ADAPTER_RENDER::DdiNotifyFocusPresent(*(ADAPTER_RENDER **)(*(_QWORD *)(v8 + 32) + 8LL));
            v14 = v86;
          }
LABEL_95:
          if ( !v89 )
          {
LABEL_96:
            if ( v6 && v86 != -1 && (*((_DWORD *)v5 + 18) & 0x40000) == 0 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v8 + 4LL * v86 + 1700));
              v52 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 40) + 32LL)
                                          + 8LL * *(unsigned int *)(*(_QWORD *)(v8 + 32) + 4LL))
                              + 8LL * v86
                              + 88);
              if ( (*((_DWORD *)v5 + 18) & 0x80u) == 0 )
              {
                _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 8LL * v86 + 6712) + 8LL));
                ++**(_DWORD **)(v10 + 8LL * v86 + 6712);
              }
              _InterlockedDecrement((volatile signed __int32 *)(v52 + 8));
              ++*(_DWORD *)v52;
              if ( (*((_DWORD *)v5 + 18) & 0x20000) != 0 )
              {
                memset(&v94, 0, sizeof(v94));
                KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 1992), &v94);
                *(_DWORD *)(v8 + 4LL * v86 + 508) = *((_DWORD *)v5 + 216);
                *(_QWORD *)(v8 + 8LL * v86 + 576) = *((_QWORD *)v5 + 17);
                *(_QWORD *)(v8 + 8LL * v86 + 704) = *((_QWORD *)v5 + 18);
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v94);
              }
            }
            goto LABEL_97;
          }
LABEL_194:
          if ( (*((_DWORD *)v5 + 338) & 0x3FF) != 0 )
          {
            v82 = *(_QWORD *)(v10 + 688);
            v83 = *(unsigned __int16 *)(v88 + 4);
            if ( (unsigned int)v83 < *(_DWORD *)(v10 + 760) )
              v82 += 8 * v83;
            VidSchiUnreferencePrimaryAllocations(
              (struct HwQueueStagingList *)a1,
              (struct _VIDSCH_GLOBAL *)v10,
              v14,
              (struct _VIDSCH_QUEUE_PACKET *)((char *)v5 + 1352),
              *((_DWORD *)v5 + 222),
              1 << *(_BYTE *)(*(_QWORD *)v82 + 6LL),
              0,
              0);
          }
          v6 = v84;
          goto LABEL_96;
        }
        v87 = v13;
      }
      v6 = v13;
    }
    v84 = v6;
    if ( !v6 )
      goto LABEL_95;
    goto LABEL_16;
  }
LABEL_31:
  if ( *((_DWORD *)v5 + 12) == 3 && *((_DWORD *)v5 + 42) != -1 )
  {
    v30 = *((_QWORD *)v5 + 11);
    if ( v30 )
      v31 = *(_QWORD *)(v30 + 104);
    else
      v31 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 12) + 40LL) + 8LL);
    v32 = *(_QWORD *)(v31 + 32);
    if ( (*((_DWORD *)v5 + 18) & 0x800000) != 0 )
      v33 = ((unsigned __int16)*((_DWORD *)v5 + 338) | (unsigned __int16)(*((_DWORD *)v5 + 338) >> 10)) & 0x3FF;
    else
      v33 = (1 << *(_DWORD *)(v32 + 152)) - 1;
    v34 = !_BitScanForward((unsigned int *)&v35, v33);
    v36 = -1;
    if ( !v34 )
      v36 = v35;
    while ( v33 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v32 + 8LL * *((unsigned int *)v5 + 42) + 3432)
                                                      + 304LL * v36
                                                      + 192));
      v37 = 1 << v36;
      v36 = -1;
      v33 &= ~v37;
      v34 = !_BitScanForward((unsigned int *)&v37, v33);
      if ( !v34 )
        v36 = v37;
    }
    if ( (*((_DWORD *)v5 + 18) & 0x800000) != 0 )
      v38 = ((unsigned __int16)*((_DWORD *)v5 + 338) | (unsigned __int16)(*((_DWORD *)v5 + 338) >> 10)) & 0x3FF;
    else
      v38 = (1 << *(_DWORD *)(v10 + 152)) - 1;
    v34 = !_BitScanForward((unsigned int *)&v39, v38);
    v40 = -1;
    if ( !v34 )
      v40 = v39;
    while ( v38 )
    {
      v41 = *((unsigned int *)v5 + 42);
      v42 = *(_QWORD *)(v10 + 8 * v41 + 3432);
      v43 = *(int *)(304LL * (unsigned int)v40 + v42 + 188);
      if ( (int)v43 > -1 )
      {
        v44 = *(_QWORD *)(v10 + 3560);
        if ( *(_DWORD *)(160 * v43 + v44 + 112) == 1 && (_DWORD)v41 != -1 )
        {
          v45 = v44 + 160 * v43;
          if ( !v45
            || *(_BYTE *)(v45 + 98)
            && !*(_DWORD *)(304LL * (unsigned int)v40 + v42 + 192)
            && *(_BYTE *)(v45 + 96)
            && !*(_DWORD *)(304LL * (unsigned int)v40 + v42 + 196) )
          {
            VidSchiFlushPendingTokenList((struct HwQueueStagingList *)a1, (struct _VIDSCH_GLOBAL *)v10);
          }
        }
      }
      v46 = 1 << v40;
      v40 = -1;
      v38 &= ~v46;
      v34 = !_BitScanForward((unsigned int *)&v46, v38);
      if ( !v34 )
        v40 = v46;
    }
    v8 = v93;
    v6 = v84;
  }
  if ( (unsigned int)(*((_DWORD *)v5 + 12) - 4) > 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 1840));
  if ( v6 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    v17 = (struct _KEVENT **)(v8 + 120);
    v18 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 2000), &LockHandle);
    v19 = *v17;
    if ( *v17 == (struct _KEVENT *)v17 )
    {
LABEL_36:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      KeLowerIrql(v18);
      v8 = v93;
      goto LABEL_37;
    }
    while ( 1 )
    {
      if ( LODWORD(v19->Header.WaitListHead.Blink) == 4 )
      {
        v27 = *(_DWORD *)(*(_QWORD *)&v19[1].Header.Lock + 4LL * LODWORD(v19[1].Header.WaitListHead.Blink) + 1700) < *(_DWORD *)(*(_QWORD *)&v19[1].Header.Lock + 244LL);
      }
      else
      {
        if ( ((__int64)v19[1].Header.WaitListHead.Flink & 0x10) == 0 )
          goto LABEL_59;
        v26 = (int)v19[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v19[5].Header.WaitListHead.Blink) = v26;
        v27 = v26 == 0;
      }
      if ( v27 )
      {
LABEL_59:
        ++v19[5].Header.LockNV;
        KeSetEvent(v19 + 4, 0, 0);
      }
      v19 = *(struct _KEVENT **)&v19->Header.Lock;
      if ( v19 == (struct _KEVENT *)v17 )
        goto LABEL_36;
    }
  }
LABEL_37:
  if ( v87 )
  {
    VidSchiSignalRegisteredEvent(v10, v8 + 136);
    VidSchiSignalRegisteredEvent(v10, v10 + 1928);
    *(_QWORD *)(v10 + 1872) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v10 + 1840), 0, 0);
  }
  if ( (*((_DWORD *)v5 + 12) & 0xFFFFFFF7) == 0 )
  {
    v28 = (struct HwQueueStagingList *)(v90 + 176);
    if ( !*(_QWORD *)(v90 + 176) )
    {
      v29 = a1[2];
      if ( *v29 != (struct HwQueueStagingList *)(a1 + 1) )
        __fastfail(3u);
      *(_QWORD *)v28 = a1 + 1;
      *(_QWORD *)(v90 + 184) = v29;
      *v29 = v28;
      a1[2] = (struct HwQueueStagingList **)v28;
      *((_BYTE *)a1 + 24) = 0;
    }
    v66 = (struct _KEVENT *)(v7 + 392);
    memset(&v97, 0, sizeof(v97));
    v67 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 2000), &v97);
    v68 = *(struct _KEVENT **)(v7 + 392);
    if ( *(struct _KEVENT **)&v66->Header.Lock != v66 )
    {
      do
      {
        if ( LODWORD(v68->Header.WaitListHead.Blink) == 4 )
        {
          v70 = *(_DWORD *)(*(_QWORD *)&v68[1].Header.Lock + 4LL * LODWORD(v68[1].Header.WaitListHead.Blink) + 1700) < *(_DWORD *)(*(_QWORD *)&v68[1].Header.Lock + 244LL);
        }
        else
        {
          if ( ((__int64)v68[1].Header.WaitListHead.Flink & 0x10) == 0 )
            goto LABEL_162;
          v69 = (int)v68[1].Header.WaitListHead.Blink->Flink;
          HIDWORD(v68[5].Header.WaitListHead.Blink) = v69;
          v70 = v69 == 0;
        }
        if ( v70 )
        {
LABEL_162:
          ++v68[5].Header.LockNV;
          KeSetEvent(v68 + 4, 0, 0);
        }
        v68 = *(struct _KEVENT **)&v68->Header.Lock;
      }
      while ( v68 != v66 );
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v97);
    KeLowerIrql(v67);
    memset(&v98, 0, sizeof(v98));
    v71 = (struct _KEVENT *)(v88 + 408);
    v72 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 2000), &v98);
    v73 = *(struct _KEVENT **)(v88 + 408);
    if ( *(struct _KEVENT **)&v71->Header.Lock != v71 )
    {
      do
      {
        if ( LODWORD(v73->Header.WaitListHead.Blink) == 4 )
        {
          v75 = *(_DWORD *)(*(_QWORD *)&v73[1].Header.Lock + 4LL * LODWORD(v73[1].Header.WaitListHead.Blink) + 1700) < *(_DWORD *)(*(_QWORD *)&v73[1].Header.Lock + 244LL);
        }
        else
        {
          if ( ((__int64)v73[1].Header.WaitListHead.Flink & 0x10) == 0 )
            goto LABEL_169;
          v74 = (int)v73[1].Header.WaitListHead.Blink->Flink;
          HIDWORD(v73[5].Header.WaitListHead.Blink) = v74;
          v75 = v74 == 0;
        }
        if ( v75 )
        {
LABEL_169:
          ++v73[5].Header.LockNV;
          KeSetEvent(v73 + 4, 0, 0);
        }
        v73 = *(struct _KEVENT **)&v73->Header.Lock;
      }
      while ( v73 != v71 );
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v98);
    KeLowerIrql(v72);
    v76 = (struct _KEVENT *)(v10 + 1896);
    memset(&v99, 0, sizeof(v99));
    v77 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 2000), &v99);
    v78 = *(struct _KEVENT **)(v10 + 1896);
    if ( *(struct _KEVENT **)&v76->Header.Lock == v76 )
    {
LABEL_178:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v99);
      KeLowerIrql(v77);
      *(_QWORD *)(v7 + 368) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(v7 + 336), 0, 0);
      *(_QWORD *)(v88 + 272) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(v88 + 240), 0, 0);
      *(_QWORD *)(v10 + 1704) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(v10 + 1672), 0, 0);
      goto LABEL_40;
    }
    while ( 1 )
    {
      if ( LODWORD(v78->Header.WaitListHead.Blink) == 4 )
      {
        v80 = *(_DWORD *)(*(_QWORD *)&v78[1].Header.Lock + 4LL * LODWORD(v78[1].Header.WaitListHead.Blink) + 1700) < *(_DWORD *)(*(_QWORD *)&v78[1].Header.Lock + 244LL);
      }
      else
      {
        if ( ((__int64)v78[1].Header.WaitListHead.Flink & 0x10) == 0 )
          goto LABEL_176;
        v79 = (int)v78[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v78[5].Header.WaitListHead.Blink) = v79;
        v80 = v79 == 0;
      }
      if ( v80 )
      {
LABEL_176:
        ++v78[5].Header.LockNV;
        KeSetEvent(v78 + 4, 0, 0);
      }
      v78 = *(struct _KEVENT **)&v78->Header.Lock;
      if ( v78 == v76 )
        goto LABEL_178;
    }
  }
LABEL_40:
  v20 = *((_DWORD *)v5 + 12);
  if ( v20 <= 7 )
  {
    v21 = 137;
    if ( _bittest(&v21, v20) )
    {
      if ( !*(_BYTE *)(v7 + 141) )
      {
        for ( j = 0; j < *(_DWORD *)(v10 + 152); ++j )
        {
          v23 = j * ((8 * *((_DWORD *)v5 + 340) + 231) & 0xFFFFFFF8);
          v24 = *(_QWORD *)((char *)v5 + v23 + 1552);
          if ( v24 )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 12), 0xFFFFFFFF) == 1 )
            {
              if ( *(_QWORD *)v24 )
                ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v24, (PVOID)v24);
              else
                ExFreePoolWithTag((PVOID)v24, 0);
            }
            *(_QWORD *)((char *)v5 + v23 + 1552) = 0LL;
          }
        }
      }
      v25 = *((_QWORD *)v5 + 98);
      if ( v25 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 12), 0xFFFFFFFF) == 1 )
        {
          if ( *(_QWORD *)v25 )
            ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v25, (PVOID)v25);
          else
            ExFreePoolWithTag((PVOID)v25, 0);
        }
        *((_QWORD *)v5 + 98) = 0LL;
      }
    }
  }
  VidSchiFreeCompletedHwQueuePacket(v5);
}
