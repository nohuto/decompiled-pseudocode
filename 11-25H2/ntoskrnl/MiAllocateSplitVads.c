/*
 * XREFs of MiAllocateSplitVads @ 0x1409021D4
 * Callers:
 *     MiDeletePartialVad @ 0x1402A3A10 (MiDeletePartialVad.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiUpControlAreaRefs @ 0x1404B95EC (MiUpControlAreaRefs.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x1407EF1B4 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiInsertVadCharges @ 0x140900770 (MiInsertVadCharges.c)
 *     MiInsertSharedCommitNode @ 0x140900A50 (MiInsertSharedCommitNode.c)
 *     MiInitializePartialVad @ 0x140902310 (MiInitializePartialVad.c)
 */

__int64 __fastcall MiAllocateSplitVads(__int64 a1)
{
  __int64 v2; // r14
  int inserted; // ebx
  _KPROCESS *Process; // r13
  unsigned int v5; // r12d
  unsigned __int64 v6; // r15
  unsigned int i; // ebp
  void *Pool; // rax
  __int64 v9; // rsi
  void *v11; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  inserted = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v5 = (*(_DWORD *)(a1 + 16) == 3) + 1;
  v6 = -(__int64)((*(_DWORD *)(v2 + 48) & 0x200000) != 0) & 0xFFFFFFFFFFFFFFB8uLL;
  for ( i = 0; i < v5; ++i )
  {
    Pool = (void *)MiAllocatePool(0x40uLL, v6 + 136, 1180983638);
    v9 = (__int64)Pool;
    if ( !Pool )
    {
      inserted = -1073741670;
LABEL_5:
      MiDeleteNewlyCreatedPartialVads(a1);
      return (unsigned int)inserted;
    }
    inserted = MiInitializePartialVad(Pool);
    if ( inserted < 0 )
      goto LABEL_5;
    *(_DWORD *)(a1 + 40) = 0;
    if ( (*(_DWORD *)(v2 + 48) & 0x200000) == 0 )
    {
      inserted = MiInsertSharedCommitNode(**(_QWORD **)(v2 + 72), (unsigned __int64)Process, 0);
      if ( inserted < 0 )
        goto LABEL_5;
      *(_DWORD *)(a1 + 40) |= 1u;
    }
    inserted = MiInsertVadCharges(v9, (__int64)Process);
    if ( inserted < 0 )
      goto LABEL_5;
    *(_DWORD *)(a1 + 40) |= 2u;
    if ( (*(_DWORD *)(v2 + 48) & 0x200000) == 0 )
    {
      v11 = *(void **)(v9 + 128);
      if ( v11 )
        ObfReferenceObjectWithTag(v11, 0x63536D4Du);
      inserted = MiUpControlAreaRefs(v9, 1);
      if ( inserted < 0 )
        goto LABEL_5;
      *(_DWORD *)(a1 + 40) |= 4u;
    }
  }
  return (unsigned int)inserted;
}
