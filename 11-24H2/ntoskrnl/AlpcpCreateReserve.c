/*
 * XREFs of AlpcpCreateReserve @ 0x14093F62C
 * Callers:
 *     NtAlpcCreateResourceReserve @ 0x14093F530 (NtAlpcCreateResourceReserve.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     AlpcpReleasePagedPoolQuota @ 0x14088DADC (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpInsertResourcePort @ 0x140893BB8 (AlpcpInsertResourcePort.c)
 *     PsChargeProcessPagedPoolQuota @ 0x140896630 (PsChargeProcessPagedPoolQuota.c)
 *     AlpcpReferenceBlob @ 0x1408966C0 (AlpcpReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x140898D70 (AlpcpUnlockMessage.c)
 *     AlpcpAllocateBlob @ 0x14093F8B0 (AlpcpAllocateBlob.c)
 *     AlpcpAllocateMessage @ 0x14093F9C0 (AlpcpAllocateMessage.c)
 *     AlpcpCaptureMessageData @ 0x14093FCA0 (AlpcpCaptureMessageData.c)
 *     AlpcpStartInitialization @ 0x140940834 (AlpcpStartInitialization.c)
 *     AlpcAddHandleTableEntry @ 0x1409408A0 (AlpcAddHandleTableEntry.c)
 *     AlpcpEndInitialization @ 0x140A14170 (AlpcpEndInitialization.c)
 */

__int64 __fastcall AlpcpCreateReserve(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  _OWORD *Blob; // rax
  ULONG_PTR v7; // rdi
  _KPROCESS *Process; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rtt
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  ULONG_PTR v14; // rbx
  int v15; // eax
  int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  volatile signed __int64 *v21; // rbx
  _QWORD *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR v28; // [rsp+78h] [rbp+20h] BYREF

  BugCheckParameter2 = 0LL;
  if ( a2 > 0xFFD7 )
    return 2147483653LL;
  if ( a2 < 0x28 )
    return 3221225485LL;
  Blob = (_OWORD *)AlpcpAllocateBlob(AlpcReserveType, 48LL, 1LL);
  v7 = (ULONG_PTR)Blob;
  if ( Blob )
  {
    *Blob = 0LL;
    Blob[1] = 0LL;
    Blob[2] = 0LL;
    Process = KeGetCurrentThread()->ApcState.Process;
    _m_prefetchw(&Process[3].ProcessLock);
    while ( 1 )
    {
      v9 = *(_QWORD *)&Process[3].ProcessLock;
      if ( v9 < 0x318 )
        break;
      v10 = *(_QWORD *)&Process[3].ProcessLock;
      if ( v10 == _InterlockedCompareExchange64((volatile signed __int64 *)&Process[3].ProcessLock, v9 - 792, v9) )
        goto LABEL_9;
    }
    v11 = PsChargeProcessPagedPoolQuota((__int64)Process, 0x318uLL);
    if ( v11 < 0 )
    {
LABEL_12:
      AlpcpDereferenceBlobEx(v7, 1, v12, v13);
      return (unsigned int)v11;
    }
LABEL_9:
    v11 = AlpcpAllocateMessage(&BugCheckParameter2, a2, 1LL);
    if ( v11 < 0 )
    {
      AlpcpReleasePagedPoolQuota((ULONG_PTR)Process, 0x318uLL);
      goto LABEL_12;
    }
    ObfReferenceObjectWithTag(Process, 0x63706C41u);
    v14 = BugCheckParameter2;
    *(_QWORD *)(BugCheckParameter2 + 48) = Process;
    *(_QWORD *)(v7 + 24) = v14;
    *(_QWORD *)(v7 + 32) = a2;
    *(_QWORD *)(v14 + 96) = v7;
    v15 = AlpcpCaptureMessageData(*(_QWORD *)(v7 + 24), a2, 0LL);
    *(_DWORD *)(v7 + 40) = 1;
    v16 = v15;
    AlpcpReferenceBlob(v7);
    AlpcpUnlockMessage(v14, v17, v18, v19);
    if ( v16 < 0 )
    {
      v11 = v16;
      goto LABEL_12;
    }
    v21 = (volatile signed __int64 *)(a1 + 352);
    v22 = KeAbPreAcquire(a1 + 352, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 352), 0, v22, a1 + 352);
    if ( v22 )
      *((_BYTE *)v22 + 10) = 1;
    if ( (*(_DWORD *)(a1 + 416) & 0x20) != 0 )
    {
      if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
      KeAbPostRelease(a1 + 352);
      v11 = -1073741769;
      goto LABEL_12;
    }
    AlpcpReferenceBlob(v7);
    AlpcpStartInitialization(v7);
    v23 = *(_QWORD *)(a1 + 16) + 40LL;
    v28 = v7;
    *(_QWORD *)(v7 + 8) = v23;
    v24 = AlpcAddHandleTableEntry(*(_QWORD *)(a1 + 16) + 40LL, &v28);
    *(_QWORD *)(v7 + 16) = v24;
    if ( v24 != -1 )
    {
      *(_QWORD *)v7 = a1;
      PsReferenceSiloContext((void *)a1);
      AlpcpInsertResourcePort(a1, v7);
      if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
      KeAbPostRelease(a1 + 352);
      *a3 = *(_QWORD *)(v7 + 16);
      AlpcpEndInitialization(v7);
      v11 = 0;
      goto LABEL_12;
    }
    if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
    KeAbPostRelease(a1 + 352);
    *(_QWORD *)(v7 + 8) = 0LL;
    AlpcpEndInitialization(v7);
    AlpcpDereferenceBlobEx(v7, 2, v25, v26);
  }
  return 3221225626LL;
}
