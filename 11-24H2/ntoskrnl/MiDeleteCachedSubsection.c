/*
 * XREFs of MiDeleteCachedSubsection @ 0x14023C35C
 * Callers:
 *     MiDeleteCachedEntry @ 0x1403F836C (MiDeleteCachedEntry.c)
 *     MiDeleteDeleteOnCloseSubsections @ 0x140672168 (MiDeleteDeleteOnCloseSubsections.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14020F410 (MiReleaseControlAreaWaiters.c)
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 *     MiEntireSubsectionIsPurged @ 0x14023C6CC (MiEntireSubsectionIsPurged.c)
 *     MiPurgeSubsection @ 0x14023C9F0 (MiPurgeSubsection.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x140240FA0 (ObFastDereferenceObjectDeferDelete.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14026047C (MiUpdateSystemProtoPtesTree.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MmIsWriteErrorFatal @ 0x1402CC028 (MmIsWriteErrorFatal.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     MiPrepareToFlushSubsection @ 0x14036F8DC (MiPrepareToFlushSubsection.c)
 *     MiDecrementModifiedWriteCount @ 0x140370FD4 (MiDecrementModifiedWriteCount.c)
 *     MiInsertUnusedSubsection @ 0x140371BB0 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x140371EA0 (MiDecrementSubsectionViewCount.c)
 *     MiNotifyUserOfLostData @ 0x140672438 (MiNotifyUserOfLostData.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1409D2090 (FsRtlReleaseFileForCcFlush.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteCachedSubsection(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
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
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  struct _FILE_OBJECT *v23; // rcx
  char v24; // r13
  __int64 v25; // rdx
  __int64 v26; // [rsp+48h] [rbp-21h] BYREF
  __int128 v27; // [rsp+50h] [rbp-19h] BYREF
  _OWORD v28[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v29; // [rsp+80h] [rbp+17h]
  char v30; // [rsp+D0h] [rbp+67h]
  PFILE_OBJECT FileObject; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = *(_QWORD *)BugCheckParameter2;
  *(_QWORD *)(BugCheckParameter2 + 80) = 1LL;
  v29 = 0LL;
  v4 = *(_DWORD *)(BugCheckParameter2 + 32);
  v27 = 0LL;
  memset(v28, 0, sizeof(v28));
  v6 = a2;
  *(_DWORD *)(BugCheckParameter2 + 32) = v4 & 0xFFFFFFFE;
  ++*(_DWORD *)(v3 + 76);
  MiReleaseSpinLockExclusive(v3 + 72, a2);
  v7 = 0LL;
  v8 = 0;
  FileObject = 0LL;
  v9 = 0;
  v30 = 8;
  while ( 1 )
  {
    MiPurgeSubsection(BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 8), (__int64)v28);
    if ( BYTE10(v28[0]) )
      MiNotifyUserOfLostData(v3, (unsigned int)v9);
    *(_QWORD *)(a3 + 80) += *(_QWORD *)&v28[0];
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    LOBYTE(v10) = v6;
    result = MiEntireSubsectionIsPurged(BugCheckParameter2, v10);
    v9 = result;
    if ( (int)result >= 0 )
      return result;
    if ( (_DWORD)result == -1073741431 && !*(_DWORD *)(BugCheckParameter2 + 104) )
    {
      MiUpdateSystemProtoPtesTree(BugCheckParameter2 + 120, 2LL);
      v13 = *(void **)(BugCheckParameter2 + 8);
      *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
      goto LABEL_8;
    }
    if ( (_DWORD)result != -1073741267 )
      goto LABEL_7;
    if ( v8 )
      goto LABEL_34;
    LOBYTE(v12) = v6;
    v19 = MiPrepareToFlushSubsection(BugCheckParameter2, v12, a3, &FileObject);
    v9 = v19;
    if ( v19 < 0 )
    {
      if ( v19 != -1073741267 )
      {
        result = 3221225499LL;
        if ( v9 == -1073741797 )
          return result;
LABEL_44:
        v7 = FileObject;
LABEL_7:
        v13 = 0LL;
LABEL_8:
        MiDecrementSubsectionViewCount(BugCheckParameter2);
        if ( !*(_QWORD *)(BugCheckParameter2 + 80) && (*(_DWORD *)(v3 + 56) & 1) == 0 )
          MiInsertUnusedSubsection(BugCheckParameter2);
        v14 = MiDecrementModifiedWriteCount(v3, 1LL);
        LOBYTE(v15) = v6;
        v16 = (_QWORD *)v14;
        MiReleaseSpinLockExclusive(v3 + 72, v15);
        if ( v7 )
        {
          FsRtlReleaseFileForCcFlush(v7);
          ObfDereferenceObjectWithTag(v7, 0x63536D4Du);
        }
        if ( v16 )
          MiReleaseControlAreaWaiters(v16, v17, v18);
        if ( v13 )
        {
          ExFreePoolWithTag(v13, 0);
          return 0;
        }
        return (unsigned int)v9;
      }
      LOBYTE(v20) = v6;
      MiReleaseSpinLockExclusive(v3 + 72, v20);
    }
    v21 = *(_QWORD *)(BugCheckParameter2 + 8);
    v22 = *(unsigned int *)(BugCheckParameter2 + 44) - 1LL;
    v26 = 0LL;
    KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
    v9 = MiFlushSection(v21, v21 + 8 * v22, (__int64 *)BugCheckParameter2, BugCheckParameter2, 0LL, 2, &v26, &v27);
    v7 = FileObject;
    v23 = FileObject;
    KeGetCurrentThread()[1].TrapFrame = 0LL;
    FsRtlReleaseFileForCcFlush(v23);
    *(_QWORD *)(a3 + 88) += v26;
    if ( v9 >= 0 || v9 == -1073740749 )
    {
      v24 = v30;
    }
    else
    {
      v24 = v30;
      if ( (unsigned int)MmIsWriteErrorFatal(1LL, (v7->DeviceObject->Characteristics & 0x10) != 0, (unsigned int)v9) )
      {
        v24 = v30 | 1;
        v30 |= 1u;
      }
    }
    if ( v7 )
    {
      ObFastDereferenceObjectDeferDelete(v3 + 64, v7, 1666411853LL);
      v7 = 0LL;
      FileObject = 0LL;
    }
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    if ( (v24 & 1) == 0 )
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
    LOBYTE(v25) = v6;
    MiReleaseSpinLockExclusive(v3 + 72, v25);
    v8 = 1;
  }
}
