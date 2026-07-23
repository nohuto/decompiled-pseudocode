/*
 * XREFs of ObpSetObjectAuditInfo @ 0x14086B968
 * Callers:
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     OBJECT_HEADER_TO_AUDIT_INFO @ 0x14040ED00 (OBJECT_HEADER_TO_AUDIT_INFO.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlLengthSecurityDescriptor @ 0x1408565C0 (RtlLengthSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x14086BB60 (RtlValidSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpSetObjectAuditInfo(__int64 a1, PSECURITY_DESCRIPTOR *a2, char a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  PSECURITY_DESCRIPTOR v8; // rsi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v10; // rbx
  char *v11; // rax
  char *v12; // rbp
  signed __int64 v13; // rax
  signed __int64 v14; // rdx
  signed __int64 v15; // rtt
  ULONG v17; // ebp
  void *Pool2; // rax
  signed __int64 v19; // rax
  signed __int64 v20; // rdx
  signed __int64 v21; // rtt

  if ( !RtlValidSecurityDescriptor(*a2) )
    return 3221225593LL;
  v6 = (_QWORD *)OBJECT_HEADER_TO_AUDIT_INFO(a1);
  v7 = v6;
  if ( !v6 || *v6 )
    return 0LL;
  v8 = *a2;
  if ( a3 )
  {
    *a2 = 0LL;
LABEL_6:
    CurrentThread = KeGetCurrentThread();
    v10 = (signed __int64 *)(a1 + 16);
    --CurrentThread->KernelApcDisable;
    v11 = (char *)KeAbPreAcquire(a1 + 16, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 16), v11, a1 + 16);
    if ( v12 )
      v12[10] = 1;
    if ( *v7 )
    {
      _m_prefetchw(v10);
      v19 = *v10;
      v20 = *v10 - 16;
      if ( (*v10 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v20 = 0LL;
      if ( (v19 & 2) != 0 || (v21 = *v10, v21 != _InterlockedCompareExchange64(v10, v20, v19)) )
        ExfReleasePushLock((_QWORD *)(a1 + 16));
      KeAbPostRelease(a1 + 16);
      KeLeaveCriticalRegion();
      ExFreePoolWithTag(v8, 0);
    }
    else
    {
      *v7 = v8;
      _m_prefetchw(v10);
      v13 = *v10;
      v14 = *v10 - 16;
      if ( (*v10 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v14 = 0LL;
      if ( (v13 & 2) != 0 || (v15 = *v10, v15 != _InterlockedCompareExchange64(v10, v14, v13)) )
        ExfReleasePushLock((_QWORD *)(a1 + 16));
      KeAbPostRelease(a1 + 16);
      KeLeaveCriticalRegion();
    }
    return 0LL;
  }
  v17 = RtlLengthSecurityDescriptor(*a2);
  Pool2 = (void *)ExAllocatePool2(0x100uLL, v17, 0x4941624Fu);
  v8 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, *a2, v17);
    goto LABEL_6;
  }
  return 3221225626LL;
}
