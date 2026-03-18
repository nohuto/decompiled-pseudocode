/*
 * XREFs of ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14001F0E0
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1400090A0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x14001D940 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitSoftwareCommand @ 0x14001ECF8 (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiSubmitWaitCommand @ 0x14001EDA0 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x14001EFA0 (VidSchiSubmitSignalCommand.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1400396D8 (VidSchiProcessCompletedQueuePacket.c)
 * Callees:
 *     VidSchUnwaitFlipQueue @ 0x14000EC30 (VidSchUnwaitFlipQueue.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x14000F7D0 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     ?VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1400117BC (-VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x140012ACC (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x140014038 (VidSchiSubmitPresentHistoryToken.c)
 *     McTemplateK0qPR0PR0XR0TR0qpp_EtwWriteTransfer @ 0x14001895C (McTemplateK0qPR0PR0XR0TR0qpp_EtwWriteTransfer.c)
 *     ??0TraceDxgkSignalSynchronizationObjectArrays@@QEAA@IQEBQEBU_VIDSCH_SYNC_OBJECT@@PEB_K@Z @ 0x140018DC8 (--0TraceDxgkSignalSynchronizationObjectArrays@@QEAA@IQEBQEBU_VIDSCH_SYNC_OBJECT@@PEB_K@Z.c)
 *     VidSchiReleaseSyncObjectReference @ 0x14001AB40 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x14001AD20 (VidSchiCompleteSignalSyncObject.c)
 *     ??1TraceDxgkSignalSynchronizationObjectArrays@@QEAA@XZ @ 0x14001C6B8 (--1TraceDxgkSignalSynchronizationObjectArrays@@QEAA@XZ.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D740 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1400209D4 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiProfilePerformanceTick @ 0x1400211F0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1400260E0 (VidSchiUpdateContextStatus.c)
 *     VidSchiFlushPendingTokenList @ 0x14002906C (VidSchiFlushPendingTokenList.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x140036410 (McTemplateK0pp_EtwWriteTransfer.c)
 *     McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer @ 0x1400444DC (McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiProcessCompletedQueuePacketInternal(
        struct _VIDSCH_QUEUE_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r13
  unsigned int v4; // ebx
  int v5; // eax
  int v7; // esi
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // r14
  int v11; // eax
  _QWORD *v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  struct _VIDSCH_QUEUE_PACKET **v16; // rdx
  struct _VIDSCH_QUEUE_PACKET **v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // eax
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // r8d
  unsigned int v25; // r10d
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  volatile signed __int32 *v33; // rcx
  int v34; // r12d
  __int64 v35; // r12
  __int64 v36; // rdx
  struct _KEVENT *v37; // rsi
  struct _KEVENT *v38; // r12
  int v39; // ecx
  BOOL v40; // eax
  struct _KEVENT **v41; // r12
  struct _KEVENT *j; // rsi
  int v43; // ecx
  BOOL v44; // eax
  struct _KEVENT *v45; // rsi
  KIRQL v46; // r12
  struct _KEVENT *v47; // rsi
  struct _KEVENT *v48; // r12
  int v49; // ecx
  BOOL v50; // eax
  unsigned __int64 v51; // rsi
  struct _KEVENT *v52; // r12
  int v53; // eax
  unsigned int v54; // eax
  int v55; // ecx
  __int64 v56; // r12
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  _QWORD *v60; // rax
  int v61; // eax
  struct _KLOCK_QUEUE_HANDLE *v62; // rdx
  KSPIN_LOCK *v63; // rcx
  unsigned __int64 *v64; // rax
  int v65; // ecx
  BOOL v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  struct _KEVENT *v69; // r12
  int v70; // ecx
  BOOL v71; // eax
  bool v72; // zf
  unsigned __int64 *v73; // rax
  struct _KEVENT *v74; // rcx
  void (__fastcall *v75)(_QWORD); // rax
  int v76; // eax
  unsigned int i; // ecx
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // r10
  unsigned int v82; // r9d
  int v83; // eax
  char v84; // cl
  int v85; // eax
  unsigned int v86; // r12d
  int v87; // eax
  char v88; // cl
  char v89; // r15
  __int64 v90; // r10
  __int64 v91; // r11
  __int64 v92; // r8
  __int64 v93; // rax
  __int64 v94; // rdx
  int v95; // eax
  __int64 v96; // rax
  KIRQL v97; // r12
  struct _KEVENT *v98; // r15
  int Flink; // ecx
  BOOL v100; // eax
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rcx
  _QWORD **v104; // rsi
  _QWORD *v105; // rdi
  _QWORD *v106; // rax
  _QWORD *v107; // rax
  struct _KEVENT *v109; // rcx
  __int64 v110; // rcx
  __int64 v111; // r9
  struct _KEVENT *v112; // rcx
  __int64 v113; // r8
  __int64 v114; // rcx
  __int64 v115; // rcx
  KIRQL v116; // [rsp+60h] [rbp-A0h]
  KIRQL v117; // [rsp+60h] [rbp-A0h]
  KIRQL v118; // [rsp+60h] [rbp-A0h]
  KIRQL v119; // [rsp+60h] [rbp-A0h]
  KIRQL v120; // [rsp+60h] [rbp-A0h]
  int v121; // [rsp+64h] [rbp-9Ch]
  __int64 v122; // [rsp+68h] [rbp-98h]
  int v123; // [rsp+68h] [rbp-98h]
  KIRQL v124; // [rsp+70h] [rbp-90h]
  __int64 v125; // [rsp+78h] [rbp-88h]
  unsigned int v126; // [rsp+78h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE v127; // [rsp+80h] [rbp-80h] BYREF
  __int64 v128; // [rsp+98h] [rbp-68h]
  __int64 v129; // [rsp+A0h] [rbp-60h]
  __int64 v130; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v131[2]; // [rsp+B0h] [rbp-50h] BYREF
  char v132; // [rsp+C0h] [rbp-40h]
  int v133; // [rsp+C4h] [rbp-3Ch]
  int v134; // [rsp+C8h] [rbp-38h]
  int v135; // [rsp+CCh] [rbp-34h]
  int v136; // [rsp+D0h] [rbp-30h]
  int v137; // [rsp+D4h] [rbp-2Ch]
  __int64 v138; // [rsp+D8h] [rbp-28h]
  __int64 v139; // [rsp+E0h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE v140; // [rsp+E8h] [rbp-18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v141; // [rsp+100h] [rbp+0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v142; // [rsp+118h] [rbp+18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v143; // [rsp+130h] [rbp+30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v144; // [rsp+148h] [rbp+48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v145; // [rsp+160h] [rbp+60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v146; // [rsp+178h] [rbp+78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v148[32]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v149; // [rsp+1D0h] [rbp+D0h]
  __int64 v150; // [rsp+1F0h] [rbp+F0h]
  __int64 v151; // [rsp+218h] [rbp+118h]

  v3 = *((_QWORD *)a1 + 11);
  v4 = 0;
  v121 = 0;
  v5 = *((_DWORD *)a1 + 16);
  LODWORD(v128) = 0;
  v7 = 0;
  v139 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = *(_QWORD *)(v3 + 96);
  v9 = *(_QWORD *)(v3 + 104);
  v129 = v9;
  v138 = v8;
  v10 = *(_QWORD *)(v8 + 24);
  if ( (v5 & 0x20) != 0 && (byte_140081241 & 1) != 0 )
  {
    v115 = *(_QWORD *)(v3 + 56);
    if ( !v115 || (*(_DWORD *)(v3 + 112) & 0x40) != 0 )
      v115 = v3;
    McTemplateK0pp_EtwWriteTransfer(v115, &AbortQueuePacket, a3, a1, v115);
  }
  if ( !*((_DWORD *)a1 + 12) )
  {
    v33 = (volatile signed __int32 *)*((_QWORD *)a1 + 96);
    if ( v33 )
    {
      if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
      {
        if ( !*(_QWORD *)v33 )
        {
          ExFreePoolWithTag((PVOID)v33, 0);
          *((_QWORD *)a1 + 96) = 0LL;
          goto LABEL_3;
        }
        ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v33, (PVOID)v33);
      }
      *((_QWORD *)a1 + 96) = 0LL;
    }
  }
LABEL_3:
  v124 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 1984), &LockHandle);
  v130 = v10;
  v132 = 0;
  v131[1] = v131;
  v131[0] = v131;
  v11 = *((_DWORD *)a1 + 20);
  v133 = 2;
  if ( (v11 & 0x10) != 0 )
  {
    *((_DWORD *)a1 + 20) = v11 & 0xFFFFFFEF;
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 96LL) + 16520LL) != -1 )
    {
      v75 = *(void (__fastcall **)(_QWORD))(v10 + 3320);
      if ( v75 )
        v75(*(_QWORD *)(v10 + 3352));
    }
  }
  if ( *((_DWORD *)a1 + 13) == 16 || !*((_DWORD *)a1 + 13) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 512LL, v10, v3, a1);
    WdLogGlobalForLineNumber = 906;
    JUMPOUT(0x1400209CELL);
  }
  if ( (*((_DWORD *)a1 + 20) & 0x20) != 0 )
  {
    v12 = (_QWORD *)*((_QWORD *)a1 + 11);
    v13 = v12[13];
    v14 = *(_QWORD *)(v12[12] + 24LL);
    v15 = v12[20];
    v122 = v14;
    if ( v15 && *((_QWORD *)a1 + 14) <= v15 )
    {
      if ( !*(_BYTE *)(v13 + 204)
        && !_InterlockedCompareExchange((volatile signed __int32 *)(v13 + 200), 0, 0)
        && (*(_BYTE *)(v14 + 3268) & 1) == 0 )
      {
        v110 = v12[20];
        v111 = *((_QWORD *)a1 + 14);
        g_DxgMmsBugcheckExportIndex = 1;
        LOBYTE(v76) = WdLogSingleEntry5(0LL, 281LL, 1792LL, v111, v110, 0LL);
        WdLogGlobalForLineNumber = 906;
        goto LABEL_275;
      }
      WdLogSingleEntry1(4LL, *((_QWORD *)a1 + 14));
      WdLogGlobalForLineNumber = 11965;
    }
    else
    {
      if ( *(_BYTE *)(v13 + 204)
        || _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 200), 0, 0)
        || (*(_BYTE *)(v14 + 3268) & 1) != 0 )
      {
        WdLogSingleEntry2(4LL, a1, *((_QWORD *)a1 + 14));
        WdLogGlobalForLineNumber = 11984;
      }
      else
      {
        WdLogSingleEntry3(4LL, a1, *((_QWORD *)a1 + 14), v12[20]);
        WdLogGlobalForLineNumber = 11993;
      }
      *(_QWORD *)(*((_QWORD *)a1 + 11) + 160LL) = *((_QWORD *)a1 + 14);
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL) + 1832LL) )
        VidSchUnwaitFlipQueue((struct HwQueueStagingList *)&v130, v122);
    }
  }
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 13) = 16;
  v16 = (struct _VIDSCH_QUEUE_PACKET **)*((_QWORD *)a1 + 4);
  if ( v16[1] != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32) )
    goto LABEL_114;
  v17 = (struct _VIDSCH_QUEUE_PACKET **)*((_QWORD *)a1 + 5);
  if ( *v17 != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32) )
    goto LABEL_114;
  *v17 = (struct _VIDSCH_QUEUE_PACKET *)v16;
  v16[1] = (struct _VIDSCH_QUEUE_PACKET *)v17;
  v18 = *(_QWORD *)(v3 + 664);
  if ( v18 != v3 + 664 )
  {
    v19 = v18 - 32;
    v20 = *(_DWORD *)(v18 + 48);
    if ( (v20 & 3) == 1 )
    {
      v139 = v19;
      *(_DWORD *)(v19 + 80) = v20 | 2;
    }
    if ( (*(_DWORD *)(v3 + 184) & 0x200) == 0
      || (((unsigned __int8)(*(_DWORD *)(v3 + 184) >> 9) | *(_BYTE *)(v3 + 184)) & 2) != 0 )
    {
      goto LABEL_21;
    }
    v32 = 13910LL;
    goto LABEL_264;
  }
  if ( (*(_DWORD *)(v3 + 184) & 0x200) != 0 )
  {
    v32 = 13929LL;
LABEL_264:
    v31 = 10LL;
    goto LABEL_51;
  }
  if ( (*(_DWORD *)(v3 + 184) & 0x10) != 0
    || (*(_DWORD *)(v3 + 184) & 0x40) != 0
    || (*(_DWORD *)(v3 + 184) & 0x100) != 0 )
  {
    goto LABEL_21;
  }
  v31 = 0LL;
  v32 = 13962LL;
LABEL_51:
  VidSchiUpdateContextStatus(v3, v31, v32);
LABEL_21:
  v21 = *((_DWORD *)a1 + 12);
  if ( v21 != 5 )
  {
    if ( v21 == 3 )
      VidSchiReleaseFlipFencesReference(
        (struct _VIDSCH_GLOBAL *)v10,
        (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 1352));
    goto LABEL_24;
  }
  if ( (*((_DWORD *)a1 + 20) & 4) != 0 )
    goto LABEL_24;
  v28 = *((unsigned int *)a1 + 188);
  if ( (((v28 & 0x10) != 0) & ((unsigned __int8)byte_140081243 >> 7)) != 0 )
  {
    v113 = *((_QWORD *)a1 + 11);
    if ( v113 )
    {
      v114 = *(_QWORD *)(v113 + 56);
      if ( !v114 || (*(_DWORD *)(v113 + 112) & 0x40) != 0 )
        LODWORD(v114) = *((_QWORD *)a1 + 11);
    }
    else
    {
      v114 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 48LL);
      if ( !v114 )
        v114 = *((_QWORD *)a1 + 12);
    }
    McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer(
      v114,
      v28,
      v113,
      1,
      v114,
      *((_DWORD *)a1 + 28),
      v28,
      *((_DWORD *)a1 + 189),
      (__int64)a1 + 760,
      (__int64)a1 + 1016,
      (char)a1);
  }
  v29 = *((_QWORD *)a1 + 159);
  v125 = *(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL);
  if ( v29 )
  {
    *(_QWORD *)(v29 + 1280) = *((_QWORD *)a1 + 160);
    goto LABEL_43;
  }
  if ( *((_QWORD *)a1 + 160) )
  {
LABEL_43:
    v30 = *((_QWORD *)a1 + 160);
    if ( v30 )
      *(_QWORD *)(v30 + 1272) = *((_QWORD *)a1 + 159);
    *((_QWORD *)a1 + 159) = 0LL;
    *((_QWORD *)a1 + 160) = 0LL;
    goto LABEL_162;
  }
  if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
  {
    TraceDxgkSignalSynchronizationObjectArrays::TraceDxgkSignalSynchronizationObjectArrays(
      (TraceDxgkSignalSynchronizationObjectArrays *)v148,
      *((_DWORD *)a1 + 189),
      (const struct _VIDSCH_SYNC_OBJECT *const *)a1 + 95,
      (char *)a1 + 1016);
    if ( v149 && v150 && v151 && Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0qPR0PR0XR0TR0qpp_EtwWriteTransfer();
    TraceDxgkSignalSynchronizationObjectArrays::~TraceDxgkSignalSynchronizationObjectArrays((TraceDxgkSignalSynchronizationObjectArrays *)v148);
  }
  v76 = *((_DWORD *)a1 + 188);
  if ( (v76 & 2) == 0 )
  {
    if ( *((_DWORD *)a1 + 189) )
    {
      do
      {
        VidSchiCompleteSignalSyncObject(
          (HwQueueStagingList *)&v130,
          *((_QWORD *)a1 + v4 + 95),
          (*((_DWORD *)a1 + 188) & 4) != 0,
          (unsigned __int64 *)a1 + v4 + 127,
          1);
        ++v4;
      }
      while ( v4 < *((_DWORD *)a1 + 189) );
      v4 = 0;
    }
    goto LABEL_162;
  }
LABEL_275:
  v112 = (struct _KEVENT *)*((_QWORD *)a1 + 127);
  if ( (v76 & 8) != 0 )
  {
    ((void (__fastcall *)(struct _KEVENT *, _QWORD))DxgCoreInterface[72])(v112, 0LL);
  }
  else
  {
    KeSetEvent(v112, 0, 0);
    ObfDereferenceObject(*((PVOID *)a1 + 127));
  }
  *((_QWORD *)a1 + 127) = 0LL;
LABEL_162:
  *((_DWORD *)a1 + 20) |= 4u;
  if ( (*((_DWORD *)a1 + 188) & 2) == 0 && *((_DWORD *)a1 + 189) )
  {
    do
      VidSchiReleaseSyncObjectReference(*((char **)a1 + v4++ + 95), v28);
    while ( v4 < *((_DWORD *)a1 + 189) );
  }
  VidSchiCheckPendingDeviceCommand(v125, v28);
LABEL_24:
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 1028));
  if ( !*((_DWORD *)a1 + 12) )
  {
    if ( (*((_DWORD *)a1 + 16) & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 3000));
      RtlSetBitEx(v10 + 544, *(unsigned __int16 *)(v8 + 4));
    }
    for ( i = 0; i < *((_DWORD *)a1 + 238); ++i )
    {
      if ( i >= 0x10 )
        break;
      v78 = *((_QWORD *)a1 + i + 120);
      *((_QWORD *)a1 + i + 120) = 0LL;
      if ( v78 )
        _InterlockedDecrement((volatile signed __int32 *)(v78 + 104));
    }
  }
  v22 = *((unsigned int *)a1 + 18);
  v23 = *((_DWORD *)a1 + 18) & 0x4000;
  if ( (*((_DWORD *)a1 + 18) & 0x40020) != 0x40000 && !v23 )
  {
    v34 = 0;
    goto LABEL_57;
  }
  if ( (v22 & 0x400) == 0 || (v24 = 0, (v22 & 0x800) != 0) )
    v24 = 1;
  v25 = *((_DWORD *)a1 + 42);
  v126 = v25;
  v123 = v24;
  if ( (v22 & 0x40000) != 0 )
  {
    v7 = v24;
    if ( !v23 )
      v7 = 0;
LABEL_208:
    if ( !v7 )
      goto LABEL_210;
    goto LABEL_209;
  }
  if ( (v22 & 4) == 0 )
  {
LABEL_207:
    v7 = v24;
    goto LABEL_208;
  }
  if ( *((_DWORD *)a1 + 218) == 1 )
  {
    v121 = v24;
    goto LABEL_207;
  }
  if ( (*((_DWORD *)a1 + 16) & 2) != 0 )
    goto LABEL_212;
  if ( !v24 )
    goto LABEL_35;
  v7 = 1;
  v121 = 1;
  LODWORD(v128) = 1;
LABEL_209:
  LOBYTE(v22) = 1;
  VidSchiUpdateLastCompletedPresentTimestamp(*((_QWORD *)a1 + 11), v22, 0);
  v25 = v126;
LABEL_210:
  if ( (_DWORD)v128 )
  {
LABEL_35:
    if ( (*((_DWORD *)a1 + 338) & 0x3FF) != 0 )
    {
      v26 = *(unsigned int *)(v3 + 88);
      v27 = *(_QWORD *)(v10 + 688);
      if ( (unsigned int)v26 < *(_DWORD *)(v10 + 760) )
        v27 += 8 * v26;
      VidSchiUnreferencePrimaryAllocations(
        (struct HwQueueStagingList *)&v130,
        (struct _VIDSCH_GLOBAL *)v10,
        v25,
        (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 1352),
        *((_DWORD *)a1 + 222),
        1 << *(_BYTE *)(*(_QWORD *)v27 + 6LL),
        0,
        0);
    }
  }
  if ( v7 && v126 != -1 && (*((_DWORD *)a1 + 18) & 0x40000) == 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 4LL * v126 + 1700));
    v101 = *(_QWORD *)(v9 + 32);
    v128 = v126;
    v102 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 40) + 32LL) + 8LL * *(unsigned int *)(v101 + 4))
                     + 8LL * v126
                     + 88);
    if ( (*((_DWORD *)a1 + 18) & 0x80u) == 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 8LL * v126 + 6712) + 8LL));
      ++**(_DWORD **)(v10 + 8LL * v126 + 6712);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v102 + 8));
    ++*(_DWORD *)v102;
    if ( (*((_DWORD *)a1 + 18) & 0x20000) != 0 )
    {
      memset(&v140, 0, sizeof(v140));
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 1992), &v140);
      v103 = v128;
      *(_DWORD *)(v9 + 4 * v128 + 508) = *((_DWORD *)a1 + 216);
      *(_QWORD *)(v9 + 8 * v103 + 576) = *((_QWORD *)a1 + 17);
      *(_QWORD *)(v9 + 8 * v103 + 704) = *((_QWORD *)a1 + 18);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v140);
    }
  }
LABEL_212:
  if ( (*((_DWORD *)a1 + 18) & 0x40080) != 0 && *((_QWORD *)a1 + 19) && *((_QWORD *)a1 + 20) && v123 )
    VidSchiSubmitPresentHistoryToken((struct HwQueueStagingList *)&v130, a1, 0LL, 0LL, 0LL);
  if ( v121 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 792));
    if ( *(_BYTE *)(v10 + 2468) )
      v96 = v10 + 4LL * v126;
    else
      v96 = v10;
    _InterlockedDecrement((volatile signed __int32 *)(v96 + 796));
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 1828));
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 4LL * v126 + 1764));
  }
  memset(&v141, 0, sizeof(v141));
  v97 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 2000), &v141);
  if ( *(_QWORD *)(v10 + 1944) != v10 + 1944 )
  {
    v98 = *(struct _KEVENT **)(v10 + 1944);
    while ( 1 )
    {
      if ( LODWORD(v98->Header.WaitListHead.Blink) == 4 )
      {
        v100 = *(_DWORD *)(*(_QWORD *)&v98[1].Header.Lock + 4LL * LODWORD(v98[1].Header.WaitListHead.Blink) + 1700) < *(_DWORD *)(*(_QWORD *)&v98[1].Header.Lock + 244LL);
      }
      else
      {
        if ( ((__int64)v98[1].Header.WaitListHead.Flink & 0x10) == 0 )
          goto LABEL_229;
        Flink = (int)v98[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v98[5].Header.WaitListHead.Blink) = Flink;
        v100 = Flink == 0;
      }
      if ( v100 )
      {
LABEL_229:
        ++v98[5].Header.LockNV;
        KeSetEvent(v98 + 4, 0, 0);
      }
      v98 = *(struct _KEVENT **)&v98->Header.Lock;
      if ( v98 == (struct _KEVENT *)(v10 + 1944) )
      {
        v8 = v138;
        break;
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v141);
  KeLowerIrql(v97);
  v34 = v121;
  if ( !v7 )
  {
LABEL_57:
    if ( !*((_DWORD *)a1 + 12) )
      VidSchiUpdateLastCompletedPresentTimestamp(v3, 0LL, 0);
  }
  if ( *((_DWORD *)a1 + 12) == 3 && *((_DWORD *)a1 + 42) != -1 )
  {
    v79 = *((_QWORD *)a1 + 11);
    if ( v79 )
      v80 = *(_QWORD *)(v79 + 104);
    else
      v80 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 40LL) + 8LL);
    v81 = *(_QWORD *)(v80 + 32);
    if ( (*((_DWORD *)a1 + 18) & 0x800000) != 0 )
      v82 = ((unsigned __int16)*((_DWORD *)a1 + 338) | (unsigned __int16)(*((_DWORD *)a1 + 338) >> 10)) & 0x3FF;
    else
      v82 = (1 << *(_DWORD *)(v81 + 152)) - 1;
    v72 = !_BitScanForward((unsigned int *)&v83, v82);
    v84 = -1;
    v134 = v83;
    if ( !v72 )
      v84 = v83;
    if ( v82 )
    {
      do
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v81 + 8LL * *((unsigned int *)a1 + 42) + 3432)
                                                        + 304LL * v84
                                                        + 192));
        v85 = 1 << v84;
        v84 = -1;
        v82 &= ~v85;
        v72 = !_BitScanForward((unsigned int *)&v85, v82);
        v135 = v85;
        if ( !v72 )
          v84 = v85;
      }
      while ( v82 );
      v121 = v34;
    }
    if ( (*((_DWORD *)a1 + 18) & 0x800000) != 0 )
      v86 = ((unsigned __int16)*((_DWORD *)a1 + 338) | (unsigned __int16)(*((_DWORD *)a1 + 338) >> 10)) & 0x3FF;
    else
      v86 = (1 << *(_DWORD *)(v10 + 152)) - 1;
    v72 = !_BitScanForward((unsigned int *)&v87, v86);
    v88 = -1;
    v136 = v87;
    if ( !v72 )
      v88 = v87;
    if ( v86 )
    {
      v89 = v88;
      do
      {
        v90 = *((unsigned int *)a1 + 42);
        v91 = *(_QWORD *)(v10 + 8 * v90 + 3432);
        v92 = *(int *)(304LL * (unsigned int)v89 + v91 + 188);
        if ( (int)v92 > -1 )
        {
          v93 = *(_QWORD *)(v10 + 3560);
          if ( *(_DWORD *)(160 * v92 + v93 + 112) == 1 && (_DWORD)v90 != -1 )
          {
            v94 = v93 + 160 * v92;
            if ( !v94
              || *(_BYTE *)(v94 + 98)
              && !*(_DWORD *)(304LL * (unsigned int)v89 + v91 + 192)
              && *(_BYTE *)(v94 + 96)
              && !*(_DWORD *)(304LL * (unsigned int)v89 + v91 + 196) )
            {
              VidSchiFlushPendingTokenList((struct HwQueueStagingList *)&v130, (struct _VIDSCH_GLOBAL *)v10);
            }
          }
        }
        v95 = 1 << v89;
        v89 = -1;
        v86 &= ~v95;
        v72 = !_BitScanForward((unsigned int *)&v95, v86);
        v137 = v95;
        if ( !v72 )
          v89 = v95;
      }
      while ( v86 );
      v8 = v138;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(v10 + 780));
  _InterlockedDecrement((volatile signed __int32 *)(v8 + 3012));
  v35 = v129;
  _InterlockedDecrement((volatile signed __int32 *)(v129 + 1836));
  if ( (unsigned int)(*((_DWORD *)a1 + 12) - 4) > 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v129 + 1840));
  if ( !*((_DWORD *)a1 + 12) && (*((_DWORD *)a1 + 18) & 4) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 8LL * *((unsigned int *)a1 + 42) + 3432) + 3244LL));
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 784));
  VidSchiProfilePerformanceTick(9, v10, v8, 0, 0LL, (__int64)a1, 0LL, 0LL);
  VidSchiCheckPendingDeviceCommand(v129, v36);
  if ( v7 )
  {
    v37 = (struct _KEVENT *)(v129 + 120);
    memset(&v142, 0, sizeof(v142));
    v116 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 2000), &v142);
    v38 = *(struct _KEVENT **)(v129 + 120);
    if ( *(struct _KEVENT **)&v37->Header.Lock != v37 )
    {
      do
      {
        if ( LODWORD(v38->Header.WaitListHead.Blink) == 4 )
        {
          v40 = *(_DWORD *)(*(_QWORD *)&v38[1].Header.Lock + 4LL * LODWORD(v38[1].Header.WaitListHead.Blink) + 1700) < *(_DWORD *)(*(_QWORD *)&v38[1].Header.Lock + 244LL);
        }
        else
        {
          if ( ((__int64)v38[1].Header.WaitListHead.Flink & 0x10) == 0 )
            goto LABEL_69;
          v39 = (int)v38[1].Header.WaitListHead.Blink->Flink;
          HIDWORD(v38[5].Header.WaitListHead.Blink) = v39;
          v40 = v39 == 0;
        }
        if ( v40 )
        {
LABEL_69:
          ++v38[5].Header.LockNV;
          KeSetEvent(v38 + 4, 0, 0);
        }
        v38 = *(struct _KEVENT **)&v38->Header.Lock;
      }
      while ( v38 != v37 );
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v142);
    KeLowerIrql(v116);
    v35 = v129;
  }
  if ( !v121 )
    goto LABEL_82;
  memset(&v143, 0, sizeof(v143));
  v41 = (struct _KEVENT **)(v35 + 136);
  v117 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 2000), &v143);
  for ( j = *v41; j != (struct _KEVENT *)v41; j = *(struct _KEVENT **)&j->Header.Lock )
  {
    if ( LODWORD(j->Header.WaitListHead.Blink) == 4 )
    {
      v44 = *(_DWORD *)(*(_QWORD *)&j[1].Header.Lock + 4LL * LODWORD(j[1].Header.WaitListHead.Blink) + 1700) < *(_DWORD *)(*(_QWORD *)&j[1].Header.Lock + 244LL);
    }
    else
    {
      if ( ((__int64)j[1].Header.WaitListHead.Flink & 0x10) == 0 )
        goto LABEL_78;
      v43 = (int)j[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(j[5].Header.WaitListHead.Blink) = v43;
      v44 = v43 == 0;
    }
    if ( v44 )
    {
LABEL_78:
      ++j[5].Header.LockNV;
      KeSetEvent(j + 4, 0, 0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v143);
  KeLowerIrql(v117);
  v45 = (struct _KEVENT *)(v10 + 1928);
  memset(&v144, 0, sizeof(v144));
  v118 = KfRaiseIrql(2u);
  v46 = v118;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 2000), &v144);
  if ( *(struct _KEVENT **)&v45->Header.Lock == v45 )
    goto LABEL_81;
  v69 = *(struct _KEVENT **)&v45->Header.Lock;
  do
  {
    if ( LODWORD(v69->Header.WaitListHead.Blink) == 4 )
    {
      v71 = *(_DWORD *)(*(_QWORD *)&v69[1].Header.Lock + 4LL * LODWORD(v69[1].Header.WaitListHead.Blink) + 1700) < *(_DWORD *)(*(_QWORD *)&v69[1].Header.Lock + 244LL);
LABEL_134:
      if ( !v71 )
        goto LABEL_136;
      goto LABEL_135;
    }
    if ( ((__int64)v69[1].Header.WaitListHead.Flink & 0x10) != 0 )
    {
      v70 = (int)v69[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(v69[5].Header.WaitListHead.Blink) = v70;
      v71 = v70 == 0;
      goto LABEL_134;
    }
LABEL_135:
    ++v69[5].Header.LockNV;
    KeSetEvent(v69 + 4, 0, 0);
LABEL_136:
    v69 = *(struct _KEVENT **)&v69->Header.Lock;
  }
  while ( v69 != v45 );
  v46 = v118;
LABEL_81:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v144);
  KeLowerIrql(v46);
  *(_QWORD *)(v10 + 1872) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v10 + 1840), 0, 0);
LABEL_82:
  v47 = (struct _KEVENT *)(v8 + 424);
  memset(&v145, 0, sizeof(v145));
  v119 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 2000), &v145);
  v48 = *(struct _KEVENT **)(v8 + 424);
  if ( *(struct _KEVENT **)&v47->Header.Lock != v47 )
  {
    while ( 2 )
    {
      if ( LODWORD(v48->Header.WaitListHead.Blink) != 4 )
      {
        if ( ((__int64)v48[1].Header.WaitListHead.Flink & 0x10) != 0 )
        {
          v49 = (int)v48[1].Header.WaitListHead.Blink->Flink;
          HIDWORD(v48[5].Header.WaitListHead.Blink) = v49;
          v50 = v49 == 0;
          goto LABEL_86;
        }
        goto LABEL_87;
      }
      v50 = *(_DWORD *)(*(_QWORD *)&v48[1].Header.Lock + 4LL * LODWORD(v48[1].Header.WaitListHead.Blink) + 1700) < *(_DWORD *)(*(_QWORD *)&v48[1].Header.Lock + 244LL);
LABEL_86:
      if ( v50 )
      {
LABEL_87:
        ++v48[5].Header.LockNV;
        KeSetEvent(v48 + 4, 0, 0);
      }
      v48 = *(struct _KEVENT **)&v48->Header.Lock;
      if ( v48 == v47 )
        break;
      continue;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v145);
  KeLowerIrql(v119);
  v51 = v10 + 1912;
  memset(&v146, 0, sizeof(v146));
  v120 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 2000), &v146);
  v52 = *(struct _KEVENT **)(v10 + 1912);
  if ( *(_QWORD *)v51 != v51 )
  {
    do
    {
      if ( LODWORD(v52->Header.WaitListHead.Blink) == 4 )
      {
        v66 = *(_DWORD *)(*(_QWORD *)&v52[1].Header.Lock + 4LL * LODWORD(v52[1].Header.WaitListHead.Blink) + 1700) < *(_DWORD *)(*(_QWORD *)&v52[1].Header.Lock + 244LL);
      }
      else
      {
        if ( ((__int64)v52[1].Header.WaitListHead.Flink & 0x10) == 0 )
          goto LABEL_121;
        v65 = (int)v52[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v52[5].Header.WaitListHead.Blink) = v65;
        v66 = v65 == 0;
      }
      if ( v66 )
      {
LABEL_121:
        ++v52[5].Header.LockNV;
        KeSetEvent(v52 + 4, 0, 0);
      }
      v52 = *(struct _KEVENT **)&v52->Header.Lock;
    }
    while ( v52 != (struct _KEVENT *)v51 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v146);
  KeLowerIrql(v120);
  *(_QWORD *)(v8 + 328) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v8 + 296), 0, 0);
  *(_QWORD *)(v10 + 1760) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v10 + 1728), 0, 0);
  if ( (*((_DWORD *)a1 + 16) & 1) == 0 )
  {
    v53 = *((_DWORD *)a1 + 12);
    if ( !v53 || v53 == 7 )
    {
      v74 = (struct _KEVENT *)*((_QWORD *)a1 + 105);
      if ( v74 )
      {
        KeSetEvent(v74, 0, 0);
        ObfDereferenceObject(*((PVOID *)a1 + 105));
      }
    }
    else if ( v53 == 6 )
    {
      v109 = (struct _KEVENT *)*((_QWORD *)a1 + 98);
      if ( v109 )
        KeSetEvent(v109, 0, 0);
    }
  }
  v54 = *((_DWORD *)a1 + 12);
  if ( v54 > 7 )
    goto LABEL_105;
  v55 = 137;
  if ( !_bittest(&v55, v54) )
    goto LABEL_105;
  LODWORD(v56) = -1;
  if ( *(_BYTE *)(v3 + 909) )
    goto LABEL_102;
  v51 = 0LL;
  if ( !*(_DWORD *)(v10 + 152) )
    goto LABEL_102;
LABEL_98:
  v8 = (unsigned int)v51 * ((8 * *((_DWORD *)a1 + 340) + 231) & 0xFFFFFFF8);
  v57 = *(_QWORD *)((char *)a1 + v8 + 1552);
  if ( !v57 )
    goto LABEL_101;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v57 + 12), v56) == 1 )
  {
    if ( *(_QWORD *)v57 )
    {
      ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v57, (PVOID)v57);
      goto LABEL_100;
    }
    goto LABEL_129;
  }
LABEL_100:
  while ( 1 )
  {
    *(_QWORD *)((char *)a1 + v8 + 1552) = 0LL;
LABEL_101:
    v51 = (unsigned int)(v51 + 1);
    if ( (unsigned int)v51 < *(_DWORD *)(v10 + 152) )
      goto LABEL_98;
LABEL_102:
    v58 = *((_QWORD *)a1 + 98);
    if ( v58 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v58 + 12), v56) == 1 )
      {
        if ( *(_QWORD *)v58 )
          ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v58, (PVOID)v58);
        else
          ExFreePoolWithTag((PVOID)v58, 0);
      }
      *((_QWORD *)a1 + 98) = 0LL;
    }
LABEL_105:
    v56 = *(_QWORD *)(*(_QWORD *)(v3 + 96) + 24LL);
    if ( *(_BYTE *)(v56 + 7059) )
    {
      if ( *((_DWORD *)a1 + 12) == 4 )
      {
        *((LARGE_INTEGER *)a1 + 7 * *((unsigned int *)a1 + 186) + 37) = KeQueryPerformanceCounter(0LL);
        *((_DWORD *)a1 + 14 * *((unsigned int *)a1 + 186) + 76) = *((_DWORD *)a1 + 12);
        RtlCaptureStackBackTrace(1u, 5u, (PVOID *)a1 + 7 * *((unsigned int *)a1 + 186) + 39, 0LL);
        v72 = *((_QWORD *)a1 + 96) == 0LL;
        *((_DWORD *)a1 + 186) = ((unsigned __int8)*((_DWORD *)a1 + 186) + 1) & 7;
        if ( !v72 || *((_QWORD *)a1 + 97) || *((_QWORD *)a1 + 22) || *((_QWORD *)a1 + 23) )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 281LL, 61440LL, v56, a1, 0LL);
          WdLogGlobalForLineNumber = 906;
          goto LABEL_143;
        }
      }
    }
    if ( *((_DWORD *)a1 + 12) )
      break;
    v67 = *((_QWORD *)a1 + 137);
    if ( !v67 && !*((_QWORD *)a1 + 36) )
      break;
    v68 = *((_QWORD *)a1 + 36);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 2560LL, a1, v67, v68);
    WdLogGlobalForLineNumber = 906;
LABEL_129:
    ExFreePoolWithTag((PVOID)v57, 0);
  }
  WdLogSingleEntry2(4LL, a1, v3);
  WdLogGlobalForLineNumber = 19409;
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 13) = 0;
  v51 = (unsigned __int64)a1 + 8;
  memset(&v127, 0, sizeof(v127));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v56 + 1992), &v127);
  v59 = *((_QWORD *)a1 + 1);
  if ( *(_QWORD *)(*(_QWORD *)v51 + 8LL) != v51 || (v60 = (_QWORD *)*((_QWORD *)a1 + 2), *v60 != v51) )
LABEL_114:
    __fastfail(3u);
  *v60 = v59;
  *(_QWORD *)(v59 + 8) = v60;
  if ( v3 != -776 )
    --*(_DWORD *)(v3 + 776);
  KeReleaseInStackQueuedSpinLock(&v127);
  v61 = *((_DWORD *)a1 + 16);
  v62 = &v127;
  v63 = (KSPIN_LOCK *)(v56 + 1992);
  v127.LockQueue = 0LL;
  if ( (v61 & 0x40) != 0 )
  {
LABEL_143:
    *(_QWORD *)&v127.OldIrql = 0LL;
    KeAcquireInStackQueuedSpinLock(v63, v62);
    v73 = *(unsigned __int64 **)(v3 + 744);
    if ( *v73 == v3 + 736 )
    {
      *(_QWORD *)(v51 + 8) = v73;
      *(_QWORD *)v51 = v3 + 736;
      *v73 = v51;
      *(_QWORD *)(v3 + 744) = v51;
      if ( v3 != -752 )
        ++*(_DWORD *)(v3 + 752);
      goto LABEL_243;
    }
    goto LABEL_114;
  }
  *(_QWORD *)&v127.OldIrql = 0LL;
  KeAcquireInStackQueuedSpinLock(v63, &v127);
  v64 = *(unsigned __int64 **)(v3 + 720);
  if ( *v64 != v3 + 712 )
    goto LABEL_114;
  *(_QWORD *)v51 = v3 + 712;
  *((_QWORD *)a1 + 2) = v64;
  *v64 = v51;
  *(_QWORD *)(v3 + 720) = v51;
  if ( v3 != -728 )
    ++*(_DWORD *)(v3 + 728);
LABEL_243:
  KeReleaseInStackQueuedSpinLock(&v127);
  if ( (*((_DWORD *)a1 + 16) & 0x40) == 0 )
  {
    v104 = (_QWORD **)(v3 + 712);
    while ( 1 )
    {
      memset(&v127, 0, sizeof(v127));
      v105 = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v56 + 1992), &v127);
      v106 = *v104;
      if ( *v104 == v104 )
        break;
      if ( *(_DWORD *)(v3 + 728) > 0x10u )
      {
        v105 = *v104;
        if ( (_QWORD **)v106[1] != v104 )
          goto LABEL_114;
        v107 = (_QWORD *)*v106;
        if ( (_QWORD *)v107[1] != v105 )
          goto LABEL_114;
        *v104 = v107;
        v107[1] = v104;
        --*(_DWORD *)(v3 + 728);
      }
      KeReleaseInStackQueuedSpinLock(&v127);
      if ( !v105 )
        goto LABEL_251;
      ExFreePoolWithTag(v105 - 1, 0);
    }
    KeReleaseInStackQueuedSpinLock(&v127);
  }
LABEL_251:
  HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v130, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v124);
  if ( !v132 && v133 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v130, 0LL);
  return (struct _VIDSCH_QUEUE_PACKET *)v139;
}
