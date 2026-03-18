/*
 * XREFs of AlpcpCreateSecurityContext @ 0x1408963D8
 * Callers:
 *     AlpcpCaptureSecurityAttribute @ 0x14088DE30 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1408949C0 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcCreateSecurityContext @ 0x140A59730 (AlpcCreateSecurityContext.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     IoThreadToProcess @ 0x140441CC0 (IoThreadToProcess.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     AlpcpReleasePagedPoolQuota @ 0x14088DADC (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpInsertResourcePort @ 0x140893BB8 (AlpcpInsertResourcePort.c)
 *     PsChargeProcessPagedPoolQuota @ 0x140896630 (PsChargeProcessPagedPoolQuota.c)
 *     AlpcpReferenceBlob @ 0x1408966C0 (AlpcpReferenceBlob.c)
 *     SeCreateClientSecurity @ 0x140896720 (SeCreateClientSecurity.c)
 *     AlpcpStartInitialization @ 0x140940834 (AlpcpStartInitialization.c)
 *     AlpcAddHandleTableEntry @ 0x1409408A0 (AlpcAddHandleTableEntry.c)
 *     AlpcpEndInitialization @ 0x140A14170 (AlpcpEndInitialization.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall AlpcpCreateSecurityContext(
        __int64 a1,
        struct _KTHREAD *a2,
        char a3,
        struct _SECURITY_QUALITY_OF_SERVICE *a4,
        ULONG_PTR *a5)
{
  PEPROCESS v9; // rbx
  __int64 Pool2; // rax
  ULONG_PTR v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // rtt
  NTSTATUS ClientSecurity; // esi
  __int64 v15; // r8
  __int64 v16; // r9
  volatile signed __int64 *v17; // rbx
  _QWORD *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  ULONG_PTR v24[7]; // [rsp+20h] [rbp-38h] BYREF

  v9 = IoThreadToProcess(a2);
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225626LL;
  *(_WORD *)(Pool2 + 16) = 768;
  v11 = Pool2 + 48;
  *(_DWORD *)(Pool2 + 18) = 0;
  *(_WORD *)(Pool2 + 22) = 0;
  *(_QWORD *)(Pool2 + 40) = 0LL;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  *(_BYTE *)(Pool2 + 16) &= ~2u;
  *(_QWORD *)(Pool2 + 24) = 1LL;
  if ( Pool2 == -48 )
    return 3221225626LL;
  memset_0((void *)(Pool2 + 48), 0, 0x70uLL);
  *(_QWORD *)(v11 + 8) = -1LL;
  _m_prefetchw(&v9[3].ProcessLock);
  while ( 1 )
  {
    v12 = *(_QWORD *)&v9[3].ProcessLock;
    if ( v12 < 0xA0 )
      break;
    v13 = *(_QWORD *)&v9[3].ProcessLock;
    if ( v13 == _InterlockedCompareExchange64((volatile signed __int64 *)&v9[3].ProcessLock, v12 - 160, v12) )
      goto LABEL_8;
  }
  ClientSecurity = PsChargeProcessPagedPoolQuota(v9, 160LL);
  if ( ClientSecurity >= 0 )
  {
LABEL_8:
    ClientSecurity = SeCreateClientSecurity(a2, a4, 0, (PSECURITY_CLIENT_CONTEXT)(v11 + 32));
    if ( ClientSecurity < 0 )
    {
      AlpcpReleasePagedPoolQuota((ULONG_PTR)v9, 0xA0uLL);
    }
    else
    {
      ObfReferenceObjectWithTag(v9, 0x63706C41u);
      *(_QWORD *)(v11 + 16) = v9;
      if ( !a3 )
      {
LABEL_18:
        *a5 = v11;
        return 0LL;
      }
      v17 = (volatile signed __int64 *)(a1 + 352);
      v18 = KeAbPreAcquire(a1 + 352, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 352), 0, v18, a1 + 352);
      if ( v18 )
        *((_BYTE *)v18 + 10) = 1;
      if ( (*(_DWORD *)(a1 + 416) & 0x20) == 0 )
      {
        AlpcpStartInitialization(v11);
        AlpcpReferenceBlob(v11);
        v19 = *(_QWORD *)(a1 + 16) + 40LL;
        v24[0] = v11;
        *(_QWORD *)v11 = v19;
        v20 = AlpcAddHandleTableEntry(v19, v24);
        *(_QWORD *)(v11 + 8) = v20;
        if ( v20 != -1 )
        {
          PsReferenceSiloContext((void *)a1);
          *(_QWORD *)(v11 + 24) = a1;
          AlpcpInsertResourcePort(a1, v11);
          if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
          KeAbPostRelease(a1 + 352);
          AlpcpEndInitialization(v11);
          goto LABEL_18;
        }
        if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
        KeAbPostRelease(a1 + 352);
        *(_QWORD *)v11 = 0LL;
        AlpcpEndInitialization(v11);
        AlpcpDereferenceBlobEx(v11, 2, v22, v23);
        return 3221225626LL;
      }
      if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
      KeAbPostRelease(a1 + 352);
      ClientSecurity = -1073741670;
    }
  }
  AlpcpDereferenceBlobEx(v11, 1, v15, v16);
  return (unsigned int)ClientSecurity;
}
