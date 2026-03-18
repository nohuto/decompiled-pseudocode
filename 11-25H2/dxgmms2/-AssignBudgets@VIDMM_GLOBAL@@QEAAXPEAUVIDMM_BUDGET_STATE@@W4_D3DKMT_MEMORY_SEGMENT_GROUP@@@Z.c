/*
 * XREFs of ?AssignBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1400DB9CC
 * Callers:
 *     ?RecalculateBudget@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1400DB3C8 (-RecalculateBudget@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 * Callees:
 *     ?BucketizeBudgetStateProcesses@VIDMM_GLOBAL@@QEAAXKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1400DBACC (-BucketizeBudgetStateProcesses@VIDMM_GLOBAL@@QEAAXKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 *     ?AssignBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1400DBBE0 (-AssignBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::AssignBudgets(
        VIDMM_GLOBAL *this,
        struct VIDMM_BUDGET_STATE *a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3)
{
  __int64 v3; // rbx
  __int64 v6; // r10
  struct _RTL_BALANCED_NODE *v7; // rax
  _QWORD *Children; // rbx
  _QWORD **v9; // rcx
  _QWORD *v10; // rax
  _QWORD *i; // rcx

  v3 = a3;
  VIDMM_GLOBAL::BucketizeBudgetStateProcesses(this, *(unsigned __int16 *)a2, a3);
  v6 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * *(unsigned __int16 *)a2);
  if ( (*(_BYTE *)(v6 + 24 * v3 + 552) & 1) != 0 )
  {
    v7 = VIDMM_PARTITION::_PartitionTree;
    Children = 0LL;
    while ( v7 )
    {
      Children = v7->Children;
      v7 = v7->Children[0];
    }
    while ( Children )
    {
      VIDMM_GLOBAL::AssignBudgets(
        this,
        a2,
        (struct VIDMM_SEGMENT_GROUP_STATE *)(*(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL)
                                                       + Children[5]
                                                       + 24)
                                           + 344LL * *(unsigned __int16 *)a2));
      v9 = (_QWORD **)Children[1];
      v10 = Children;
      if ( v9 )
      {
        Children = (_QWORD *)Children[1];
        for ( i = *v9; i; i = (_QWORD *)*i )
          Children = i;
      }
      else
      {
        while ( 1 )
        {
          Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !Children || (_QWORD *)*Children == v10 )
            break;
          v10 = Children;
        }
      }
    }
  }
  else
  {
    VIDMM_GLOBAL::AssignBudgets(this, a2, (struct VIDMM_SEGMENT_GROUP_STATE *)(v6 + 584 + 344 * v3));
  }
}
