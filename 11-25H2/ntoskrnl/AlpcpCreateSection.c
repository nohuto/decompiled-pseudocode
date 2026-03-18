/*
 * XREFs of AlpcpCreateSection @ 0x1408AE108
 * Callers:
 *     NtAlpcCreatePortSection @ 0x1408AD370 (NtAlpcCreatePortSection.c)
 *     AlpcpMapLegacyPortView @ 0x1408B62D4 (AlpcpMapLegacyPortView.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     AlpcpEndInitialization @ 0x1408AE964 (AlpcpEndInitialization.c)
 *     AlpcAddHandleTableEntry @ 0x1408AEBD0 (AlpcAddHandleTableEntry.c)
 *     AlpcpStartInitialization @ 0x1408AEDA8 (AlpcpStartInitialization.c)
 *     AlpcpAllocateBlob @ 0x1408AF0C0 (AlpcpAllocateBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1408B27D0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x1408B4930 (AlpcpReferenceBlob.c)
 *     AlpcpInsertResourcePort @ 0x1408B4A38 (AlpcpInsertResourcePort.c)
 *     MmCreateSectionEx @ 0x14093C3AC (MmCreateSectionEx.c)
 */

__int64 __fastcall AlpcpCreateSection(__int64 a1, char a2, char a3, void *a4, PVOID Object, ULONG_PTR *a6)
{
  PVOID v6; // r14
  void *Blob; // rax
  ULONG_PTR v12; // rdi
  __int64 v13; // r8
  NTSTATUS Section; // ebx
  volatile signed __int64 *v15; // rbx
  __int64 *v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // rax
  int v20; // [rsp+40h] [rbp-58h]
  ULONGLONG ullMultiplicand; // [rsp+50h] [rbp-48h]
  ULONG_PTR v22[2]; // [rsp+60h] [rbp-38h] BYREF
  __int128 v23; // [rsp+70h] [rbp-28h]

  v6 = Object;
  if ( !Object || a4 && a2 )
    return 3221225485LL;
  if ( (*(_DWORD *)(a1 + 256) & 0x1000000) != 0 )
    return 3221227270LL;
  Blob = (void *)AlpcpAllocateBlob(AlpcSectionType, 72LL);
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
    v23 = 0LL;
    Section = MmCreateSectionEx(v12, 0, v13, 4, 0x8000000, 0LL, 0LL, 0, v20, 0LL, ullMultiplicand);
  }
  if ( Section < 0 )
  {
LABEL_25:
    AlpcpDereferenceBlobEx(v12);
    return (unsigned int)Section;
  }
  v15 = (volatile signed __int64 *)(a1 + 352);
  v16 = KeAbPreAcquire(a1 + 352, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 352), 0, v16, a1 + 352);
  if ( v16 )
    *((_BYTE *)v16 + 10) = 1;
  if ( (*(_DWORD *)(a1 + 416) & 0x20) != 0 )
  {
    if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
    KeAbPostRelease(a1 + 352);
    Section = -1073741769;
    goto LABEL_25;
  }
  AlpcpStartInitialization(v12);
  AlpcpReferenceBlob(v12);
  if ( a3 )
  {
    v17 = *(_QWORD *)(a1 + 16) + 40LL;
    v22[0] = v12;
    *(_QWORD *)(v12 + 16) = v17;
    v18 = AlpcAddHandleTableEntry(v17, v22);
    *(_QWORD *)(v12 + 24) = v18;
    if ( v18 == -1 )
    {
      if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
      KeAbPostRelease(a1 + 352);
      *(_QWORD *)(v12 + 16) = 0LL;
      AlpcpEndInitialization(v12);
      AlpcpDereferenceBlobEx(v12);
      return 3221225626LL;
    }
  }
  PsReferenceSiloContext((void *)a1);
  *(_QWORD *)(v12 + 40) = a1;
  AlpcpInsertResourcePort(a1, v12);
  if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
  AlpcpEndInitialization(v12);
  *a6 = v12;
  return 0LL;
}
