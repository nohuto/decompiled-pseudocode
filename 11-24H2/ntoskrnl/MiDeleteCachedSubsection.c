/*
 * XREFs of MiDeleteCachedSubsection @ 0x140204084
 * Callers:
 *     MiDeleteCachedEntry @ 0x1403EE484 (MiDeleteCachedEntry.c)
 *     MiDeleteDeleteOnCloseSubsections @ 0x140673338 (MiDeleteDeleteOnCloseSubsections.c)
 * Callees:
 *     MiEntireSubsectionIsPurged @ 0x1402043F4 (MiEntireSubsectionIsPurged.c)
 *     MiPurgeSubsection @ 0x140204780 (MiPurgeSubsection.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402090F0 (ObFastDereferenceObjectDeferDelete.c)
 *     MiDecrementModifiedWriteCount @ 0x140259314 (MiDecrementModifiedWriteCount.c)
 *     MiInsertUnusedSubsection @ 0x140259F70 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x14025A760 (MiDecrementSubsectionViewCount.c)
 *     MmIsWriteErrorFatal @ 0x1402605B8 (MmIsWriteErrorFatal.c)
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140290A8C (MiUpdateSystemProtoPtesTree.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MiReleaseControlAreaWaiters @ 0x140338770 (MiReleaseControlAreaWaiters.c)
 *     MiPrepareToFlushSubsection @ 0x14043F1F4 (MiPrepareToFlushSubsection.c)
 *     MiNotifyUserOfLostData @ 0x140673608 (MiNotifyUserOfLostData.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1409C1EC0 (FsRtlReleaseFileForCcFlush.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteCachedSubsection(__int64 *BugCheckParameter2, __int64 a2, __int64 a3)
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
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  struct _FILE_OBJECT *v21; // rcx
  char v22; // r13
  __int64 v23; // rdx
  __int64 v24; // [rsp+48h] [rbp-21h] BYREF
  __int128 v25; // [rsp+50h] [rbp-19h] BYREF
  _OWORD v26[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v27; // [rsp+80h] [rbp+17h]
  char v28; // [rsp+D0h] [rbp+67h]
  PFILE_OBJECT FileObject; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = *BugCheckParameter2;
  BugCheckParameter2[10] = 1LL;
  v27 = 0LL;
  v4 = *((_DWORD *)BugCheckParameter2 + 8);
  v25 = 0LL;
  memset(v26, 0, sizeof(v26));
  v6 = a2;
  *((_DWORD *)BugCheckParameter2 + 8) = v4 & 0xFFFFFFFE;
  ++*(_DWORD *)(v3 + 76);
  MiReleaseSpinLockExclusive(v3 + 72, a2);
  v7 = 0LL;
  v8 = 0;
  FileObject = 0LL;
  v9 = 0;
  v28 = 8;
  while ( 1 )
  {
    MiPurgeSubsection((ULONG_PTR)BugCheckParameter2, BugCheckParameter2[1], (__int64)v26);
    if ( BYTE10(v26[0]) )
      MiNotifyUserOfLostData(v3, (unsigned int)v9);
    *(_QWORD *)(a3 + 80) += *(_QWORD *)&v26[0];
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    LOBYTE(v10) = v6;
    result = MiEntireSubsectionIsPurged(BugCheckParameter2, v10);
    v9 = result;
    if ( (int)result >= 0 )
      return result;
    if ( (_DWORD)result == -1073741431 && !*((_DWORD *)BugCheckParameter2 + 26) )
    {
      MiUpdateSystemProtoPtesTree(BugCheckParameter2 + 15, 2LL);
      v13 = (void *)BugCheckParameter2[1];
      BugCheckParameter2[1] = 0LL;
      goto LABEL_8;
    }
    if ( (_DWORD)result != -1073741267 )
      goto LABEL_7;
    if ( v8 )
      goto LABEL_34;
    LOBYTE(v12) = v6;
    v17 = MiPrepareToFlushSubsection(BugCheckParameter2, v12, a3, &FileObject);
    v9 = v17;
    if ( v17 < 0 )
    {
      if ( v17 != -1073741267 )
      {
        result = 3221225499LL;
        if ( v9 == -1073741797 )
          return result;
LABEL_44:
        v7 = FileObject;
LABEL_7:
        v13 = 0LL;
LABEL_8:
        MiDecrementSubsectionViewCount((ULONG_PTR)BugCheckParameter2);
        if ( !BugCheckParameter2[10] && (*(_DWORD *)(v3 + 56) & 1) == 0 )
          MiInsertUnusedSubsection(BugCheckParameter2);
        v14 = MiDecrementModifiedWriteCount(v3, 1LL);
        LOBYTE(v15) = v6;
        v16 = v14;
        MiReleaseSpinLockExclusive(v3 + 72, v15);
        if ( v7 )
        {
          FsRtlReleaseFileForCcFlush(v7);
          ObfDereferenceObjectWithTag(v7, 0x63536D4Du);
        }
        if ( v16 )
          MiReleaseControlAreaWaiters(v16);
        if ( v13 )
        {
          ExFreePoolWithTag(v13, 0);
          return 0;
        }
        return (unsigned int)v9;
      }
      LOBYTE(v18) = v6;
      MiReleaseSpinLockExclusive(v3 + 72, v18);
    }
    v19 = BugCheckParameter2[1];
    v20 = *((_DWORD *)BugCheckParameter2 + 11) - 1;
    v24 = 0LL;
    KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
    v9 = MiFlushSection(
           v19,
           (int)v19 + 8 * v20,
           (_DWORD)BugCheckParameter2,
           (_DWORD)BugCheckParameter2,
           0LL,
           2,
           (__int64)&v24,
           (__int64)&v25);
    v7 = FileObject;
    v21 = FileObject;
    KeGetCurrentThread()[1].TrapFrame = 0LL;
    FsRtlReleaseFileForCcFlush(v21);
    *(_QWORD *)(a3 + 88) += v24;
    if ( v9 >= 0 || v9 == -1073740749 )
    {
      v22 = v28;
    }
    else
    {
      v22 = v28;
      if ( (unsigned int)MmIsWriteErrorFatal(1LL, (v7->DeviceObject->Characteristics & 0x10) != 0, (unsigned int)v9) )
      {
        v22 = v28 | 1;
        v28 |= 1u;
      }
    }
    if ( v7 )
    {
      ObFastDereferenceObjectDeferDelete(v3 + 64, v7, 1666411853LL);
      v7 = 0LL;
      FileObject = 0LL;
    }
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    if ( (v22 & 1) == 0 )
    {
      if ( v9 < 0 )
        goto LABEL_7;
      if ( BugCheckParameter2[10] != 1 )
      {
LABEL_34:
        v9 = -1073741245;
        goto LABEL_7;
      }
      if ( (BugCheckParameter2[4] & 1) != 0 )
      {
        v9 = -1073741688;
        goto LABEL_44;
      }
      v7 = FileObject;
      if ( (*(_DWORD *)(*BugCheckParameter2 + 56) & 1) != 0 )
      {
        v9 = -1073741431;
        goto LABEL_7;
      }
      v9 = 0;
    }
    LOBYTE(v23) = v6;
    MiReleaseSpinLockExclusive(v3 + 72, v23);
    v8 = 1;
  }
}
