/*
 * XREFs of ?AssignMaximumBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1400DC0AC
 * Callers:
 *     ?AssignBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1400DBBE0 (-AssignBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z.c)
 * Callees:
 *     ?AssignProcessBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1400DC1AC (-AssignProcessBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@P.c)
 */

void __fastcall VIDMM_GLOBAL::AssignMaximumBudgets(
        VIDMM_GLOBAL *this,
        struct VIDMM_BUDGET_STATE *a2,
        struct VIDMM_SEGMENT_GROUP_STATE *a3)
{
  unsigned __int8 i; // bp
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  char **v9; // r15
  char *v10; // r14
  struct VIDMM_PROCESS_ADAPTER_INFO *v11; // r9
  char *v12; // rbx
  __int64 v13; // rcx
  char **v14; // rax
  char *v15; // rax
  char **v16; // rcx

  for ( i = 0; i < 3u; ++i )
  {
    v7 = 3LL;
    v8 = (_QWORD *)((char *)a3 + 24 * i + 48);
    do
    {
      *v8++ = *((_QWORD *)a3 + 4);
      --v7;
    }
    while ( v7 );
    if ( *((_DWORD *)a3 + i + 81) )
    {
      v9 = (char **)((char *)a3 + 16 * i + 144);
      v10 = *v9;
      while ( v10 != (char *)v9 )
      {
        v11 = (struct VIDMM_PROCESS_ADAPTER_INFO *)(v10 - 88);
        v12 = v10;
        v10 = *(char **)v10;
        VIDMM_GLOBAL::AssignProcessBudget(this, a2, a3, v11, 0xFFFFFFFFFFFFFFFFuLL);
        v13 = *(_QWORD *)v12;
        if ( *(char **)(*(_QWORD *)v12 + 8LL) != v12
          || (v14 = (char **)*((_QWORD *)v12 + 1), *v14 != v12)
          || (*v14 = (char *)v13,
              *(_QWORD *)(v13 + 8) = v14,
              v15 = (char *)a3 + 16 * i + 192,
              v16 = (char **)*((_QWORD *)v15 + 1),
              *v16 != v15) )
        {
          __fastfail(3u);
        }
        *(_QWORD *)v12 = v15;
        *((_QWORD *)v12 + 1) = v16;
        *v16 = v12;
        *((_QWORD *)v15 + 1) = v12;
      }
    }
  }
}
