/*
 * XREFs of MiReplaceImportEntry @ 0x1406605EC
 * Callers:
 *     MmReplaceImportEntry @ 0x140660908 (MmReplaceImportEntry.c)
 *     MiReplacePatchImportEntry @ 0x140672010 (MiReplacePatchImportEntry.c)
 *     MmReplaceImportEntriesForVerifier @ 0x1407DD510 (MmReplaceImportEntriesForVerifier.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiCaptureDirtyBitToPfn @ 0x14022F970 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403DE840 (MiCopyOnWriteCheckConditions.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14040FDB8 (MiUnmapPageInHyperSpaceWorker.c)
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

char __fastcall MiReplaceImportEntry(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, ULONG_PTR BugCheckParameter4)
{
  PVOID v6; // rax
  int v7; // eax
  ULONG_PTR v8; // r14
  unsigned __int64 v9; // rdi
  char *AnyMultiplexedVm; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 v13; // r12
  volatile unsigned __int64 v14; // rcx
  __int64 v15; // rbp
  int v16; // ebp
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  ULONG_PTR v21; // r15
  ULONG_PTR *v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  int v26; // [rsp+70h] [rbp+8h] BYREF
  ULONG_PTR v27; // [rsp+80h] [rbp+18h]
  ULONG v28; // [rsp+88h] [rbp+20h] BYREF

  v27 = BugCheckParameter4;
  v28 = 0;
  v6 = RtlImageDirectoryEntryToData(*(PVOID *)(BugCheckParameter2 + 48), 1u, 0xCu, &v28);
  if ( !v6 || !v28 || a2 < (unsigned __int64)v6 || a2 >= (unsigned __int64)v6 + v28 )
    KeBugCheckEx(0x1Au, 0x1014uLL, BugCheckParameter2, a2, BugCheckParameter4);
  _InterlockedIncrement64(&qword_140E2D658);
  v7 = MI_IS_PHYSICAL_ADDRESS(a2);
  if ( v7 )
  {
    *(_QWORD *)a2 = BugCheckParameter4;
    return v7;
  }
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v13 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v9 )
      {
        if ( ((a2 >> 9) & 0xFF8) != 0 )
          goto LABEL_12;
        MiUnlockPageTable((__int64)AnyMultiplexedVm, v9);
      }
      v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable((__int64)AnyMultiplexedVm, v9, v11, v12);
LABEL_12:
      v14 = *(_QWORD *)v8;
      if ( (*(_QWORD *)v8 & 1) != 0 )
        break;
      MiUnlockPageTable((__int64)AnyMultiplexedVm, v9);
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v13);
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
      MiLockNestedPageTable((__int64)AnyMultiplexedVm, v9, v19, v20);
    }
    v15 = 48 * ((v14 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( *(__int64 *)(v15 + 40) >= 0 )
      break;
    v16 = MiCopyOnWrite(a2, (volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL, 0, 0LL);
    if ( v16 < 0 )
    {
      MiUnlockPageTable((__int64)AnyMultiplexedVm, v9);
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v13);
      MiCopyOnWriteCheckConditions((__int64)AnyMultiplexedVm, v16, 0LL);
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
      MiLockNestedPageTable((__int64)AnyMultiplexedVm, v9, v17, v18);
    }
  }
  v21 = v27;
  if ( (v14 & 0x42) != 0 )
  {
    *(_QWORD *)a2 = v27;
  }
  else
  {
    v22 = (ULONG_PTR *)((a2 & 0xFFF) + MiMapPageInHyperSpaceWorker((v14 >> 12) & 0xFFFFFFFFFFLL, 0LL, 0x80000000));
    *v22 = v21;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v22, 0x11u, 0x80000000);
    v26 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v26);
      while ( *(__int64 *)(v15 + 24) < 0 );
    }
    v23 = MiCaptureDirtyBitToPfn(v15);
    v24 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v15 + 40) >> 43) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v23 )
      MiReleasePageFileInfo(v24, v23, 1);
  }
  MiUnlockPageTable((__int64)AnyMultiplexedVm, v9);
  LOBYTE(v7) = MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v13);
  return v7;
}
