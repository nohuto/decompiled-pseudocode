/*
 * XREFs of ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x1402E1CAC
 * Callers:
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14027CA30 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x1402E1B30 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

PSLIST_ENTRY __fastcall ST_STORE<SM_TRAITS>::StAcquireReadContext(__int64 a1)
{
  PSLIST_ENTRY v2; // rbx
  ULONG_PTR v3; // rdx
  _SLIST_ENTRY *Pool2; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx

  v2 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 4848));
  if ( !v2 )
  {
    v3 = (unsigned int)(*(_DWORD *)(a1 + 4824) + 4928);
    if ( (*(_DWORD *)(a1 + 856) & 0x20000) == 0 )
      v3 = (unsigned int)(*(_DWORD *)(a1 + 4824) + 832);
    Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(0x40uLL, v3, 0x74536D73u);
    v2 = Pool2;
    if ( Pool2 )
    {
      memset_0(Pool2, 0, 0x1D0uLL);
      v5 = ((unsigned __int64)&v2[29].Next + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( *(_DWORD *)(a1 + 4824) )
      {
        v2[1].Next = (_SLIST_ENTRY *)v5;
        v5 += *(unsigned int *)(a1 + 4824);
      }
      v6 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      *((_QWORD *)&v2[26].Next + 1) = v6;
      v7 = (v6 + 175) & 0xFFFFFFFFFFFFFFF8uLL;
      v2[27].Next = (_SLIST_ENTRY *)v7;
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_QWORD *)(v6 + 16) = 0LL;
      *(_QWORD *)(v6 + 32) = 0LL;
      *(_DWORD *)(v6 + 24) = 0;
      *(_QWORD *)v6 = v6 + 40;
      *(_DWORD *)(v6 + 28) = 8;
      *(_QWORD *)(v7 + 8) = 0LL;
      *(_QWORD *)(v7 + 16) = 0LL;
      *(_QWORD *)(v7 + 32) = 0LL;
      *(_DWORD *)(v7 + 24) = 0;
      *(_QWORD *)v7 = v7 + 40;
      *(_DWORD *)(v7 + 28) = 8;
      if ( (*(_DWORD *)(a1 + 856) & 0x20000) != 0 )
        *((_QWORD *)&v2[25].Next + 1) = v7 + 168;
    }
    else
    {
      return 0LL;
    }
  }
  return v2;
}
