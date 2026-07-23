/*
 * XREFs of MiLockStealUserVm @ 0x14025539C
 * Callers:
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 * Callees:
 *     MiRotatedToFrameBuffer @ 0x140213AD4 (MiRotatedToFrameBuffer.c)
 *     MiFastLockLeafPageTable @ 0x14023A9C0 (MiFastLockLeafPageTable.c)
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402454B0 (MiLockLowestValidPageTableEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x1402FB220 (MiGetPageTablePfnBuddyRaw.c)
 *     MiGetTopLevelPfn @ 0x1402FB290 (MiGetTopLevelPfn.c)
 *     MiUnlockStealVm @ 0x1402FE250 (MiUnlockStealVm.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiPrepareAttachThread @ 0x140342180 (MiPrepareAttachThread.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiVadPagesTradable @ 0x1403DD010 (MiVadPagesTradable.c)
 *     KeForceAttachProcess @ 0x140424E30 (KeForceAttachProcess.c)
 *     MiSmallVaStillMapsFrame @ 0x14045BBE4 (MiSmallVaStillMapsFrame.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiClusterVadActive @ 0x140693FE4 (MiClusterVadActive.c)
 */

__int64 __fastcall MiLockStealUserVm(__int64 a1, ULONG_PTR a2, unsigned __int8 a3, unsigned __int64 a4, int *a5)
{
  int *v5; // rdi
  unsigned __int64 v7; // rbp
  ULONG_PTR v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // r13
  __int64 TopLevelPfn; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG_PTR PageTablePfnBuddyRaw; // r14
  __int64 v17; // r12
  int v18; // r13d
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r13d
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 Address; // rbp
  int v28; // eax
  __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rax
  int v34; // r8d
  unsigned int v35; // ecx
  unsigned __int64 valid; // rax
  __int64 v38; // [rsp+18h] [rbp-60h]
  _OWORD v39[5]; // [rsp+20h] [rbp-58h] BYREF
  ULONG_PTR v41; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v42; // [rsp+98h] [rbp+20h]

  v42 = a4;
  v5 = a5;
  v7 = a3;
  v8 = (__int64)(a4 << 25) >> 16;
  LODWORD(v41) = v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL;
  *((_BYTE *)a5 + 64) = 0;
  LODWORD(a5) = 2;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
  v10 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFLL;
  if ( v10 == v9 )
    ++dword_140EF4FA4;
  TopLevelPfn = MiGetTopLevelPfn(a2);
  PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(TopLevelPfn, v12, TopLevelPfn);
  v17 = PageTablePfnBuddyRaw + 1024;
  if ( v14 != a2 )
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (PVOID)PageTablePfnBuddyRaw == PsIdleProcess )
  {
    ++dword_140EF4FF4;
LABEL_45:
    LOBYTE(v13) = v7;
    MiUnlockPage(a2, v13);
    return 0LL;
  }
  if ( v10 == v9 && (*(_DWORD *)(PageTablePfnBuddyRaw + 1532) & 0x1000) != 0 )
  {
    ++dword_140EF4FF0;
    goto LABEL_45;
  }
  if ( (_KPROCESS *)PageTablePfnBuddyRaw == KeGetCurrentThread()->ApcState.Process
    && KeGetCurrentThread()->ApcStateIndex != 1 )
  {
    LOBYTE(v13) = v7;
    MiUnlockPage(a2, v13);
    goto LABEL_16;
  }
  if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(&SpinLock, v13, v14, v15) )
  {
    ++dword_140EF4FFC;
    goto LABEL_45;
  }
  v18 = MiPrepareAttachThread(PageTablePfnBuddyRaw, v17);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
  if ( KiIrqlFlags )
  {
    LOBYTE(v19) = v7;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v19);
  }
  __writecr8(v7);
  if ( !v18 )
  {
    ++dword_140EF5000;
    return 0LL;
  }
  *((_QWORD *)v5 + 7) = v17;
  if ( (_KPROCESS *)PageTablePfnBuddyRaw != KeGetCurrentThread()->ApcState.Process )
  {
    *((_BYTE *)v5 + 64) = 1;
    KeForceAttachProcess(PageTablePfnBuddyRaw);
  }
LABEL_16:
  *((_QWORD *)v5 + 4) = 0LL;
  *((_QWORD *)v5 + 5) = 0LL;
  v22 = v41;
  *((_QWORD *)v5 + 3) = v17;
  if ( v22 )
  {
    *((_BYTE *)v5 + 37) |= 1u;
    v23 = MiLockWorkingSetExclusive(v17);
  }
  else
  {
    v23 = MiLockWorkingSetShared(v17, v19, v20, v21);
  }
  *((_BYTE *)v5 + 36) = v23;
  if ( (v5[2] & 8) != 0 )
  {
    Address = 0LL;
  }
  else
  {
    MiLockVadTree(1, v24, v25, v26);
    Address = MiLocateAddress(v8);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
    if ( !Address )
    {
      ++dword_140EF5004;
      goto LABEL_65;
    }
    if ( !(unsigned int)MiVadPagesTradable(Address) )
    {
      if ( (*(_BYTE *)(Address + 48) & 0x70) != 0x40 )
        goto LABEL_62;
      v5[2] |= 0x400u;
    }
  }
  if ( !v22 )
  {
    v41 = 0LL;
    if ( v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_55;
    v28 = MiFastLockLeafPageTable(v17, v8, 0);
    if ( !v28 )
      goto LABEL_55;
    v29 = 0LL;
    memset(v39, 0, 32);
    do
    {
      v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)v39 + v29++) = v8;
    }
    while ( v29 < 4 );
    v30 = *((_QWORD *)v39 + v28);
    v31 = *(&v38 + v28);
    v41 = v31;
    if ( v30 )
    {
      v32 = v42;
    }
    else
    {
LABEL_55:
      v32 = v42;
      valid = MiLockLowestValidPageTableEx(v17, v42, &v41, 0);
      v31 = v41;
      v30 = valid;
    }
    *((_QWORD *)v5 + 5) = v30;
    if ( v31 != v32 )
      goto LABEL_65;
    v33 = MI_READ_PTE_LOCK_FREE(v31);
    if ( (v33 & 1) == 0 || ((v33 >> 12) & 0xFFFFFFFFFFLL) != v9 )
      goto LABEL_65;
    goto LABEL_31;
  }
  if ( (unsigned int)MiSmallVaStillMapsFrame(v8, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4)) )
  {
    v32 = v42;
LABEL_31:
    if ( v9 > qword_140E2DD20 )
      goto LABEL_65;
    if ( ((*(_QWORD *)(16 * ((__int64)(a2 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
      goto LABEL_65;
    if ( *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL)) != a1 )
      goto LABEL_65;
    if ( *(__int64 *)(a2 + 40) < 0 )
      goto LABEL_65;
    if ( _bittest64((const signed __int64 *)(a2 + 40), 0x35u) )
      goto LABEL_65;
    v34 = *v5;
    if ( (*v5 & 0x410000) != 0x410000 && (unsigned int)MiGetPfnSlabType(a2) != 9 )
      goto LABEL_65;
    if ( (v34 & 0x800000) != 0 )
    {
      if ( Address )
      {
        v35 = *(_DWORD *)(Address + 48);
        if ( MiVadPageSizes[(v35 >> 19) & 3] == 16
          && (v35 & 0x200000) != 0
          && (unsigned int)MiClusterVadActive(Address, a2, v5 + 30) )
        {
          ++dword_140EF5008;
          goto LABEL_70;
        }
      }
    }
    if ( (v5[2] & 0x400) == 0 || !(unsigned int)MiRotatedToFrameBuffer(v32) )
      return 1LL;
LABEL_62:
    ++dword_140EF5004;
LABEL_70:
    LODWORD(a5) = 0;
    goto LABEL_65;
  }
  ++dword_140EF5010;
LABEL_65:
  MiUnlockStealVm(v5);
  ++dword_140EF4FBC;
  return (unsigned int)a5;
}
