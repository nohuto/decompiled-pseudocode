/*
 * XREFs of MiLockStealUserVm @ 0x140227A3C
 * Callers:
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockLowestValidPageTableEx @ 0x140218760 (MiLockLowestValidPageTableEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x140227FA0 (MiGetPageTablePfnBuddyRaw.c)
 *     MiGetTopLevelPfn @ 0x140228010 (MiGetTopLevelPfn.c)
 *     MiPrepareAttachThread @ 0x140228180 (MiPrepareAttachThread.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14022E850 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRotatedToFrameBuffer @ 0x140238E74 (MiRotatedToFrameBuffer.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiFastLockLeafPageTable @ 0x1402D90E0 (MiFastLockLeafPageTable.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockStealVm @ 0x1402E1FC0 (MiUnlockStealVm.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     MiVadPagesTradable @ 0x1403FE990 (MiVadPagesTradable.c)
 *     KeForceAttachProcess @ 0x14042D8D0 (KeForceAttachProcess.c)
 *     MiSmallVaStillMapsFrame @ 0x140465504 (MiSmallVaStillMapsFrame.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiClusterVadActive @ 0x140692F14 (MiClusterVadActive.c)
 */

__int64 __fastcall MiLockStealUserVm(__int64 a1, ULONG_PTR a2, unsigned __int8 a3, ULONG_PTR a4, int *a5)
{
  int *v5; // rdi
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
  int v17; // r13d
  __int64 v18; // rdx
  int v19; // r13d
  char v20; // al
  __int64 Address; // rbp
  int v22; // eax
  __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  ULONG_PTR v26; // rbx
  unsigned __int64 v27; // rax
  int v28; // r8d
  unsigned int v29; // ecx
  unsigned __int64 valid; // rax
  __int64 v32; // [rsp+18h] [rbp-60h]
  _OWORD v33[5]; // [rsp+20h] [rbp-58h] BYREF
  ULONG_PTR v35; // [rsp+88h] [rbp+10h] BYREF
  ULONG_PTR v36; // [rsp+98h] [rbp+20h]

  v36 = a4;
  v5 = a5;
  v7 = a3;
  v8 = (__int64)(a4 << 25) >> 16;
  LODWORD(v35) = v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL;
  *((_BYTE *)a5 + 64) = 0;
  LODWORD(a5) = 2;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
  v10 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFLL;
  if ( v10 == v9 )
    ++dword_140EF4D84;
  TopLevelPfn = MiGetTopLevelPfn(a2);
  PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(TopLevelPfn, v12, TopLevelPfn);
  v16 = PageTablePfnBuddyRaw + 1024;
  if ( v14 != a2 )
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (PVOID)PageTablePfnBuddyRaw == PsIdleProcess )
  {
    ++dword_140EF4DD4;
LABEL_45:
    LOBYTE(v13) = v7;
    MiUnlockPage(a2, v13);
    return 0LL;
  }
  if ( v10 == v9 && (*(_DWORD *)(PageTablePfnBuddyRaw + 1532) & 0x1000) != 0 )
  {
    ++dword_140EF4DD0;
    goto LABEL_45;
  }
  if ( (_KPROCESS *)PageTablePfnBuddyRaw == KeGetCurrentThread()->ApcState.Process
    && KeGetCurrentThread()->ApcStateIndex != 1 )
  {
    LOBYTE(v13) = v7;
    MiUnlockPage(a2, v13);
    goto LABEL_16;
  }
  if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(&dword_140E373C0) )
  {
    ++dword_140EF4DDC;
    goto LABEL_45;
  }
  v17 = MiPrepareAttachThread(PageTablePfnBuddyRaw, v16);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E373C0);
  if ( KiIrqlFlags )
  {
    LOBYTE(v18) = v7;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v18);
  }
  __writecr8(v7);
  if ( !v17 )
  {
    ++dword_140EF4DE0;
    return 0LL;
  }
  *((_QWORD *)v5 + 7) = v16;
  if ( (_KPROCESS *)PageTablePfnBuddyRaw != KeGetCurrentThread()->ApcState.Process )
  {
    *((_BYTE *)v5 + 64) = 1;
    KeForceAttachProcess(PageTablePfnBuddyRaw);
  }
LABEL_16:
  *((_QWORD *)v5 + 4) = 0LL;
  *((_QWORD *)v5 + 5) = 0LL;
  v19 = v35;
  *((_QWORD *)v5 + 3) = v16;
  if ( v19 )
  {
    *((_BYTE *)v5 + 37) |= 1u;
    v20 = MiLockWorkingSetExclusive(v16);
  }
  else
  {
    v20 = MiLockWorkingSetShared(v16);
  }
  *((_BYTE *)v5 + 36) = v20;
  if ( (v5[2] & 8) != 0 )
  {
    Address = 0LL;
  }
  else
  {
    MiLockVadTree(1LL);
    Address = MiLocateAddress(v8);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
    if ( !Address )
    {
      ++dword_140EF4DE4;
      goto LABEL_65;
    }
    if ( !(unsigned int)MiVadPagesTradable(Address) )
    {
      if ( (*(_BYTE *)(Address + 48) & 0x70) != 0x40 )
        goto LABEL_62;
      v5[2] |= 0x400u;
    }
  }
  if ( !v19 )
  {
    v35 = 0LL;
    if ( v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_55;
    v22 = MiFastLockLeafPageTable(v16, v8, 0LL);
    if ( !v22 )
      goto LABEL_55;
    v23 = 0LL;
    memset(v33, 0, 32);
    do
    {
      v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)v33 + v23++) = v8;
    }
    while ( v23 < 4 );
    v24 = *((_QWORD *)v33 + v22);
    v25 = *(&v32 + v22);
    v35 = v25;
    if ( v24 )
    {
      v26 = v36;
    }
    else
    {
LABEL_55:
      v26 = v36;
      valid = MiLockLowestValidPageTableEx(v16, v36, &v35, 0);
      v25 = v35;
      v24 = valid;
    }
    *((_QWORD *)v5 + 5) = v24;
    if ( v25 != v26 )
      goto LABEL_65;
    v27 = MI_READ_PTE_LOCK_FREE(v25);
    if ( (v27 & 1) == 0 || ((v27 >> 12) & 0xFFFFFFFFFFLL) != v9 )
      goto LABEL_65;
    goto LABEL_31;
  }
  if ( (unsigned int)MiSmallVaStillMapsFrame(v8, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4)) )
  {
    v26 = v36;
LABEL_31:
    if ( v9 > qword_140E2DBE0 )
      goto LABEL_65;
    if ( ((*(_QWORD *)(16 * ((__int64)(a2 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
      goto LABEL_65;
    if ( *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL)) != a1 )
      goto LABEL_65;
    if ( *(__int64 *)(a2 + 40) < 0 )
      goto LABEL_65;
    if ( _bittest64((const signed __int64 *)(a2 + 40), 0x35u) )
      goto LABEL_65;
    v28 = *v5;
    if ( (*v5 & 0x410000) != 0x410000 && (unsigned int)MiGetPfnSlabType(a2) != 9 )
      goto LABEL_65;
    if ( (v28 & 0x800000) != 0 )
    {
      if ( Address )
      {
        v29 = *(_DWORD *)(Address + 48);
        if ( MiVadPageSizes[(v29 >> 19) & 3] == 16
          && (v29 & 0x200000) != 0
          && (unsigned int)MiClusterVadActive(Address, a2, v5 + 30) )
        {
          ++dword_140EF4DE8;
          goto LABEL_70;
        }
      }
    }
    if ( (v5[2] & 0x400) == 0 || !(unsigned int)MiRotatedToFrameBuffer(v26) )
      return 1LL;
LABEL_62:
    ++dword_140EF4DE4;
LABEL_70:
    LODWORD(a5) = 0;
    goto LABEL_65;
  }
  ++dword_140EF4DF0;
LABEL_65:
  MiUnlockStealVm(v5);
  ++dword_140EF4D9C;
  return (unsigned int)a5;
}
