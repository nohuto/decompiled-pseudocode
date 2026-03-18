/*
 * XREFs of AlpcpCreateSection @ 0x14093EF54
 * Callers:
 *     AlpcpMapLegacyPortView @ 0x14093C1C0 (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreatePortSection @ 0x14093EB80 (NtAlpcCreatePortSection.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpInsertResourcePort @ 0x140893BB8 (AlpcpInsertResourcePort.c)
 *     AlpcpReferenceBlob @ 0x1408966C0 (AlpcpReferenceBlob.c)
 *     AlpcpAllocateBlob @ 0x14093F8B0 (AlpcpAllocateBlob.c)
 *     AlpcpStartInitialization @ 0x140940834 (AlpcpStartInitialization.c)
 *     AlpcAddHandleTableEntry @ 0x1409408A0 (AlpcAddHandleTableEntry.c)
 *     MmCreateSectionEx @ 0x140940C6C (MmCreateSectionEx.c)
 *     AlpcpEndInitialization @ 0x140A14170 (AlpcpEndInitialization.c)
 */

__int64 __fastcall AlpcpCreateSection(__int64 a1, char a2, char a3, void *a4, PVOID Object, ULONG_PTR *a6)
{
  PVOID v6; // r14
  void *Blob; // rax
  ULONG_PTR v12; // rdi
  __int64 v13; // r8
  NTSTATUS Section; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  volatile signed __int64 *v17; // rbx
  _QWORD *v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // [rsp+40h] [rbp-58h]
  ULONGLONG ullMultiplicand; // [rsp+50h] [rbp-48h]
  ULONG_PTR v26[2]; // [rsp+60h] [rbp-38h] BYREF
  __int128 v27; // [rsp+70h] [rbp-28h]

  v6 = Object;
  if ( !Object || a4 && a2 )
    return 3221225485LL;
  if ( (*(_DWORD *)(a1 + 256) & 0x1000000) != 0 )
    return 3221227270LL;
  Blob = (void *)AlpcpAllocateBlob(AlpcSectionType, 72LL, 1LL);
  v12 = (ULONG_PTR)Blob;
  if ( !Blob )
    return 3221225626LL;
  memset_0(Blob, 0, 0x48uLL);
  *(_QWORD *)(v12 + 32) = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)(v12 + 8) = ~((unsigned int)AlpcpRegionGranularity - 1LL) & ((unsigned __int64)v6
                                                                        + (unsigned int)(AlpcpRegionGranularity - 1));
  *(_QWORD *)(v12 + 64) = v12 + 56;
  *(_QWORD *)(v12 + 56) = v12 + 56;
  if ( a4 )
  {
    Object = 0LL;
    Section = ObReferenceObjectByHandle(a4, 6u, MmSectionObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    *(_QWORD *)v12 = Object;
  }
  else
  {
    v13 = *(_QWORD *)(v12 + 8);
    LODWORD(ullMultiplicand) = 0;
    *(_DWORD *)(v12 + 48) = (*(_DWORD *)(v12 + 48) | 1) ^ ((*(_BYTE *)(v12 + 48) | 1) ^ (unsigned __int8)(2 * a2)) & 2;
    v27 = 0LL;
    Section = MmCreateSectionEx(v12, 0, v13, 4, 0x8000000, 0LL, 0LL, 0, v24, 0LL, ullMultiplicand);
  }
  if ( Section < 0 )
  {
LABEL_22:
    AlpcpDereferenceBlobEx(v12, 1, v15, v16);
    return (unsigned int)Section;
  }
  v17 = (volatile signed __int64 *)(a1 + 352);
  v18 = KeAbPreAcquire(a1 + 352, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 352), 0, v18, a1 + 352);
  if ( v18 )
    *((_BYTE *)v18 + 10) = 1;
  if ( (*(_DWORD *)(a1 + 416) & 0x20) != 0 )
  {
    if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
    KeAbPostRelease(a1 + 352);
    Section = -1073741769;
    goto LABEL_22;
  }
  AlpcpStartInitialization(v12);
  AlpcpReferenceBlob(v12);
  if ( a3 )
  {
    v19 = *(_QWORD *)(a1 + 16) + 40LL;
    v26[0] = v12;
    *(_QWORD *)(v12 + 16) = v19;
    v20 = AlpcAddHandleTableEntry(v19, v26);
    *(_QWORD *)(v12 + 24) = v20;
    if ( v20 == -1 )
    {
      if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
      KeAbPostRelease(a1 + 352);
      *(_QWORD *)(v12 + 16) = 0LL;
      AlpcpEndInitialization(v12);
      AlpcpDereferenceBlobEx(v12, 2, v22, v23);
      return 3221225626LL;
    }
  }
  PsReferenceSiloContext((void *)a1);
  *(_QWORD *)(v12 + 40) = a1;
  AlpcpInsertResourcePort(a1, v12);
  if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
  AlpcpEndInitialization(v12);
  *a6 = v12;
  return 0LL;
}
