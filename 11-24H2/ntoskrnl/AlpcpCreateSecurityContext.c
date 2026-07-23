/*
 * XREFs of AlpcpCreateSecurityContext @ 0x14089E878
 * Callers:
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14089CE60 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpCaptureSecurityAttribute @ 0x1409C12C0 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcCreateSecurityContext @ 0x140A50FF0 (AlpcCreateSecurityContext.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     IoThreadToProcess @ 0x140438740 (IoThreadToProcess.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1408923C8 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpStartInitialization @ 0x140894E74 (AlpcpStartInitialization.c)
 *     AlpcAddHandleTableEntry @ 0x140894EE0 (AlpcAddHandleTableEntry.c)
 *     AlpcpInsertResourcePort @ 0x1408966E0 (AlpcpInsertResourcePort.c)
 *     PsChargeProcessPagedPoolQuota @ 0x14089EAD0 (PsChargeProcessPagedPoolQuota.c)
 *     AlpcpReferenceBlob @ 0x14089EB60 (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 *     SeCreateClientSecurity @ 0x14089EDC0 (SeCreateClientSecurity.c)
 *     AlpcpEndInitialization @ 0x140A0C980 (AlpcpEndInitialization.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
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
  volatile signed __int64 *v15; // rbx
  char *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rax
  ULONG_PTR v20[7]; // [rsp+20h] [rbp-38h] BYREF

  v9 = IoThreadToProcess(a2);
  Pool2 = ExAllocatePool2(0x100uLL, 0xA0uLL, 0x65536C41u);
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
      v15 = (volatile signed __int64 *)(a1 + 352);
      v16 = (char *)KeAbPreAcquire(a1 + 352, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 352), 0, v16, a1 + 352);
      if ( v16 )
        v16[10] = 1;
      if ( (*(_DWORD *)(a1 + 416) & 0x20) == 0 )
      {
        AlpcpStartInitialization(v11);
        AlpcpReferenceBlob(v11);
        v17 = *(_QWORD *)(a1 + 16) + 40LL;
        v20[0] = v11;
        *(_QWORD *)v11 = v17;
        v18 = AlpcAddHandleTableEntry(v17, v20);
        *(_QWORD *)(v11 + 8) = v18;
        if ( v18 != -1 )
        {
          PsReferenceSiloContext((void *)a1);
          *(_QWORD *)(v11 + 24) = a1;
          AlpcpInsertResourcePort(a1, v11);
          if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
          KeAbPostRelease(a1 + 352);
          AlpcpEndInitialization(v11);
          goto LABEL_18;
        }
        if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
        KeAbPostRelease(a1 + 352);
        *(_QWORD *)v11 = 0LL;
        AlpcpEndInitialization(v11);
        AlpcpDereferenceBlobEx(v11);
        return 3221225626LL;
      }
      if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
      KeAbPostRelease(a1 + 352);
      ClientSecurity = -1073741670;
    }
  }
  AlpcpDereferenceBlobEx(v11);
  return (unsigned int)ClientSecurity;
}
