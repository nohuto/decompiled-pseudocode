/*
 * XREFs of CcMapAndCopyInToCache @ 0x1404DDB50
 * Callers:
 *     CcCopyWriteEx @ 0x1404A2430 (CcCopyWriteEx.c)
 * Callees:
 *     CcWrapperMmCopyToCachedPage @ 0x140223380 (CcWrapperMmCopyToCachedPage.c)
 *     CcDecrementVacbActiveCount @ 0x1402500B0 (CcDecrementVacbActiveCount.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     MmCheckCachedPageStates @ 0x14025B020 (MmCheckCachedPageStates.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     CcSetDirtyInMask @ 0x1402D5CB0 (CcSetDirtyInMask.c)
 *     CcGetVirtualAddress @ 0x1402D8300 (CcGetVirtualAddress.c)
 *     CcFlushCachePriv @ 0x1402DA4E0 (CcFlushCachePriv.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiLockSectionControlArea @ 0x14034CE80 (MiLockSectionControlArea.c)
 *     IoDiskIoAttributionDereference @ 0x14034EA34 (IoDiskIoAttributionDereference.c)
 *     CcForceWriteThrough @ 0x1403A5660 (CcForceWriteThrough.c)
 *     IoReferenceIoAttributionFromThread @ 0x1403AAA00 (IoReferenceIoAttributionFromThread.c)
 *     CcFreeWorkQueueEntry @ 0x1403AC6BC (CcFreeWorkQueueEntry.c)
 *     CcCopyToCacheHelper @ 0x140404E90 (CcCopyToCacheHelper.c)
 *     CcLockSystemCacheBuffer @ 0x1404051B8 (CcLockSystemCacheBuffer.c)
 *     FsRtlNormalizeNtstatus @ 0x140456270 (FsRtlNormalizeNtstatus.c)
 *     CcCopyReadExceptionFilter @ 0x1404B4340 (CcCopyReadExceptionFilter.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall CcMapAndCopyInToCache(
        __int64 a1,
        char *a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        PFILE_OBJECT FileObject,
        _QWORD *a7,
        char a8,
        struct _KTHREAD *a9,
        LARGE_INTEGER *a10)
{
  __int64 v10; // r15
  char v11; // r13
  int v12; // esi
  _SLIST_ENTRY *v13; // rbx
  bool v14; // zf
  int v15; // r12d
  char v16; // al
  unsigned int v18; // eax
  __int64 v19; // rdi
  struct _KPRCB **v20; // rdx
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v22; // rax
  struct _KTHREAD *v23; // rax
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rcx
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rbx
  unsigned int v32; // edi
  int v33; // r13d
  char *VirtualAddress; // r10
  unsigned int v35; // eax
  unsigned int v36; // r15d
  char *v37; // r10
  unsigned int v38; // r14d
  int v39; // eax
  int v40; // ebx
  bool v41; // r12
  unsigned int v42; // ecx
  NTSTATUS v43; // edi
  int v44; // eax
  char v45; // al
  unsigned int v46; // edi
  unsigned int v47; // eax
  NTSTATUS v48; // eax
  char v49; // al
  char v50; // r14
  struct _KTHREAD *v51; // rcx
  struct _MDL *v52; // r14
  char *v53; // rdx
  int v54; // eax
  int v55; // edi
  ULONG v56; // r8d
  char *v57; // rdx
  int v58; // r9d
  unsigned int v59; // edx
  struct _KTHREAD *v60; // rcx
  __int64 v61; // rbx
  struct _KEVENT *v62; // rcx
  int v63; // ecx
  unsigned int v64; // r8d
  struct _KTHREAD *v65; // rdx
  __int64 v66; // rdi
  struct _KEVENT *v67; // rcx
  NTSTATUS v68; // ecx
  int v69; // r8d
  __int64 v70; // rdx
  volatile __int64 *v71; // rbx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB **v73; // rdx
  NTSTATUS v74; // eax
  NTSTATUS v75; // eax
  NTSTATUS v76; // eax
  char v77; // [rsp+78h] [rbp-128h]
  char v78; // [rsp+79h] [rbp-127h]
  bool v79; // [rsp+7Ah] [rbp-126h] BYREF
  char v80; // [rsp+7Bh] [rbp-125h]
  bool v81; // [rsp+7Ch] [rbp-124h]
  char v82; // [rsp+7Dh] [rbp-123h]
  char v83; // [rsp+7Eh] [rbp-122h] BYREF
  char v84; // [rsp+7Fh] [rbp-121h] BYREF
  char v85; // [rsp+80h] [rbp-120h]
  char v86; // [rsp+81h] [rbp-11Fh]
  unsigned __int8 v87; // [rsp+82h] [rbp-11Eh] BYREF
  char v88; // [rsp+83h] [rbp-11Dh]
  int v89; // [rsp+84h] [rbp-11Ch]
  char v90; // [rsp+88h] [rbp-118h]
  char v91; // [rsp+89h] [rbp-117h]
  unsigned int v92; // [rsp+8Ch] [rbp-114h]
  unsigned int v93; // [rsp+90h] [rbp-110h] BYREF
  ULONG v94; // [rsp+94h] [rbp-10Ch]
  NTSTATUS v95; // [rsp+98h] [rbp-108h]
  __int64 v96; // [rsp+A0h] [rbp-100h] BYREF
  int v97; // [rsp+A8h] [rbp-F8h]
  char *v98; // [rsp+B0h] [rbp-F0h]
  __int64 v99; // [rsp+B8h] [rbp-E8h] BYREF
  int v100; // [rsp+C0h] [rbp-E0h]
  int v101; // [rsp+C4h] [rbp-DCh]
  int v102; // [rsp+C8h] [rbp-D8h]
  unsigned int v103; // [rsp+CCh] [rbp-D4h]
  NTSTATUS Status; // [rsp+D0h] [rbp-D0h] BYREF
  unsigned int v105; // [rsp+D4h] [rbp-CCh]
  NTSTATUS Exception[4]; // [rsp+D8h] [rbp-C8h] BYREF
  __int64 v107; // [rsp+E8h] [rbp-B8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F0h] [rbp-B0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+F8h] [rbp-A8h] BYREF
  unsigned int v110; // [rsp+110h] [rbp-90h]
  NTSTATUS v111; // [rsp+114h] [rbp-8Ch]
  unsigned int v112; // [rsp+118h] [rbp-88h]
  int v113; // [rsp+11Ch] [rbp-84h]
  struct _MDL *v114; // [rsp+120h] [rbp-80h] BYREF
  __int64 v115; // [rsp+128h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE v116; // [rsp+130h] [rbp-70h] BYREF
  int v117; // [rsp+148h] [rbp-58h]
  __int64 v118; // [rsp+150h] [rbp-50h]
  __int64 v119; // [rsp+158h] [rbp-48h]
  char *v120; // [rsp+160h] [rbp-40h]
  unsigned int v124; // [rsp+1C0h] [rbp+20h]
  int v125; // [rsp+1C8h] [rbp+28h]

  v124 = a4;
  v102 = a4;
  v10 = a1;
  v93 = 0;
  v92 = 0;
  *(_OWORD *)Exception = 0LL;
  v11 = (FileObject->Flags & 0x10) != 0;
  v77 = v11;
  v110 = a4;
  v105 = *a3 & 0xFFF;
  v99 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = 0;
  v89 = 0;
  v86 = 0;
  v80 = 0;
  v13 = 0LL;
  v107 = 0LL;
  v84 = 1;
  v82 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v116, 0, sizeof(v116));
  v14 = (*(_DWORD *)(a1 + 152) & 0x1000) == 0;
  v15 = *(_DWORD *)(a1 + 152) & 0x1000;
  v97 = v15;
  v91 = !v14;
  v96 = *(_QWORD *)a3;
  v101 = BYTE4(CurrentThread[1].Queue) + 2 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  v113 = v101;
  v16 = v11;
  v85 = v11;
  if ( !v11 )
  {
    v16 = CcForceWriteThrough(FileObject, a4, a1, 1);
    v85 = v16;
  }
  if ( v16 )
  {
    if ( !a8 )
      return 0;
    *a10 = KeQueryPerformanceCounter(0LL);
  }
  v18 = 6;
  if ( a8 )
    v18 = 4;
  v103 = v18;
  v19 = *(_QWORD *)(v10 + 536);
  v118 = v19;
  v119 = v19;
  if ( v11 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v19 + 768), &LockHandle);
    if ( (*(_DWORD *)(v10 + 152) & 0x20) != 0 )
    {
      v116.LockQueue.Lock = (unsigned __int64 *volatile)(v19 + 832);
      v116.LockQueue.Next = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v20 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)(v19 + 832), (__int64)&v116);
        if ( v20 )
          KxWaitForLockOwnerShip((struct _KPRCB *)&v116, v20);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented((__int64)&v116, (volatile __int64 *)(v19 + 832));
      }
      v13 = *(_SLIST_ENTRY **)(v10 + 504);
      if ( !v13 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v116);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        KeDelayExecutionThread(0, 0, &Cc5Milliseconds);
        RtlRaiseStatus(-1073741608);
      }
      Next = v13->Next;
      v22 = (_SLIST_ENTRY **)*((_QWORD *)&v13->Next + 1);
      if ( *(&v13->Next->Next + 1) != v13 || *v22 != v13 )
        __fastfail(3u);
      *v22 = Next;
      *((_QWORD *)&Next->Next + 1) = v22;
      *((_QWORD *)&v13->Next + 1) = 0LL;
      v13->Next = 0LL;
      *(_QWORD *)(v10 + 504) = 0LL;
      *(_DWORD *)(v10 + 152) &= ~0x20u;
      v80 = 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v116);
      v12 = v89;
    }
    ++*(_DWORD *)(v10 + 524);
    v86 = 1;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( v13 )
    CcFreeWorkQueueEntry(v13);
  v23 = a9;
  if ( !a9 )
  {
    v23 = KeGetCurrentThread();
    a9 = v23;
    v12 = v89;
  }
  if ( (int)IoReferenceIoAttributionFromThread(v23, (unsigned __int64 *)&v107) >= 0 )
  {
    SectionObjectPointer = FileObject->SectionObjectPointer;
    v87 = 0;
    v25 = 0LL;
    v26 = MiLockSectionControlArea(SectionObjectPointer, 1, &v87);
    v27 = v107;
    if ( v26 )
    {
      if ( v107 != (*(_QWORD *)(v26 + 120) & 0xFFFFFFFFFFFFFFF8uLL) )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v107 + 32)) <= 1 )
          __fastfail(0xEu);
        v25 = *(_QWORD *)(v26 + 120) & 0xFFFFFFFFFFFFFFF8uLL;
        v27 = v107;
        *(_QWORD *)(v26 + 120) ^= (v107 ^ *(_QWORD *)(v26 + 120)) & 0xFFFFFFFFFFFFFFF8uLL;
        v12 = v89;
      }
      MiReleaseSpinLockExclusive((_DWORD *)(v26 + 72), v87);
      if ( v25 )
        IoDiskIoAttributionDereference(v25);
    }
    IoDiskIoAttributionDereference(v27);
  }
  LODWORD(v28) = v92;
  v29 = v96;
  v30 = v99;
  v32 = v124;
  while ( v32 )
  {
    v81 = 0;
    v33 = 0;
    if ( v15 )
      a5 = 0;
    v125 = a5;
    v92 = 0;
    VirtualAddress = (char *)CcGetVirtualAddress(v10, v29, &v99, &v93, 0, 0);
    v98 = VirtualAddress;
    v35 = v93;
    if ( v93 > v32 )
      v35 = v32;
    v112 = v35;
    v92 = v35;
    v124 = v32 - v35;
    v36 = v105;
    v37 = &VirtualAddress[-v105];
    v98 = v37;
    v38 = v105 + v35;
    v94 = v38;
    v93 = v105 + v35;
    v39 = 1;
    v100 = 1;
    HIDWORD(v115) = HIDWORD(v96);
    v40 = v96 - v105;
    LODWORD(v115) = v96 - v105;
    v78 = 0;
    v41 = 0;
    v81 = 0;
    v42 = v38;
    while ( 1 )
    {
      v79 = 0;
      v43 = 0;
      v111 = 0;
      v84 = 1;
      LOBYTE(v33) = v42 > 0x1000;
      v117 = v33;
      v95 = 0;
      if ( (v39 & v125) != 0 )
      {
        if ( v115 >= *a7 )
        {
          v12 |= 1u;
          v89 = v12;
        }
        v44 = *(_DWORD *)(a1 + 152);
        if ( (v44 & 0x40) != 0 )
        {
          v12 |= 2u;
          v89 = v12;
        }
        if ( (v44 & 0x40000000) != 0 )
        {
          v45 = 0;
          if ( !v33 )
            v45 = v38;
          if ( (((unsigned __int8)v36 | (unsigned __int8)(v45 - v36)) & 0x3F) != 0 )
          {
            v12 &= 0xFFFFFFF3;
            v89 = v12;
            v41 = 1;
            v81 = 1;
          }
          else
          {
            v12 |= 4u;
            v89 = v12;
            if ( v77 )
            {
              v12 |= 8u;
              v89 = v12;
            }
          }
        }
        v79 = 0;
        v46 = 4096 - v36;
        if ( v33 )
          v47 = 4096 - v36;
        else
          v47 = v38 - v36;
        v48 = CcWrapperMmCopyToCachedPage((__int64)v37, (__int64)a2, v36, v47, v12, &v79);
        v95 = v48;
        if ( v48 < 0 )
        {
          v74 = FsRtlNormalizeNtstatus(v48, -1073741592);
          RtlRaiseStatus(v74);
        }
        v78 = 1;
        if ( !v41 )
        {
          v41 = v79;
          v81 = v79;
        }
      }
      else
      {
        v49 = 1;
        v83 = 1;
        v50 = 0;
        v90 = 0;
        if ( v33 )
        {
          if ( (v125 & 4) != 0 )
          {
            v51 = CurrentThread;
            BYTE4(CurrentThread[1].Queue) = 1;
            if ( !LODWORD(v51[1].WaitListEntry.Flink) )
              LODWORD(v51[1].WaitListEntry.Flink) = 1;
          }
        }
        if ( a8 && !a10->QuadPart )
        {
          MmCheckCachedPageStates((unsigned __int64)v37, 1LL, v103 | 2, &v83);
          v50 = 1;
          v90 = 1;
          v49 = v83;
          if ( !v83 )
          {
            *a10 = KeQueryPerformanceCounter(0LL);
            v49 = v83;
          }
          v37 = v98;
        }
        if ( !v50 || !v49 )
        {
          v43 = MmCheckCachedPageStates((unsigned __int64)v37, 1LL, v103, &v84);
          v111 = v43;
        }
        if ( !v84 && !a8 )
        {
          v88 = 0;
          v30 = v99;
          v10 = a1;
          LODWORD(v28) = v112;
          v11 = v77;
          goto LABEL_117;
        }
        v52 = 0LL;
        v114 = 0LL;
        v53 = 0LL;
        v120 = 0LL;
        Status = 0;
        if ( v43 < 0 )
          RtlRaiseStatus(v43);
        v54 = v97;
        v55 = v94;
        if ( v97 )
        {
          v56 = v94;
          if ( v33 )
            v56 = 4096;
          v53 = (char *)CcLockSystemCacheBuffer(v98, &v114, v56, IoWriteAccess, &Status);
          v120 = v53;
          if ( !v53 )
            RtlRaiseStatus(Status);
          v52 = v114;
          v54 = v97;
        }
        if ( !v54 )
          v53 = v98;
        v57 = &v53[v36];
        if ( v33 )
          v58 = 4096;
        else
          v58 = v55;
        v79 = 0;
        CcCopyToCacheHelper(a1, v57, a2, v58 - v36, v91, &v79);
        v78 = 1;
        if ( !v41 )
        {
          v41 = v79;
          v81 = v79;
        }
        if ( v52 )
        {
          MmUnlockPages(v52);
          IoFreeMdl(v52);
          v114 = 0LL;
        }
        v59 = v101;
        v60 = CurrentThread;
        BYTE4(CurrentThread[1].Queue) = v101 & 1;
        LODWORD(v60[1].WaitListEntry.Flink) = v59 >> 1;
        v46 = 4096 - v36;
        v38 = v94;
      }
      a2 += v46;
      v36 = 0;
      v105 = 0;
      if ( !v33 )
        break;
      v37 = v98 + 4096;
      v98 += 4096;
      v38 -= 4096;
      v94 = v38;
      v42 = v38;
      v93 = v38;
      v40 += 4096;
      LODWORD(v115) = v40;
      if ( v124 )
      {
        v39 = 2;
      }
      else
      {
        v39 = 4;
        if ( v38 > 0x1000 )
          v39 = 2;
      }
      v100 = v39;
      v33 = 0;
    }
    v61 = *(_QWORD *)(v99 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v99 + 16)) )
    {
      v62 = *(struct _KEVENT **)(v61 + 192);
      if ( v62 )
        KeSetEvent(v62, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v61 + 552));
    }
    v30 = 0LL;
    v99 = 0LL;
    v28 = v92;
    v10 = a1;
    CcSetDirtyInMask(a1, &v96, v92, a9);
    v63 = *(_DWORD *)(a1 + 152) & 0x40000000;
    v32 = v124;
    if ( !v63 && v102 - v124 > 0x1000000 || v63 && v81 )
    {
      if ( !a10->QuadPart )
        *a10 = KeQueryPerformanceCounter(0LL);
      v11 = v77;
      CcFlushCachePriv(FileObject->SectionObjectPointer, (__int64)&v96, v28, 0LL, v77, (__int128 *)Exception, 0LL);
      if ( Exception[0] < 0 )
      {
        v75 = FsRtlNormalizeNtstatus(Exception[0], -1073741591);
        RtlRaiseStatus(v75);
      }
    }
    else
    {
      v11 = v77;
    }
    a5 = v125;
    if ( v124 < 0x1000 )
    {
      if ( (v125 & 4) == 0 )
        a5 = 0;
    }
    else
    {
      a5 = v125 | 1;
    }
    v29 = v28 + v96;
    v96 += v28;
    v12 = v89;
    v15 = v97;
  }
  v88 = 1;
  v78 = 0;
LABEL_117:
  v64 = v101;
  v65 = CurrentThread;
  BYTE4(CurrentThread[1].Queue) = v101 & 1;
  LODWORD(v65[1].WaitListEntry.Flink) = v64 >> 1;
  if ( v30 )
  {
    v66 = *(_QWORD *)(v30 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v30 + 16)) )
    {
      v67 = *(struct _KEVENT **)(v66 + 192);
      if ( v67 )
        KeSetEvent(v67, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v66 + 552));
    }
    LODWORD(v28) = v92;
  }
  if ( v78 && (_DWORD)v28 )
    CcSetDirtyInMask(v10, &v96, v28, a9);
  if ( CcRemoteFileDPInlineFlushThreshold != -1
    && (FileObject->Flags & 0x1000000) != 0
    && !v11
    && *(_DWORD *)(v10 + 112) >= (unsigned int)CcRemoteFileDPInlineFlushThreshold )
  {
    v80 = 1;
    v82 = 1;
  }
  if ( v85 || v82 )
  {
    v68 = 0;
    Exception[0] = 0;
    if ( !v11 || (*(_DWORD *)(v10 + 152) & 0x40000000) == 0 )
    {
      v69 = 0;
      if ( !v80 )
        v69 = v102;
      v70 = 0LL;
      if ( !v80 )
        v70 = (__int64)a3;
      CcFlushCachePriv(FileObject->SectionObjectPointer, v70, v69, 0LL, v11, (__int128 *)Exception, 0LL);
      v68 = Exception[0];
    }
    if ( v86 )
    {
      v71 = (volatile __int64 *)(v118 + 768);
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v118 + 768);
      LockHandle.LockQueue.Next = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
      LockHandle.OldIrql = CurrentIrql;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v73 = (struct _KPRCB **)_InterlockedExchange64(v71, (__int64)&LockHandle);
        if ( v73 )
          KxWaitForLockOwnerShip((struct _KPRCB *)&LockHandle, v73);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, v71);
      }
      --*(_DWORD *)(v10 + 524);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v68 = Exception[0];
    }
    if ( v68 < 0 )
    {
      v76 = FsRtlNormalizeNtstatus(v68, -1073741591);
      RtlRaiseStatus(v76);
    }
  }
  return v88;
}
