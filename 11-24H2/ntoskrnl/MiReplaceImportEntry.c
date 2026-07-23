/*
 * XREFs of MiReplaceImportEntry @ 0x14066D2FC
 * Callers:
 *     MmReplaceImportEntry @ 0x14066D618 (MmReplaceImportEntry.c)
 *     MiReplacePatchImportEntry @ 0x14067EA20 (MiReplacePatchImportEntry.c)
 *     MmReplaceImportEntriesForVerifier @ 0x1407ED980 (MmReplaceImportEntriesForVerifier.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402EEA94 (MiUnmapPageInHyperSpaceWorker.c)
 *     RtlImageDirectoryEntryToData @ 0x1402EEB70 (RtlImageDirectoryEntryToData.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403C927C (MiCopyOnWriteCheckConditions.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall MiReplaceImportEntry(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, ULONG_PTR BugCheckParameter4)
{
  PVOID v6; // rax
  int v7; // eax
  ULONG_PTR v8; // r14
  unsigned __int64 v9; // rdi
  char *AnyMultiplexedVm; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 v14; // r12
  volatile unsigned __int64 v15; // rcx
  __int64 v16; // rbp
  int v17; // ebp
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  ULONG_PTR v24; // r15
  ULONG_PTR *v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rcx
  unsigned int v30; // [rsp+70h] [rbp+8h] BYREF
  ULONG_PTR v31; // [rsp+80h] [rbp+18h]
  ULONG v32; // [rsp+88h] [rbp+20h] BYREF

  v31 = BugCheckParameter4;
  v32 = 0;
  v6 = RtlImageDirectoryEntryToData(*(PVOID *)(BugCheckParameter2 + 48), 1u, 0xCu, &v32);
  if ( !v6 || !v32 || a2 < (unsigned __int64)v6 || a2 >= (unsigned __int64)v6 + v32 )
    KeBugCheckEx(0x1Au, 0x1014uLL, BugCheckParameter2, a2, BugCheckParameter4);
  _InterlockedIncrement64(&qword_140E2D9D8);
  v7 = MI_IS_PHYSICAL_ADDRESS(a2);
  if ( v7 )
  {
    *(_QWORD *)a2 = BugCheckParameter4;
    return v7;
  }
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v14 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v11, v12, v13);
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
      v15 = *(_QWORD *)v8;
      if ( (*(_QWORD *)v8 & 1) != 0 )
        break;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v9);
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v14);
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v21, v22, v23);
      MiLockNestedPageTable((__int64)AnyMultiplexedVm, v9);
    }
    v16 = 48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( *(__int64 *)(v16 + 40) >= 0 )
      break;
    v17 = MiCopyOnWrite(a2, (volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL, 0, 0LL);
    if ( v17 < 0 )
    {
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v9);
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v14);
      MiCopyOnWriteCheckConditions((__int64)AnyMultiplexedVm, v17, 0LL);
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v18, v19, v20);
      MiLockNestedPageTable((__int64)AnyMultiplexedVm, v9);
    }
  }
  v24 = v31;
  if ( (v15 & 0x42) != 0 )
  {
    *(_QWORD *)a2 = v31;
  }
  else
  {
    v25 = (ULONG_PTR *)((a2 & 0xFFF) + MiMapPageInHyperSpaceWorker((v15 >> 12) & 0xFFFFFFFFFFLL, 0LL, 0x80000000));
    *v25 = v24;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v25, 0x11u, 0x80000000);
    v30 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v30);
      while ( *(__int64 *)(v16 + 24) < 0 );
    }
    v26 = MiCaptureDirtyBitToPfn(v16);
    v28 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v26 )
      MiReleasePageFileInfo(v28, v26, 1LL, v27);
  }
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v9);
  LOBYTE(v7) = MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v14);
  return v7;
}
