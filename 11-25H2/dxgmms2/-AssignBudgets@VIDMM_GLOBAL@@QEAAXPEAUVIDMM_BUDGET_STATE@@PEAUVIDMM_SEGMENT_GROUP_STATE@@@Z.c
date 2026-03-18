/*
 * XREFs of ?AssignBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1400DBBE0
 * Callers:
 *     ?AssignBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1400DB9CC (-AssignBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 * Callees:
 *     ?AssignBudgetsWithinBand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@W4VIDMM_BUDGET_PRIORITY_BAND@@_K@Z @ 0x1400DBD24 (-AssignBudgetsWithinBand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STAT.c)
 *     ?AssignMaximumBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1400DC0AC (-AssignMaximumBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@.c)
 */

void __fastcall VIDMM_GLOBAL::AssignBudgets(
        VIDMM_GLOBAL *this,
        struct VIDMM_BUDGET_STATE *a2,
        struct VIDMM_SEGMENT_GROUP_STATE *a3)
{
  int v6; // r8d
  char *v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned __int64 *v11; // rsi
  unsigned __int64 *v12; // rdx
  __int64 v13; // r9
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdi
  unsigned __int8 i; // bp
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax

  if ( *((_BYTE *)a3 + 136) )
  {
    v10 = 0LL;
    v11 = (unsigned __int64 *)((char *)a3 + 240);
    v12 = (unsigned __int64 *)((char *)a3 + 240);
    v13 = 3LL;
    do
    {
      v14 = v12[3];
      v15 = *v12++;
      if ( v14 >= v15 )
        v14 = v15;
      v10 += v14;
      --v13;
    }
    while ( v13 );
    v16 = *((_QWORD *)a3 + 2) - v10;
    for ( i = 0; i < 3u; ++i )
    {
      v18 = v11[3];
      v19 = *v11;
      if ( *v11 > v18 )
      {
        v22 = v19 - v18;
        v21 = v18 + v16;
        if ( v22 >= v16 )
          v22 = v16;
        v16 -= v22;
      }
      else
      {
        v20 = v16 + v19;
        if ( v18 <= v20 )
          v18 = v20;
        v21 = v18;
      }
      LOBYTE(v13) = i;
      VIDMM_GLOBAL::AssignBudgetsWithinBand(this, a2, a3, v13, v21);
      ++v11;
    }
  }
  else
  {
    VIDMM_GLOBAL::AssignMaximumBudgets(this, a2, a3);
  }
  v6 = 0;
  v7 = (char *)a3 + 192;
  do
  {
    v8 = *(__int64 **)v7;
    if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 || (v9 = *v8, *(__int64 **)(*v8 + 8) != v8) )
LABEL_9:
      __fastfail(3u);
    while ( 1 )
    {
      *(_QWORD *)v7 = v9;
      *(_QWORD *)(v9 + 8) = v7;
      if ( v8 == (__int64 *)((char *)a3 + 16 * v6 + 192) )
        break;
      *v8 = 0LL;
      v8[1] = 0LL;
      v8 = *(__int64 **)v7;
      if ( *(char **)(*(_QWORD *)v7 + 8LL) == v7 )
      {
        v9 = *v8;
        if ( *(__int64 **)(*v8 + 8) == v8 )
          continue;
      }
      goto LABEL_9;
    }
    ++v6;
    v7 += 16;
  }
  while ( v6 < 3 );
}
