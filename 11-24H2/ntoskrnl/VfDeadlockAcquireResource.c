/*
 * XREFs of VfDeadlockAcquireResource @ 0x140BAA3C4
 * Callers:
 *     ViDeadlockExAcquireFastMutexUnsafe_Exit @ 0x140B9B3D0 (ViDeadlockExAcquireFastMutexUnsafe_Exit.c)
 *     ViDeadlockExAcquireFastMutex_Exit @ 0x140B9B410 (ViDeadlockExAcquireFastMutex_Exit.c)
 *     ViDeadlockExAcquireSharedStarveExclusive_Exit @ 0x140B9B450 (ViDeadlockExAcquireSharedStarveExclusive_Exit.c)
 *     ViDeadlockExEnterCriticalRegionAndAcquireResourceExclusive_Exit @ 0x140B9B490 (ViDeadlockExEnterCriticalRegionAndAcquireResourceExclusive_Exit.c)
 *     ViDeadlockExTryToAcquireFastMutex_Exit @ 0x140B9B530 (ViDeadlockExTryToAcquireFastMutex_Exit.c)
 *     ViDeadlockKeAcquireInStackQueuedSpinLockRaiseToSynch_Exit @ 0x140B9B6D0 (ViDeadlockKeAcquireInStackQueuedSpinLockRaiseToSynch_Exit.c)
 *     ViDeadlockKeInitializeMutant_Exit @ 0x140B9B710 (ViDeadlockKeInitializeMutant_Exit.c)
 *     ViDeadlockKeTryToAcquireSpinLockAtDpcLevel_Exit @ 0x140B9B850 (ViDeadlockKeTryToAcquireSpinLockAtDpcLevel_Exit.c)
 *     ViDeadlockObjectAcquired @ 0x140B9BAE4 (ViDeadlockObjectAcquired.c)
 *     ViDeadlockKeAcquireSpinLockRaiseToDpc_Exit @ 0x140BAA390 (ViDeadlockKeAcquireSpinLockRaiseToDpc_Exit.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140231C20 (RtlCaptureStackBackTrace.c)
 *     VfReportIssueWithOptions @ 0x1406109F4 (VfReportIssueWithOptions.c)
 *     ViLowerIrql @ 0x140612828 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x140612860 (ViRaiseIrqlToDpcLevel.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ViDeadlockAddResource @ 0x140B9A880 (ViDeadlockAddResource.c)
 *     ViDeadlockAddThread @ 0x140B9AAC8 (ViDeadlockAddThread.c)
 *     ViDeadlockAllocate @ 0x140B9AB88 (ViDeadlockAllocate.c)
 *     ViDeadlockAnalyze @ 0x140B9ABE4 (ViDeadlockAnalyze.c)
 *     ViDeadlockCheckDuplicatesAmongChildren @ 0x140B9B048 (ViDeadlockCheckDuplicatesAmongChildren.c)
 *     ViDeadlockCheckDuplicatesAmongRoots @ 0x140B9B0C8 (ViDeadlockCheckDuplicatesAmongRoots.c)
 *     ViDeadlockDetectionLock @ 0x140B9B1D4 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140B9B20C (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x140B9B680 (ViDeadlockFree.c)
 *     ViDeadlockPreprocessOptions @ 0x140B9BBC4 (ViDeadlockPreprocessOptions.c)
 *     ViDeadlockRemoveThread @ 0x140B9BF9C (ViDeadlockRemoveThread.c)
 *     ViDeadlockSearchResource @ 0x140B9C0E0 (ViDeadlockSearchResource.c)
 *     ViDeadlockSearchThread @ 0x140B9C1BC (ViDeadlockSearchThread.c)
 *     ViDeadlockSimilarNode @ 0x140B9C258 (ViDeadlockSimilarNode.c)
 *     ViDeadlockUpdateChildrenCount @ 0x140B9C2A4 (ViDeadlockUpdateChildrenCount.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x140B9C2E4 (ViIsThreadInsidePagingCodePaths.c)
 *     ViDeadlockCanProceed @ 0x140BA9B94 (ViDeadlockCanProceed.c)
 */

void __fastcall VfDeadlockAcquireResource(LONG *a1, int a2, unsigned __int64 a3, int a4, void *a5)
{
  ULONG_PTR v6; // rdi
  void *v8; // r15
  _QWORD *v9; // r14
  USHORT v10; // ax
  int v11; // ecx
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // r10d
  void *v15; // rsi
  int v16; // edi
  _QWORD *v17; // rsi
  __int64 v18; // rcx
  ULONG_PTR v19; // r13
  _QWORD *v20; // rax
  unsigned __int16 v21; // ax
  int v22; // edx
  __int64 v23; // r15
  __int64 v24; // r9
  char *v25; // rdi
  int v26; // eax
  int v27; // r11d
  _QWORD *v28; // r9
  _QWORD *v29; // r10
  _QWORD *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rax
  int v34; // eax
  _OWORD *v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rcx
  _QWORD *v38; // rbx
  unsigned __int8 v39; // [rsp+34h] [rbp-8Dh]
  PVOID v40; // [rsp+38h] [rbp-89h]
  PVOID v41; // [rsp+40h] [rbp-81h]
  PVOID Entry; // [rsp+50h] [rbp-71h] BYREF
  int v44; // [rsp+58h] [rbp-69h]
  PVOID v45; // [rsp+60h] [rbp-61h]
  int v46; // [rsp+68h] [rbp-59h]
  int v47; // [rsp+6Ch] [rbp-55h]
  PVOID v48; // [rsp+70h] [rbp-51h]
  PVOID v49; // [rsp+78h] [rbp-49h] BYREF
  __int64 v50; // [rsp+80h] [rbp-41h]
  PVOID BackTrace[2]; // [rsp+90h] [rbp-31h] BYREF
  __int128 v52; // [rsp+A0h] [rbp-21h]
  __int128 v53; // [rsp+B0h] [rbp-11h]
  __int128 v54; // [rsp+C0h] [rbp-1h]

  v6 = a2;
  v47 = a2;
  v50 = (__int64)a5;
  memset_0(BackTrace, 0, 0x40uLL);
  v44 = 0;
  v8 = 0LL;
  v49 = 0LL;
  Entry = 0LL;
  if ( (_DWORD)v6 == 8
    && (!VfWin32kDllBase
     || VfWin32kDllBase > (unsigned __int64)a5
     || VfWin32kDllBase + (unsigned __int64)(unsigned int)VfWin32kSizeOfImage <= (unsigned __int64)a5)
    || !ViDeadlockCanProceed(a1)
    || ViIsThreadInsidePagingCodePaths()
    || *((_DWORD *)ViDeadlockGlobals + 8196)
    || *((int *)ViDeadlockGlobals + 8282) > 1024 )
  {
    return;
  }
  v45 = 0LL;
  v9 = 0LL;
  v46 = ViDeadlockResourceTypeInfo[v6];
  v40 = ViDeadlockAllocate(3);
  v48 = ViDeadlockAllocate(2);
  v41 = ViDeadlockAllocate(1);
  v10 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  v11 = v10;
  if ( !v10 )
  {
    BackTrace[0] = a5;
    v11 = 1;
LABEL_12:
    BackTrace[v11] = 0LL;
    goto LABEL_13;
  }
  if ( v10 < 8u )
    goto LABEL_12;
LABEL_13:
  v39 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1);
  v12 = MEMORY[0xFFFFF78000000320];
  if ( !ViDeadlockDetectionEnabled || (v45 = v48, v48 = 0LL, !v45) )
  {
    v15 = v41;
    goto LABEL_76;
  }
  v9 = ViDeadlockSearchThread(a3);
  if ( v9 )
  {
    v14 = 1;
    goto LABEL_19;
  }
  v13 = ViDeadlockAddThread(a3, (__int64)v40);
  v40 = 0LL;
  v9 = (_QWORD *)v13;
  v14 = 1;
  if ( v13 )
  {
    LODWORD(v8) = 1;
LABEL_19:
    if ( (_DWORD)v6 == 8 )
    {
      *((_BYTE *)v9 + 48) = 1;
      goto LABEL_21;
    }
    v17 = ViDeadlockSearchResource((unsigned __int64)a1, &Entry);
    if ( v17 )
    {
LABEL_25:
      v18 = *(int *)v17;
      v14 = 1;
      if ( (_DWORD)v18 != (_DWORD)v6 )
      {
        if ( ((unsigned int)(v6 - 3) > 1 || (unsigned int)(v18 - 3) > 1)
          && ((_DWORD)v18 != 7 || (unsigned int)(v6 - 5) > 1) )
        {
          ViDeadlockPreprocessOptions(
            byte_140E0EA74,
            "Acquiring lock 0x%p using mismatched API for this lock type.",
            4104LL,
            (__int64)a1,
            v18,
            v6);
          VfReportIssueWithOptions(0xC4u, 0x1008uLL, (ULONG_PTR)a1, *(int *)v17, v6, byte_140E0EA74);
LABEL_36:
          v15 = v41;
          v16 = 0;
          goto LABEL_77;
        }
        *(_DWORD *)v17 = v6;
      }
      if ( (unsigned int)(v6 - 5) <= 1 )
        v19 = v9[1];
      else
        v19 = v9[2];
      v20 = (_QWORD *)v17[2];
      if ( v20 && v20 != v9 )
        *((_WORD *)v17 + 3) = 0;
      v21 = *((_WORD *)v17 + 3) + 1;
      v17[2] = v9;
      *((_WORD *)v17 + 3) = v21;
      if ( v19 )
      {
        if ( v21 > 1u )
        {
          if ( (v46 & 1) != 0 )
            goto LABEL_21;
          ViDeadlockPreprocessOptions(
            dword_140E0EA98,
            "Lock 0x%p doesn't support recursive acquire.",
            4096LL,
            (__int64)a1,
            (__int64)v17,
            (__int64)v9);
          VfReportIssueWithOptions(0xC4u, 0x1000uLL, (ULONG_PTR)a1, (ULONG_PTR)v17, (ULONG_PTR)v9, dword_140E0EA98);
          goto LABEL_36;
        }
        v22 = a4;
        v23 = v19 + 8;
        v24 = *(_QWORD *)(v19 + 8);
        while ( v24 != v23 )
        {
          v25 = (char *)(v24 - 24);
          if ( ViDeadlockSimilarNode((__int64)a1, v22, v24 - 24) )
          {
            ViDeadlockCheckDuplicatesAmongChildren(v19, (__int64)v25, (__int64)&Entry);
            goto LABEL_58;
          }
        }
        if ( *((_WORD *)v17 + 2) )
        {
          if ( !v22 )
          {
            v26 = ViDeadlockAnalyze((ULONG_PTR)a1, v19, v14, 0, v50);
            v14 = 1;
            if ( v26 )
              goto LABEL_59;
          }
        }
        LOBYTE(v27) = a4;
        v28 = v17 + 3;
      }
      else
      {
        v27 = a4;
        v28 = v17 + 3;
        v29 = (_QWORD *)v17[3];
        while ( v29 != v28 )
        {
          v25 = (char *)(v29 - 5);
          v29 = (_QWORD *)*v29;
          if ( !*(_QWORD *)v25 && ViDeadlockSimilarNode((__int64)a1, v27, (__int64)v25) )
          {
            ViDeadlockCheckDuplicatesAmongRoots((__int64)v25, (__int64)&Entry);
LABEL_58:
            v14 = 1;
            if ( !v25 )
            {
LABEL_59:
              v15 = v41;
              v16 = 0;
              goto LABEL_78;
            }
LABEL_68:
            v34 = v47;
            *((_DWORD *)v25 + 18) |= v14;
            *((_QWORD *)v25 + 8) = v9;
            if ( v34 - 5 <= v14 )
              v9[1] = v25;
            else
              v9[2] = v25;
            *((_DWORD *)v9 + 10) += v14;
            v35 = *(_OWORD **)v25;
            if ( *(_QWORD *)v25 )
            {
              *((_OWORD *)v25 + 9) = v35[5];
              *((_OWORD *)v25 + 10) = v35[6];
              *((_OWORD *)v25 + 11) = v35[7];
              *((_OWORD *)v25 + 12) = v35[8];
            }
            v36 = *((_QWORD *)v25 + 7);
            *((_OWORD *)v25 + 5) = *(_OWORD *)BackTrace;
            *((_OWORD *)v25 + 6) = v52;
            *((_OWORD *)v25 + 7) = v53;
            *((_OWORD *)v25 + 8) = v54;
            *(_OWORD *)(v36 + 120) = *((_OWORD *)v25 + 5);
            *(_OWORD *)(v36 + 136) = *((_OWORD *)v25 + 6);
            *(_OWORD *)(v36 + 152) = *((_OWORD *)v25 + 7);
            *(_OWORD *)(v36 + 168) = *((_OWORD *)v25 + 8);
LABEL_21:
            v15 = v41;
            v16 = 0;
            goto LABEL_78;
          }
        }
        v14 = 1;
        v23 = 8LL;
        v44 = 1;
      }
      v25 = (char *)v45;
      v45 = 0LL;
      *((_QWORD *)v25 + 10) = 0LL;
      *((_QWORD *)v25 + 18) = 0LL;
      v30 = v25 + 24;
      *((_QWORD *)v25 + 9) = 0LL;
      *((_QWORD *)v25 + 8) = 0LL;
      *(_QWORD *)v25 = v19;
      *((_QWORD *)v25 + 7) = v17;
      *((_DWORD *)v25 + 18) = 8 * *((_DWORD *)ViDeadlockGlobals + 8201);
      *((_QWORD *)v25 + 2) = v25 + 8;
      *((_QWORD *)v25 + 1) = v25 + 8;
      *((_QWORD *)v25 + 4) = v25 + 24;
      *((_QWORD *)v25 + 3) = v25 + 24;
      *((_DWORD *)v25 + 18) ^= ((unsigned __int8)*((_DWORD *)v25 + 18) ^ (unsigned __int8)(2 * v27)) & 2;
      if ( !v44 )
      {
        v31 = *(_QWORD *)v23;
        if ( *(_QWORD *)(*(_QWORD *)v23 + 8LL) != v23 )
          goto LABEL_65;
        *v30 = v31;
        *((_QWORD *)v25 + 4) = v23;
        *(_QWORD *)(v31 + 8) = v30;
        *(_QWORD *)v23 = v30;
        ViDeadlockUpdateChildrenCount((__int64 **)v19, v14);
      }
      v32 = *v28;
      v33 = v25 + 40;
      if ( *(_QWORD **)(*v28 + 8LL) == v28 )
      {
        *v33 = v32;
        *((_QWORD *)v25 + 6) = v28;
        *(_QWORD *)(v32 + 8) = v33;
        *v28 = v33;
        *((_WORD *)v17 + 2) += v14;
        if ( (unsigned __int16)*((_DWORD *)v17 + 1) > 0xFFF0u )
          ViDeadlockState |= 0x20u;
        goto LABEL_68;
      }
LABEL_65:
      __fastfail(3u);
    }
    v15 = v41;
    if ( (unsigned int)ViDeadlockAddResource(
                         (ULONG_PTR)a1,
                         v6,
                         (__int64)v41,
                         BackTrace,
                         (__int64 *)&v49,
                         (__int64)&Entry) )
    {
      v41 = 0LL;
      v17 = ViDeadlockSearchResource((unsigned __int64)a1, &Entry);
      goto LABEL_25;
    }
    if ( (_DWORD)v8 )
    {
      v16 = 1;
      ViDeadlockRemoveThread((ULONG_PTR)v9, 0);
      v14 = 1;
      goto LABEL_78;
    }
LABEL_76:
    v16 = 0;
LABEL_77:
    v14 = 1;
LABEL_78:
    v8 = v40;
    goto LABEL_79;
  }
  v15 = v41;
  v16 = 0;
LABEL_79:
  if ( MEMORY[0xFFFFF78000000320] - v12 > *(_QWORD *)ViDeadlockGlobals )
    *(_QWORD *)ViDeadlockGlobals = MEMORY[0xFFFFF78000000320] - v12;
  ViDeadlockDetectionUnlock(v14);
  ViLowerIrql(v39);
  v37 = Entry;
  if ( Entry )
  {
    do
    {
      v38 = (_QWORD *)*v37;
      ViDeadlockFree(v37, 2);
      v37 = v38;
    }
    while ( v38 );
  }
  if ( v49 )
    ViDeadlockFree(v49, 1);
  if ( v16 )
    ViDeadlockFree(v9, 3);
  if ( v45 )
    ViDeadlockFree(v45, 2);
  if ( v15 )
    ViDeadlockFree(v15, 1);
  if ( v48 )
    ViDeadlockFree(v48, 2);
  if ( v8 )
    ViDeadlockFree(v8, 3);
}
