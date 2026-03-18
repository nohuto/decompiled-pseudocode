/*
 * XREFs of MiAllocatePerSessionProtos @ 0x140A4FFC0
 * Callers:
 *     MiCreatePerSessionProtos @ 0x140A4FE70 (MiCreatePerSessionProtos.c)
 * Callees:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiMakeSubsectionPte @ 0x14022929C (MiMakeSubsectionPte.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14026047C (MiUpdateSystemProtoPtesTree.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402C6590 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiGetControlAreaPartition @ 0x1404378D0 (MiGetControlAreaPartition.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocatePerSessionProtos(__int64 a1, _QWORD *a2)
{
  __int64 ControlAreaPartition; // rbp
  __int64 Pool; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  unsigned int v9; // r10d
  unsigned __int64 *i; // r11
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r10d
  __int64 v14; // r11
  unsigned int v15; // ebx
  void *v17; // rcx

  *a2 = 0LL;
  ControlAreaPartition = MiGetControlAreaPartition(*(_QWORD *)a1);
  if ( (unsigned int)MiChargeCommit(ControlAreaPartition, *(unsigned int *)(a1 + 44), 0) )
  {
    Pool = MiAllocatePool(0x40uLL, 0x58uLL, 1934847309);
    v6 = (_QWORD *)Pool;
    if ( Pool )
    {
      *(_DWORD *)(Pool + 80) = 1;
      v7 = (_QWORD *)MiAllocatePool(0x112uLL, 8LL * *(unsigned int *)(a1 + 44), 1951624525);
      v8 = v7;
      if ( v7 )
      {
        v6[9] = v7;
        memset_0(v7, 0, 8LL * *(unsigned int *)(a1 + 44));
        MiMakeSubsectionPte(a1);
        v9 = 0;
        v6[6] = v6[6] & 0xFFFFFFFFFFFFFFF8uLL | 3;
        for ( i = *(unsigned __int64 **)(a1 + 8); v9 < *(_DWORD *)(a1 + 44); ++v8 )
        {
          if ( !*i )
            break;
          if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(*i) )
            v11 = v12;
          i = (unsigned __int64 *)(v14 + 8);
          *v8 = v11;
          v9 = v13 + 1;
        }
        v6[7] = v9;
        MiUpdateSystemProtoPtesTree((__int64)(v6 + 3), 1);
        v15 = 0;
        *a2 = v6;
        return v15;
      }
      v17 = (void *)v6[9];
      v15 = -1073741670;
      if ( v17 )
        ExFreePoolWithTag(v17, 0);
      ExFreePoolWithTag(v6, 0);
    }
    else
    {
      v15 = -1073741670;
    }
    MiReturnCommit(ControlAreaPartition, *(unsigned int *)(a1 + 44), 0);
    return v15;
  }
  return 3221225773LL;
}
