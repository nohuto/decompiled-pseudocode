/*
 * XREFs of MiSharedVaToPartition @ 0x14023B3F0
 * Callers:
 *     MiActOnPte @ 0x140237188 (MiActOnPte.c)
 *     MiCreateSharedZeroPages @ 0x14023B000 (MiCreateSharedZeroPages.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPrototypePteVadLookup @ 0x140246860 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1402CF530 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiLocateCloneAddress @ 0x1403DE800 (MiLocateCloneAddress.c)
 */

ULONG *__fastcall MiSharedVaToPartition(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8
  _KPROCESS *Process; // rcx
  __int64 CloneAddress; // rax
  __int64 Address; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rax
  _QWORD *v18; // rdx
  unsigned __int64 v19; // r8

  if ( !byte_140E2FD54 )
    return &MiSystemPartition;
  v7 = *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(a1 + 174));
  v8 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = v8;
  if ( (v8 & 0x400) != 0 && (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v8) )
    return **(ULONG ***)(((a3 - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( a2 >= 0xFFFF800000000000uLL )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 4 )
      return (ULONG *)v7;
    v18 = P;
    if ( !P )
      return (ULONG *)v7;
    do
    {
      v19 = v18[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 < v19 + v18[4] )
      {
        if ( a2 >= v19 )
          break;
        v18 = (_QWORD *)*v18;
      }
      else
      {
        v18 = (_QWORD *)v18[1];
      }
    }
    while ( v18 );
    if ( !v18 )
      return (ULONG *)v7;
    v17 = v18[6];
LABEL_26:
    if ( *(_QWORD *)v17 )
      return (ULONG *)*((_QWORD *)qword_140E2FD48 + (*(_WORD *)(*(_QWORD *)v17 + 60LL) & 0x3FF));
    return (ULONG *)v7;
  }
  if ( (unsigned int)MiIsPrototypePteVadLookup(v10, v9, v10) )
  {
LABEL_13:
    MiLockVadTree(1LL);
    Address = MiLocateAddress(a2);
    LOBYTE(v15) = 17;
    v16 = Address;
    MiUnlockVadTree(1LL, v15);
    if ( !v16 )
      return (ULONG *)v7;
    if ( (*(_DWORD *)(v16 + 48) & 0x200000) != 0 )
      return (ULONG *)v7;
    v17 = *(_QWORD *)(v16 + 72);
    if ( !v17 )
      return (ULONG *)v7;
    goto LABEL_26;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !Process[1].IdealProcessorAssignmentBlock )
  {
    v7 = 0LL;
    goto LABEL_13;
  }
  CloneAddress = MiLocateCloneAddress(Process, a3, v11);
  if ( !CloneAddress )
  {
    v7 = 0LL;
    goto LABEL_13;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(CloneAddress + 56) + 24LL);
  if ( !v7 )
    goto LABEL_13;
  return (ULONG *)v7;
}
