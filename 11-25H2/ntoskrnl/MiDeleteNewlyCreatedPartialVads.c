/*
 * XREFs of MiDeleteNewlyCreatedPartialVads @ 0x1407EF1B4
 * Callers:
 *     MiAllocateSplitVads @ 0x1409021D4 (MiAllocateSplitVads.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     MiComputeVadCharges @ 0x14038505C (MiComputeVadCharges.c)
 *     MiUpControlAreaRefs @ 0x1404B95EC (MiUpControlAreaRefs.c)
 *     MiFreeRotateView @ 0x1407DDB9C (MiFreeRotateView.c)
 *     MiRemoveSharedCommitNode @ 0x1408B5520 (MiRemoveSharedCommitNode.c)
 *     MiReturnVadCharges @ 0x140901270 (MiReturnVadCharges.c)
 *     MiFreePlaceholderStorage @ 0x140A90928 (MiFreePlaceholderStorage.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteNewlyCreatedPartialVads(__int64 a1)
{
  void **v1; // rdi
  int v2; // ebx
  _KPROCESS *Process; // rbp
  void **v4; // rsi
  void *v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v1 = *(void ***)a1;
  v2 = *(_DWORD *)(a1 + 40);
  v6 = 0LL;
  v7 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v1 )
  {
    do
    {
      v4 = (void **)*v1;
      MiComputeVadCharges((__int64)v1, (__int64)&v6);
      if ( !v4 && (v2 & 2) == 0 )
      {
        v7 = 0LL;
        *((_QWORD *)&v6 + 1) = 0LL;
      }
      MiReturnVadCharges(&v6);
      if ( v4 || (v2 & 2) != 0 )
      {
        if ( ((_DWORD)v1[6] & 0x200000) == 0 )
        {
          v5 = v1[16];
          if ( v5 )
            ObfReferenceObjectWithTag(v5, 0x63536D4Du);
          if ( !v4 && (v2 & 4) == 0 )
            goto LABEL_14;
          MiUpControlAreaRefs((__int64)v1, 0);
        }
        if ( v4 )
          goto LABEL_15;
      }
LABEL_14:
      if ( (v2 & 1) != 0 )
      {
LABEL_15:
        if ( ((_DWORD)v1[6] & 0x200000) == 0 )
          MiRemoveSharedCommitNode(*(_QWORD *)v1[9], Process, 0LL);
      }
      MiFreeRotateView((__int64)v1);
      MiFreePlaceholderStorage(v1);
      ExFreePoolWithTag(v1, 0);
      v1 = v4;
    }
    while ( v4 );
  }
}
