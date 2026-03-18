/*
 * XREFs of MiDeleteCachedSubsection @ 0x14033F8B4
 * Callers:
 *     MiDeleteCachedEntry @ 0x140459A0C (MiDeleteCachedEntry.c)
 *     MiDeleteDeleteOnCloseSubsections @ 0x1406666B8 (MiDeleteDeleteOnCloseSubsections.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14022F630 (MiReleaseControlAreaWaiters.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402A87DC (MiUpdateSystemProtoPtesTree.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402C2260 (ObFastDereferenceObjectDeferDelete.c)
 *     MiInsertUnusedSubsection @ 0x140322E10 (MiInsertUnusedSubsection.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiFlushSection @ 0x14033E540 (MiFlushSection.c)
 *     MiDecrementSubsectionViewCount @ 0x14033F740 (MiDecrementSubsectionViewCount.c)
 *     MiEntireSubsectionIsPurged @ 0x14033FC28 (MiEntireSubsectionIsPurged.c)
 *     MiPurgeSubsection @ 0x1403400A0 (MiPurgeSubsection.c)
 *     MiDecrementModifiedWriteCount @ 0x14035A754 (MiDecrementModifiedWriteCount.c)
 *     MmIsWriteErrorFatal @ 0x1403BF1B8 (MmIsWriteErrorFatal.c)
 *     MiPrepareToFlushSubsection @ 0x140439A60 (MiPrepareToFlushSubsection.c)
 *     MiNotifyUserOfLostData @ 0x140666988 (MiNotifyUserOfLostData.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1409CF0D0 (FsRtlReleaseFileForCcFlush.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteCachedSubsection(ULONG_PTR BugCheckParameter2, unsigned __int8 a2, __int64 a3)
{
  __int64 v3; // r15
  int v4; // eax
  KIRQL v6; // r14
  PFILE_OBJECT v7; // rsi
  int v8; // r13d
  int v9; // ebx
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rdx
  void *v13; // r13
  _QWORD *v14; // rdi
  int v15; // eax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  struct _FILE_OBJECT *v18; // rcx
  char v19; // r13
  __int64 v20; // [rsp+48h] [rbp-21h] BYREF
  __int128 v21; // [rsp+50h] [rbp-19h] BYREF
  _OWORD v22[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v23; // [rsp+80h] [rbp+17h]
  char v24; // [rsp+D0h] [rbp+67h]
  PFILE_OBJECT FileObject; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = *(_QWORD *)BugCheckParameter2;
  *(_QWORD *)(BugCheckParameter2 + 80) = 1LL;
  v23 = 0LL;
  v4 = *(_DWORD *)(BugCheckParameter2 + 32);
  v21 = 0LL;
  memset(v22, 0, sizeof(v22));
  v6 = a2;
  *(_DWORD *)(BugCheckParameter2 + 32) = v4 & 0xFFFFFFFE;
  ++*(_DWORD *)(v3 + 76);
  MiReleaseSpinLockExclusive((_DWORD *)(v3 + 72), a2);
  v7 = 0LL;
  v8 = 0;
  FileObject = 0LL;
  v9 = 0;
  v24 = 8;
  while ( 1 )
  {
    MiPurgeSubsection(BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 8), (__int64)v22);
    if ( BYTE10(v22[0]) )
      MiNotifyUserOfLostData(v3, (unsigned int)v9);
    *(_QWORD *)(a3 + 80) += *(_QWORD *)&v22[0];
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    LOBYTE(v10) = v6;
    result = MiEntireSubsectionIsPurged(BugCheckParameter2, v10);
    v9 = result;
    if ( (int)result >= 0 )
      return result;
    if ( (_DWORD)result == -1073741431 && !*(_DWORD *)(BugCheckParameter2 + 104) )
    {
      MiUpdateSystemProtoPtesTree(BugCheckParameter2 + 120, 2);
      v13 = *(void **)(BugCheckParameter2 + 8);
      *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
      goto LABEL_8;
    }
    if ( (_DWORD)result != -1073741267 )
      goto LABEL_7;
    if ( v8 )
      goto LABEL_34;
    LOBYTE(v12) = v6;
    v15 = MiPrepareToFlushSubsection(BugCheckParameter2, v12, a3, &FileObject);
    v9 = v15;
    if ( v15 < 0 )
    {
      if ( v15 != -1073741267 )
      {
        result = 3221225499LL;
        if ( v9 == -1073741797 )
          return result;
LABEL_44:
        v7 = FileObject;
LABEL_7:
        v13 = 0LL;
LABEL_8:
        MiDecrementSubsectionViewCount((__int64 *)BugCheckParameter2, 0);
        if ( !*(_QWORD *)(BugCheckParameter2 + 80) && (*(_DWORD *)(v3 + 56) & 1) == 0 )
          MiInsertUnusedSubsection(BugCheckParameter2);
        v14 = (_QWORD *)MiDecrementModifiedWriteCount(v3, 1LL);
        MiReleaseSpinLockExclusive((_DWORD *)(v3 + 72), v6);
        if ( v7 )
        {
          FsRtlReleaseFileForCcFlush(v7);
          ObfDereferenceObjectWithTag(v7, 0x63536D4Du);
        }
        if ( v14 )
          MiReleaseControlAreaWaiters(v14);
        if ( v13 )
        {
          ExFreePoolWithTag(v13, 0);
          return 0;
        }
        return (unsigned int)v9;
      }
      MiReleaseSpinLockExclusive((_DWORD *)(v3 + 72), v6);
    }
    v16 = *(_QWORD *)(BugCheckParameter2 + 8);
    v17 = *(unsigned int *)(BugCheckParameter2 + 44) - 1LL;
    v20 = 0LL;
    KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
    v9 = MiFlushSection(v16, v16 + 8 * v17, (__int64 *)BugCheckParameter2, BugCheckParameter2, 0LL, 2, &v20, &v21);
    v7 = FileObject;
    v18 = FileObject;
    KeGetCurrentThread()[1].TrapFrame = 0LL;
    FsRtlReleaseFileForCcFlush(v18);
    *(_QWORD *)(a3 + 88) += v20;
    if ( v9 >= 0 || v9 == -1073740749 )
    {
      v19 = v24;
    }
    else
    {
      v19 = v24;
      if ( (unsigned int)MmIsWriteErrorFatal(1LL, (v7->DeviceObject->Characteristics & 0x10) != 0, (unsigned int)v9) )
      {
        v19 = v24 | 1;
        v24 |= 1u;
      }
    }
    if ( v7 )
    {
      ObFastDereferenceObjectDeferDelete((__int64 *)(v3 + 64), (ULONG_PTR)v7, 1666411853LL);
      v7 = 0LL;
      FileObject = 0LL;
    }
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    if ( (v19 & 1) == 0 )
    {
      if ( v9 < 0 )
        goto LABEL_7;
      if ( *(_QWORD *)(BugCheckParameter2 + 80) != 1LL )
      {
LABEL_34:
        v9 = -1073741245;
        goto LABEL_7;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 32) & 1) != 0 )
      {
        v9 = -1073741688;
        goto LABEL_44;
      }
      v7 = FileObject;
      if ( (*(_DWORD *)(*(_QWORD *)BugCheckParameter2 + 56LL) & 1) != 0 )
      {
        v9 = -1073741431;
        goto LABEL_7;
      }
      v9 = 0;
    }
    MiReleaseSpinLockExclusive((_DWORD *)(v3 + 72), v6);
    v8 = 1;
  }
}
