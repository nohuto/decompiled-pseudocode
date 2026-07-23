/*
 * XREFs of EtwpReceiveNotification @ 0x14083641C
 * Callers:
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     EtwpUnreferenceDataBlock @ 0x140836678 (EtwpUnreferenceDataBlock.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpReceiveNotification(void *a1, unsigned int a2, char a3, _DWORD *a4)
{
  int v7; // ebp
  unsigned __int64 UserDirectoryTableBase; // r13
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v10; // rbx
  char *v11; // rax
  char *v12; // rdi
  unsigned __int64 v13; // rsi
  volatile signed __int32 *v14; // rdi
  volatile signed __int32 *v15; // rdx
  volatile signed __int32 **v16; // rax
  __int64 v17; // r14
  __int64 v18; // rax
  signed __int64 v19; // rax
  signed __int64 v20; // rdx
  signed __int64 v21; // rtt
  volatile signed __int64 *v22; // rbx
  __int64 v23; // r12
  signed __int64 v24; // rax
  signed __int64 v25; // rdx
  signed __int32 v26; // ebx

  v7 = 0;
  UserDirectoryTableBase = KeGetCurrentThread()->ApcState.Process[1].UserDirectoryTableBase;
  if ( UserDirectoryTableBase )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = (signed __int64 *)(UserDirectoryTableBase + 16);
    --CurrentThread->KernelApcDisable;
    v11 = (char *)KeAbPreAcquire(UserDirectoryTableBase + 16, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(UserDirectoryTableBase + 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(UserDirectoryTableBase + 16), v11, UserDirectoryTableBase + 16);
    if ( v12 )
      v12[10] = 1;
    v13 = UserDirectoryTableBase + 24;
    v14 = *(volatile signed __int32 **)(UserDirectoryTableBase + 24);
    if ( v14 == (volatile signed __int32 *)(UserDirectoryTableBase + 24) )
    {
LABEL_14:
      _m_prefetchw(v10);
      v19 = *v10;
      v20 = *v10 - 16;
      if ( (*v10 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v20 = 0LL;
      if ( (v19 & 2) != 0 || (v21 = *v10, v21 != _InterlockedCompareExchange64(v10, v20, v19)) )
        ExfReleasePushLock(v10);
      KeAbPostRelease((ULONG_PTR)v10);
      KeLeaveCriticalRegion();
      return (unsigned int)-2147483622;
    }
    else
    {
      while ( 1 )
      {
        v15 = *(volatile signed __int32 **)v14;
        if ( a3 == *(_BYTE *)(*((_QWORD *)v14 + 3) + 98LL) >> 7 )
          break;
        v14 = *(volatile signed __int32 **)v14;
        if ( v15 == (volatile signed __int32 *)v13 )
          goto LABEL_14;
      }
      if ( *((volatile signed __int32 **)v15 + 1) != v14
        || (v16 = (volatile signed __int32 **)*((_QWORD *)v14 + 1), *v16 != v14) )
      {
LABEL_12:
        __fastfail(3u);
      }
      *v16 = v15;
      *((_QWORD *)v15 + 1) = v16;
      v17 = *((_QWORD *)v14 + 2);
      if ( *(_DWORD *)(v17 + 4) > a2 )
      {
        v18 = *(_QWORD *)v13;
        if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) != v13 )
          goto LABEL_12;
        *(_QWORD *)v14 = v18;
        v7 = -1073741789;
        *((_QWORD *)v14 + 1) = v13;
        *(_QWORD *)(v18 + 8) = v14;
        *(_QWORD *)v13 = v14;
      }
      v22 = (volatile signed __int64 *)(UserDirectoryTableBase + 16);
      v23 = *(_QWORD *)v13;
      *a4 = *(_DWORD *)(v17 + 4);
      _m_prefetchw((const void *)(UserDirectoryTableBase + 16));
      v24 = *(_QWORD *)(UserDirectoryTableBase + 16);
      v25 = v24 - 16;
      if ( (v24 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v25 = 0LL;
      if ( (v24 & 2) != 0 || v24 != _InterlockedCompareExchange64(v22, v25, v24) )
        ExfReleasePushLock(v22);
      KeAbPostRelease((ULONG_PTR)v22);
      KeLeaveCriticalRegionThread();
      if ( v7 >= 0 )
      {
        v26 = _InterlockedIncrement((volatile signed __int32 *)(v17 + 20));
        memmove(a1, (const void *)v17, *(unsigned int *)(v17 + 4));
        *((_QWORD *)a1 + 3) = 0LL;
        *((_DWORD *)a1 + 5) = v26;
        *((_DWORD *)a1 + 6) = *((unsigned __int16 *)v14 + 24);
        if ( *(_BYTE *)(v17 + 12) )
          *((_DWORD *)a1 + 4) = *((unsigned __int16 *)v14 + 25);
        EtwpUnreferenceDataBlock(v17);
        _m_prefetchw((const void *)(v14 + 13));
        if ( (_InterlockedAnd(v14 + 13, 0xFFFFFFFE) & 0xFFFFFFFE) == 0 )
          ExFreePoolWithTag((PVOID)v14, 0);
        if ( v23 != v13 )
          return 261;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
