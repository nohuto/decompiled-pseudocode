/*
 * XREFs of VidSchiProcessDpcVSyncCookie @ 0x1400080A0
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x14000779C (VidSchDdiNotifyDpcWorker.c)
 *     VidSchDdiNotifyDpc @ 0x1400079E0 (VidSchDdiNotifyDpc.c)
 * Callees:
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x140008C10 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     ?VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x140009AE0 (-VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14000C7F4 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140019050 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D740 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1400209D4 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x140027538 (VidSchiCompletePendingFlipOnPlane.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x14002DBDC (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x14002DC84 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 *     McTemplateK0pqxqqipqx_EtwWriteTransfer @ 0x14002E078 (McTemplateK0pqxqqipqx_EtwWriteTransfer.c)
 *     McTemplateK0pqXR1qqqXR5qQR7tXR1_EtwWriteTransfer @ 0x14002E240 (McTemplateK0pqXR1qqqXR5qQR7tXR1_EtwWriteTransfer.c)
 *     ?VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x140038F48 (-VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP.c)
 *     ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x14003E5A8 (-VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer @ 0x14004010C (McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     memset @ 0x140056780 (memset.c)
 */

void __fastcall VidSchiProcessDpcVSyncCookie(struct _VIDSCH_VSYNC_COOKIE *a1)
{
  __int64 v1; // rsi
  struct _VIDSCH_VSYNC_COOKIE *v2; // rdi
  __int64 v3; // r14
  unsigned int v4; // r13d
  __int64 v5; // r12
  char v6; // bl
  int v7; // r8d
  __int64 v8; // rdx
  int i; // r15d
  __int64 v10; // rax
  struct VIDSCH_FLIP_QUEUE *v11; // rbx
  int v12; // ecx
  unsigned int v13; // edi
  __int64 v14; // r14
  int v15; // r13d
  unsigned __int64 v16; // rdx
  int v17; // ecx
  int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 j; // r8
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r10
  unsigned int v25; // eax
  __int64 v26; // r15
  bool v27; // r13
  __int64 v28; // r14
  __int64 v29; // rcx
  __int64 v30; // rbx
  struct _KEVENT *v31; // rcx
  int v32; // r8d
  unsigned __int64 v33; // rdx
  unsigned int v34; // ebx
  void (__fastcall *v35)(_QWORD, _QWORD); // rax
  unsigned int v36; // ecx
  unsigned int v37; // r14d
  int v38; // r13d
  unsigned int v39; // r13d
  __int64 v40; // rcx
  __int64 v41; // rdx
  int v42; // eax
  char v43; // al
  int v44; // r8d
  __int64 v45; // rdx
  int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // eax
  int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // ecx
  bool v52; // zf
  int v53; // eax
  char k; // r9
  int v55; // eax
  __int64 v56; // r13
  unsigned int v57; // eax
  unsigned int v58; // [rsp+70h] [rbp-90h]
  bool v59; // [rsp+74h] [rbp-8Ch] BYREF
  _BYTE v60[3]; // [rsp+75h] [rbp-8Bh] BYREF
  int v61; // [rsp+78h] [rbp-88h] BYREF
  int v62; // [rsp+7Ch] [rbp-84h]
  int v63; // [rsp+80h] [rbp-80h]
  unsigned int v64; // [rsp+84h] [rbp-7Ch]
  struct _VIDSCH_VSYNC_COOKIE *v65; // [rsp+88h] [rbp-78h]
  int v66; // [rsp+90h] [rbp-70h]
  __int64 v67; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v68[2]; // [rsp+A0h] [rbp-60h] BYREF
  char v69; // [rsp+B0h] [rbp-50h]
  int v70; // [rsp+B4h] [rbp-4Ch]
  __int64 v71; // [rsp+B8h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE v72; // [rsp+C0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v74; // [rsp+F0h] [rbp-10h]
  __int64 v75; // [rsp+F8h] [rbp-8h]
  unsigned int v76; // [rsp+100h] [rbp+0h]
  int v77; // [rsp+104h] [rbp+4h]
  struct VIDSCH_FLIP_QUEUE *v78; // [rsp+108h] [rbp+8h]
  unsigned int v79; // [rsp+110h] [rbp+10h]
  int v80; // [rsp+114h] [rbp+14h]
  __int64 v81; // [rsp+118h] [rbp+18h]
  __int64 v82; // [rsp+120h] [rbp+20h]
  __int64 v83; // [rsp+128h] [rbp+28h]
  __int64 v84; // [rsp+130h] [rbp+30h]
  __int64 v85; // [rsp+138h] [rbp+38h]
  _OWORD v86[2]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v87; // [rsp+160h] [rbp+60h]
  int v88; // [rsp+168h] [rbp+68h]
  _QWORD v89[10]; // [rsp+170h] [rbp+70h] BYREF
  char v90[80]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v91[80]; // [rsp+210h] [rbp+110h] BYREF

  v1 = *((_QWORD *)a1 + 6);
  v2 = a1;
  v65 = a1;
  v63 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v90, 0, sizeof(v90));
  v3 = *((unsigned int *)v2 + 27);
  v87 = 0LL;
  v88 = 0;
  v4 = 0;
  v58 = v3;
  memset(v86, 0, sizeof(v86));
  if ( (_DWORD)v3 == -1 || (unsigned int)v3 >= *(_DWORD *)(v1 + 40) )
    return;
  _mm_lfence();
  v5 = *(_QWORD *)(v1 + 8 * v3 + 3432);
  v6 = 0;
  v71 = v3;
  v60[0] = 0;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v1 + 1984), &LockHandle);
  v67 = v1;
  v69 = 0;
  v68[1] = v68;
  v70 = 2;
  v68[0] = v68;
  VidSchiRecordVSyncTiming(v2);
  if ( *(int *)(v5 + 4) >= 4 || *(_BYTE *)(v1 + 156) )
  {
    v8 = 4673LL;
    for ( i = -1; ; ++i )
    {
      if ( i == *(_DWORD *)(v1 + 152) )
      {
        v6 = v60[0];
        v2 = v65;
        goto LABEL_16;
      }
      v59 = 0;
      v10 = *(_QWORD *)(v1 + 8LL * (unsigned int)v3 + 3432);
      if ( i == -1 )
        v11 = *(struct VIDSCH_FLIP_QUEUE **)(v10 + 32);
      else
        v11 = *(struct VIDSCH_FLIP_QUEUE **)(v10 + 8LL * i + 40);
      if ( !v11 )
        continue;
      v12 = *((_DWORD *)v11 + 28);
      if ( v12 )
        *((_DWORD *)v11 + 28) = --v12;
      v64 = v4 + 1;
      *((_DWORD *)v86 + v4) = v12;
      v13 = *((_DWORD *)v11 + 18);
      v14 = 0LL;
      v62 = 0;
      v61 = 0;
      while ( 1 )
      {
        if ( v13 == (((unsigned __int8)*((_DWORD *)v11 + 17) - 1) & 0x3F) )
          goto LABEL_14;
        v56 = 1400LL * v13;
        v57 = *(_DWORD *)((char *)v11 + v56 + 1172);
        if ( v57 > 0xC || !_bittest((const int *)&v8, v57) )
          break;
LABEL_126:
        v13 = ((_BYTE)v13 - 1) & 0x3F;
      }
      if ( v57 != 15 && v57 != 5 )
        goto LABEL_14;
      if ( !*(_BYTE *)(v1 + 156) && !*((_QWORD *)v65 + 16) )
        VidSchiQueueDeferredVisibilityWorkItem((struct _VIDSCH_PRESENT_INFO *)v5, (struct _VIDSCH_GLOBAL *)v1);
      if ( !(unsigned int)VidSchiIsExpectedVSyncCookie(
                            (struct _VIDSCH_GLOBAL *)v1,
                            (struct _VIDSCH_PRESENT_INFO *)v8,
                            (struct VIDSCH_FLIP_QUEUE *)((char *)v11 + v56 + 120),
                            v65) )
        break;
      v14 = *(_QWORD *)((char *)v11 + v56 + 1160);
      if ( !v14 )
      {
LABEL_14:
        v15 = v62;
        goto LABEL_74;
      }
      v76 = v58;
      v77 = 0;
      v80 = 0;
      v81 = *(_QWORD *)(v5 + 44352);
      v82 = *(_QWORD *)(v5 + 44368);
      v85 = *(_QWORD *)(v5 + 44384);
      v83 = *(_QWORD *)(v5 + 44360);
      v84 = *(_QWORD *)(v5 + 44376);
      v74 = v1;
      v75 = v14;
      v78 = v11;
      v79 = v13;
      VidSchiProcessVsyncCompletedFlipEntry((struct HwQueueStagingList *)&v67, (__int64)&v61, (__int64)v60);
      v15 = v61;
LABEL_74:
      if ( *(_DWORD *)(v5 + 3236) && *(_BYTE *)(v5 + 78948) )
        VidSchiExecuteNextFlipQueueEntry((struct HwQueueStagingList *)&v67, (struct _VIDSCH_GLOBAL *)v1, &v59, v58, v11);
      if ( v14 )
      {
        VidSchiCheckPendingDeviceCommand(v14, v8);
        v39 = -v15;
        v40 = v71;
        v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 40) + 32LL)
                                    + 8LL * *(unsigned int *)(*(_QWORD *)(v14 + 32) + 4LL))
                        + 8 * v71
                        + 88);
        _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 8 * v71 + 6712) + 8LL), v39);
        **(_DWORD **)(v1 + 8 * v40 + 6712) += v61;
        _InterlockedAdd((volatile signed __int32 *)(v41 + 8), v39);
        *(_DWORD *)v41 += v61;
      }
      LODWORD(v3) = v58;
      if ( v59 )
        VidSchiCompletePendingFlipOnPlane((unsigned int)&v67, v1, v58, (_DWORD)v11, 9);
      v4 = v64;
      v8 = 4673LL;
    }
    v8 = 4673LL;
    goto LABEL_126;
  }
LABEL_16:
  if ( bTracingEnabled )
  {
    v16 = *((_QWORD *)v2 + 11);
    if ( v16 > 0xFFFFFFFF )
    {
      WdLogSingleEntry1(3LL, v16);
      WdLogGlobalForLineNumber = 7003;
    }
    v17 = *((unsigned __int8 *)v2 + 124);
    LOBYTE(v17) = v17 ^ 1;
    v18 = *((_DWORD *)v2 + 22);
    if ( ((unsigned __int8)v17 & ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits >> 7)) != 0 )
      McTemplateK0pqxqqipqx_EtwWriteTransfer(
        v17,
        v16,
        v7,
        *(_QWORD *)(v1 + 16),
        *((_DWORD *)v2 + 28),
        *((_QWORD *)v2 + 16),
        *((_DWORD *)v2 + 27),
        v18,
        *((_QWORD *)v2 + 7),
        0,
        0,
        v90[0]);
    memset(v89, 0, sizeof(v89));
    memset(v91, 0, sizeof(v91));
    v22 = *((_DWORD *)v2 + 4);
    switch ( v22 )
    {
      case 10:
        for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v1 + 152); j = (unsigned int)(j + 1) )
        {
          LODWORD(v20) = j;
          v23 = *((_QWORD *)v2 + 2 * j + 16);
          v89[j] = v23;
          if ( v23 )
          {
            v20 = v5 + 304LL * (unsigned int)j;
            v24 = *(_QWORD *)(v20 + 432);
            if ( v24 )
            {
              v25 = ((unsigned __int8)*(_DWORD *)(v20 + 440) + 1) & 0x3F;
              *(_DWORD *)(v20 + 440) = v25;
              v19 = 2LL * v25;
              *(_QWORD *)(v24 + 8 * v19) = *((_QWORD *)v2 + 2 * j + 16);
              v20 = *(_QWORD *)(v20 + 432);
              *(_QWORD *)(v20 + 8 * v19 + 8) = *(_QWORD *)(v5 + 44368);
            }
          }
        }
        break;
      case 3:
        v89[0] = *((_QWORD *)v2 + 16);
        break;
      case 7:
        LODWORD(j) = *((_DWORD *)v2 + 30) & 0x3FF;
        v52 = !_BitScanForward((unsigned int *)&v53, j);
        LODWORD(v20) = -1;
        v66 = v53;
        if ( !v52 )
          LODWORD(v20) = (unsigned __int8)v53;
        for ( k = 0; (_DWORD)j; ++k )
        {
          LODWORD(v19) = (char)v20;
          LODWORD(v65) = 0;
          v89[(char)v20] = *((_QWORD *)v2 + 5 * k + 16);
          v55 = 1 << v20;
          LODWORD(v20) = -1;
          LODWORD(j) = ~v55 & j;
          v52 = !_BitScanForward((unsigned int *)&v55, j);
          LODWORD(v65) = v55;
          if ( !v52 )
            LODWORD(v20) = (unsigned __int8)v55;
        }
        break;
    }
    if ( (*((_BYTE *)v2 + 124) & 1) != 0 )
    {
      if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
        McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer(
          v20,
          v19,
          j,
          *(_QWORD *)(v1 + 16),
          *(_DWORD *)(v1 + 152),
          (__int64)v89,
          *((_DWORD *)v2 + 27),
          v18,
          v63,
          (__int64)v90,
          (__int64)v91);
    }
    else if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
    {
      McTemplateK0pqXR1qqqXR5qQR7tXR1_EtwWriteTransfer(
        (unsigned int)v91,
        v19,
        j,
        *(_QWORD *)(v1 + 16),
        *(_DWORD *)(v1 + 152),
        (__int64)v89,
        *((_DWORD *)v2 + 27),
        v18,
        v63,
        (__int64)v90,
        v4,
        (__int64)v86,
        *((_BYTE *)v2 + 104) == 0,
        (__int64)v91);
    }
    LODWORD(v3) = v58;
  }
  if ( *(_BYTE *)(v1 + 2468) )
  {
    if ( v6 )
      goto LABEL_61;
    if ( *(_BYTE *)(v1 + 45) != 1 || !*(_DWORD *)(v1 + 2660) )
      goto LABEL_37;
    if ( _InterlockedExchange((volatile __int32 *)(v1 + 4LL * (unsigned int)v3 + 2528), 0)
      || DXGADAPTER::NumberOfVSyncWaiter(*(DXGADAPTER **)(v1 + 16), v3)
      || *(_DWORD *)(v1 + 4LL * (unsigned int)v3 + 796)
      || *(_DWORD *)(v1 + 868)
      || *(_DWORD *)(v1 + 20LL * (unsigned int)v3 + 2156) )
    {
LABEL_61:
      *(_DWORD *)(v1 + 4LL * (unsigned int)v3 + 2592) = 0;
      goto LABEL_37;
    }
    if ( (*((_BYTE *)v2 + 124) & 1) == 0 )
    {
      v45 = v1 + 4LL * (unsigned int)v3;
      v46 = *(_DWORD *)(v45 + 2592);
      if ( v46 != -1 )
      {
        v47 = v46 + 1;
        *(_DWORD *)(v45 + 2592) = v47;
        v48 = *(_DWORD *)(v1 + 2660);
        if ( v47 == v48 )
        {
          *(_DWORD *)(v1 + 2524) |= 1 << v3;
          if ( *(_DWORD *)(v1 + 2520) != 1 )
          {
            ExQueueWorkItem((PWORK_QUEUE_ITEM)(v1 + 2488), CriticalWorkQueue);
            *(_DWORD *)(v1 + 2520) = 1;
          }
        }
        else if ( v47 > v48 )
        {
          *(_DWORD *)(v45 + 2592) = v48 + 1;
        }
      }
    }
  }
  else
  {
    if ( v6 )
      goto LABEL_36;
    if ( *(_BYTE *)(v1 + 45) != 1 || !*(_DWORD *)(v1 + 2660) )
      goto LABEL_37;
    if ( _InterlockedExchange((volatile __int32 *)(v1 + 2528), 0)
      || *(_DWORD *)(*(_QWORD *)(v1 + 16) + 3152LL)
      || *(_DWORD *)(v1 + 796)
      || *(_DWORD *)(v1 + 868)
      || *(_DWORD *)(v1 + 2156) )
    {
LABEL_36:
      *(_DWORD *)(v1 + 2656) = -1;
      *(_DWORD *)(v1 + 2592) = 0;
      goto LABEL_37;
    }
    if ( (*((_BYTE *)v2 + 124) & 1) != 0 )
      goto LABEL_37;
    v42 = *(_DWORD *)(v1 + 2656);
    if ( v42 == -1 )
    {
      *(_DWORD *)(v1 + 2656) = v3;
    }
    else if ( v42 != (_DWORD)v3 )
    {
      goto LABEL_37;
    }
    v49 = *(_DWORD *)(v1 + 2592);
    if ( v49 != -1 )
    {
      v50 = v49 + 1;
      *(_DWORD *)(v1 + 2592) = v50;
      v51 = *(_DWORD *)(v1 + 2660);
      if ( v50 == v51 )
      {
        if ( !_InterlockedExchange((volatile __int32 *)(v1 + 2520), 1) )
          ExQueueWorkItem((PWORK_QUEUE_ITEM)(v1 + 2488), CriticalWorkQueue);
      }
      else if ( v50 > v51 )
      {
        *(_DWORD *)(v1 + 2592) = v51 + 1;
      }
    }
  }
LABEL_37:
  if ( (*((_BYTE *)v2 + 124) & 1) == 0 )
  {
    v26 = *(_QWORD *)(v1 + 16);
    v27 = *((_BYTE *)v2 + 104) == 0;
    v28 = *(_QWORD *)(v5 + 44352);
    v29 = *(_QWORD *)(v26 + 3120);
    if ( v58 >= *(_DWORD *)(v29 + 96) )
    {
LABEL_47:
      v33 = *(_QWORD *)(v5 + 44352);
      if ( v33 > 0xFFFFFFFF )
      {
        WdLogSingleEntry1(3LL, v33);
        WdLogGlobalForLineNumber = 7003;
      }
      v34 = *(_DWORD *)(v5 + 44352);
      ((void (*)(void))DxgCoreInterface[3])();
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        *(_QWORD *)(*(_QWORD *)(v1 + 16) + 412LL),
        *((unsigned int *)v2 + 28),
        v34,
        *(_QWORD *)(v5 + 44368));
      goto LABEL_50;
    }
    memset(&v72, 0, sizeof(v72));
    v30 = *(_QWORD *)(v29 + 128) + 3984LL * v58;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v30 + 936), &v72);
    if ( bTracingEnabled && (byte_140081241 & 1) != 0 )
    {
      v43 = DXGADAPTER::NumberOfVSyncWaiter((DXGADAPTER *)v26, v58);
      McTemplateK0qqqqq_EtwWriteTransfer(
        *(unsigned __int8 *)(v30 + 928),
        (unsigned int)&EventDWMVsyncSignal,
        v44,
        *(_DWORD *)(v30 + 920),
        v28,
        *(_BYTE *)(v30 + 928),
        v43,
        4);
    }
    v31 = *(struct _KEVENT **)(v30 + 904);
    *(_BYTE *)(v30 + 944) = v27;
    KePulseEvent(v31, 0, 0);
    if ( !*(_QWORD *)(v30 + 912) || (*(_DWORD *)(v30 + 924) = v28, *(_DWORD *)(v30 + 920) > (unsigned int)v28) )
    {
LABEL_46:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v72);
      goto LABEL_47;
    }
    if ( *(_BYTE *)(v30 + 928) )
    {
      *(_BYTE *)(v30 + 928) = 0;
      if ( *(_QWORD *)(v26 + 3128) )
      {
        v36 = v58;
        v37 = v58;
        if ( (*(_DWORD *)(v26 + 2976) & 0x10) == 0 )
        {
          v37 = 0;
LABEL_65:
          v38 = _InterlockedDecrement((volatile signed __int32 *)(v26 + 4LL * v37 + 3152));
          if ( v38 < 0 )
          {
            WdLogSingleEntry5(0LL, 275LL, 37LL, v26, *(unsigned int *)(v26 + 4LL * v37 + 3152), 0LL);
            WdLogGlobalForLineNumber = 2754;
          }
          if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
            McTemplateK0pqq_EtwWriteTransfer(v36, (unsigned int)&VSyncWaiterChange, v32, v26, v37, v38);
          goto LABEL_45;
        }
        if ( v58 < 0x10 )
          goto LABEL_65;
      }
    }
LABEL_45:
    KeSetEvent(*(PRKEVENT *)(v30 + 912), 0, 0);
    goto LABEL_46;
  }
LABEL_50:
  HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v67, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( (*((_BYTE *)v2 + 124) & 1) == 0 )
  {
    v35 = *(void (__fastcall **)(_QWORD, _QWORD))(v1 + 3336);
    if ( v35 )
      v35(*(_QWORD *)(v1 + 3352), v58);
  }
  if ( !v69 && v70 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v67, 0LL);
}
