/*
 * XREFs of CcLazyWriteScan @ 0x1402654C8
 * Callers:
 *     CcWorkerThread @ 0x1404D4DF0 (CcWorkerThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcRescheduleLazyWriteScan @ 0x1402652C4 (CcRescheduleLazyWriteScan.c)
 *     CcSetLazyWriteScanQueuedInternal @ 0x140266090 (CcSetLazyWriteScanQueuedInternal.c)
 *     CcPostDeferredWrites @ 0x1402795B0 (CcPostDeferredWrites.c)
 *     CcAllocateWorkQueueEntry @ 0x140279B34 (CcAllocateWorkQueueEntry.c)
 *     CcPostWorkQueue @ 0x14027AE6C (CcPostWorkQueue.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPerfLogLoggedStreamsStats @ 0x14040B154 (CcPerfLogLoggedStreamsStats.c)
 *     CcScanLogHandleList @ 0x14040BD34 (CcScanLogHandleList.c)
 *     CcShouldLazyWriteCacheMap @ 0x14040C430 (CcShouldLazyWriteCacheMap.c)
 *     CcCalculatePagesToWrite @ 0x14040C870 (CcCalculatePagesToWrite.c)
 *     CcComputeNextScanTime @ 0x140492400 (CcComputeNextScanTime.c)
 *     CcPerfLogLazyWriteScan @ 0x14049CA74 (CcPerfLogLazyWriteScan.c)
 *     CcGetNodeForLazyWrite @ 0x1404D4A28 (CcGetNodeForLazyWrite.c)
 *     CcIncrementWriteBehindPriority @ 0x1404D4A80 (CcIncrementWriteBehindPriority.c)
 *     CcUpdateTimeOnLogHandles @ 0x1404D4D38 (CcUpdateTimeOnLogHandles.c)
 *     CcAdjustThrottleForPartition @ 0x14057765C (CcAdjustThrottleForPartition.c)
 */

void __fastcall CcLazyWriteScan(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  int v8; // r12d
  unsigned __int64 v9; // r9
  __int64 *v10; // r14
  __int64 *v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rtt
  unsigned __int64 v15; // r11
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  _QWORD **v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rdx
  int v24; // eax
  __int64 v25; // r9
  int v26; // ebx
  __int64 v27; // rcx
  unsigned int v28; // r14d
  unsigned int v29; // r15d
  __int64 v30; // rsi
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // ecx
  unsigned int v38; // eax
  __int64 v39; // rdx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // eax
  __int64 v43; // rax
  _QWORD *v44; // rcx
  __int64 *v45; // rcx
  int v46; // eax
  KSPIN_LOCK *v47; // rcx
  __int64 v48; // r14
  int v49; // ecx
  bool v50; // zf
  __int64 v51; // rdx
  int v52; // ecx
  __int64 v53; // rax
  __int64 v54; // rcx
  _QWORD *v55; // rdx
  __int64 v56; // rbx
  __int64 v57; // rcx
  _QWORD *v58; // rcx
  char v59; // bl
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // [rsp+28h] [rbp-61h]
  char v63; // [rsp+60h] [rbp-29h]
  char v64; // [rsp+61h] [rbp-28h]
  char v65; // [rsp+62h] [rbp-27h]
  int v66; // [rsp+64h] [rbp-25h] BYREF
  _QWORD *v67; // [rsp+68h] [rbp-21h] BYREF
  _QWORD **v68; // [rsp+70h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-11h] BYREF
  __int64 v70; // [rsp+90h] [rbp+7h] BYREF
  __int64 v71; // [rsp+98h] [rbp+Fh]
  _QWORD v72[8]; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v73; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int v74; // [rsp+108h] [rbp+7Fh]

  v74 = a4;
  v63 = 0;
  v72[0] = 0x7FFFFFFFFFFFFFFFLL;
  LOBYTE(v73) = 0;
  v66 = 0;
  v8 = 0;
  v65 = 0;
  v64 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a1 == *((_QWORD *)PspSystemPartition + 1) )
    CcScanLogHandleList(a1, &v66, a4, v72);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  CcSetLazyWriteScanQueuedInternal(a1 + 984, a4, 0LL);
  v9 = *(unsigned int *)(a1 + 1128);
  v10 = (__int64 *)(a1 + 1056);
  v11 = *(__int64 **)(a1 + 8);
  v12 = *(_QWORD *)(a1 + 1112) / v9;
  *(_QWORD *)(a1 + 1144) = v12;
  v13 = v12;
  v14 = *(_QWORD *)(a1 + 1120);
  *(_QWORD *)(a1 + 1152) = v14 / v9;
  v15 = v14 / v9;
  v16 = *v11;
  if ( (unsigned int)v9 <= 1 )
  {
    v19 = *v10;
    v18 = *(_QWORD *)(v16 + 18688);
    v17 = *v10;
  }
  else
  {
    v17 = *v10;
    v18 = *(_QWORD *)(v16 + 18688) + v13 * (unsigned int)(v9 - 1);
    v19 = *v10 + v15 * (unsigned int)(v9 - 1);
  }
  *(_QWORD *)(a1 + 1112) = v18;
  *(_QWORD *)(a1 + 1120) = v19;
  if ( !v17 && !*(_BYTE *)(a1 + 1050) )
  {
    if ( *(_QWORD *)(a1 + 1168) == a1 + 1168 )
    {
      *(_BYTE *)(a1 + 1049) = 0;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return;
    }
    CcRescheduleLazyWriteScan(a1, 0LL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_91;
  }
  v68 = &v67;
  v20 = (_QWORD **)(a1 + 848);
  v67 = &v67;
  while ( 1 )
  {
    v21 = *v20;
    if ( *v20 == v20 )
      break;
    if ( (_QWORD **)v21[1] != v20
      || (v22 = (_QWORD *)*v21, *(_QWORD **)(*v21 + 8LL) != v21)
      || (*v20 = v22, v22[1] = v20, v23 = v68, *v68 != &v67) )
    {
LABEL_77:
      __fastfail(3u);
    }
    v21[1] = v68;
    *v21 = &v67;
    *v23 = v21;
    v68 = (_QWORD **)v21;
  }
  *(_BYTE *)(a1 + 1050) = 0;
  v24 = CcCalculatePagesToWrite(a1, a4, (int)a1 + 1056, (int)a1 + 1080, 0);
  v25 = *(unsigned int *)(a1 + 976);
  v66 = v24;
  v26 = v24;
  CcAdjustThrottleForPartition(a1, a1 + 1056, a1 + 1080, v25);
  v27 = *(_QWORD *)(a1 + 1136);
  v28 = v74;
  *(_QWORD *)(a1 + 1064) = *(_QWORD *)(a1 + 1056);
  *(_DWORD *)(a1 + 1072) = v26;
  *(_DWORD *)(a1 + 976) = v26;
  *(_DWORD *)(v27 + 8LL * *(unsigned int *)(a2 + 152)) = v26;
  *(_QWORD *)(a2 + 216) = MEMORY[0xFFFFF78000000014];
  if ( (xmmword_140FC6B50 & 0x20000) != 0 )
    CcPerfLogLazyWriteScan(
      a3,
      v28,
      *(_DWORD *)(a1 + 976),
      *(_QWORD *)(a1 + 1056),
      *(_QWORD *)(**(_QWORD **)(a1 + 8) + 18688LL),
      *(_QWORD *)(a1 + 1080),
      (unsigned int)CcNumberOfMappedVacbs,
      *(_QWORD *)(a1 + 1088),
      *(_QWORD *)(a1 + 1096),
      *(_QWORD *)(a1 + 1144),
      *(_QWORD *)(a1 + 1152),
      *(unsigned int *)(a1 + 776));
  v29 = v66;
  v30 = a1 + 696;
  v31 = *(_QWORD *)(a1 + 696) - 136LL;
  v32 = 0LL;
  while ( v31 != v32 && v31 + 136 != v30 )
  {
    v33 = v31;
    LODWORD(v62) = v28;
    if ( v32 )
      v33 = v32;
    v71 = v33;
    if ( (unsigned __int8)CcShouldLazyWriteCacheMap(v31, a1, 0, v29, *(_QWORD *)(v31 + 96) & 0xFFFFFFFFFFFFFFF0uLL, v62) )
    {
      v8 = 0;
      v70 = 0LL;
      v34 = CcGetNodeForLazyWrite(v31);
      if ( _bittest((const signed __int32 *)(v31 + 152), 0x18u) )
      {
        v65 = 1;
        *(_DWORD *)(*(_QWORD *)(v31 + 248) + 144LL) |= 1u;
        v35 = *(_QWORD *)(v31 + 248);
        v36 = *(_QWORD *)(v31 + 264);
        if ( v36 > *(_QWORD *)(v35 + 112) )
        {
          *(_QWORD *)(v35 + 112) = v36;
          if ( (xmmword_140FC6B50 & 0x20000) != 0 )
            *(_QWORD *)(*(_QWORD *)(v31 + 248) + 128LL) = *(_QWORD *)((*(_QWORD *)(v31 + 96) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                    + 0x18);
        }
        v29 = v66;
      }
      v37 = *(_DWORD *)(v31 + 152);
      v38 = *(_DWORD *)(v31 + 112);
      *(_DWORD *)(v31 + 200) = v38;
      if ( (v37 & 0x200) != 0 && v38 >= 0x40 )
      {
        if ( (v37 & 0x1000000) != 0 && (v39 = *(_QWORD *)(v31 + 248), (v40 = *(_DWORD *)(v39 + 104)) != 0) )
        {
          if ( v38 <= v40 )
            v41 = v40 - v38;
          else
            v41 = 0;
          *(_DWORD *)(v39 + 104) = v41;
          ++CcDbgSkippedReductions;
        }
        else
        {
          *(_DWORD *)(v31 + 200) = v38 >> 3;
        }
      }
      if ( !v63 )
      {
        v42 = *(_DWORD *)(v31 + 200);
        if ( v42 < v29 )
        {
          v29 -= v42;
          v66 = v29;
        }
        else
        {
          if ( _bittest((const signed __int32 *)(v31 + 152), 9u) || v71 == v31 && (*(_DWORD *)(v31 + 276) & 0xF) == 0 )
          {
            LOBYTE(v73) = 1;
          }
          else
          {
            v43 = *(_QWORD *)v30;
            if ( *(_QWORD *)(*(_QWORD *)v30 + 8LL) != v30 )
              goto LABEL_77;
            v44 = *(_QWORD **)(a1 + 704);
            if ( *v44 != v30 )
              goto LABEL_77;
            *v44 = v43;
            *(_QWORD *)(v43 + 8) = v44;
            v45 = *(__int64 **)(v31 + 144);
            if ( *v45 != v31 + 136 )
              goto LABEL_77;
            *(_QWORD *)v30 = v31 + 136;
            *(_QWORD *)(a1 + 704) = v45;
            *v45 = v30;
            *(_QWORD *)(v31 + 144) = v30;
          }
          v29 = 0;
          v66 = 0;
          v63 = 1;
        }
      }
      *(_DWORD *)(v31 + 152) |= 0x20u;
      ++*(_DWORD *)(v31 + 112);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v46 = CcAllocateWorkQueueEntry(a1, 0LL, v34, &v70);
      v47 = (KSPIN_LOCK *)(a1 + 768);
      if ( v46 < 0 )
      {
        KeAcquireInStackQueuedSpinLock(v47, &LockHandle);
        *(_DWORD *)(v31 + 152) &= ~0x20u;
        --*(_DWORD *)(v31 + 112);
        break;
      }
      v48 = v70;
      *(_DWORD *)(v70 + 128) = 2;
      *(_QWORD *)(v48 + 16) = v31;
      KeAcquireInStackQueuedSpinLock(v47, &LockHandle);
      v49 = *(_DWORD *)(v31 + 112) - 1;
      v50 = (*(_DWORD *)(v31 + 152) & 0x10000) == 0;
      *(_DWORD *)(v31 + 112) = v49;
      if ( v50 )
      {
        if ( *(_DWORD *)(v31 + 4) || (v51 = v34 + 120, v49) )
          v51 = v34 + 104;
        *(_QWORD *)(v31 + 504) = v48;
      }
      else
      {
        v51 = v34 + 72;
        *(_QWORD *)(v31 + 504) = v48 | 1;
      }
      CcPostWorkQueue(v48, v51);
      v28 = v74;
      v64 = 1;
    }
    else
    {
      v52 = *(_DWORD *)(v31 + 152);
      if ( (v52 & 0x10020) == 0x10020 )
      {
        CcIncrementWriteBehindPriority(v31);
      }
      else if ( (unsigned int)++v8 >= 0x14 && (v52 & 0x820) == 0 )
      {
        ++*(_DWORD *)(v31 + 112);
        *(_DWORD *)(v31 + 152) = v52 | 0x20;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v8 = 0;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
        *(_DWORD *)(v31 + 152) &= ~0x20u;
        --*(_DWORD *)(v31 + 112);
      }
    }
    v53 = *(_QWORD *)(v31 + 136);
    if ( (_BYTE)v73 )
    {
      v54 = *(_QWORD *)v30;
      if ( *(_QWORD *)(*(_QWORD *)v30 + 8LL) != v30 )
        goto LABEL_77;
      v55 = *(_QWORD **)(a1 + 704);
      if ( *v55 != v30 )
        goto LABEL_77;
      *v55 = v54;
      v56 = v31 + 136;
      *(_QWORD *)(v54 + 8) = v55;
      v57 = *(_QWORD *)v56;
      if ( *(_QWORD *)(*(_QWORD *)v56 + 8LL) != v56 )
        goto LABEL_77;
      *(_QWORD *)v30 = v57;
      *(_QWORD *)(a1 + 704) = v56;
      *(_QWORD *)(v57 + 8) = v30;
      *(_QWORD *)v56 = v30;
      LOBYTE(v73) = 0;
    }
    v32 = v71;
    v31 = v53 - 136;
  }
  v58 = v67;
  v59 = v64;
  if ( v67 != &v67 )
    v59 = 1;
  while ( v58 != &v67 )
  {
    if ( (_QWORD **)v58[1] != &v67 )
      goto LABEL_77;
    v60 = *v58;
    if ( *(_QWORD **)(*v58 + 8LL) != v58 )
      goto LABEL_77;
    v67 = (_QWORD *)*v58;
    *(_QWORD *)(v60 + 8) = &v67;
    CcPostWorkQueue(v58, v58[19] + 104LL);
    v58 = v67;
  }
  v61 = 0LL;
  v73 = 0LL;
  if ( !(_BYTE)dword_140FC521C && !v59 && *(_QWORD *)(a1 + 1168) == a1 + 1168 )
  {
    CcComputeNextScanTime(a1, 0LL, v72, &v73);
    v61 = v73;
  }
  if ( v61 == 0x7FFFFFFFFFFFFFFFLL )
  {
    *(_BYTE *)(a1 + 780) = 1;
    *(_BYTE *)(a1 + 1049) = 0;
  }
  else
  {
    CcRescheduleLazyWriteScan(a1, &v73);
    if ( *(_BYTE *)(a1 + 780) )
      *(_BYTE *)(a1 + 780) = 0;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v65 )
    CcUpdateTimeOnLogHandles(a1);
  if ( (xmmword_140FC6B50 & 0x20000) != 0 )
    CcPerfLogLoggedStreamsStats(v28, *(unsigned int *)(a1 + 976));
  if ( *(_QWORD *)(a1 + 1168) != a1 + 1168 )
LABEL_91:
    CcPostDeferredWrites(a1, 0LL);
}
