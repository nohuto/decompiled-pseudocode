/*
 * XREFs of MiSharedVaToPartition @ 0x140214100
 * Callers:
 *     MiActOnPte @ 0x14028B7E0 (MiActOnPte.c)
 *     MiCreateSharedZeroPages @ 0x1402EED80 (MiCreateSharedZeroPages.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402141A0 (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     MiIsPrototypePteVadLookup @ 0x140303270 (MiIsPrototypePteVadLookup.c)
 *     MiLocateCloneAddress @ 0x1403E3608 (MiLocateCloneAddress.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14040E5F0 (MI_PROTO_FORMAT_COMBINED.c)
 */

ULONG *__fastcall MiSharedVaToPartition(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  unsigned __int64 v7; // rcx
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r8
  _KPROCESS *Process; // rcx
  __int64 CloneAddress; // rax
  __int64 Address; // rax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rax
  _QWORD *v20; // rdx
  unsigned __int64 v21; // r8

  v3 = *a3;
  if ( (unsigned __int64)a3 >= 0xFFFFF6FB7DBED000uLL )
  {
    v7 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)a3 <= 0xFFFFF6FB7DBED7F8uLL && (v3 & 1) != 0 )
    {
      LOBYTE(v7) = (v3 & 0x42) != 0;
      if ( ((unsigned __int8)v7 & ((v3 & 0x20) != 0)) == 0 )
        MiPteHasShadow(v7, a2);
    }
  }
  if ( !byte_140E2FF94 )
    return &MiSystemPartition;
  v9 = *((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(a1 + 174));
  v10 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v12 = v10;
  if ( (v10 & 0x400) != 0 && (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v10, v11, v10) )
    return **(ULONG ***)(((unsigned __int64)(a3 - 4) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( a2 >= 0xFFFF800000000000uLL )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 4 )
      return (ULONG *)v9;
    v20 = P;
    if ( !P )
      return (ULONG *)v9;
    do
    {
      v21 = v20[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 < v21 + v20[4] )
      {
        if ( a2 >= v21 )
          break;
        v20 = (_QWORD *)*v20;
      }
      else
      {
        v20 = (_QWORD *)v20[1];
      }
    }
    while ( v20 );
    if ( !v20 )
      return (ULONG *)v9;
    v19 = v20[6];
LABEL_31:
    if ( *(_QWORD *)v19 )
      return (ULONG *)*((_QWORD *)qword_140E2FF88 + (*(_WORD *)(*(_QWORD *)v19 + 60LL) & 0x3FF));
    return (ULONG *)v9;
  }
  if ( (unsigned int)MiIsPrototypePteVadLookup(v12) )
  {
LABEL_18:
    MiLockVadTree(1LL);
    Address = MiLocateAddress(a2);
    LOBYTE(v17) = 17;
    v18 = Address;
    MiUnlockVadTree(1LL, v17);
    if ( !v18 )
      return (ULONG *)v9;
    if ( (*(_DWORD *)(v18 + 48) & 0x200000) != 0 )
      return (ULONG *)v9;
    v19 = *(_QWORD *)(v18 + 72);
    if ( !v19 )
      return (ULONG *)v9;
    goto LABEL_31;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !Process[1].IdealProcessorAssignmentBlock )
  {
    v9 = 0LL;
    goto LABEL_18;
  }
  CloneAddress = MiLocateCloneAddress(Process, a3, v13);
  if ( !CloneAddress )
  {
    v9 = 0LL;
    goto LABEL_18;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(CloneAddress + 56) + 24LL);
  if ( !v9 )
    goto LABEL_18;
  return (ULONG *)v9;
}
