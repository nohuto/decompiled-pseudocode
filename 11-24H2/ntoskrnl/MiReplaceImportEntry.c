/*
 * XREFs of MiReplaceImportEntry @ 0x14066C12C
 * Callers:
 *     MmReplaceImportEntry @ 0x14066C448 (MmReplaceImportEntry.c)
 *     MiReplacePatchImportEntry @ 0x14067D820 (MiReplacePatchImportEntry.c)
 *     MmReplaceImportEntriesForVerifier @ 0x1407ED3B0 (MmReplaceImportEntriesForVerifier.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiCaptureDirtyBitToPfn @ 0x14023ED00 (MiCaptureDirtyBitToPfn.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140266854 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     MiCopyOnWriteCheckConditions @ 0x140406AD8 (MiCopyOnWriteCheckConditions.c)
 *     RtlImageDirectoryEntryToData @ 0x14042CAF0 (RtlImageDirectoryEntryToData.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

char __fastcall MiReplaceImportEntry(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, ULONG_PTR BugCheckParameter4)
{
  unsigned __int64 v6; // rax
  int v7; // eax
  ULONG_PTR v8; // r14
  unsigned __int64 v9; // rdi
  char *AnyMultiplexedVm; // rsi
  unsigned __int8 v11; // r12
  volatile unsigned __int64 v12; // rcx
  __int64 v13; // rbp
  int v14; // ebp
  ULONG_PTR v15; // r15
  ULONG_PTR *v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v20; // [rsp+70h] [rbp+8h] BYREF
  ULONG_PTR v21; // [rsp+80h] [rbp+18h]
  unsigned int v22; // [rsp+88h] [rbp+20h] BYREF

  v21 = BugCheckParameter4;
  v22 = 0;
  v6 = RtlImageDirectoryEntryToData(*(_QWORD *)(BugCheckParameter2 + 48), 1, 0xCu, &v22);
  if ( !v6 || !v22 || a2 < v6 || a2 >= v6 + v22 )
    KeBugCheckEx(0x1Au, 0x1014uLL, BugCheckParameter2, a2, BugCheckParameter4);
  _InterlockedIncrement64(&qword_140E2D898);
  v7 = MI_IS_PHYSICAL_ADDRESS(a2);
  if ( v7 )
  {
    *(_QWORD *)a2 = BugCheckParameter4;
    return v7;
  }
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v11 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v9 )
      {
        if ( ((a2 >> 9) & 0xFF8) != 0 )
          goto LABEL_12;
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v9);
      }
      v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable((__int64)AnyMultiplexedVm, v9);
LABEL_12:
      v12 = *(_QWORD *)v8;
      if ( (*(_QWORD *)v8 & 1) != 0 )
        break;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v9);
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v11);
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
      MiLockNestedPageTable((__int64)AnyMultiplexedVm, v9);
    }
    v13 = 48 * ((v12 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( *(__int64 *)(v13 + 40) >= 0 )
      break;
    v14 = MiCopyOnWrite(a2, (volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL, 0, 0LL);
    if ( v14 < 0 )
    {
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v9);
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v11);
      MiCopyOnWriteCheckConditions((__int64)AnyMultiplexedVm, v14, 0LL);
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
      MiLockNestedPageTable((__int64)AnyMultiplexedVm, v9);
    }
  }
  v15 = v21;
  if ( (v12 & 0x42) != 0 )
  {
    *(_QWORD *)a2 = v21;
  }
  else
  {
    v16 = (ULONG_PTR *)((a2 & 0xFFF) + MiMapPageInHyperSpaceWorker((v12 >> 12) & 0xFFFFFFFFFFLL, 0LL, 0x80000000LL));
    *v16 = v15;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v16, 0x11u, 0x80000000);
    v20 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v20);
      while ( *(__int64 *)(v13 + 24) < 0 );
    }
    v17 = MiCaptureDirtyBitToPfn(v13);
    v18 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v13 + 40) >> 43) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v17 )
      MiReleasePageFileInfo(v18, v17, 1LL);
  }
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v9);
  LOBYTE(v7) = MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v11);
  return v7;
}
