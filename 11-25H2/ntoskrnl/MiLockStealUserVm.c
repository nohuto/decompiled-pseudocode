/*
 * XREFs of MiLockStealUserVm @ 0x1402C97A0
 * Callers:
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140217CD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFastLockLeafPageTable @ 0x1402AF390 (MiFastLockLeafPageTable.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiLockLowestValidPageTableEx @ 0x1402B7890 (MiLockLowestValidPageTableEx.c)
 *     MiUnlockStealVm @ 0x1402BB590 (MiUnlockStealVm.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x1402C9D00 (MiGetPageTablePfnBuddyRaw.c)
 *     MiGetTopLevelPfn @ 0x1402C9D70 (MiGetTopLevelPfn.c)
 *     MiPrepareAttachThread @ 0x1402C9EE0 (MiPrepareAttachThread.c)
 *     KeForceAttachProcess @ 0x1402C9F60 (KeForceAttachProcess.c)
 *     MiVadPagesTradable @ 0x1402CA000 (MiVadPagesTradable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiRotatedToFrameBuffer @ 0x140387DA8 (MiRotatedToFrameBuffer.c)
 *     MiSmallVaStillMapsFrame @ 0x140466968 (MiSmallVaStillMapsFrame.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiClusterVadActive @ 0x140687AB4 (MiClusterVadActive.c)
 */

__int64 __fastcall MiLockStealUserVm(__int64 a1, ULONG_PTR a2, unsigned __int8 a3, ULONG_PTR a4, __int64 a5)
{
  __int64 v5; // rdi
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // r13
  __int64 TopLevelPfn; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  ULONG_PTR PageTablePfnBuddyRaw; // r14
  __int64 v16; // r12
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r13d
  __int64 v20; // rdx
  int v21; // r13d
  char v22; // al
  __int64 v23; // rdx
  struct _LIST_ENTRY *Address; // rbp
  int v25; // eax
  __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  ULONG_PTR v29; // rbx
  unsigned __int64 v30; // rax
  int v31; // r8d
  unsigned int Flink; // ecx
  unsigned __int64 valid; // rax
  __int64 v35; // [rsp+18h] [rbp-60h]
  _OWORD v36[5]; // [rsp+20h] [rbp-58h] BYREF
  ULONG_PTR v38; // [rsp+88h] [rbp+10h] BYREF
  ULONG_PTR v39; // [rsp+98h] [rbp+20h]

  v39 = a4;
  v5 = a5;
  v7 = a3;
  v8 = (__int64)(a4 << 25) >> 16;
  LODWORD(v38) = v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL;
  *(_BYTE *)(a5 + 64) = 0;
  LODWORD(a5) = 2;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
  v10 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFLL;
  if ( v10 == v9 )
    ++dword_140EF4AA4;
  TopLevelPfn = MiGetTopLevelPfn(a2);
  PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(TopLevelPfn, v12, TopLevelPfn);
  v16 = PageTablePfnBuddyRaw + 1024;
  if ( v14 != a2 )
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (PVOID)PageTablePfnBuddyRaw == PsIdleProcess )
  {
    ++dword_140EF4AF4;
LABEL_45:
    LOBYTE(v13) = v7;
    MiUnlockPage(a2, v13);
    return 0LL;
  }
  if ( v10 == v9 && (*(_DWORD *)(PageTablePfnBuddyRaw + 1532) & 0x1000) != 0 )
  {
    ++dword_140EF4AF0;
    goto LABEL_45;
  }
  if ( (_KPROCESS *)PageTablePfnBuddyRaw == KeGetCurrentThread()->ApcState.Process
    && KeGetCurrentThread()->ApcStateIndex != 1 )
  {
    LOBYTE(v13) = v7;
    MiUnlockPage(a2, v13);
    goto LABEL_16;
  }
  if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
  {
    ++dword_140EF4AFC;
    goto LABEL_45;
  }
  v19 = MiPrepareAttachThread(PageTablePfnBuddyRaw, v16, v17, v18);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E37180);
  if ( KiIrqlFlags )
  {
    LOBYTE(v20) = v7;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v20);
  }
  __writecr8(v7);
  if ( !v19 )
  {
    ++dword_140EF4B00;
    return 0LL;
  }
  *(_QWORD *)(v5 + 56) = v16;
  if ( (_KPROCESS *)PageTablePfnBuddyRaw != KeGetCurrentThread()->ApcState.Process )
  {
    *(_BYTE *)(v5 + 64) = 1;
    KeForceAttachProcess(PageTablePfnBuddyRaw);
  }
LABEL_16:
  *(_QWORD *)(v5 + 32) = 0LL;
  *(_QWORD *)(v5 + 40) = 0LL;
  v21 = v38;
  *(_QWORD *)(v5 + 24) = v16;
  if ( v21 )
  {
    *(_BYTE *)(v5 + 37) |= 1u;
    v22 = MiLockWorkingSetExclusive(v16);
  }
  else
  {
    v22 = MiLockWorkingSetShared(v16);
  }
  *(_BYTE *)(v5 + 36) = v22;
  if ( (*(_DWORD *)(v5 + 8) & 8) != 0 )
  {
    Address = 0LL;
  }
  else
  {
    MiLockVadTree(1, v23);
    Address = MiLocateAddress(v8);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
    if ( !Address )
    {
      ++dword_140EF4B04;
      goto LABEL_65;
    }
    if ( !(unsigned int)MiVadPagesTradable(Address) )
    {
      if ( ((__int64)Address[3].Flink & 0x70) != 0x40 )
        goto LABEL_63;
      *(_DWORD *)(v5 + 8) |= 0x400u;
    }
  }
  if ( !v21 )
  {
    v38 = 0LL;
    if ( v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_53;
    v25 = MiFastLockLeafPageTable(v16, v8, 0);
    if ( !v25 )
      goto LABEL_53;
    v26 = 0LL;
    memset(v36, 0, 32);
    do
    {
      v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)v36 + v26++) = v8;
    }
    while ( v26 < 4 );
    v27 = *((_QWORD *)v36 + v25);
    v28 = *(&v35 + v25);
    v38 = v28;
    if ( v27 )
    {
      v29 = v39;
    }
    else
    {
LABEL_53:
      v29 = v39;
      valid = MiLockLowestValidPageTableEx(v16, v39, &v38, 0);
      v28 = v38;
      v27 = valid;
    }
    *(_QWORD *)(v5 + 40) = v27;
    if ( v28 != v29 )
      goto LABEL_65;
    v30 = MI_READ_PTE_LOCK_FREE(v28);
    if ( (v30 & 1) == 0 || ((v30 >> 12) & 0xFFFFFFFFFFLL) != v9 )
      goto LABEL_65;
    goto LABEL_31;
  }
  if ( (unsigned int)MiSmallVaStillMapsFrame(v8, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4)) )
  {
    v29 = v39;
LABEL_31:
    if ( v9 > qword_140E2D9A0 )
      goto LABEL_65;
    if ( ((*(_QWORD *)(16 * ((__int64)(a2 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
      goto LABEL_65;
    if ( *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL)) != a1 )
      goto LABEL_65;
    if ( *(__int64 *)(a2 + 40) < 0 )
      goto LABEL_65;
    if ( _bittest64((const signed __int64 *)(a2 + 40), 0x35u) )
      goto LABEL_65;
    v31 = *(_DWORD *)v5;
    if ( (*(_DWORD *)v5 & 0x410000) != 0x410000 && (unsigned int)MiGetPfnSlabType(a2) != 9 )
      goto LABEL_65;
    if ( (v31 & 0x800000) != 0 )
    {
      if ( Address )
      {
        Flink = (unsigned int)Address[3].Flink;
        if ( MiVadPageSizes[(Flink >> 19) & 3] == 16
          && (Flink & 0x200000) != 0
          && (unsigned int)MiClusterVadActive(Address, a2, v5 + 120) )
        {
          ++dword_140EF4B08;
          goto LABEL_70;
        }
      }
    }
    if ( (*(_DWORD *)(v5 + 8) & 0x400) == 0 || !(unsigned int)MiRotatedToFrameBuffer(v29) )
      return 1LL;
LABEL_63:
    ++dword_140EF4B04;
LABEL_70:
    LODWORD(a5) = 0;
    goto LABEL_65;
  }
  ++dword_140EF4B10;
LABEL_65:
  MiUnlockStealVm(v5);
  ++dword_140EF4ABC;
  return (unsigned int)a5;
}
