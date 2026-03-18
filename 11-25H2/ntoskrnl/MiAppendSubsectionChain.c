/*
 * XREFs of MiAppendSubsectionChain @ 0x1402A6358
 * Callers:
 *     MiExtendSection @ 0x14093B140 (MiExtendSection.c)
 * Callees:
 *     MiInsertSubsectionNode @ 0x1402A7D14 (MiInsertSubsectionNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiInsertUnusedSubsection @ 0x140322E10 (MiInsertUnusedSubsection.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiDecrementSubsectionViewCount @ 0x14033F740 (MiDecrementSubsectionViewCount.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B9590 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F77BC (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiAppendSubsectionChain(__int64 *a1, __int64 a2, char a3)
{
  __int64 v3; // r13
  ULONG_PTR v5; // rbx
  bool v7; // r14
  __int64 v8; // rbp
  volatile LONG *v9; // rdi
  KIRQL v10; // al
  __int64 v11; // rdx
  bool v12; // zf
  int v13; // eax
  __int64 v14; // rbx
  __int64 v16; // rax
  unsigned int v17; // edi
  ULONG_PTR i; // rcx
  __int64 inserted; // rax
  KIRQL v20; // [rsp+60h] [rbp+8h]
  volatile LONG *v22; // [rsp+78h] [rbp+20h]

  v3 = *a1;
  v5 = *(_QWORD *)(a2 + 16);
  v7 = 0;
  v8 = 0LL;
  v9 = (volatile LONG *)(*a1 + 72);
  v22 = v9;
  v10 = ExAcquireSpinLockExclusive(v9);
  v20 = v10;
  if ( *(_QWORD *)(v3 + 48) )
  {
    v17 = 2;
    v11 = a3 & 2;
    if ( (a1[6] & 0x3FFFFFFF) != 0 )
    {
      if ( (a3 & 2) == 0 )
        goto LABEL_18;
    }
    else
    {
      v7 = (_DWORD)v11 != 0;
    }
    if ( (a3 & 1) != 0 )
    {
      for ( i = v5; i; i = *(_QWORD *)(i + 16) )
      {
        *(_DWORD *)(i + 32) |= 0x10000u;
        if ( (*(_BYTE *)(v3 + 62) & 0xC) != 0 )
          *(_DWORD *)(i + 52) |= 0x40000000u;
      }
      v12 = !v7;
      goto LABEL_4;
    }
    v17 = 1;
LABEL_18:
    LOBYTE(v11) = v10;
    MiReleaseSpinLockExclusive(v22, v11);
    return v17;
  }
  if ( *(_QWORD *)(v5 + 8) )
  {
    do
    {
      if ( (*(_DWORD *)(v5 + 48) & 0x3FFFFFFF) != 0 )
        MiUpdateSubsectionCrossPartitionRefs(v5, 0x3FFFFFFFLL);
      *(_QWORD *)(v5 + 80) = 0LL;
      inserted = MiInsertUnusedSubsection(v5);
      v5 = *(_QWORD *)(v5 + 16);
      v8 += inserted;
    }
    while ( v5 );
    goto LABEL_6;
  }
  v12 = (a3 & 2) == 0;
LABEL_4:
  if ( !v12 )
  {
    do
    {
      v16 = MiDecrementSubsectionViewCount(v5);
      v5 = *(_QWORD *)(v5 + 16);
      v8 += v16;
    }
    while ( v5 );
  }
  v9 = (volatile LONG *)(v3 + 72);
LABEL_6:
  *((_DWORD *)a1 + 8) &= 0xFFFFFu;
  v13 = *(_DWORD *)(a2 + 40);
  *((_DWORD *)a1 + 13) &= 0xC0000000;
  *((_DWORD *)a1 + 10) = v13;
  v14 = *(_QWORD *)(a2 + 16);
  a1[2] = v14;
  if ( v14 )
  {
    do
    {
      MiInsertSubsectionNode(v3, v14, 1LL);
      v14 = *(_QWORD *)(v14 + 16);
    }
    while ( v14 );
    v9 = (volatile LONG *)(v3 + 72);
  }
  LOBYTE(v11) = v20;
  MiReleaseSpinLockExclusive(v9, v11);
  if ( v8 )
    MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E2FD48 + (*(_WORD *)(v3 + 60) & 0x3FF)), 1LL, v8);
  return 0LL;
}
