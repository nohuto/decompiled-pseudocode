/*
 * XREFs of CcMapAndCopyInToCache @ 0x1404D6C60
 * Callers:
 *     CcCopyWriteEx @ 0x14049CDC0 (CcCopyWriteEx.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14020D960 (IoDiskIoAttributionDereference.c)
 *     CcDecrementVacbActiveCount @ 0x140227AE0 (CcDecrementVacbActiveCount.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     CcGetVirtualAddress @ 0x140229480 (CcGetVirtualAddress.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     MmCheckCachedPageStates @ 0x140236420 (MmCheckCachedPageStates.c)
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     IoReferenceIoAttributionFromThread @ 0x140273BD0 (IoReferenceIoAttributionFromThread.c)
 *     CcFlushCachePriv @ 0x1402771F0 (CcFlushCachePriv.c)
 *     CcFreeWorkQueueEntry @ 0x140279C5C (CcFreeWorkQueueEntry.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiLockSectionControlArea @ 0x1402BED40 (MiLockSectionControlArea.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402C9EF0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     CcWrapperMmCopyToCachedPage @ 0x14034F040 (CcWrapperMmCopyToCachedPage.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     CcCopyToCacheHelper @ 0x140404EC0 (CcCopyToCacheHelper.c)
 *     CcLockSystemCacheBuffer @ 0x1404051E8 (CcLockSystemCacheBuffer.c)
 *     CcForceWriteThrough @ 0x14040C010 (CcForceWriteThrough.c)
 *     FsRtlNormalizeNtstatus @ 0x14044B3A0 (FsRtlNormalizeNtstatus.c)
 *     CcSetDirtyInMask @ 0x140456AF0 (CcSetDirtyInMask.c)
 *     CcCopyReadExceptionFilter @ 0x1404AE4E0 (CcCopyReadExceptionFilter.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall CcMapAndCopyInToCache(
        __int64 a1,
        char *a2,
        _DWORD *a3,
        __int64 a4,
        int a5,
        PFILE_OBJECT FileObject,
        _QWORD *a7,
        char a8,
        struct _KTHREAD *a9,
        LARGE_INTEGER *a10)
{
  __int64 v10; // r15
  char v11; // r13
  struct _KTHREAD *CurrentThread; // rdx
  int v13; // esi
  _SLIST_ENTRY *v14; // rbx
  bool v15; // zf
  int v16; // r12d
  __int64 v17; // r8
  char v18; // al
  unsigned int v20; // eax
  __int64 v21; // rdi
  _QWORD *v22; // rdx
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v24; // rax
  struct _KTHREAD *v25; // rax
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rcx
  unsigned __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rbx
  unsigned int v34; // edi
  int v35; // r13d
  char *VirtualAddress; // r10
  unsigned int v37; // eax
  unsigned int v38; // r15d
  char *v39; // r10
  unsigned int v40; // r14d
  int v41; // eax
  int v42; // ebx
  bool v43; // r12
  unsigned int v44; // ecx
  NTSTATUS v45; // edi
  int v46; // eax
  char v47; // al
  unsigned int v48; // edi
  unsigned int v49; // eax
  NTSTATUS v50; // eax
  char v51; // al
  char v52; // r14
  struct _KTHREAD *v53; // rcx
  struct _MDL *v54; // r14
  char *v55; // rdx
  int v56; // eax
  int v57; // edi
  ULONG v58; // r8d
  char *v59; // rdx
  int v60; // r9d
  unsigned int v61; // edx
  struct _KTHREAD *v62; // rcx
  __int64 v63; // rbx
  struct _KEVENT *v64; // rcx
  int v65; // ecx
  unsigned int v66; // r8d
  struct _KTHREAD *v67; // rdx
  __int64 v68; // rdi
  struct _KEVENT *v69; // rcx
  NTSTATUS v70; // ecx
  int v71; // r8d
  __int64 v72; // rdx
  volatile __int64 *v73; // rbx
  unsigned __int8 CurrentIrql; // di
  _QWORD *v75; // rdx
  NTSTATUS v76; // eax
  NTSTATUS v77; // eax
  NTSTATUS v78; // eax
  char v79; // [rsp+78h] [rbp-128h]
  char v80; // [rsp+79h] [rbp-127h]
  bool v81; // [rsp+7Ah] [rbp-126h] BYREF
  char v82; // [rsp+7Bh] [rbp-125h]
  bool v83; // [rsp+7Ch] [rbp-124h]
  char v84; // [rsp+7Dh] [rbp-123h]
  char v85; // [rsp+7Eh] [rbp-122h] BYREF
  char v86; // [rsp+7Fh] [rbp-121h] BYREF
  char v87; // [rsp+80h] [rbp-120h]
  char v88; // [rsp+81h] [rbp-11Fh]
  unsigned __int8 v89; // [rsp+82h] [rbp-11Eh] BYREF
  char v90; // [rsp+83h] [rbp-11Dh]
  int v91; // [rsp+84h] [rbp-11Ch]
  char v92; // [rsp+88h] [rbp-118h]
  char v93; // [rsp+89h] [rbp-117h]
  unsigned int v94; // [rsp+8Ch] [rbp-114h]
  unsigned int v95; // [rsp+90h] [rbp-110h] BYREF
  ULONG v96; // [rsp+94h] [rbp-10Ch]
  NTSTATUS v97; // [rsp+98h] [rbp-108h]
  __int64 v98; // [rsp+A0h] [rbp-100h] BYREF
  int v99; // [rsp+A8h] [rbp-F8h]
  char *v100; // [rsp+B0h] [rbp-F0h]
  __int64 v101; // [rsp+B8h] [rbp-E8h] BYREF
  int v102; // [rsp+C0h] [rbp-E0h]
  unsigned int v103; // [rsp+C4h] [rbp-DCh]
  int v104; // [rsp+C8h] [rbp-D8h]
  unsigned int v105; // [rsp+CCh] [rbp-D4h]
  NTSTATUS Status; // [rsp+D0h] [rbp-D0h] BYREF
  unsigned int v107; // [rsp+D4h] [rbp-CCh]
  NTSTATUS Exception[4]; // [rsp+D8h] [rbp-C8h] BYREF
  __int64 v109; // [rsp+E8h] [rbp-B8h] BYREF
  struct _KTHREAD *v110; // [rsp+F0h] [rbp-B0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+F8h] [rbp-A8h] BYREF
  int v112; // [rsp+110h] [rbp-90h]
  NTSTATUS v113; // [rsp+114h] [rbp-8Ch]
  unsigned int v114; // [rsp+118h] [rbp-88h]
  int v115; // [rsp+11Ch] [rbp-84h]
  struct _MDL *v116; // [rsp+120h] [rbp-80h] BYREF
  __int64 v117; // [rsp+128h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE v118; // [rsp+130h] [rbp-70h] BYREF
  int v119; // [rsp+148h] [rbp-58h]
  __int64 v120; // [rsp+150h] [rbp-50h]
  __int64 v121; // [rsp+158h] [rbp-48h]
  char *v122; // [rsp+160h] [rbp-40h]
  unsigned int v126; // [rsp+1C0h] [rbp+20h]
  unsigned int v127; // [rsp+1C0h] [rbp+20h]
  int v128; // [rsp+1C8h] [rbp+28h]

  v126 = a4;
  v104 = a4;
  v10 = a1;
  v95 = 0;
  v94 = 0;
  *(_OWORD *)Exception = 0LL;
  v11 = (FileObject->Flags & 0x10) != 0;
  v79 = v11;
  v112 = a4;
  v107 = *a3 & 0xFFF;
  v101 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v110 = CurrentThread;
  v13 = 0;
  v91 = 0;
  v88 = 0;
  v82 = 0;
  v14 = 0LL;
  v109 = 0LL;
  v86 = 1;
  v84 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v118, 0, sizeof(v118));
  v15 = (*(_DWORD *)(a1 + 152) & 0x1000) == 0;
  v16 = *(_DWORD *)(a1 + 152) & 0x1000;
  v99 = v16;
  v93 = !v15;
  v98 = *(_QWORD *)a3;
  v17 = (unsigned int)BYTE4(CurrentThread[1].Queue) + 2 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  v103 = v17;
  v115 = v17;
  v18 = v11;
  v87 = v11;
  if ( !v11 )
  {
    v18 = CcForceWriteThrough(FileObject, (unsigned int)a4, a1, 1);
    v87 = v18;
  }
  if ( v18 )
  {
    if ( !a8 )
      return 0;
    *a10 = KeQueryPerformanceCounter(0LL);
  }
  v20 = 6;
  if ( a8 )
    v20 = 4;
  v105 = v20;
  v21 = *(_QWORD *)(v10 + 536);
  v120 = v21;
  v121 = v21;
  if ( v11 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v21 + 768), &LockHandle);
    if ( (*(_DWORD *)(v10 + 152) & 0x20) != 0 )
    {
      v118.LockQueue.Lock = (unsigned __int64 *volatile)(v21 + 832);
      v118.LockQueue.Next = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v22 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v21 + 832), (__int64)&v118);
        if ( v22 )
          KxWaitForLockOwnerShip((__int64)&v118, v22);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented((__int64)&v118, (volatile __int64 *)(v21 + 832));
      }
      v14 = *(_SLIST_ENTRY **)(v10 + 504);
      if ( !v14 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v118);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        KeDelayExecutionThread(0, 0, &Cc5Milliseconds);
        RtlRaiseStatus(-1073741608);
      }
      Next = v14->Next;
      v24 = (_SLIST_ENTRY **)*((_QWORD *)&v14->Next + 1);
      if ( *(&v14->Next->Next + 1) != v14 || *v24 != v14 )
        __fastfail(3u);
      *v24 = Next;
      *((_QWORD *)&Next->Next + 1) = v24;
      *((_QWORD *)&v14->Next + 1) = 0LL;
      v14->Next = 0LL;
      *(_QWORD *)(v10 + 504) = 0LL;
      *(_DWORD *)(v10 + 152) &= ~0x20u;
      v82 = 1;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v118, (__int64)v22);
      v13 = v91;
    }
    ++*(_DWORD *)(v10 + 524);
    v88 = 1;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( v14 )
    CcFreeWorkQueueEntry(v14, (__int64)CurrentThread, v17, a4);
  v25 = a9;
  if ( !a9 )
  {
    v25 = KeGetCurrentThread();
    a9 = v25;
    v13 = v91;
  }
  if ( (int)IoReferenceIoAttributionFromThread(v25, (unsigned __int64 *)&v109) >= 0 )
  {
    SectionObjectPointer = FileObject->SectionObjectPointer;
    v89 = 0;
    v27 = 0LL;
    v28 = MiLockSectionControlArea(SectionObjectPointer, 1, &v89);
    v29 = v109;
    if ( v28 )
    {
      if ( v109 != (*(_QWORD *)(v28 + 120) & 0xFFFFFFFFFFFFFFF8uLL) )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v109 + 32)) <= 1 )
          __fastfail(0xEu);
        v27 = *(_QWORD *)(v28 + 120) & 0xFFFFFFFFFFFFFFF8uLL;
        v29 = v109;
        *(_QWORD *)(v28 + 120) ^= (v109 ^ *(_QWORD *)(v28 + 120)) & 0xFFFFFFFFFFFFFFF8uLL;
        v13 = v91;
      }
      MiReleaseSpinLockExclusive((_DWORD *)(v28 + 72), v89);
      if ( v27 )
        IoDiskIoAttributionDereference(v27);
    }
    IoDiskIoAttributionDereference(v29);
  }
  LODWORD(v30) = v94;
  v31 = v98;
  v32 = v101;
  v34 = v126;
  while ( v34 )
  {
    v83 = 0;
    v35 = 0;
    if ( v16 )
      a5 = 0;
    v128 = a5;
    v94 = 0;
    VirtualAddress = (char *)CcGetVirtualAddress(v10, v31, &v101, &v95, 0, 0);
    v100 = VirtualAddress;
    v37 = v95;
    if ( v95 > v34 )
      v37 = v34;
    v114 = v37;
    v94 = v37;
    v127 = v34 - v37;
    v38 = v107;
    v39 = &VirtualAddress[-v107];
    v100 = v39;
    v40 = v107 + v37;
    v96 = v40;
    v95 = v107 + v37;
    v41 = 1;
    v102 = 1;
    HIDWORD(v117) = HIDWORD(v98);
    v42 = v98 - v107;
    LODWORD(v117) = v98 - v107;
    v80 = 0;
    v43 = 0;
    v83 = 0;
    v44 = v40;
    while ( 1 )
    {
      v81 = 0;
      v45 = 0;
      v113 = 0;
      v86 = 1;
      LOBYTE(v35) = v44 > 0x1000;
      v119 = v35;
      v97 = 0;
      if ( (v41 & v128) != 0 )
      {
        if ( v117 >= *a7 )
        {
          v13 |= 1u;
          v91 = v13;
        }
        v46 = *(_DWORD *)(a1 + 152);
        if ( (v46 & 0x40) != 0 )
        {
          v13 |= 2u;
          v91 = v13;
        }
        if ( (v46 & 0x40000000) != 0 )
        {
          v47 = 0;
          if ( !v35 )
            v47 = v40;
          if ( (((unsigned __int8)v38 | (unsigned __int8)(v47 - v38)) & 0x3F) != 0 )
          {
            v13 &= 0xFFFFFFF3;
            v91 = v13;
            v43 = 1;
            v83 = 1;
          }
          else
          {
            v13 |= 4u;
            v91 = v13;
            if ( v79 )
            {
              v13 |= 8u;
              v91 = v13;
            }
          }
        }
        v81 = 0;
        v48 = 4096 - v38;
        if ( v35 )
          v49 = 4096 - v38;
        else
          v49 = v40 - v38;
        v50 = CcWrapperMmCopyToCachedPage((__int64)v39, (__int64)a2, v38, v49, v13, &v81);
        v97 = v50;
        if ( v50 < 0 )
        {
          v76 = FsRtlNormalizeNtstatus(v50, -1073741592);
          RtlRaiseStatus(v76);
        }
        v80 = 1;
        if ( !v43 )
        {
          v43 = v81;
          v83 = v81;
        }
      }
      else
      {
        v51 = 1;
        v85 = 1;
        v52 = 0;
        v92 = 0;
        if ( v35 )
        {
          if ( (v128 & 4) != 0 )
          {
            v53 = v110;
            BYTE4(v110[1].Queue) = 1;
            if ( !LODWORD(v53[1].WaitListEntry.Flink) )
              LODWORD(v53[1].WaitListEntry.Flink) = 1;
          }
        }
        if ( a8 && !a10->QuadPart )
        {
          MmCheckCachedPageStates((unsigned __int64)v39, 1LL, v105 | 2, &v85);
          v52 = 1;
          v92 = 1;
          v51 = v85;
          if ( !v85 )
          {
            *a10 = KeQueryPerformanceCounter(0LL);
            v51 = v85;
          }
          v39 = v100;
        }
        if ( !v52 || !v51 )
        {
          v45 = MmCheckCachedPageStates((unsigned __int64)v39, 1LL, v105, &v86);
          v113 = v45;
        }
        if ( !v86 && !a8 )
        {
          v90 = 0;
          v32 = v101;
          v10 = a1;
          LODWORD(v30) = v114;
          v11 = v79;
          goto LABEL_117;
        }
        v54 = 0LL;
        v116 = 0LL;
        v55 = 0LL;
        v122 = 0LL;
        Status = 0;
        if ( v45 < 0 )
          RtlRaiseStatus(v45);
        v56 = v99;
        v57 = v96;
        if ( v99 )
        {
          v58 = v96;
          if ( v35 )
            v58 = 4096;
          v55 = (char *)CcLockSystemCacheBuffer(v100, &v116, v58, IoWriteAccess, &Status);
          v122 = v55;
          if ( !v55 )
            RtlRaiseStatus(Status);
          v54 = v116;
          v56 = v99;
        }
        if ( !v56 )
          v55 = v100;
        v59 = &v55[v38];
        if ( v35 )
          v60 = 4096;
        else
          v60 = v57;
        v81 = 0;
        CcCopyToCacheHelper(a1, v59, a2, v60 - v38, v93, &v81);
        v80 = 1;
        if ( !v43 )
        {
          v43 = v81;
          v83 = v81;
        }
        if ( v54 )
        {
          MmUnlockPages(v54);
          IoFreeMdl(v54);
          v116 = 0LL;
        }
        v61 = v103;
        v62 = v110;
        BYTE4(v110[1].Queue) = v103 & 1;
        LODWORD(v62[1].WaitListEntry.Flink) = v61 >> 1;
        v48 = 4096 - v38;
        v40 = v96;
      }
      a2 += v48;
      v38 = 0;
      v107 = 0;
      if ( !v35 )
        break;
      v39 = v100 + 4096;
      v100 += 4096;
      v40 -= 4096;
      v96 = v40;
      v44 = v40;
      v95 = v40;
      v42 += 4096;
      LODWORD(v117) = v42;
      if ( v127 )
      {
        v41 = 2;
      }
      else
      {
        v41 = 4;
        if ( v40 > 0x1000 )
          v41 = 2;
      }
      v102 = v41;
      v35 = 0;
    }
    v63 = *(_QWORD *)(v101 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v101 + 16)) )
    {
      v64 = *(struct _KEVENT **)(v63 + 192);
      if ( v64 )
        KeSetEvent(v64, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v63 + 552));
    }
    v32 = 0LL;
    v101 = 0LL;
    v30 = v94;
    v10 = a1;
    CcSetDirtyInMask(a1, &v98, v94, a9);
    v65 = *(_DWORD *)(a1 + 152) & 0x40000000;
    v34 = v127;
    if ( !v65 && v104 - v127 > 0x1000000 || v65 && v83 )
    {
      if ( !a10->QuadPart )
        *a10 = KeQueryPerformanceCounter(0LL);
      v11 = v79;
      CcFlushCachePriv(FileObject->SectionObjectPointer, (__int64)&v98, v30, 0LL, v79, (__int128 *)Exception, 0LL);
      if ( Exception[0] < 0 )
      {
        v77 = FsRtlNormalizeNtstatus(Exception[0], -1073741591);
        RtlRaiseStatus(v77);
      }
    }
    else
    {
      v11 = v79;
    }
    a5 = v128;
    if ( v127 < 0x1000 )
    {
      if ( (v128 & 4) == 0 )
        a5 = 0;
    }
    else
    {
      a5 = v128 | 1;
    }
    v31 = v30 + v98;
    v98 += v30;
    v13 = v91;
    v16 = v99;
  }
  v90 = 1;
  v80 = 0;
LABEL_117:
  v66 = v103;
  v67 = v110;
  BYTE4(v110[1].Queue) = v103 & 1;
  LODWORD(v67[1].WaitListEntry.Flink) = v66 >> 1;
  if ( v32 )
  {
    v68 = *(_QWORD *)(v32 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v32 + 16)) )
    {
      v69 = *(struct _KEVENT **)(v68 + 192);
      if ( v69 )
        KeSetEvent(v69, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v68 + 552));
    }
    LODWORD(v30) = v94;
  }
  if ( v80 && (_DWORD)v30 )
    CcSetDirtyInMask(v10, &v98, v30, a9);
  if ( CcRemoteFileDPInlineFlushThreshold != -1
    && (FileObject->Flags & 0x1000000) != 0
    && !v11
    && *(_DWORD *)(v10 + 112) >= (unsigned int)CcRemoteFileDPInlineFlushThreshold )
  {
    v82 = 1;
    v84 = 1;
  }
  if ( v87 || v84 )
  {
    v70 = 0;
    Exception[0] = 0;
    if ( !v11 || (*(_DWORD *)(v10 + 152) & 0x40000000) == 0 )
    {
      v71 = 0;
      if ( !v82 )
        v71 = v104;
      v72 = 0LL;
      if ( !v82 )
        v72 = (__int64)a3;
      CcFlushCachePriv(FileObject->SectionObjectPointer, v72, v71, 0LL, v11, (__int128 *)Exception, 0LL);
      v70 = Exception[0];
    }
    if ( v88 )
    {
      v73 = (volatile __int64 *)(v120 + 768);
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v120 + 768);
      LockHandle.LockQueue.Next = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      LockHandle.OldIrql = CurrentIrql;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v75 = (_QWORD *)_InterlockedExchange64(v73, (__int64)&LockHandle);
        if ( v75 )
          KxWaitForLockOwnerShip((__int64)&LockHandle, v75);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, v73);
      }
      --*(_DWORD *)(v10 + 524);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v70 = Exception[0];
    }
    if ( v70 < 0 )
    {
      v78 = FsRtlNormalizeNtstatus(v70, -1073741591);
      RtlRaiseStatus(v78);
    }
  }
  return v90;
}
