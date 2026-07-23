/*
 * XREFs of EtwpDeleteRegistrationObject @ 0x1408389E0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeRundownQueueEx @ 0x14040F308 (KeRundownQueueEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     EtwpSendNoReplyReply @ 0x1407AA98C (EtwpSendNoReplyReply.c)
 *     EtwpReleaseQueueEntry @ 0x140831B1C (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x140836678 (EtwpUnreferenceDataBlock.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140837CFC (EtwpReleaseProviderTraitsReference.c)
 *     EtwpRundownNotifications @ 0x140837D94 (EtwpRundownNotifications.c)
 *     EtwpUnreferenceGuidEntry @ 0x140839DC0 (EtwpUnreferenceGuidEntry.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpDeleteRegistrationObject(__int64 *BugCheckParameter2)
{
  ULONG_PTR v1; // r13
  __int64 v2; // r12
  ULONG_PTR v4; // r14
  struct _KTHREAD *CurrentThread; // rax
  char *v6; // rax
  char *v7; // r15
  struct _KTHREAD *v8; // rax
  signed __int64 *v9; // rbx
  char *v10; // rax
  char *v11; // rbp
  __int64 *v12; // rcx
  __int64 **v13; // rax
  char *v14; // rax
  signed __int8 v15; // cf
  char *v16; // rbx
  __int64 *v17; // rcx
  __int64 **v18; // rax
  __int64 *v19; // rdx
  __int64 **v20; // rcx
  signed __int64 v21; // rax
  signed __int64 v22; // rdx
  signed __int64 v23; // rtt
  signed __int64 v24; // rax
  signed __int64 v25; // rdx
  __int64 v26; // rtt
  __int16 v27; // ax
  volatile __int64 *v28; // rbp
  __int64 v29; // rbx
  __int64 result; // rax
  char *v31; // r15
  char *v32; // rax
  char *v33; // rbp
  volatile signed __int32 *v34; // rdi
  volatile signed __int32 **v35; // rbx

  v1 = BugCheckParameter2[4];
  v2 = 4LL;
  v4 = BugCheckParameter2[5];
  if ( (*((_BYTE *)BugCheckParameter2 + 98) & 4) == 0 )
  {
    if ( v4 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v6 = (char *)KeAbPreAcquire(v4 + 664, 0LL);
      v7 = v6;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 664), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 664), v6, v4 + 664);
      if ( v7 )
        v7[10] = 1;
      *(_QWORD *)(v4 + 672) = KeGetCurrentThread();
    }
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    v9 = (signed __int64 *)(v1 + 664);
    v10 = (char *)KeAbPreAcquire(v1 + 664, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 664), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 664), v10, v1 + 664);
    if ( v11 )
      v11[10] = 1;
    *(_QWORD *)(v1 + 672) = KeGetCurrentThread();
    v12 = (__int64 *)*BugCheckParameter2;
    if ( *(__int64 **)(*BugCheckParameter2 + 8) == BugCheckParameter2 )
    {
      v13 = (__int64 **)BugCheckParameter2[1];
      if ( *v13 == BugCheckParameter2 )
      {
        *v13 = v12;
        v12[1] = (__int64)v13;
        v19 = (__int64 *)BugCheckParameter2[2];
        if ( (__int64 *)v19[1] == BugCheckParameter2 + 2 )
        {
          v20 = (__int64 **)BugCheckParameter2[3];
          if ( *v20 == BugCheckParameter2 + 2 )
          {
            *v20 = v19;
            v19[1] = (__int64)v20;
            *(_QWORD *)(v1 + 672) = 0LL;
            _m_prefetchw(v9);
            v21 = *v9;
            v22 = *v9 - 16;
            if ( (*v9 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v22 = 0LL;
            if ( (v21 & 2) != 0 || (v23 = *v9, v23 != _InterlockedCompareExchange64(v9, v22, v21)) )
              ExfReleasePushLock((_QWORD *)(v1 + 664));
            KeAbPostRelease(v1 + 664);
            KeLeaveCriticalRegionThread();
            if ( v4 )
            {
              *(_QWORD *)(v4 + 672) = 0LL;
              _m_prefetchw((const void *)(v4 + 664));
              v24 = *(_QWORD *)(v4 + 664);
              v25 = v24 - 16;
              if ( (v24 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v25 = 0LL;
              if ( (v24 & 2) != 0
                || (v26 = *(_QWORD *)(v4 + 664),
                    v26 != _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 664), v25, v24)) )
              {
                ExfReleasePushLock((_QWORD *)(v4 + 664));
              }
              KeAbPostRelease(v4 + 664);
              KeLeaveCriticalRegionThread();
            }
            goto LABEL_36;
          }
        }
      }
    }
LABEL_14:
    __fastfail(3u);
  }
  v14 = (char *)KeAbPreAcquire((__int64)&EtwpReplyListLock, 0LL);
  v15 = _interlockedbittestandset64((volatile signed __int32 *)&EtwpReplyListLock, 0LL);
  v16 = v14;
  if ( v15 )
    ExfAcquirePushLockExclusiveEx(&EtwpReplyListLock, v14, (__int64)&EtwpReplyListLock);
  if ( v16 )
    v16[10] = 1;
  v17 = (__int64 *)*BugCheckParameter2;
  if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2 )
    goto LABEL_14;
  v18 = (__int64 **)BugCheckParameter2[1];
  if ( *v18 != BugCheckParameter2 )
    goto LABEL_14;
  *v18 = v17;
  v17[1] = (__int64)v18;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpReplyListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EtwpReplyListLock);
  KeAbPostRelease((ULONG_PTR)&EtwpReplyListLock);
LABEL_36:
  _InterlockedAnd16((volatile signed __int16 *)BugCheckParameter2 + 49, 0xFFBFu);
  v27 = *((_WORD *)BugCheckParameter2 + 49);
  if ( (v27 & 2) != 0 )
  {
    v28 = BugCheckParameter2 + 6;
    do
    {
      v29 = _InterlockedExchange64(v28, 0LL);
      if ( v29 )
      {
        EtwpSendNoReplyReply(*(_QWORD *)(v29 + 32), (__int128 *)(v1 + 40));
        EtwpReleaseQueueEntry((PVOID *)v29, 2);
      }
      ++v28;
      --v2;
    }
    while ( v2 );
    EtwpRundownNotifications(BugCheckParameter2[10], (__int64)BugCheckParameter2);
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2[10], 0x52777445u);
    EtwpReleaseProviderTraitsReference((__int64)BugCheckParameter2);
  }
  else
  {
    if ( (v27 & 4) == 0 )
      KeBugCheckEx(0x11Du, 3uLL, (ULONG_PTR)BugCheckParameter2, *((unsigned __int16 *)BugCheckParameter2 + 49), 0LL);
    v31 = (char *)BugCheckParameter2[6];
    v32 = KeRundownQueueEx(v31, 1);
    v33 = v32;
    if ( v32 )
    {
      v34 = (volatile signed __int32 *)v32;
      do
      {
        v35 = (volatile signed __int32 **)v34;
        v34 = *(volatile signed __int32 **)v34;
        EtwpUnreferenceDataBlock(v35[2]);
        ExFreePoolWithTag(v35, 0);
      }
      while ( v33 != (char *)v34 );
    }
    ExFreePoolWithTag(v31, 0);
  }
  result = EtwpUnreferenceGuidEntry(v1);
  if ( v4 )
    return EtwpUnreferenceGuidEntry(v4);
  return result;
}
