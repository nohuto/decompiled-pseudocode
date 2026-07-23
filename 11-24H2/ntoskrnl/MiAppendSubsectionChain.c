/*
 * XREFs of MiAppendSubsectionChain @ 0x140470BE4
 * Callers:
 *     MiExtendSection @ 0x14098A4D8 (MiExtendSection.c)
 * Callees:
 *     MiInsertUnusedSubsection @ 0x140259F70 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x14025A760 (MiDecrementSubsectionViewCount.c)
 *     MiInsertSubsectionNode @ 0x140291B54 (MiInsertSubsectionNode.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F781C (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiAppendSubsectionChain(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r13
  __int64 v5; // rbx
  bool v7; // r14
  __int64 v8; // rbp
  volatile LONG *v9; // rdi
  KIRQL v10; // al
  bool v11; // zf
  int v12; // eax
  unsigned __int64 v13; // rbx
  __int64 v15; // rax
  unsigned int v16; // edi
  __int64 i; // rcx
  __int64 inserted; // rax
  unsigned __int8 v19; // [rsp+60h] [rbp+8h]
  volatile LONG *v21; // [rsp+78h] [rbp+20h]

  v3 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a2 + 16);
  v7 = 0;
  v8 = 0LL;
  v9 = (volatile LONG *)(*(_QWORD *)a1 + 72LL);
  v21 = v9;
  v10 = ExAcquireSpinLockExclusive(v9);
  v19 = v10;
  if ( *(_QWORD *)(v3 + 48) )
  {
    v16 = 2;
    if ( (*(_DWORD *)(a1 + 48) & 0x3FFFFFFF) != 0 )
    {
      if ( (a3 & 2) == 0 )
        goto LABEL_18;
    }
    else
    {
      v7 = (a3 & 2) != 0;
    }
    if ( (a3 & 1) != 0 )
    {
      for ( i = v5; i; i = *(_QWORD *)(i + 16) )
      {
        *(_DWORD *)(i + 32) |= 0x10000u;
        if ( (*(_BYTE *)(v3 + 62) & 0xC) != 0 )
          *(_DWORD *)(i + 52) |= 0x40000000u;
      }
      v11 = !v7;
      goto LABEL_4;
    }
    v16 = 1;
LABEL_18:
    MiReleaseSpinLockExclusive(v21, v10);
    return v16;
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
  v11 = (a3 & 2) == 0;
LABEL_4:
  if ( !v11 )
  {
    do
    {
      v15 = MiDecrementSubsectionViewCount((__int64 *)v5, 24);
      v5 = *(_QWORD *)(v5 + 16);
      v8 += v15;
    }
    while ( v5 );
  }
  v9 = (volatile LONG *)(v3 + 72);
LABEL_6:
  *(_DWORD *)(a1 + 32) &= 0xFFFFFu;
  v12 = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 52) &= 0xC0000000;
  *(_DWORD *)(a1 + 40) = v12;
  v13 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = v13;
  if ( v13 )
  {
    do
    {
      MiInsertSubsectionNode(v3, v13, 1);
      v13 = *(_QWORD *)(v13 + 16);
    }
    while ( v13 );
    v9 = (volatile LONG *)(v3 + 72);
  }
  MiReleaseSpinLockExclusive(v9, v19);
  if ( v8 )
    MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E300C8 + (*(_WORD *)(v3 + 60) & 0x3FF)), 1LL, v8);
  return 0LL;
}
