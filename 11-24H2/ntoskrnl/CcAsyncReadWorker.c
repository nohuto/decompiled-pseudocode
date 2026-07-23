/*
 * XREFs of CcAsyncReadWorker @ 0x1404D8CA0
 * Callers:
 *     CcAsyncReadWorkerThread @ 0x14057B240 (CcAsyncReadWorkerThread.c)
 * Callees:
 *     CcPostWorkQueueAsyncRead @ 0x14027372C (CcPostWorkQueueAsyncRead.c)
 *     CcFreeWorkQueueEntry @ 0x140279C5C (CcFreeWorkQueueEntry.c)
 *     ExQueueWorkItemToPartition @ 0x140279D60 (ExQueueWorkItemToPartition.c)
 *     CcFindNextWorkQueueEntry @ 0x14027ACDC (CcFindNextWorkQueueEntry.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1402E624C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1403529EC (MmWaitMultipleForCacheManagerPrefetch.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CcAsyncReadPrefetch @ 0x140457450 (CcAsyncReadPrefetch.c)
 *     CcCompleteAsyncRead @ 0x1404D929C (CcCompleteAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1404D970C (CcShouldSpinAsyncReadWorkerThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall CcAsyncReadWorker(_QWORD *StartContext)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  unsigned int v3; // r14d
  __int64 v4; // r15
  __int64 v5; // rdi
  int v6; // r13d
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rcx
  unsigned __int64 *v12; // rbx
  bool v13; // zf
  void *v14; // rax
  NTSTATUS v15; // eax
  unsigned int v16; // r15d
  char *v17; // rax
  __int64 v18; // rcx
  char *v19; // rdi
  __int64 v20; // rsi
  _QWORD *v21; // r8
  _QWORD *NextWorkQueueEntry; // rdi
  signed __int64 v23; // rax
  signed __int64 v24; // rdx
  unsigned __int64 v25; // rtt
  __int64 *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  char *v34; // rax
  char *v35; // rdi
  signed __int64 v36; // rax
  signed __int64 v37; // rdx
  unsigned __int64 v38; // rtt
  char *v39; // rax
  char *v40; // rdi
  signed __int64 v41; // rax
  signed __int64 v42; // rdx
  unsigned __int64 v43; // rtt
  _QWORD *v44; // rcx
  __int64 *v45; // r12
  __int64 v46; // rdi
  void *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned int v51; // r8d
  __int64 v52; // rax
  unsigned int v53; // r8d
  __int64 v54; // rcx
  __int64 v55; // rax
  unsigned int v56; // [rsp+40h] [rbp-C0h]
  __int64 v57; // [rsp+48h] [rbp-B8h]
  __int64 v58; // [rsp+50h] [rbp-B0h]
  __int64 v59; // [rsp+58h] [rbp-A8h]
  unsigned int v60; // [rsp+60h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h] BYREF
  __int64 v62; // [rsp+70h] [rbp-90h]
  __int64 v63; // [rsp+78h] [rbp-88h]
  _QWORD *v64; // [rsp+80h] [rbp-80h]
  PVOID Object[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v66; // [rsp+98h] [rbp-68h]
  PVOID P; // [rsp+A0h] [rbp-60h]
  __int64 v68; // [rsp+A8h] [rbp-58h]
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v70[64]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v71[64]; // [rsp+310h] [rbp+210h] BYREF

  if ( !StartContext )
    return;
  v1 = *((unsigned int *)StartContext + 9);
  v2 = StartContext[7];
  v3 = 0;
  v4 = StartContext[9];
  v5 = StartContext[8];
  v6 = 3;
  BugCheckParameter2 = 0LL;
  v7 = *((_DWORD *)StartContext + 10);
  P = StartContext;
  v56 = v7;
  *(_OWORD *)Object = 0LL;
  v60 = v1;
  v59 = v2;
  v57 = v4;
  v68 = v5;
  memset_0(v70, 0, sizeof(v70));
  memset_0(v71, 0, sizeof(v71));
  v8 = *(_QWORD *)(v4 + 272);
  v66 = 3 * v1;
  v9 = (unsigned int)v1;
  v63 = v1;
  v10 = v8 + 24 * v1;
  v11 = 404 * v1;
  v58 = v10;
  v12 = (unsigned __int64 *)(v5 + 1160);
  v62 = *(_QWORD *)(v4 + 280) + v11;
  if ( !CcEnablePerVolumeLazyWriter )
    v12 = (unsigned __int64 *)(v2 + 1224);
  v13 = *(_DWORD *)(v4 + 4) == 1;
  v14 = (void *)(v2 + 1304);
  Object[0] = (PVOID)v10;
  if ( !v13 )
    v14 = (void *)(v5 + 1176);
  Object[1] = v14;
LABEL_7:
  if ( v3 < 0x3F && *(_QWORD *)(*(_QWORD *)(v4 + 256) + 16 * v9) != *(_QWORD *)(v4 + 256) + 16 * v9 )
  {
    v6 = 0;
LABEL_25:
    v17 = (char *)KeAbPreAcquire((__int64)v12, 0LL);
    v19 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
      ExfAcquirePushLockExclusiveEx(v12, v17, (__int64)v12);
    if ( v19 )
      v19[10] = 1;
    v20 = 16 * v63;
    while ( 1 )
    {
      v21 = (_QWORD *)(v20 + *(_QWORD *)(v4 + 256));
      if ( (_QWORD *)*v21 == v21 )
      {
        v2 = v59;
        goto LABEL_58;
      }
      if ( v3 >= 0x3F )
      {
        _m_prefetchw(v12);
        v36 = *v12;
        v37 = *v12 - 16;
        if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v37 = 0LL;
        if ( (v36 & 2) != 0
          || (v38 = *v12, v38 != _InterlockedCompareExchange64((volatile signed __int64 *)v12, v37, v36)) )
        {
          ExfReleasePushLock(v12);
        }
        KeAbPostRelease((ULONG_PTR)v12);
        v2 = v59;
        CcShouldSpinAsyncReadWorkerThread(v59, v4, &BugCheckParameter2, v60);
        v39 = (char *)KeAbPreAcquire((__int64)v12, 0LL);
        v40 = v39;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
          ExfAcquirePushLockExclusiveEx(v12, v39, (__int64)v12);
        if ( v40 )
          v40[10] = 1;
LABEL_58:
        _m_prefetchw(v12);
        v41 = *v12;
        v42 = *v12 - 16;
        if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v42 = 0LL;
        if ( (v41 & 2) != 0
          || (v43 = *v12, v43 != _InterlockedCompareExchange64((volatile signed __int64 *)v12, v42, v41)) )
        {
          ExfReleasePushLock(v12);
        }
        KeAbPostRelease((ULONG_PTR)v12);
        v44 = (_QWORD *)BugCheckParameter2;
        if ( BugCheckParameter2 )
        {
          *(_DWORD *)(v62 + 4LL * *(unsigned int *)(BugCheckParameter2 + 40)) = 0;
          *v44 = 0LL;
          ExQueueWorkItemToPartition((ULONG_PTR)v44, 0, *(_DWORD *)(v4 + 24), *(_QWORD *)(v2 + 8));
          BugCheckParameter2 = 0LL;
        }
LABEL_77:
        v9 = v63;
        if ( v56 && !v3 )
          return;
        goto LABEL_7;
      }
      NextWorkQueueEntry = CcFindNextWorkQueueEntry(v18, v4, v21);
      _m_prefetchw(v12);
      v23 = *v12;
      v24 = *v12 - 16;
      if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v24 = 0LL;
      if ( (v23 & 2) != 0
        || (v25 = *v12, v25 != _InterlockedCompareExchange64((volatile signed __int64 *)v12, v24, v23)) )
      {
        ExfReleasePushLock(v12);
      }
      KeAbPostRelease((ULONG_PTR)v12);
      if ( !CcAsyncReadPrefetch((__int64)NextWorkQueueEntry) )
        goto LABEL_43;
      v26 = (__int64 *)NextWorkQueueEntry[6];
      v27 = *v26;
      if ( *v26 )
      {
        v28 = v62;
        v29 = v3++;
        v70[v29] = v27;
        v71[v29] = NextWorkQueueEntry;
        _InterlockedIncrement((volatile signed __int32 *)(v28 + 4LL * v56));
        v10 &= -(__int64)(v3 < 0x3F);
        v58 = v10;
        goto LABEL_44;
      }
      ExFreePoolWithTag(v26, 0x73416343u);
      v30 = NextWorkQueueEntry[2];
      *((_DWORD *)NextWorkQueueEntry + 32) = 6;
      NextWorkQueueEntry[6] = 0LL;
      if ( *(_DWORD *)(v30 + 528) == 1 && *((_DWORD *)NextWorkQueueEntry + 10) <= 0x20000u )
      {
LABEL_43:
        CcCompleteAsyncRead(NextWorkQueueEntry);
        CcFreeWorkQueueEntry((_SLIST_ENTRY *)NextWorkQueueEntry, v31, v32, v33);
      }
      else
      {
        CcPostWorkQueueAsyncRead(NextWorkQueueEntry, 0LL);
      }
LABEL_44:
      v34 = (char *)KeAbPreAcquire((__int64)v12, 0LL);
      v35 = v34;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
        ExfAcquirePushLockExclusiveEx(v12, v34, (__int64)v12);
      if ( v35 )
        v35[10] = 1;
    }
  }
  if ( v3 )
  {
    v16 = MmWaitMultipleForCacheManagerPrefetch((__int64)v70, v3, v10);
    if ( v16 < v3 )
    {
      v6 = 1;
      _mm_lfence();
      v45 = &v71[v16];
      v46 = *v45;
      if ( *v45 )
      {
        v47 = *(void **)(v46 + 48);
        if ( v47 )
        {
          ExFreePoolWithTag(v47, 0x73416343u);
          *(_DWORD *)(v46 + 128) = 6;
          *v45 = 0LL;
          *(_QWORD *)(v46 + 48) = 0LL;
          v70[v16] = 0LL;
          v64 = &v70[v16];
          if ( *(_DWORD *)(*(_QWORD *)(v46 + 16) + 528LL) == 1 && *(_DWORD *)(v46 + 40) <= 0x20000u )
          {
            CcCompleteAsyncRead(v46);
            CcFreeWorkQueueEntry((_SLIST_ENTRY *)v46, v48, v49, v50);
          }
          else
          {
            CcPostWorkQueueAsyncRead((_QWORD *)v46, 0LL);
          }
          v51 = v3 - 1;
          v3 = v51;
          if ( v16 < v51 )
          {
            v52 = v16 + 1;
            v53 = v51 - v16;
            v16 = v3;
            qmemcpy(v45, &v71[v52], 8LL * v53);
            qmemcpy(v64, &v70[v52], 8LL * v53);
          }
          v54 = v62;
          v10 = v58;
          v2 = v59;
          v55 = v16;
          v4 = v57;
          v70[v55] = 0LL;
          v71[v55] = 0LL;
          _InterlockedDecrement((volatile signed __int32 *)(v54 + 4LL * v56));
          if ( !v58 )
          {
            v10 = *(_QWORD *)(v57 + 272) + 8 * v66;
            v58 = v10;
          }
          goto LABEL_77;
        }
      }
      v2 = v59;
      v10 = v58;
LABEL_76:
      v4 = v57;
      goto LABEL_77;
    }
    v6 = 0;
LABEL_24:
    v4 = v57;
    goto LABEL_25;
  }
  v15 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
  if ( v15 )
  {
    if ( v15 == 1 )
      v6 = 2;
  }
  else
  {
    v6 = 0;
  }
  if ( !v6 )
    goto LABEL_24;
  if ( v6 == 1 )
    goto LABEL_76;
  v58 = v10;
  if ( v6 != 2 )
    goto LABEL_76;
  if ( !v56 )
  {
    ExFreePoolWithTag(P, 0x71576343u);
    CcDereferencePartitionAndPrivateVolumeCacheMap(v2, v68);
  }
}
