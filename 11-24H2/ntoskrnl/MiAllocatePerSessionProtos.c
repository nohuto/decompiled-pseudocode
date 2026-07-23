/*
 * XREFs of MiAllocatePerSessionProtos @ 0x140A46D70
 * Callers:
 *     MiCreatePerSessionProtos @ 0x140A46C20 (MiCreatePerSessionProtos.c)
 * Callees:
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140269980 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140290A8C (MiUpdateSystemProtoPtesTree.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiMakeSubsectionPte @ 0x1402FC49C (MiMakeSubsectionPte.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiGetControlAreaPartition @ 0x14042A350 (MiGetControlAreaPartition.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocatePerSessionProtos(__int64 a1, _QWORD *a2)
{
  __int64 ControlAreaPartition; // rbp
  __int64 Pool; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  unsigned int v10; // r10d
  unsigned __int64 *i; // r11
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r10d
  __int64 v15; // r11
  unsigned int v16; // ebx
  void *v18; // rcx

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
        MiMakeSubsectionPte(a1, v9);
        v10 = 0;
        v6[6] = v6[6] & 0xFFFFFFFFFFFFFFF8uLL | 3;
        for ( i = *(unsigned __int64 **)(a1 + 8); v10 < *(_DWORD *)(a1 + 44); ++v8 )
        {
          if ( !*i )
            break;
          if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(*i) )
            v12 = v13;
          i = (unsigned __int64 *)(v15 + 8);
          *v8 = v12;
          v10 = v14 + 1;
        }
        v6[7] = v10;
        MiUpdateSystemProtoPtesTree((__int64)(v6 + 3), 1);
        v16 = 0;
        *a2 = v6;
        return v16;
      }
      v18 = (void *)v6[9];
      v16 = -1073741670;
      if ( v18 )
        ExFreePoolWithTag(v18, 0);
      ExFreePoolWithTag(v6, 0);
    }
    else
    {
      v16 = -1073741670;
    }
    MiReturnCommit(ControlAreaPartition, *(unsigned int *)(a1 + 44), 0);
    return v16;
  }
  return 3221225773LL;
}
