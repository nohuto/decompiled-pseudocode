/*
 * XREFs of AlpcpCreateReserve @ 0x1408AEE08
 * Callers:
 *     NtAlpcCreateResourceReserve @ 0x1408AE790 (NtAlpcCreateResourceReserve.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpEndInitialization @ 0x1408AE964 (AlpcpEndInitialization.c)
 *     AlpcpCaptureMessageData @ 0x1408AE9B0 (AlpcpCaptureMessageData.c)
 *     AlpcAddHandleTableEntry @ 0x1408AEBD0 (AlpcAddHandleTableEntry.c)
 *     AlpcpStartInitialization @ 0x1408AEDA8 (AlpcpStartInitialization.c)
 *     AlpcpAllocateBlob @ 0x1408AF0C0 (AlpcpAllocateBlob.c)
 *     PsChargeProcessPagedPoolQuota @ 0x1408B0170 (PsChargeProcessPagedPoolQuota.c)
 *     AlpcpAllocateMessage @ 0x1408B07D0 (AlpcpAllocateMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x1408B27D0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x1408B4930 (AlpcpReferenceBlob.c)
 *     AlpcpInsertResourcePort @ 0x1408B4A38 (AlpcpInsertResourcePort.c)
 *     AlpcpReleasePagedPoolQuota @ 0x14098E608 (AlpcpReleasePagedPoolQuota.c)
 */

__int64 __fastcall AlpcpCreateReserve(__int64 a1, size_t a2, _QWORD *a3)
{
  _OWORD *Blob; // rax
  ULONG_PTR v7; // rdi
  _KPROCESS *Process; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rtt
  int v11; // ebx
  ULONG_PTR v12; // rbx
  int v13; // eax
  int v14; // esi
  volatile signed __int64 *v16; // rbx
  __int64 *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR v21; // [rsp+78h] [rbp+20h] BYREF

  BugCheckParameter2 = 0LL;
  if ( a2 > 0xFFD7 )
    return 2147483653LL;
  if ( a2 < 0x28 )
    return 3221225485LL;
  Blob = (_OWORD *)AlpcpAllocateBlob(AlpcReserveType, 48LL);
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
    v11 = PsChargeProcessPagedPoolQuota(Process, 792LL);
    if ( v11 < 0 )
    {
LABEL_12:
      AlpcpDereferenceBlobEx(v7);
      return (unsigned int)v11;
    }
LABEL_9:
    v11 = AlpcpAllocateMessage(&BugCheckParameter2, a2, 1LL);
    if ( v11 < 0 )
    {
      AlpcpReleasePagedPoolQuota(Process, 792LL);
      goto LABEL_12;
    }
    ObfReferenceObjectWithTag(Process, 0x63706C41u);
    v12 = BugCheckParameter2;
    *(_QWORD *)(BugCheckParameter2 + 48) = Process;
    *(_QWORD *)(v7 + 24) = v12;
    *(_QWORD *)(v7 + 32) = a2;
    *(_QWORD *)(v12 + 96) = v7;
    v13 = AlpcpCaptureMessageData(*(_QWORD *)(v7 + 24), a2, 0LL);
    *(_DWORD *)(v7 + 40) = 1;
    v14 = v13;
    AlpcpReferenceBlob(v7);
    AlpcpUnlockMessage(v12);
    if ( v14 < 0 )
    {
      v11 = v14;
      goto LABEL_12;
    }
    v16 = (volatile signed __int64 *)(a1 + 352);
    v17 = KeAbPreAcquire(a1 + 352, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 352), 0, v17, a1 + 352);
    if ( v17 )
      *((_BYTE *)v17 + 10) = 1;
    if ( (*(_DWORD *)(a1 + 416) & 0x20) != 0 )
    {
      if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
      KeAbPostRelease(a1 + 352);
      v11 = -1073741769;
      goto LABEL_12;
    }
    AlpcpReferenceBlob(v7);
    AlpcpStartInitialization(v7);
    v18 = *(_QWORD *)(a1 + 16) + 40LL;
    v21 = v7;
    *(_QWORD *)(v7 + 8) = v18;
    v19 = AlpcAddHandleTableEntry(*(_QWORD *)(a1 + 16) + 40LL, &v21);
    *(_QWORD *)(v7 + 16) = v19;
    if ( v19 != -1 )
    {
      *(_QWORD *)v7 = a1;
      PsReferenceSiloContext((void *)a1);
      AlpcpInsertResourcePort(a1, v7);
      if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
      KeAbPostRelease(a1 + 352);
      *a3 = *(_QWORD *)(v7 + 16);
      AlpcpEndInitialization(v7);
      v11 = 0;
      goto LABEL_12;
    }
    if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
    KeAbPostRelease(a1 + 352);
    *(_QWORD *)(v7 + 8) = 0LL;
    AlpcpEndInitialization(v7);
    AlpcpDereferenceBlobEx(v7);
  }
  return 3221225626LL;
}
