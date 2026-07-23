/*
 * XREFs of ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x140348CEC
 * Callers:
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140348B70 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140456650 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

PSLIST_ENTRY __fastcall ST_STORE<SM_TRAITS>::StAcquireReadContext(__int64 a1)
{
  PSLIST_ENTRY v2; // rbx
  _SLIST_ENTRY *Pool2; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx

  v2 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 4848));
  if ( !v2 )
  {
    Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(0x40uLL);
    v2 = Pool2;
    if ( Pool2 )
    {
      memset_0(Pool2, 0, 0x1D0uLL);
      v4 = ((unsigned __int64)&v2[29].Next + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( *(_DWORD *)(a1 + 4824) )
      {
        v2[1].Next = (_SLIST_ENTRY *)v4;
        v4 += *(unsigned int *)(a1 + 4824);
      }
      v5 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      *((_QWORD *)&v2[26].Next + 1) = v5;
      v6 = (v5 + 175) & 0xFFFFFFFFFFFFFFF8uLL;
      v2[27].Next = (_SLIST_ENTRY *)v6;
      *(_QWORD *)(v5 + 8) = 0LL;
      *(_QWORD *)(v5 + 16) = 0LL;
      *(_QWORD *)(v5 + 32) = 0LL;
      *(_DWORD *)(v5 + 24) = 0;
      *(_QWORD *)v5 = v5 + 40;
      *(_DWORD *)(v5 + 28) = 8;
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_QWORD *)(v6 + 16) = 0LL;
      *(_QWORD *)(v6 + 32) = 0LL;
      *(_DWORD *)(v6 + 24) = 0;
      *(_QWORD *)v6 = v6 + 40;
      *(_DWORD *)(v6 + 28) = 8;
      if ( (*(_DWORD *)(a1 + 856) & 0x20000) != 0 )
        *((_QWORD *)&v2[25].Next + 1) = v6 + 168;
    }
    else
    {
      return 0LL;
    }
  }
  return v2;
}
