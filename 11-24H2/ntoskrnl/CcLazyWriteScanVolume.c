/*
 * XREFs of CcLazyWriteScanVolume @ 0x1404B5560
 * Callers:
 *     CcQuickLazyWriteScanForVolume @ 0x1404B54A0 (CcQuickLazyWriteScanForVolume.c)
 *     CcWorkerThread @ 0x1404DB3D0 (CcWorkerThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcPostWorkQueueRegular @ 0x1402A74B4 (CcPostWorkQueueRegular.c)
 *     CcPostWorkQueueCachemapUninit @ 0x1402A7944 (CcPostWorkQueueCachemapUninit.c)
 *     CcPostDeferredWrites @ 0x1402AAB14 (CcPostDeferredWrites.c)
 *     CcScanLogHandleList @ 0x1402CCCB4 (CcScanLogHandleList.c)
 *     CcShouldLazyWriteCacheMap @ 0x1402CE5A0 (CcShouldLazyWriteCacheMap.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     CcRescheduleLazyWriteScanOnVolume @ 0x14043CC1C (CcRescheduleLazyWriteScanOnVolume.c)
 *     CcCalculatePagesToWriteForVolume @ 0x140470DDC (CcCalculatePagesToWriteForVolume.c)
 *     CcPerfLogLazyWriteScan @ 0x1404A1AE4 (CcPerfLogLazyWriteScan.c)
 *     CcPerfLogLoggedStreamsStats @ 0x1404A88EC (CcPerfLogLoggedStreamsStats.c)
 *     CcIncrementWriteBehindPriority @ 0x1404DB060 (CcIncrementWriteBehindPriority.c)
 *     CcUpdateTimeOnLogHandles @ 0x1404DB318 (CcUpdateTimeOnLogHandles.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x1404DF0A0 (CcPostWorkQueueAsyncLazywrite.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall CcLazyWriteScanVolume(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v4; // edi
  char v6; // r13
  __int64 v7; // r15
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rax
  _QWORD **v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rdx
  unsigned int v24; // eax
  int v25; // ecx
  unsigned int v26; // r10d
  char v27; // r11
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  unsigned int v33; // ecx
  unsigned __int64 v34; // r8
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r12
  __int64 v41; // r14
  __int64 v42; // rbx
  KSPIN_LOCK *v43; // r13
  __int64 v44; // rax
  unsigned int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // rcx
  int v50; // ecx
  unsigned int v51; // eax
  __int64 v52; // rdx
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  __int64 v55; // rcx
  _QWORD *v56; // rax
  __int64 *v57; // rcx
  struct _KPRCB *CurrentPrcb; // r15
  _GENERAL_LOOKASIDE *P; // r14
  __int64 v60; // rdi
  __int64 v61; // r8
  __int64 v62; // r9
  _GENERAL_LOOKASIDE *L; // r14
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  volatile __int64 *v67; // rcx
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v69; // rdx
  int v70; // ecx
  bool v71; // zf
  __int64 v72; // rdx
  _QWORD *v73; // rcx
  int v74; // ecx
  __int64 v75; // rax
  __int64 v76; // rdx
  _QWORD *v77; // rcx
  __int64 v78; // rbx
  __int64 v79; // rcx
  __int64 v80; // rcx
  char v81; // bl
  _QWORD *v82; // rax
  __int64 v83; // r8
  __int64 v84; // rdx
  _DWORD *v85; // r9
  unsigned __int64 v86; // rax
  __int64 v87; // rcx
  unsigned __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // [rsp+28h] [rbp-61h]
  char v91; // [rsp+60h] [rbp-29h]
  char v92; // [rsp+61h] [rbp-28h]
  char v93; // [rsp+62h] [rbp-27h]
  unsigned int v94; // [rsp+64h] [rbp-25h] BYREF
  _QWORD *v95; // [rsp+68h] [rbp-21h] BYREF
  _QWORD **v96; // [rsp+70h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-11h] BYREF
  __int64 v98; // [rsp+90h] [rbp+7h] BYREF
  __int64 v99; // [rsp+98h] [rbp+Fh]
  __int64 v100; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v101; // [rsp+A8h] [rbp+1Fh]
  char v102; // [rsp+F0h] [rbp+67h]

  v92 = 0;
  v4 = 0;
  v94 = 0;
  v93 = 0;
  v98 = 0LL;
  v6 = 0;
  v91 = 0;
  v7 = *(_QWORD *)(a1 + 32);
  v100 = 0x7FFFFFFFFFFFFFFFLL;
  v102 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v99 = v7;
  if ( v7 == *((_QWORD *)PspSystemPartition + 1) )
    CcScanLogHandleList(v7, &v94, a4, &v100);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 768), &LockHandle);
  switch ( a4 )
  {
    case 1u:
      *(_BYTE *)(a1 + 989) = 0;
      break;
    case 2u:
      *(_BYTE *)(a1 + 990) = 0;
      break;
    case 4u:
    case 0x20u:
      *(_BYTE *)(a1 + 988) = 0;
      break;
    case 8u:
      *(_BYTE *)(a1 + 987) = 0;
      break;
    case 0x10u:
      *(_BYTE *)(a1 + 991) = 0;
      break;
    default:
      break;
  }
  v11 = *(unsigned int *)(a1 + 1064);
  v12 = *(_QWORD *)(a1 + 1048) / v11;
  *(_QWORD *)(a1 + 1080) = v12;
  v13 = v12;
  v14 = *(_QWORD *)(a1 + 1056) / v11;
  *(_QWORD *)(a1 + 1088) = v14;
  v15 = **(_QWORD **)(v7 + 8);
  if ( (unsigned int)v11 <= 1 )
  {
    v19 = *(_QWORD *)(a1 + 992);
    v18 = *(_QWORD *)(v15 + 18688);
    v16 = v19;
  }
  else
  {
    v16 = *(_QWORD *)(a1 + 992);
    v17 = (unsigned int)(v11 - 1);
    v18 = *(_QWORD *)(v15 + 18688) + v17 * v13;
    v19 = v16 + v17 * v14;
  }
  *(_QWORD *)(a1 + 1048) = v18;
  *(_QWORD *)(a1 + 1056) = v19;
  if ( !v16 && *(_QWORD *)(a1 + 640) == a1 + 664 && *(_QWORD *)(a1 + 648) == a1 + 664 && !*(_BYTE *)(a1 + 986) )
  {
    if ( *(_QWORD *)(a1 + 1104) == a1 + 1104 )
    {
      *(_BYTE *)(a1 + 985) = 0;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return;
    }
    CcRescheduleLazyWriteScanOnVolume((_BYTE *)a1, 0LL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_163;
  }
  v20 = (_QWORD **)(a1 + 784);
  *(_QWORD *)(a1 + 1600) = MEMORY[0xFFFFF78000000014];
  v96 = &v95;
  v95 = &v95;
  while ( 1 )
  {
    v21 = *v20;
    if ( *v20 == v20 )
      break;
    v22 = (_QWORD *)*v21;
    if ( (_QWORD **)v21[1] != v20 || (_QWORD *)v22[1] != v21 || (*v20 = v22, v22[1] = v20, v23 = v96, *v96 != &v95) )
LABEL_139:
      __fastfail(3u);
    v21[1] = v96;
    *v21 = &v95;
    *v23 = v21;
    v96 = (_QWORD **)v21;
  }
  *(_BYTE *)(a1 + 986) = 0;
  v24 = CcCalculatePagesToWriteForVolume(a1, a4);
  v25 = *(_DWORD *)(a1 + 1616);
  v26 = v24;
  v27 = dword_140FC421C;
  v94 = v24;
  if ( (v25 & 0x10) != 0 )
  {
    v28 = *(_QWORD *)(a1 + 1088) + *(_QWORD *)(a1 + 1080);
    *(_QWORD *)(a1 + 1096) = 0LL;
    v29 = v28 >> 1;
    v30 = v28 >> 2;
    v31 = v29 >> 1;
    if ( v27 )
      v31 = v29;
    if ( v30 >= 4 * v31 / 5 )
      v30 = 4 * v31 / 5;
    if ( v30 >= 0x200 )
    {
      v32 = v30 - (v30 >> 2);
      if ( v32 > 0xFFFFFFFF )
        LODWORD(v32) = -1;
      *(_QWORD *)(a1 + 1016) = v30;
      *(_DWORD *)(a1 + 1040) = v32;
    }
    else
    {
      *(_QWORD *)(a1 + 1016) = 512LL;
      *(_DWORD *)(a1 + 1040) = 384;
      v30 = 512LL;
    }
  }
  else
  {
    v33 = *(_DWORD *)(a1 + 1288);
    if ( v33 < 0x200 )
      v33 = 512;
    if ( *(_QWORD *)(a1 + 1096) )
      *(_QWORD *)(a1 + 1096) = 0LL;
    v30 = *(_DWORD *)(a1 + 1552) * v33;
    LODWORD(v34) = *(_DWORD *)(a1 + 1556) * v33;
    v35 = *(_QWORD *)(a1 + 1016) >> 2;
    v36 = *(_QWORD *)(a1 + 1016) - v35;
    if ( v30 < v36 )
    {
      v30 = *(_QWORD *)(a1 + 1016) - v35;
      v34 = v36 >> 1;
    }
    v37 = *(_QWORD *)(a1 + 1080) + *(_QWORD *)(a1 + 1088);
    if ( v27 )
      v38 = v37 >> 1;
    else
      v38 = v37 / (unsigned int)CcClientDTPDenominator;
    if ( v30 >= 4 * v38 / 5 )
    {
      v30 = 4 * v38 / 5;
      v34 = 4 * v38 / 0xA;
    }
    *(_QWORD *)(a1 + 1016) = v30;
    *(_DWORD *)(a1 + 1040) = v34;
  }
  *(_QWORD *)(a1 + 1000) = *(_QWORD *)(a1 + 992);
  v39 = *(_QWORD *)(a1 + 1072);
  *(_DWORD *)(a1 + 1008) = v26;
  *(_DWORD *)(a1 + 912) = v26;
  *(_DWORD *)(v39 + 8LL * *(unsigned int *)(a2 + 152)) = v26;
  *(_QWORD *)(a2 + 216) = MEMORY[0xFFFFF78000000014];
  if ( (xmmword_140FC5B10 & 0x20000) != 0 )
    CcPerfLogLazyWriteScan(
      a3,
      a4,
      *(_DWORD *)(a1 + 912),
      *(_QWORD *)(a1 + 992),
      *(_QWORD *)(**(_QWORD **)(v7 + 8) + 18688LL),
      *(_QWORD *)(a1 + 1016),
      (unsigned int)CcNumberOfMappedVacbs,
      *(_QWORD *)(a1 + 1024),
      *(_QWORD *)(a1 + 1032),
      *(_QWORD *)(a1 + 1080),
      *(_QWORD *)(a1 + 1088),
      *(unsigned int *)(a1 + 704));
  v40 = a1 + 664;
  v41 = 0LL;
  v42 = *(_QWORD *)(a1 + 664) - 568LL;
  if ( *(_QWORD *)(a1 + 664) != 568LL )
  {
    v43 = (KSPIN_LOCK *)(v7 + 768);
    while ( 1 )
    {
      v44 = v41;
      if ( v42 + 568 == v40 )
      {
LABEL_127:
        v6 = v102;
        break;
      }
      v41 = v42;
      if ( v44 )
        v41 = v44;
      v101 = v41;
      if ( v42 + 568 != a1 + 640 )
      {
        LODWORD(v90) = a4;
        if ( CcShouldLazyWriteCacheMap(v42, 0LL, a1, v94, *(_QWORD *)(v42 + 96) & 0xFFFFFFFFFFFFFFF0uLL, v90) )
        {
          v45 = *(_DWORD *)(v42 + 556);
          if ( v45 == -1 )
            v45 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
          v46 = v45 % CcNumberNumaNodes;
          if ( CcEnablePerVolumeLazyWriter )
            v47 = *(_QWORD *)(*(_QWORD *)(v42 + 600) + 8 * v46 + 64);
          else
            v47 = *(_QWORD *)(*(_QWORD *)(v42 + 536) + 8 * v46 + 128);
          if ( (*(_DWORD *)(v42 + 152) & 0x1000000) != 0 )
          {
            v93 = 1;
            *(_DWORD *)(*(_QWORD *)(v42 + 248) + 144LL) |= 1u;
            v48 = *(_QWORD *)(v42 + 264);
            v49 = *(_QWORD *)(v42 + 248);
            if ( v48 > *(_QWORD *)(v49 + 112) )
            {
              *(_QWORD *)(v49 + 112) = v48;
              if ( (xmmword_140FC5B10 & 0x20000) != 0 )
                *(_QWORD *)(*(_QWORD *)(v42 + 248) + 128LL) = *(_QWORD *)((*(_QWORD *)(v42 + 96) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                        + 0x18);
            }
          }
          v50 = *(_DWORD *)(v42 + 152);
          v51 = *(_DWORD *)(v42 + 112);
          *(_DWORD *)(v42 + 200) = v51;
          if ( (v50 & 0x200) != 0 && v51 >= 0x40 )
          {
            if ( (v50 & 0x1000000) != 0 && (v52 = *(_QWORD *)(v42 + 248), (v53 = *(_DWORD *)(v52 + 104)) != 0) )
            {
              if ( v51 <= v53 )
                *(_DWORD *)(v52 + 104) = v53 - v51;
              else
                *(_DWORD *)(v52 + 104) = 0;
              ++CcDbgSkippedReductions;
            }
            else
            {
              *(_DWORD *)(v42 + 200) = v51 >> 3;
            }
          }
          if ( !v92 )
          {
            v54 = *(_DWORD *)(v42 + 200);
            if ( v54 < v94 )
            {
              v94 -= v54;
            }
            else if ( (*(_DWORD *)(v42 + 152) & 0x200) != 0 || v41 == v42 && (*(_DWORD *)(v42 + 276) & 0xF) == 0 )
            {
              v91 = 1;
              v94 = 0;
              v92 = 1;
            }
            else
            {
              v55 = *(_QWORD *)v40;
              v56 = *(_QWORD **)(a1 + 672);
              if ( *(_QWORD *)(*(_QWORD *)v40 + 8LL) != v40 )
                goto LABEL_139;
              if ( *v56 != v40 )
                goto LABEL_139;
              *v56 = v55;
              *(_QWORD *)(v55 + 8) = v56;
              v57 = *(__int64 **)(v42 + 576);
              if ( *v57 != v42 + 568 )
                goto LABEL_139;
              *(_QWORD *)v40 = v42 + 568;
              *(_QWORD *)(a1 + 672) = v57;
              *v57 = v40;
              *(_QWORD *)(v42 + 576) = v40;
              v94 = 0;
              v92 = 1;
            }
          }
          *(_DWORD *)(v42 + 152) |= 0x20u;
          ++*(_DWORD *)(v42 + 112);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          CurrentPrcb = KeGetCurrentPrcb();
          P = CurrentPrcb->PPLookasideList[6].P;
          ++P->TotalAllocates;
          v60 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
          if ( v60 )
            goto LABEL_88;
          ++P->AllocateMisses;
          L = CurrentPrcb->PPLookasideList[6].L;
          ++L->TotalAllocates;
          v60 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
          if ( v60
            || (Size = L->Size,
                Tag = L->Tag,
                Type = (unsigned int)L->Type,
                ++L->AllocateMisses,
                (v60 = guard_dispatch_icall_no_overrides(Type, Size, Tag, v62)) != 0) )
          {
LABEL_88:
            *(_DWORD *)v60 = CurrentPrcb->Number;
          }
          v7 = v99;
          if ( !v60 )
          {
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v99 + 768), &LockHandle);
            *(_DWORD *)(v42 + 152) &= ~0x20u;
            --*(_DWORD *)(v42 + 112);
            goto LABEL_127;
          }
          *(_QWORD *)(v60 + 136) = v99;
          *(_QWORD *)(v60 + 144) = a1;
          *(_QWORD *)(v60 + 152) = v47;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 1296)) <= 1 )
            __fastfail(0xEu);
          if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8)) <= 1 )
            __fastfail(0xEu);
          *(_QWORD *)(v60 + 16) = v42;
          v67 = (volatile __int64 *)(v7 + 768);
          *(_DWORD *)(v60 + 128) = 2;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 768);
          LockHandle.LockQueue.Next = 0LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
            v67 = (volatile __int64 *)(v7 + 768);
          }
          LockHandle.OldIrql = CurrentIrql;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
          {
            v69 = (_QWORD *)_InterlockedExchange64(v67, (__int64)&LockHandle);
            if ( v69 )
              KxWaitForLockOwnerShip((__int64)&LockHandle, v69);
          }
          else
          {
            KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, v67);
          }
          v70 = *(_DWORD *)(v42 + 112) - 1;
          v71 = (*(_DWORD *)(v42 + 152) & 0x10000) == 0;
          *(_DWORD *)(v42 + 112) = v70;
          if ( !v71 )
          {
            v72 = v47 + 72;
            *(_QWORD *)(v42 + 504) = v60 | 1;
            goto LABEL_103;
          }
          if ( *(_DWORD *)(v42 + 4) || v70 )
          {
            *(_QWORD *)(v42 + 504) = v60;
            v73 = (_QWORD *)v60;
            if ( (*(_DWORD *)(a1 + 1616) & 1) == 0 )
            {
              v72 = v47 + 104;
              goto LABEL_104;
            }
            *(_DWORD *)(v60 + 128) = 7;
            *(_QWORD *)(v60 + 24) = v42;
            *(_QWORD *)(v60 + 16) = 0LL;
            CcPostWorkQueueAsyncLazywrite(v60, v47 + 312);
          }
          else
          {
            *(_QWORD *)(v42 + 504) = v60;
            v72 = v47 + 120;
LABEL_103:
            v73 = (_QWORD *)v60;
LABEL_104:
            if ( *(_QWORD *)(v60 + 152) + 120LL == v72 )
              CcPostWorkQueueCachemapUninit(v73, v72, v61, v62);
            else
              CcPostWorkQueueRegular((__int64)v73, v72, v61, v62);
          }
          v41 = v101;
          v43 = (KSPIN_LOCK *)(v7 + 768);
          v102 = 1;
          v4 = 0;
          goto LABEL_119;
        }
        v74 = *(_DWORD *)(v42 + 152);
        if ( (v74 & 0x10020) == 0x10020 )
        {
          CcIncrementWriteBehindPriority(v42);
        }
        else if ( (unsigned int)++v4 >= 0x14 && (v74 & 0x20) == 0 )
        {
          ++*(_DWORD *)(v42 + 112);
          *(_DWORD *)(v42 + 152) = v74 | 0x20;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v4 = 0;
          KeAcquireInStackQueuedSpinLock(v43, &LockHandle);
          *(_DWORD *)(v42 + 152) &= ~0x20u;
          --*(_DWORD *)(v42 + 112);
        }
      }
LABEL_119:
      v75 = *(_QWORD *)(v42 + 568) - 568LL;
      if ( v91 )
      {
        v76 = *(_QWORD *)v40;
        v77 = *(_QWORD **)(a1 + 672);
        if ( *(_QWORD *)(*(_QWORD *)v40 + 8LL) != v40 )
          goto LABEL_139;
        if ( *v77 != v40 )
          goto LABEL_139;
        *v77 = v76;
        v78 = v42 + 568;
        *(_QWORD *)(v76 + 8) = v77;
        v79 = *(_QWORD *)v78;
        if ( *(_QWORD *)(*(_QWORD *)v78 + 8LL) != v78 )
          goto LABEL_139;
        *(_QWORD *)v40 = v79;
        *(_QWORD *)(a1 + 672) = v78;
        *(_QWORD *)(v79 + 8) = v40;
        v91 = 0;
        *(_QWORD *)v78 = v40;
      }
      v42 = v75;
      if ( v75 == v41 )
        goto LABEL_127;
    }
  }
  v80 = (__int64)v95;
  v81 = v6;
  if ( v95 != &v95 )
    v81 = 1;
  while ( (_QWORD **)v80 != &v95 )
  {
    v82 = *(_QWORD **)v80;
    if ( *(_QWORD ***)(v80 + 8) != &v95 || v82[1] != v80 )
      goto LABEL_139;
    v95 = *(_QWORD **)v80;
    v82[1] = &v95;
    v83 = *(_QWORD *)(v80 + 152);
    if ( (*(_DWORD *)(a1 + 1616) & 2) != 0 )
    {
      CcPostWorkQueueAsyncLazywrite(v80, v83 + 312);
      v80 = (__int64)v95;
    }
    else
    {
      v84 = v83 + 104;
      if ( v83 + 120 == v83 + 104 )
        CcPostWorkQueueCachemapUninit((_QWORD *)v80, v84, v83, v30);
      else
        CcPostWorkQueueRegular(v80, v84, v83, v30);
      v80 = (__int64)v95;
    }
  }
  if ( (_BYTE)dword_140FC421C
    || v81
    || *(_QWORD *)(a1 + 1104) != a1 + 1104
    || (unsigned int)CcNumberNumaNodes > 1
    || CcEnablePerVolumeLazyWriter
    || *(_DWORD *)(v7 + 1288) >= *(_DWORD *)(v7 + 840) )
  {
    goto LABEL_156;
  }
  v85 = (_DWORD *)(a1 + 708);
  v86 = 0x9896800uLL / (unsigned int)KeMaximumIncrement;
  if ( !CcEnablePerVolumeLazyWriter )
    v85 = (_DWORD *)(v7 + 780);
  v87 = v100;
  if ( v100 == 0x7FFFFFFFFFFFFFFFLL || (__int64)(v86 + v100) <= MEMORY[0xFFFFF78000000320] )
  {
    v89 = v98;
  }
  else
  {
    v88 = v86 - MEMORY[0xFFFFF78000000320];
    *v85 = 0;
    v89 = v87 + v88;
    v98 = v89;
  }
  if ( *v85 >= (unsigned int)CcMaxWorklessLazywriteScans )
  {
    *v85 = 0;
    *(_BYTE *)(a1 + 708) = 1;
    *(_BYTE *)(v7 + 1049) = 0;
    goto LABEL_158;
  }
  if ( v89 != 0x7FFFFFFFFFFFFFFFLL )
  {
LABEL_156:
    CcRescheduleLazyWriteScanOnVolume((_BYTE *)a1, &v98);
    if ( *(_BYTE *)(a1 + 708) )
      *(_BYTE *)(a1 + 708) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 708) = 1;
    *(_BYTE *)(v7 + 1049) = 0;
  }
LABEL_158:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v93 )
    CcUpdateTimeOnLogHandles(v7);
  if ( (xmmword_140FC5B10 & 0x20000) != 0 )
    CcPerfLogLoggedStreamsStats(a4, *(_DWORD *)(v7 + 976));
  if ( *(_QWORD *)(a1 + 1104) != a1 + 1104 )
LABEL_163:
    CcPostDeferredWrites(v7, a1);
}
