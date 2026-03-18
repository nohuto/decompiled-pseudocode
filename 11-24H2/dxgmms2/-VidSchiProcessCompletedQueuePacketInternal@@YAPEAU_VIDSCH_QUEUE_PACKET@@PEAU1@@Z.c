/*
 * XREFs of ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x140013C80
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x140008BD0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1400124E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitSoftwareCommand @ 0x140013898 (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiSubmitWaitCommand @ 0x140013940 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x140013B40 (VidSchiSubmitSignalCommand.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1400383A8 (VidSchiProcessCompletedQueuePacket.c)
 * Callees:
 *     McTemplateK0qPR0PR0XR0TR0qpp_EtwWriteTransfer @ 0x14000D4F4 (McTemplateK0qPR0PR0XR0TR0qpp_EtwWriteTransfer.c)
 *     ??0TraceDxgkSignalSynchronizationObjectArrays@@QEAA@IQEBQEBU_VIDSCH_SYNC_OBJECT@@PEB_K@Z @ 0x14000D960 (--0TraceDxgkSignalSynchronizationObjectArrays@@QEAA@IQEBQEBU_VIDSCH_SYNC_OBJECT@@PEB_K@Z.c)
 *     VidSchiReleaseSyncObjectReference @ 0x14000F6E0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x14000F8C0 (VidSchiCompleteSignalSyncObject.c)
 *     ??1TraceDxgkSignalSynchronizationObjectArrays@@QEAA@XZ @ 0x140011258 (--1TraceDxgkSignalSynchronizationObjectArrays@@QEAA@XZ.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x1400122E0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x140015574 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiProfilePerformanceTick @ 0x140015D90 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x14001AC80 (VidSchiUpdateContextStatus.c)
 *     VidSchiFlushPendingTokenList @ 0x14001DA00 (VidSchiFlushPendingTokenList.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x140023930 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1400254A0 (VidSchiSubmitPresentHistoryToken.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1400272E8 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     ?VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x140029FAC (-VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     VidSchUnwaitFlipQueue @ 0x14002A240 (VidSchUnwaitFlipQueue.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x140034F40 (McTemplateK0pp_EtwWriteTransfer.c)
 *     McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer @ 0x14004313C (McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
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
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  _QWORD *v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  struct _VIDSCH_QUEUE_PACKET **v18; // rdx
  struct _VIDSCH_QUEUE_PACKET **v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // r8d
  unsigned int v27; // r10d
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  volatile signed __int32 *v35; // rcx
  int v36; // r12d
  __int64 v37; // r12
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  struct _KEVENT *v41; // rsi
  struct _KEVENT *v42; // r12
  int v43; // ecx
  BOOL v44; // eax
  struct _KEVENT **v45; // r12
  struct _KEVENT *j; // rsi
  int v47; // ecx
  BOOL v48; // eax
  struct _KEVENT *v49; // rsi
  KIRQL v50; // r12
  struct _KEVENT *v51; // rsi
  struct _KEVENT *v52; // r12
  int v53; // ecx
  BOOL v54; // eax
  unsigned __int64 v55; // rsi
  struct _KEVENT *v56; // r12
  int v57; // eax
  unsigned int v58; // eax
  int v59; // ecx
  __int64 v60; // r12
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  _QWORD *v64; // rax
  int v65; // eax
  struct _KLOCK_QUEUE_HANDLE *v66; // rdx
  KSPIN_LOCK *v67; // rcx
  unsigned __int64 *v68; // rax
  int v69; // ecx
  BOOL v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  struct _KEVENT *v73; // r12
  int v74; // ecx
  BOOL v75; // eax
  bool v76; // zf
  unsigned __int64 *v77; // rax
  struct _KEVENT *v78; // rcx
  void (__fastcall *v79)(_QWORD); // rax
  int v80; // eax
  unsigned int i; // ecx
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // r10
  unsigned int v86; // r9d
  int v87; // eax
  char v88; // cl
  int v89; // eax
  unsigned int v90; // r12d
  int v91; // eax
  char v92; // cl
  char v93; // r15
  __int64 v94; // r10
  __int64 v95; // r11
  __int64 v96; // r8
  __int64 v97; // rax
  __int64 v98; // rdx
  int v99; // eax
  __int64 v100; // rax
  KIRQL v101; // r12
  struct _KEVENT *v102; // r15
  int Flink; // ecx
  BOOL v104; // eax
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rcx
  _QWORD **v108; // rsi
  _QWORD *v109; // rdi
  _QWORD *v110; // rax
  _QWORD *v111; // rax
  struct _KEVENT *v113; // rcx
  __int64 v114; // rcx
  __int64 v115; // r9
  struct _KEVENT *v116; // rcx
  __int64 v117; // r8
  __int64 v118; // rcx
  __int64 v119; // rcx
  KIRQL v120; // [rsp+60h] [rbp-A0h]
  KIRQL v121; // [rsp+60h] [rbp-A0h]
  KIRQL v122; // [rsp+60h] [rbp-A0h]
  KIRQL v123; // [rsp+60h] [rbp-A0h]
  KIRQL v124; // [rsp+60h] [rbp-A0h]
  int v125; // [rsp+64h] [rbp-9Ch]
  __int64 v126; // [rsp+68h] [rbp-98h]
  int v127; // [rsp+68h] [rbp-98h]
  KIRQL v128; // [rsp+70h] [rbp-90h]
  __int64 v129; // [rsp+78h] [rbp-88h]
  unsigned int v130; // [rsp+78h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE v131; // [rsp+80h] [rbp-80h] BYREF
  __int64 v132; // [rsp+98h] [rbp-68h]
  __int64 v133; // [rsp+A0h] [rbp-60h]
  __int64 v134; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v135[2]; // [rsp+B0h] [rbp-50h] BYREF
  char v136; // [rsp+C0h] [rbp-40h]
  int v137; // [rsp+C4h] [rbp-3Ch]
  int v138; // [rsp+C8h] [rbp-38h]
  int v139; // [rsp+CCh] [rbp-34h]
  int v140; // [rsp+D0h] [rbp-30h]
  int v141; // [rsp+D4h] [rbp-2Ch]
  __int64 v142; // [rsp+D8h] [rbp-28h]
  __int64 v143; // [rsp+E0h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE v144; // [rsp+E8h] [rbp-18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v145; // [rsp+100h] [rbp+0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v146; // [rsp+118h] [rbp+18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v147; // [rsp+130h] [rbp+30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v148; // [rsp+148h] [rbp+48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v149; // [rsp+160h] [rbp+60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v150; // [rsp+178h] [rbp+78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v152[32]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v153; // [rsp+1D0h] [rbp+D0h]
  __int64 v154; // [rsp+1F0h] [rbp+F0h]
  __int64 v155; // [rsp+218h] [rbp+118h]

  v3 = *((_QWORD *)a1 + 11);
  v4 = 0;
  v125 = 0;
  v5 = *((_DWORD *)a1 + 16);
  LODWORD(v132) = 0;
  v7 = 0;
  v143 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = *(_QWORD *)(v3 + 96);
  v9 = *(_QWORD *)(v3 + 104);
  v133 = v9;
  v142 = v8;
  v10 = *(_QWORD *)(v8 + 24);
  if ( (v5 & 0x20) != 0 && (byte_140081241 & 1) != 0 )
  {
    v119 = *(_QWORD *)(v3 + 56);
    if ( !v119 || (*(_DWORD *)(v3 + 112) & 0x40) != 0 )
      v119 = v3;
    McTemplateK0pp_EtwWriteTransfer(v119, &AbortQueuePacket, a3, a1, v119);
  }
  if ( !*((_DWORD *)a1 + 12) )
  {
    v35 = (volatile signed __int32 *)*((_QWORD *)a1 + 96);
    if ( v35 )
    {
      if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
      {
        if ( !*(_QWORD *)v35 )
        {
          ExFreePoolWithTag((PVOID)v35, 0);
          *((_QWORD *)a1 + 96) = 0LL;
          goto LABEL_3;
        }
        ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v35, (PVOID)v35);
      }
      *((_QWORD *)a1 + 96) = 0LL;
    }
  }
LABEL_3:
  v128 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 1984), &LockHandle);
  v134 = v10;
  v136 = 0;
  v135[1] = v135;
  v135[0] = v135;
  v13 = *((_DWORD *)a1 + 20);
  v137 = 2;
  if ( (v13 & 0x10) != 0 )
  {
    *((_DWORD *)a1 + 20) = v13 & 0xFFFFFFEF;
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 96LL) + 16520LL) != -1 )
    {
      v79 = *(void (__fastcall **)(_QWORD))(v10 + 3320);
      if ( v79 )
        v79(*(_QWORD *)(v10 + 3352));
    }
  }
  if ( *((_DWORD *)a1 + 13) == 16 || !*((_DWORD *)a1 + 13) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 512LL, v10, v3, a1);
    WdLogGlobalForLineNumber = 906;
    JUMPOUT(0x14001556ELL);
  }
  if ( (*((_DWORD *)a1 + 20) & 0x20) != 0 )
  {
    v14 = (_QWORD *)*((_QWORD *)a1 + 11);
    v15 = v14[13];
    v16 = *(_QWORD *)(v14[12] + 24LL);
    v17 = v14[20];
    v126 = v16;
    if ( v17 && *((_QWORD *)a1 + 14) <= v17 )
    {
      if ( !*(_BYTE *)(v15 + 204)
        && !_InterlockedCompareExchange((volatile signed __int32 *)(v15 + 200), 0, 0)
        && (*(_BYTE *)(v16 + 3268) & 1) == 0 )
      {
        v114 = v14[20];
        v115 = *((_QWORD *)a1 + 14);
        g_DxgMmsBugcheckExportIndex = 1;
        LOBYTE(v80) = WdLogSingleEntry5(0LL, 281LL, 1792LL, v115, v114, 0LL);
        WdLogGlobalForLineNumber = 906;
        goto LABEL_275;
      }
      WdLogSingleEntry1(4LL, *((_QWORD *)a1 + 14));
      WdLogGlobalForLineNumber = 12018;
    }
    else
    {
      if ( *(_BYTE *)(v15 + 204)
        || _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 200), 0, 0)
        || (*(_BYTE *)(v16 + 3268) & 1) != 0 )
      {
        WdLogSingleEntry2(4LL, a1, *((_QWORD *)a1 + 14));
        WdLogGlobalForLineNumber = 12037;
      }
      else
      {
        WdLogSingleEntry3(4LL, a1, *((_QWORD *)a1 + 14), v14[20]);
        WdLogGlobalForLineNumber = 12046;
      }
      *(_QWORD *)(*((_QWORD *)a1 + 11) + 160LL) = *((_QWORD *)a1 + 14);
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL) + 1832LL) )
        VidSchUnwaitFlipQueue(&v134, v126);
    }
  }
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 13) = 16;
  v18 = (struct _VIDSCH_QUEUE_PACKET **)*((_QWORD *)a1 + 4);
  if ( v18[1] != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32) )
    goto LABEL_114;
  v19 = (struct _VIDSCH_QUEUE_PACKET **)*((_QWORD *)a1 + 5);
  if ( *v19 != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32) )
    goto LABEL_114;
  *v19 = (struct _VIDSCH_QUEUE_PACKET *)v18;
  v18[1] = (struct _VIDSCH_QUEUE_PACKET *)v19;
  v20 = *(_QWORD *)(v3 + 664);
  if ( v20 != v3 + 664 )
  {
    v21 = v20 - 32;
    v22 = *(_DWORD *)(v20 + 48);
    if ( (v22 & 3) == 1 )
    {
      v143 = v21;
      *(_DWORD *)(v21 + 80) = v22 | 2;
    }
    if ( (*(_DWORD *)(v3 + 184) & 0x200) == 0
      || (((unsigned __int8)(*(_DWORD *)(v3 + 184) >> 9) | *(_BYTE *)(v3 + 184)) & 2) != 0 )
    {
      goto LABEL_21;
    }
    v34 = 13963LL;
    goto LABEL_264;
  }
  if ( (*(_DWORD *)(v3 + 184) & 0x200) != 0 )
  {
    v34 = 13982LL;
LABEL_264:
    v33 = 10LL;
    goto LABEL_51;
  }
  if ( (*(_DWORD *)(v3 + 184) & 0x10) != 0
    || (*(_DWORD *)(v3 + 184) & 0x40) != 0
    || (*(_DWORD *)(v3 + 184) & 0x100) != 0 )
  {
    goto LABEL_21;
  }
  v33 = 0LL;
  v34 = 14015LL;
LABEL_51:
  VidSchiUpdateContextStatus(v3, v33, v34);
LABEL_21:
  v23 = *((_DWORD *)a1 + 12);
  if ( v23 != 5 )
  {
    if ( v23 == 3 )
      VidSchiReleaseFlipFencesReference(
        (struct _VIDSCH_GLOBAL *)v10,
        (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 1352));
    goto LABEL_24;
  }
  if ( (*((_DWORD *)a1 + 20) & 4) != 0 )
    goto LABEL_24;
  v30 = *((unsigned int *)a1 + 188);
  if ( (((v30 & 0x10) != 0) & ((unsigned __int8)byte_140081243 >> 7)) != 0 )
  {
    v117 = *((_QWORD *)a1 + 11);
    if ( v117 )
    {
      v118 = *(_QWORD *)(v117 + 56);
      if ( !v118 || (*(_DWORD *)(v117 + 112) & 0x40) != 0 )
        LODWORD(v118) = *((_QWORD *)a1 + 11);
    }
    else
    {
      v118 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 48LL);
      if ( !v118 )
        v118 = *((_QWORD *)a1 + 12);
    }
    McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer(
      v118,
      v30,
      v117,
      1,
      v118,
      *((_DWORD *)a1 + 28),
      v30,
      *((_DWORD *)a1 + 189),
      (__int64)a1 + 760,
      (__int64)a1 + 1016,
      (char)a1);
  }
  v31 = *((_QWORD *)a1 + 159);
  v129 = *(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL);
  if ( v31 )
  {
    *(_QWORD *)(v31 + 1280) = *((_QWORD *)a1 + 160);
    goto LABEL_43;
  }
  if ( *((_QWORD *)a1 + 160) )
  {
LABEL_43:
    v32 = *((_QWORD *)a1 + 160);
    if ( v32 )
      *(_QWORD *)(v32 + 1272) = *((_QWORD *)a1 + 159);
    *((_QWORD *)a1 + 159) = 0LL;
    *((_QWORD *)a1 + 160) = 0LL;
    goto LABEL_162;
  }
  if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
  {
    TraceDxgkSignalSynchronizationObjectArrays::TraceDxgkSignalSynchronizationObjectArrays(
      (TraceDxgkSignalSynchronizationObjectArrays *)v152,
      *((_DWORD *)a1 + 189),
      (const struct _VIDSCH_SYNC_OBJECT *const *)a1 + 95,
      (char *)a1 + 1016);
    if ( v153 && v154 && v155 && Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0qPR0PR0XR0TR0qpp_EtwWriteTransfer();
    TraceDxgkSignalSynchronizationObjectArrays::~TraceDxgkSignalSynchronizationObjectArrays((TraceDxgkSignalSynchronizationObjectArrays *)v152);
  }
  v80 = *((_DWORD *)a1 + 188);
  if ( (v80 & 2) == 0 )
  {
    if ( *((_DWORD *)a1 + 189) )
    {
      do
      {
        VidSchiCompleteSignalSyncObject(
          (HwQueueStagingList *)&v134,
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
  v116 = (struct _KEVENT *)*((_QWORD *)a1 + 127);
  if ( (v80 & 8) != 0 )
  {
    ((void (__fastcall *)(struct _KEVENT *, _QWORD))DxgCoreInterface[72])(v116, 0LL);
  }
  else
  {
    KeSetEvent(v116, 0, 0);
    ObfDereferenceObject(*((PVOID *)a1 + 127));
  }
  *((_QWORD *)a1 + 127) = 0LL;
LABEL_162:
  *((_DWORD *)a1 + 20) |= 4u;
  if ( (*((_DWORD *)a1 + 188) & 2) == 0 && *((_DWORD *)a1 + 189) )
  {
    do
      VidSchiReleaseSyncObjectReference(*((char **)a1 + v4++ + 95), v30);
    while ( v4 < *((_DWORD *)a1 + 189) );
  }
  VidSchiCheckPendingDeviceCommand(v129, v30, v11, v12);
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
      v82 = *((_QWORD *)a1 + i + 120);
      *((_QWORD *)a1 + i + 120) = 0LL;
      if ( v82 )
        _InterlockedDecrement((volatile signed __int32 *)(v82 + 104));
    }
  }
  v24 = *((unsigned int *)a1 + 18);
  v25 = *((_DWORD *)a1 + 18) & 0x4000;
  if ( (*((_DWORD *)a1 + 18) & 0x40020) != 0x40000 && !v25 )
  {
    v36 = 0;
    goto LABEL_57;
  }
  if ( (v24 & 0x400) == 0 || (v26 = 0, (v24 & 0x800) != 0) )
    v26 = 1;
  v27 = *((_DWORD *)a1 + 42);
  v130 = v27;
  v127 = v26;
  if ( (v24 & 0x40000) != 0 )
  {
    v7 = v26;
    if ( !v25 )
      v7 = 0;
LABEL_208:
    if ( !v7 )
      goto LABEL_210;
    goto LABEL_209;
  }
  if ( (v24 & 4) == 0 )
  {
LABEL_207:
    v7 = v26;
    goto LABEL_208;
  }
  if ( *((_DWORD *)a1 + 218) == 1 )
  {
    v125 = v26;
    goto LABEL_207;
  }
  if ( (*((_DWORD *)a1 + 16) & 2) != 0 )
    goto LABEL_212;
  if ( !v26 )
    goto LABEL_35;
  v7 = 1;
  v125 = 1;
  LODWORD(v132) = 1;
LABEL_209:
  LOBYTE(v24) = 1;
  VidSchiUpdateLastCompletedPresentTimestamp(*((_QWORD *)a1 + 11), v24, 0LL);
  v27 = v130;
LABEL_210:
  if ( (_DWORD)v132 )
  {
LABEL_35:
    if ( (*((_DWORD *)a1 + 338) & 0x3FF) != 0 )
    {
      v28 = *(unsigned int *)(v3 + 88);
      v29 = *(_QWORD *)(v10 + 688);
      if ( (unsigned int)v28 < *(_DWORD *)(v10 + 760) )
        v29 += 8 * v28;
      VidSchiUnreferencePrimaryAllocations(
        (struct HwQueueStagingList *)&v134,
        (struct _VIDSCH_GLOBAL *)v10,
        v27,
        (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 1352),
        *((_DWORD *)a1 + 222),
        1 << *(_BYTE *)(*(_QWORD *)v29 + 6LL),
        0,
        0);
    }
  }
  if ( v7 && v130 != -1 && (*((_DWORD *)a1 + 18) & 0x40000) == 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 4LL * v130 + 1700));
    v105 = *(_QWORD *)(v9 + 32);
    v132 = v130;
    v106 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 40) + 32LL) + 8LL * *(unsigned int *)(v105 + 4))
                     + 8LL * v130
                     + 88);
    if ( (*((_DWORD *)a1 + 18) & 0x80u) == 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 8LL * v130 + 6712) + 8LL));
      ++**(_DWORD **)(v10 + 8LL * v130 + 6712);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v106 + 8));
    ++*(_DWORD *)v106;
    if ( (*((_DWORD *)a1 + 18) & 0x20000) != 0 )
    {
      memset(&v144, 0, sizeof(v144));
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 1992), &v144);
      v107 = v132;
      *(_DWORD *)(v9 + 4 * v132 + 508) = *((_DWORD *)a1 + 216);
      *(_QWORD *)(v9 + 8 * v107 + 576) = *((_QWORD *)a1 + 17);
      *(_QWORD *)(v9 + 8 * v107 + 704) = *((_QWORD *)a1 + 18);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v144);
    }
  }
LABEL_212:
  if ( (*((_DWORD *)a1 + 18) & 0x40080) != 0 && *((_QWORD *)a1 + 19) && *((_QWORD *)a1 + 20) && v127 )
    VidSchiSubmitPresentHistoryToken((unsigned int)&v134, (_DWORD)a1, 0, 0, 0LL);
  if ( v125 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 792));
    if ( *(_BYTE *)(v10 + 2468) )
      v100 = v10 + 4LL * v130;
    else
      v100 = v10;
    _InterlockedDecrement((volatile signed __int32 *)(v100 + 796));
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 1828));
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 4LL * v130 + 1764));
  }
  memset(&v145, 0, sizeof(v145));
  v101 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 2000), &v145);
  if ( *(_QWORD *)(v10 + 1944) != v10 + 1944 )
  {
    v102 = *(struct _KEVENT **)(v10 + 1944);
    while ( 1 )
    {
      if ( LODWORD(v102->Header.WaitListHead.Blink) == 4 )
      {
        v104 = *(_DWORD *)(*(_QWORD *)&v102[1].Header.Lock + 4LL * LODWORD(v102[1].Header.WaitListHead.Blink) + 1700) < *(_DWORD *)(*(_QWORD *)&v102[1].Header.Lock + 244LL);
      }
      else
      {
        if ( ((__int64)v102[1].Header.WaitListHead.Flink & 0x10) == 0 )
          goto LABEL_229;
        Flink = (int)v102[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v102[5].Header.WaitListHead.Blink) = Flink;
        v104 = Flink == 0;
      }
      if ( v104 )
      {
LABEL_229:
        ++v102[5].Header.LockNV;
        KeSetEvent(v102 + 4, 0, 0);
      }
      v102 = *(struct _KEVENT **)&v102->Header.Lock;
      if ( v102 == (struct _KEVENT *)(v10 + 1944) )
      {
        v8 = v142;
        break;
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v145);
  KeLowerIrql(v101);
  v36 = v125;
  if ( !v7 )
  {
LABEL_57:
    if ( !*((_DWORD *)a1 + 12) )
      VidSchiUpdateLastCompletedPresentTimestamp(v3, 0LL, 0LL);
  }
  if ( *((_DWORD *)a1 + 12) == 3 && *((_DWORD *)a1 + 42) != -1 )
  {
    v83 = *((_QWORD *)a1 + 11);
    if ( v83 )
      v84 = *(_QWORD *)(v83 + 104);
    else
      v84 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 40LL) + 8LL);
    v85 = *(_QWORD *)(v84 + 32);
    if ( (*((_DWORD *)a1 + 18) & 0x800000) != 0 )
      v86 = ((unsigned __int16)*((_DWORD *)a1 + 338) | (unsigned __int16)(*((_DWORD *)a1 + 338) >> 10)) & 0x3FF;
    else
      v86 = (1 << *(_DWORD *)(v85 + 152)) - 1;
    v76 = !_BitScanForward((unsigned int *)&v87, v86);
    v88 = -1;
    v138 = v87;
    if ( !v76 )
      v88 = v87;
    if ( v86 )
    {
      do
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v85 + 8LL * *((unsigned int *)a1 + 42) + 3432)
                                                        + 304LL * v88
                                                        + 192));
        v89 = 1 << v88;
        v88 = -1;
        v86 &= ~v89;
        v76 = !_BitScanForward((unsigned int *)&v89, v86);
        v139 = v89;
        if ( !v76 )
          v88 = v89;
      }
      while ( v86 );
      v125 = v36;
    }
    if ( (*((_DWORD *)a1 + 18) & 0x800000) != 0 )
      v90 = ((unsigned __int16)*((_DWORD *)a1 + 338) | (unsigned __int16)(*((_DWORD *)a1 + 338) >> 10)) & 0x3FF;
    else
      v90 = (1 << *(_DWORD *)(v10 + 152)) - 1;
    v76 = !_BitScanForward((unsigned int *)&v91, v90);
    v92 = -1;
    v140 = v91;
    if ( !v76 )
      v92 = v91;
    if ( v90 )
    {
      v93 = v92;
      do
      {
        v94 = *((unsigned int *)a1 + 42);
        v95 = *(_QWORD *)(v10 + 8 * v94 + 3432);
        v96 = *(int *)(304LL * (unsigned int)v93 + v95 + 188);
        if ( (int)v96 > -1 )
        {
          v97 = *(_QWORD *)(v10 + 3560);
          if ( *(_DWORD *)(160 * v96 + v97 + 112) == 1 && (_DWORD)v94 != -1 )
          {
            v98 = v97 + 160 * v96;
            if ( !v98
              || *(_BYTE *)(v98 + 98)
              && !*(_DWORD *)(304LL * (unsigned int)v93 + v95 + 192)
              && *(_BYTE *)(v98 + 96)
              && !*(_DWORD *)(304LL * (unsigned int)v93 + v95 + 196) )
            {
              VidSchiFlushPendingTokenList((struct HwQueueStagingList *)&v134, (struct _VIDSCH_GLOBAL *)v10);
            }
          }
        }
        v99 = 1 << v93;
        v93 = -1;
        v90 &= ~v99;
        v76 = !_BitScanForward((unsigned int *)&v99, v90);
        v141 = v99;
        if ( !v76 )
          v93 = v99;
      }
      while ( v90 );
      v8 = v142;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(v10 + 780));
  _InterlockedDecrement((volatile signed __int32 *)(v8 + 3012));
  v37 = v133;
  _InterlockedDecrement((volatile signed __int32 *)(v133 + 1836));
  if ( (unsigned int)(*((_DWORD *)a1 + 12) - 4) > 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v133 + 1840));
  if ( !*((_DWORD *)a1 + 12) && (*((_DWORD *)a1 + 18) & 4) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 8LL * *((unsigned int *)a1 + 42) + 3432) + 3244LL));
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 784));
  VidSchiProfilePerformanceTick(9, v10, v8, 0, 0LL, (__int64)a1, 0LL, 0LL);
  VidSchiCheckPendingDeviceCommand(v133, v38, v39, v40);
  if ( v7 )
  {
    v41 = (struct _KEVENT *)(v133 + 120);
    memset(&v146, 0, sizeof(v146));
    v120 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 2000), &v146);
    v42 = *(struct _KEVENT **)(v133 + 120);
    if ( *(struct _KEVENT **)&v41->Header.Lock != v41 )
    {
      do
      {
        if ( LODWORD(v42->Header.WaitListHead.Blink) == 4 )
        {
          v44 = *(_DWORD *)(*(_QWORD *)&v42[1].Header.Lock + 4LL * LODWORD(v42[1].Header.WaitListHead.Blink) + 1700) < *(_DWORD *)(*(_QWORD *)&v42[1].Header.Lock + 244LL);
        }
        else
        {
          if ( ((__int64)v42[1].Header.WaitListHead.Flink & 0x10) == 0 )
            goto LABEL_69;
          v43 = (int)v42[1].Header.WaitListHead.Blink->Flink;
          HIDWORD(v42[5].Header.WaitListHead.Blink) = v43;
          v44 = v43 == 0;
        }
        if ( v44 )
        {
LABEL_69:
          ++v42[5].Header.LockNV;
          KeSetEvent(v42 + 4, 0, 0);
        }
        v42 = *(struct _KEVENT **)&v42->Header.Lock;
      }
      while ( v42 != v41 );
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v146);
    KeLowerIrql(v120);
    v37 = v133;
  }
  if ( !v125 )
    goto LABEL_82;
  memset(&v147, 0, sizeof(v147));
  v45 = (struct _KEVENT **)(v37 + 136);
  v121 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 2000), &v147);
  for ( j = *v45; j != (struct _KEVENT *)v45; j = *(struct _KEVENT **)&j->Header.Lock )
  {
    if ( LODWORD(j->Header.WaitListHead.Blink) == 4 )
    {
      v48 = *(_DWORD *)(*(_QWORD *)&j[1].Header.Lock + 4LL * LODWORD(j[1].Header.WaitListHead.Blink) + 1700) < *(_DWORD *)(*(_QWORD *)&j[1].Header.Lock + 244LL);
    }
    else
    {
      if ( ((__int64)j[1].Header.WaitListHead.Flink & 0x10) == 0 )
        goto LABEL_78;
      v47 = (int)j[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(j[5].Header.WaitListHead.Blink) = v47;
      v48 = v47 == 0;
    }
    if ( v48 )
    {
LABEL_78:
      ++j[5].Header.LockNV;
      KeSetEvent(j + 4, 0, 0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v147);
  KeLowerIrql(v121);
  v49 = (struct _KEVENT *)(v10 + 1928);
  memset(&v148, 0, sizeof(v148));
  v122 = KfRaiseIrql(2u);
  v50 = v122;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 2000), &v148);
  if ( *(struct _KEVENT **)&v49->Header.Lock == v49 )
    goto LABEL_81;
  v73 = *(struct _KEVENT **)&v49->Header.Lock;
  do
  {
    if ( LODWORD(v73->Header.WaitListHead.Blink) == 4 )
    {
      v75 = *(_DWORD *)(*(_QWORD *)&v73[1].Header.Lock + 4LL * LODWORD(v73[1].Header.WaitListHead.Blink) + 1700) < *(_DWORD *)(*(_QWORD *)&v73[1].Header.Lock + 244LL);
LABEL_134:
      if ( !v75 )
        goto LABEL_136;
      goto LABEL_135;
    }
    if ( ((__int64)v73[1].Header.WaitListHead.Flink & 0x10) != 0 )
    {
      v74 = (int)v73[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(v73[5].Header.WaitListHead.Blink) = v74;
      v75 = v74 == 0;
      goto LABEL_134;
    }
LABEL_135:
    ++v73[5].Header.LockNV;
    KeSetEvent(v73 + 4, 0, 0);
LABEL_136:
    v73 = *(struct _KEVENT **)&v73->Header.Lock;
  }
  while ( v73 != v49 );
  v50 = v122;
LABEL_81:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v148);
  KeLowerIrql(v50);
  *(_QWORD *)(v10 + 1872) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v10 + 1840), 0, 0);
LABEL_82:
  v51 = (struct _KEVENT *)(v8 + 424);
  memset(&v149, 0, sizeof(v149));
  v123 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 2000), &v149);
  v52 = *(struct _KEVENT **)(v8 + 424);
  if ( *(struct _KEVENT **)&v51->Header.Lock != v51 )
  {
    while ( 2 )
    {
      if ( LODWORD(v52->Header.WaitListHead.Blink) != 4 )
      {
        if ( ((__int64)v52[1].Header.WaitListHead.Flink & 0x10) != 0 )
        {
          v53 = (int)v52[1].Header.WaitListHead.Blink->Flink;
          HIDWORD(v52[5].Header.WaitListHead.Blink) = v53;
          v54 = v53 == 0;
          goto LABEL_86;
        }
        goto LABEL_87;
      }
      v54 = *(_DWORD *)(*(_QWORD *)&v52[1].Header.Lock + 4LL * LODWORD(v52[1].Header.WaitListHead.Blink) + 1700) < *(_DWORD *)(*(_QWORD *)&v52[1].Header.Lock + 244LL);
LABEL_86:
      if ( v54 )
      {
LABEL_87:
        ++v52[5].Header.LockNV;
        KeSetEvent(v52 + 4, 0, 0);
      }
      v52 = *(struct _KEVENT **)&v52->Header.Lock;
      if ( v52 == v51 )
        break;
      continue;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v149);
  KeLowerIrql(v123);
  v55 = v10 + 1912;
  memset(&v150, 0, sizeof(v150));
  v124 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 2000), &v150);
  v56 = *(struct _KEVENT **)(v10 + 1912);
  if ( *(_QWORD *)v55 != v55 )
  {
    do
    {
      if ( LODWORD(v56->Header.WaitListHead.Blink) == 4 )
      {
        v70 = *(_DWORD *)(*(_QWORD *)&v56[1].Header.Lock + 4LL * LODWORD(v56[1].Header.WaitListHead.Blink) + 1700) < *(_DWORD *)(*(_QWORD *)&v56[1].Header.Lock + 244LL);
      }
      else
      {
        if ( ((__int64)v56[1].Header.WaitListHead.Flink & 0x10) == 0 )
          goto LABEL_121;
        v69 = (int)v56[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v56[5].Header.WaitListHead.Blink) = v69;
        v70 = v69 == 0;
      }
      if ( v70 )
      {
LABEL_121:
        ++v56[5].Header.LockNV;
        KeSetEvent(v56 + 4, 0, 0);
      }
      v56 = *(struct _KEVENT **)&v56->Header.Lock;
    }
    while ( v56 != (struct _KEVENT *)v55 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v150);
  KeLowerIrql(v124);
  *(_QWORD *)(v8 + 328) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v8 + 296), 0, 0);
  *(_QWORD *)(v10 + 1760) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v10 + 1728), 0, 0);
  if ( (*((_DWORD *)a1 + 16) & 1) == 0 )
  {
    v57 = *((_DWORD *)a1 + 12);
    if ( !v57 || v57 == 7 )
    {
      v78 = (struct _KEVENT *)*((_QWORD *)a1 + 105);
      if ( v78 )
      {
        KeSetEvent(v78, 0, 0);
        ObfDereferenceObject(*((PVOID *)a1 + 105));
      }
    }
    else if ( v57 == 6 )
    {
      v113 = (struct _KEVENT *)*((_QWORD *)a1 + 98);
      if ( v113 )
        KeSetEvent(v113, 0, 0);
    }
  }
  v58 = *((_DWORD *)a1 + 12);
  if ( v58 > 7 )
    goto LABEL_105;
  v59 = 137;
  if ( !_bittest(&v59, v58) )
    goto LABEL_105;
  LODWORD(v60) = -1;
  if ( *(_BYTE *)(v3 + 909) )
    goto LABEL_102;
  v55 = 0LL;
  if ( !*(_DWORD *)(v10 + 152) )
    goto LABEL_102;
LABEL_98:
  v8 = (unsigned int)v55 * ((8 * *((_DWORD *)a1 + 340) + 231) & 0xFFFFFFF8);
  v61 = *(_QWORD *)((char *)a1 + v8 + 1552);
  if ( !v61 )
    goto LABEL_101;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v61 + 12), v60) == 1 )
  {
    if ( *(_QWORD *)v61 )
    {
      ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v61, (PVOID)v61);
      goto LABEL_100;
    }
    goto LABEL_129;
  }
LABEL_100:
  while ( 1 )
  {
    *(_QWORD *)((char *)a1 + v8 + 1552) = 0LL;
LABEL_101:
    v55 = (unsigned int)(v55 + 1);
    if ( (unsigned int)v55 < *(_DWORD *)(v10 + 152) )
      goto LABEL_98;
LABEL_102:
    v62 = *((_QWORD *)a1 + 98);
    if ( v62 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v62 + 12), v60) == 1 )
      {
        if ( *(_QWORD *)v62 )
          ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v62, (PVOID)v62);
        else
          ExFreePoolWithTag((PVOID)v62, 0);
      }
      *((_QWORD *)a1 + 98) = 0LL;
    }
LABEL_105:
    v60 = *(_QWORD *)(*(_QWORD *)(v3 + 96) + 24LL);
    if ( *(_BYTE *)(v60 + 7059) )
    {
      if ( *((_DWORD *)a1 + 12) == 4 )
      {
        *((LARGE_INTEGER *)a1 + 7 * *((unsigned int *)a1 + 186) + 37) = KeQueryPerformanceCounter(0LL);
        *((_DWORD *)a1 + 14 * *((unsigned int *)a1 + 186) + 76) = *((_DWORD *)a1 + 12);
        RtlCaptureStackBackTrace(1u, 5u, (PVOID *)a1 + 7 * *((unsigned int *)a1 + 186) + 39, 0LL);
        v76 = *((_QWORD *)a1 + 96) == 0LL;
        *((_DWORD *)a1 + 186) = ((unsigned __int8)*((_DWORD *)a1 + 186) + 1) & 7;
        if ( !v76 || *((_QWORD *)a1 + 97) || *((_QWORD *)a1 + 22) || *((_QWORD *)a1 + 23) )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 281LL, 61440LL, v60, a1, 0LL);
          WdLogGlobalForLineNumber = 906;
          goto LABEL_143;
        }
      }
    }
    if ( *((_DWORD *)a1 + 12) )
      break;
    v71 = *((_QWORD *)a1 + 137);
    if ( !v71 && !*((_QWORD *)a1 + 36) )
      break;
    v72 = *((_QWORD *)a1 + 36);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 2560LL, a1, v71, v72);
    WdLogGlobalForLineNumber = 906;
LABEL_129:
    ExFreePoolWithTag((PVOID)v61, 0);
  }
  WdLogSingleEntry2(4LL, a1, v3);
  WdLogGlobalForLineNumber = 19489;
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 13) = 0;
  v55 = (unsigned __int64)a1 + 8;
  memset(&v131, 0, sizeof(v131));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v60 + 1992), &v131);
  v63 = *((_QWORD *)a1 + 1);
  if ( *(_QWORD *)(*(_QWORD *)v55 + 8LL) != v55 || (v64 = (_QWORD *)*((_QWORD *)a1 + 2), *v64 != v55) )
LABEL_114:
    __fastfail(3u);
  *v64 = v63;
  *(_QWORD *)(v63 + 8) = v64;
  if ( v3 != -776 )
    --*(_DWORD *)(v3 + 776);
  KeReleaseInStackQueuedSpinLock(&v131);
  v65 = *((_DWORD *)a1 + 16);
  v66 = &v131;
  v67 = (KSPIN_LOCK *)(v60 + 1992);
  v131.LockQueue = 0LL;
  if ( (v65 & 0x40) != 0 )
  {
LABEL_143:
    *(_QWORD *)&v131.OldIrql = 0LL;
    KeAcquireInStackQueuedSpinLock(v67, v66);
    v77 = *(unsigned __int64 **)(v3 + 744);
    if ( *v77 == v3 + 736 )
    {
      *(_QWORD *)(v55 + 8) = v77;
      *(_QWORD *)v55 = v3 + 736;
      *v77 = v55;
      *(_QWORD *)(v3 + 744) = v55;
      if ( v3 != -752 )
        ++*(_DWORD *)(v3 + 752);
      goto LABEL_243;
    }
    goto LABEL_114;
  }
  *(_QWORD *)&v131.OldIrql = 0LL;
  KeAcquireInStackQueuedSpinLock(v67, &v131);
  v68 = *(unsigned __int64 **)(v3 + 720);
  if ( *v68 != v3 + 712 )
    goto LABEL_114;
  *(_QWORD *)v55 = v3 + 712;
  *((_QWORD *)a1 + 2) = v68;
  *v68 = v55;
  *(_QWORD *)(v3 + 720) = v55;
  if ( v3 != -728 )
    ++*(_DWORD *)(v3 + 728);
LABEL_243:
  KeReleaseInStackQueuedSpinLock(&v131);
  if ( (*((_DWORD *)a1 + 16) & 0x40) == 0 )
  {
    v108 = (_QWORD **)(v3 + 712);
    while ( 1 )
    {
      memset(&v131, 0, sizeof(v131));
      v109 = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v60 + 1992), &v131);
      v110 = *v108;
      if ( *v108 == v108 )
        break;
      if ( *(_DWORD *)(v3 + 728) > 0x10u )
      {
        v109 = *v108;
        if ( (_QWORD **)v110[1] != v108 )
          goto LABEL_114;
        v111 = (_QWORD *)*v110;
        if ( (_QWORD *)v111[1] != v109 )
          goto LABEL_114;
        *v108 = v111;
        v111[1] = v108;
        --*(_DWORD *)(v3 + 728);
      }
      KeReleaseInStackQueuedSpinLock(&v131);
      if ( !v109 )
        goto LABEL_251;
      ExFreePoolWithTag(v109 - 1, 0);
    }
    KeReleaseInStackQueuedSpinLock(&v131);
  }
LABEL_251:
  HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v134, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v128);
  if ( !v136 && v137 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v134, 0LL);
  return (struct _VIDSCH_QUEUE_PACKET *)v143;
}
