/*
 * XREFs of CcAsyncReadWorker @ 0x1404DFB90
 * Callers:
 *     CcAsyncReadWorkerThread @ 0x14057AA90 (CcAsyncReadWorkerThread.c)
 * Callees:
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1403A549C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcPostWorkQueueAsyncRead @ 0x1403AA564 (CcPostWorkQueueAsyncRead.c)
 *     CcFindNextWorkQueueEntry @ 0x1403AC0BC (CcFindNextWorkQueueEntry.c)
 *     CcFreeWorkQueueEntry @ 0x1403AC6BC (CcFreeWorkQueueEntry.c)
 *     ExQueueWorkItemToPartition @ 0x1403AC7C0 (ExQueueWorkItemToPartition.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x14045B73C (MmWaitMultipleForCacheManagerPrefetch.c)
 *     CcAsyncReadPrefetch @ 0x1404627C8 (CcAsyncReadPrefetch.c)
 *     CcCompleteAsyncRead @ 0x1404E018C (CcCompleteAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1404E05FC (CcShouldSpinAsyncReadWorkerThread.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // rdi
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
  __int64 *v31; // rax
  __int64 *v32; // rdi
  signed __int64 v33; // rax
  signed __int64 v34; // rdx
  unsigned __int64 v35; // rtt
  __int64 *v36; // rax
  __int64 *v37; // rdi
  signed __int64 v38; // rax
  signed __int64 v39; // rdx
  unsigned __int64 v40; // rtt
  _QWORD *v41; // rcx
  __int64 *v42; // r12
  __int64 v43; // rdi
  void *v44; // rcx
  unsigned int v45; // r8d
  __int64 v46; // rax
  unsigned int v47; // r8d
  __int64 v48; // rcx
  __int64 v49; // rax
  unsigned int v50; // [rsp+40h] [rbp-C0h]
  __int64 v51; // [rsp+48h] [rbp-B8h]
  __int64 v52; // [rsp+50h] [rbp-B0h]
  __int64 v53; // [rsp+58h] [rbp-A8h]
  unsigned int v54; // [rsp+60h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h] BYREF
  __int64 v56; // [rsp+70h] [rbp-90h]
  __int64 v57; // [rsp+78h] [rbp-88h]
  _QWORD *v58; // [rsp+80h] [rbp-80h]
  PVOID Object[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v60; // [rsp+98h] [rbp-68h]
  PVOID P; // [rsp+A0h] [rbp-60h]
  __int64 v62; // [rsp+A8h] [rbp-58h]
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v64[64]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v65[64]; // [rsp+310h] [rbp+210h] BYREF

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
  v50 = v7;
  *(_OWORD *)Object = 0LL;
  v54 = v1;
  v53 = v2;
  v51 = v4;
  v62 = v5;
  memset_0(v64, 0, sizeof(v64));
  memset_0(v65, 0, sizeof(v65));
  v8 = *(_QWORD *)(v4 + 272);
  v60 = 3 * v1;
  v9 = (unsigned int)v1;
  v57 = v1;
  v10 = v8 + 24 * v1;
  v11 = 404 * v1;
  v52 = v10;
  v12 = (unsigned __int64 *)(v5 + 1160);
  v56 = *(_QWORD *)(v4 + 280) + v11;
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
      ExfAcquirePushLockExclusiveEx(v12, v17, (__int64)v12);
    if ( v19 )
      *((_BYTE *)v19 + 10) = 1;
    v20 = 16 * v57;
    while ( 1 )
    {
      v21 = (_QWORD *)(v20 + *(_QWORD *)(v4 + 256));
      if ( (_QWORD *)*v21 == v21 )
      {
        v2 = v53;
        goto LABEL_58;
      }
      if ( v3 >= 0x3F )
      {
        _m_prefetchw(v12);
        v33 = *v12;
        v34 = *v12 - 16;
        if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v34 = 0LL;
        if ( (v33 & 2) != 0
          || (v35 = *v12, v35 != _InterlockedCompareExchange64((volatile signed __int64 *)v12, v34, v33)) )
        {
          ExfReleasePushLock(v12);
        }
        KeAbPostRelease((ULONG_PTR)v12);
        v2 = v53;
        CcShouldSpinAsyncReadWorkerThread(v53, v4, &BugCheckParameter2, v54);
        v36 = KeAbPreAcquire((__int64)v12, 0LL);
        v37 = v36;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
          ExfAcquirePushLockExclusiveEx(v12, v36, (__int64)v12);
        if ( v37 )
          *((_BYTE *)v37 + 10) = 1;
LABEL_58:
        _m_prefetchw(v12);
        v38 = *v12;
        v39 = *v12 - 16;
        if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v39 = 0LL;
        if ( (v38 & 2) != 0
          || (v40 = *v12, v40 != _InterlockedCompareExchange64((volatile signed __int64 *)v12, v39, v38)) )
        {
          ExfReleasePushLock(v12);
        }
        KeAbPostRelease((ULONG_PTR)v12);
        v41 = (_QWORD *)BugCheckParameter2;
        if ( BugCheckParameter2 )
        {
          *(_DWORD *)(v56 + 4LL * *(unsigned int *)(BugCheckParameter2 + 40)) = 0;
          *v41 = 0LL;
          ExQueueWorkItemToPartition(v41, 0, *(_DWORD *)(v4 + 24), *(_QWORD *)(v2 + 8));
          BugCheckParameter2 = 0LL;
        }
LABEL_77:
        v9 = v57;
        if ( v50 && !v3 )
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
        v28 = v56;
        v29 = v3++;
        v64[v29] = v27;
        v65[v29] = NextWorkQueueEntry;
        _InterlockedIncrement((volatile signed __int32 *)(v28 + 4LL * v50));
        v10 &= -(__int64)(v3 < 0x3F);
        v52 = v10;
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
        CcFreeWorkQueueEntry((_SLIST_ENTRY *)NextWorkQueueEntry);
      }
      else
      {
        CcPostWorkQueueAsyncRead(NextWorkQueueEntry, 0LL);
      }
LABEL_44:
      v31 = KeAbPreAcquire((__int64)v12, 0LL);
      v32 = v31;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
        ExfAcquirePushLockExclusiveEx(v12, v31, (__int64)v12);
      if ( v32 )
        *((_BYTE *)v32 + 10) = 1;
    }
  }
  if ( v3 )
  {
    v16 = MmWaitMultipleForCacheManagerPrefetch((__int64)v64, v3, v10);
    if ( v16 < v3 )
    {
      v6 = 1;
      _mm_lfence();
      v42 = &v65[v16];
      v43 = *v42;
      if ( *v42 )
      {
        v44 = *(void **)(v43 + 48);
        if ( v44 )
        {
          ExFreePoolWithTag(v44, 0x73416343u);
          *(_DWORD *)(v43 + 128) = 6;
          *v42 = 0LL;
          *(_QWORD *)(v43 + 48) = 0LL;
          v64[v16] = 0LL;
          v58 = &v64[v16];
          if ( *(_DWORD *)(*(_QWORD *)(v43 + 16) + 528LL) == 1 && *(_DWORD *)(v43 + 40) <= 0x20000u )
          {
            CcCompleteAsyncRead(v43);
            CcFreeWorkQueueEntry((_SLIST_ENTRY *)v43);
          }
          else
          {
            CcPostWorkQueueAsyncRead((_QWORD *)v43, 0LL);
          }
          v45 = v3 - 1;
          v3 = v45;
          if ( v16 < v45 )
          {
            v46 = v16 + 1;
            v47 = v45 - v16;
            v16 = v3;
            qmemcpy(v42, &v65[v46], 8LL * v47);
            qmemcpy(v58, &v64[v46], 8LL * v47);
          }
          v48 = v56;
          v10 = v52;
          v2 = v53;
          v49 = v16;
          v4 = v51;
          v64[v49] = 0LL;
          v65[v49] = 0LL;
          _InterlockedDecrement((volatile signed __int32 *)(v48 + 4LL * v50));
          if ( !v52 )
          {
            v10 = *(_QWORD *)(v51 + 272) + 8 * v60;
            v52 = v10;
          }
          goto LABEL_77;
        }
      }
      v2 = v53;
      v10 = v52;
LABEL_76:
      v4 = v51;
      goto LABEL_77;
    }
    v6 = 0;
LABEL_24:
    v4 = v51;
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
  v52 = v10;
  if ( v6 != 2 )
    goto LABEL_76;
  if ( !v50 )
  {
    ExFreePoolWithTag(P, 0x71576343u);
    CcDereferencePartitionAndPrivateVolumeCacheMap(v2, v62);
  }
}
