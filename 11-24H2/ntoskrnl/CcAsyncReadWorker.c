/*
 * XREFs of CcAsyncReadWorker @ 0x1404DF280
 * Callers:
 *     CcAsyncReadWorkerThread @ 0x14057DDB0 (CcAsyncReadWorkerThread.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     CcFindNextWorkQueueEntry @ 0x1402A788C (CcFindNextWorkQueueEntry.c)
 *     CcFreeWorkQueueEntry @ 0x1402A7E6C (CcFreeWorkQueueEntry.c)
 *     ExQueueWorkItemToPartition @ 0x1402A7F70 (ExQueueWorkItemToPartition.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1402CD54C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x140397070 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     CcAsyncReadPrefetch @ 0x140461E40 (CcAsyncReadPrefetch.c)
 *     CcCompleteAsyncRead @ 0x1404DF87C (CcCompleteAsyncRead.c)
 *     CcPostWorkQueueAsyncRead @ 0x1404DFCEC (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1404E00C0 (CcShouldSpinAsyncReadWorkerThread.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rdi
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
  _QWORD *v34; // rax
  _QWORD *v35; // rdi
  signed __int64 v36; // rax
  signed __int64 v37; // rdx
  unsigned __int64 v38; // rtt
  _QWORD *v39; // rax
  _QWORD *v40; // rdi
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
  __int64 v51; // rax
  unsigned int v52; // r8d
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned int v55; // [rsp+40h] [rbp-C0h]
  __int64 v56; // [rsp+48h] [rbp-B8h]
  __int64 v57; // [rsp+50h] [rbp-B0h]
  __int64 v58; // [rsp+58h] [rbp-A8h]
  unsigned int v59; // [rsp+60h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h] BYREF
  __int64 v61; // [rsp+70h] [rbp-90h]
  __int64 v62; // [rsp+78h] [rbp-88h]
  _QWORD *v63; // [rsp+80h] [rbp-80h]
  PVOID Object[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v65; // [rsp+98h] [rbp-68h]
  PVOID P; // [rsp+A0h] [rbp-60h]
  __int64 v67; // [rsp+A8h] [rbp-58h]
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v69[64]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v70[64]; // [rsp+310h] [rbp+210h] BYREF

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
  v55 = v7;
  *(_OWORD *)Object = 0LL;
  v59 = v1;
  v58 = v2;
  v56 = v4;
  v67 = v5;
  memset_0(v69, 0, sizeof(v69));
  memset_0(v70, 0, sizeof(v70));
  v8 = *(_QWORD *)(v4 + 272);
  v65 = 3 * v1;
  v9 = (unsigned int)v1;
  v62 = v1;
  v10 = v8 + 24 * v1;
  v11 = 404 * v1;
  v57 = v10;
  v12 = (unsigned __int64 *)(v5 + 1160);
  v61 = *(_QWORD *)(v4 + 280) + v11;
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
    v17 = KeAbPreAcquire((__int64)v12, 0LL);
    v19 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
      ExfAcquirePushLockExclusiveEx(v12, (__int64)v17, (__int64)v12);
    if ( v19 )
      *((_BYTE *)v19 + 10) = 1;
    v20 = 16 * v62;
    while ( 1 )
    {
      v21 = (_QWORD *)(v20 + *(_QWORD *)(v4 + 256));
      if ( (_QWORD *)*v21 == v21 )
      {
        v2 = v58;
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
        v2 = v58;
        CcShouldSpinAsyncReadWorkerThread(v58, v4, &BugCheckParameter2, v59);
        v39 = KeAbPreAcquire((__int64)v12, 0LL);
        v40 = v39;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
          ExfAcquirePushLockExclusiveEx(v12, (__int64)v39, (__int64)v12);
        if ( v40 )
          *((_BYTE *)v40 + 10) = 1;
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
          *(_DWORD *)(v61 + 4LL * *(unsigned int *)(BugCheckParameter2 + 40)) = 0;
          *v44 = 0LL;
          ExQueueWorkItemToPartition((ULONG_PTR)v44, 0, *(_DWORD *)(v4 + 24), *(_QWORD *)(v2 + 8));
          BugCheckParameter2 = 0LL;
        }
LABEL_77:
        v9 = v62;
        if ( v55 && !v3 )
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
        v28 = v61;
        v29 = v3++;
        v69[v29] = v27;
        v70[v29] = NextWorkQueueEntry;
        _InterlockedIncrement((volatile signed __int32 *)(v28 + 4LL * v55));
        v10 &= -(__int64)(v3 < 0x3F);
        v57 = v10;
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
        CcFreeWorkQueueEntry((struct _SLIST_ENTRY *)NextWorkQueueEntry, v31, v32, v33);
      }
      else
      {
        CcPostWorkQueueAsyncRead(NextWorkQueueEntry);
      }
LABEL_44:
      v34 = KeAbPreAcquire((__int64)v12, 0LL);
      v35 = v34;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
        ExfAcquirePushLockExclusiveEx(v12, (__int64)v34, (__int64)v12);
      if ( v35 )
        *((_BYTE *)v35 + 10) = 1;
    }
  }
  if ( v3 )
  {
    v16 = MmWaitMultipleForCacheManagerPrefetch((__int64)v69, v3, v10);
    if ( v16 < v3 )
    {
      v6 = 1;
      _mm_lfence();
      v45 = &v70[v16];
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
          v69[v16] = 0LL;
          v63 = &v69[v16];
          if ( *(_DWORD *)(*(_QWORD *)(v46 + 16) + 528LL) == 1 && *(_DWORD *)(v46 + 40) <= 0x20000u )
          {
            CcCompleteAsyncRead(v46);
            CcFreeWorkQueueEntry((struct _SLIST_ENTRY *)v46, v48, v49, v50);
          }
          else
          {
            CcPostWorkQueueAsyncRead((PVOID)v46);
          }
          if ( v16 < --v3 )
          {
            v51 = v16 + 1;
            v52 = v3 - v16;
            v16 = v3;
            qmemcpy(v45, &v70[v51], 8LL * v52);
            qmemcpy(v63, &v69[v51], 8LL * v52);
          }
          v53 = v61;
          v10 = v57;
          v2 = v58;
          v54 = v16;
          v4 = v56;
          v69[v54] = 0LL;
          v70[v54] = 0LL;
          _InterlockedDecrement((volatile signed __int32 *)(v53 + 4LL * v55));
          if ( !v57 )
          {
            v10 = *(_QWORD *)(v56 + 272) + 8 * v65;
            v57 = v10;
          }
          goto LABEL_77;
        }
      }
      v2 = v58;
      v10 = v57;
LABEL_76:
      v4 = v56;
      goto LABEL_77;
    }
    v6 = 0;
LABEL_24:
    v4 = v56;
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
  v57 = v10;
  if ( v6 != 2 )
    goto LABEL_76;
  if ( !v55 )
  {
    ExFreePoolWithTag(P, 0x71576343u);
    CcDereferencePartitionAndPrivateVolumeCacheMap(v2, v67);
  }
}
