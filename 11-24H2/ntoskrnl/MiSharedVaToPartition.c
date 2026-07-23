/*
 * XREFs of MiSharedVaToPartition @ 0x140307460
 * Callers:
 *     MiActOnPte @ 0x14029B3E0 (MiActOnPte.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiCreateSharedZeroPages @ 0x140342A48 (MiCreateSharedZeroPages.c)
 * Callees:
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140269F40 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiPteHasShadow @ 0x140307500 (MiPteHasShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x14030D150 (MiIsPrototypePteVadLookup.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiLocateCloneAddress @ 0x1403C9CE8 (MiLocateCloneAddress.c)
 */

ULONG *__fastcall MiSharedVaToPartition(__int64 a1, unsigned __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned __int64 v8; // rcx
  __int64 v10; // rbp
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _KPROCESS *Process; // rcx
  __int64 CloneAddress; // rax
  __int64 Address; // rbx
  __int64 v20; // rax
  _QWORD *v21; // rdx
  unsigned __int64 v22; // r8

  v4 = *a3;
  if ( (unsigned __int64)a3 >= 0xFFFFF6FB7DBED000uLL )
  {
    v8 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)a3 <= 0xFFFFF6FB7DBED7F8uLL && (v4 & 1) != 0 )
    {
      LOBYTE(v8) = (v4 & 0x42) != 0;
      if ( ((unsigned __int8)v8 & ((v4 & 0x20) != 0)) == 0 )
        MiPteHasShadow(v8, a2, a3, a4);
    }
  }
  if ( !byte_140E300D4 )
    return &MiSystemPartition;
  v10 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a1 + 174));
  v11 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v13 = v11;
  if ( (v11 & 0x400) != 0 && MI_PROTO_FORMAT_COMBINED(v11) )
    return **(ULONG ***)(((unsigned __int64)(a3 - 4) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( a2 >= 0xFFFF800000000000uLL )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 4 )
      return (ULONG *)v10;
    v21 = P;
    if ( !P )
      return (ULONG *)v10;
    do
    {
      v22 = v21[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 < v22 + v21[4] )
      {
        if ( a2 >= v22 )
          break;
        v21 = (_QWORD *)*v21;
      }
      else
      {
        v21 = (_QWORD *)v21[1];
      }
    }
    while ( v21 );
    if ( !v21 )
      return (ULONG *)v10;
    v20 = v21[6];
LABEL_31:
    if ( *(_QWORD *)v20 )
      return (ULONG *)*((_QWORD *)qword_140E300C8 + (*(_WORD *)(*(_QWORD *)v20 + 60LL) & 0x3FF));
    return (ULONG *)v10;
  }
  if ( (unsigned int)MiIsPrototypePteVadLookup(v13, v12) )
  {
LABEL_18:
    MiLockVadTree(1, v14, v15, v16);
    Address = MiLocateAddress(a2);
    MiUnlockVadTree(1, 0x11u);
    if ( !Address )
      return (ULONG *)v10;
    if ( (*(_DWORD *)(Address + 48) & 0x200000) != 0 )
      return (ULONG *)v10;
    v20 = *(_QWORD *)(Address + 72);
    if ( !v20 )
      return (ULONG *)v10;
    goto LABEL_31;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !Process[1].IdealProcessorAssignmentBlock )
  {
    v10 = 0LL;
    goto LABEL_18;
  }
  CloneAddress = MiLocateCloneAddress(Process, a3);
  if ( !CloneAddress )
  {
    v10 = 0LL;
    goto LABEL_18;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(CloneAddress + 56) + 24LL);
  if ( !v10 )
    goto LABEL_18;
  return (ULONG *)v10;
}
