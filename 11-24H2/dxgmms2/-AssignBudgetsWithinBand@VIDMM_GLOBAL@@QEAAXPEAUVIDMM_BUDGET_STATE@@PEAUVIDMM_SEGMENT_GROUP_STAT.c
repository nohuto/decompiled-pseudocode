/*
 * XREFs of ?AssignBudgetsWithinBand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@W4VIDMM_BUDGET_PRIORITY_BAND@@_K@Z @ 0x1400E0020
 * Callers:
 *     ?AssignBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1400DFEDC (-AssignBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     ?AssignProcessBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1400E04A8 (-AssignProcessBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@P.c)
 */

void __fastcall VIDMM_GLOBAL::AssignBudgetsWithinBand(
        VIDMM_GLOBAL *a1,
        struct VIDMM_BUDGET_STATE *a2,
        int *a3,
        unsigned __int8 a4,
        unsigned __int64 a5)
{
  __int64 v5; // rdi
  unsigned int v7; // r13d
  int *v8; // r9
  int *v9; // r10
  __int64 v10; // r11
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned int *v17; // r14
  __int64 v18; // r8
  int *v19; // r11
  __int64 v20; // r12
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rtt
  int *v23; // rdx
  int **v24; // r10
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rdx
  int **v27; // rax
  int *v28; // rcx
  int **v29; // rax
  unsigned int *v30; // r10
  __int64 v31; // rdx
  __int64 v32; // r11
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  int *v36; // r10
  int *v37; // r9
  int *v38; // rcx
  int **v39; // rdx
  int *v40; // r9
  __int64 v41; // rax
  int *v42; // rax
  unsigned __int64 *v43; // rax
  __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  unsigned __int64 *v46; // rdx
  unsigned __int64 v47; // rcx
  int *v48; // rsi
  int *v49; // rdi
  VIDMM_GLOBAL *v50; // r14
  unsigned __int64 v51; // rcx
  int *v52; // rdx
  __int64 v53; // r8
  unsigned __int64 *v54; // rdx
  __int64 v55; // r10
  __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // [rsp+30h] [rbp-51h]
  unsigned __int64 v60; // [rsp+38h] [rbp-49h]
  unsigned int v62; // [rsp+48h] [rbp-39h]
  VIDMM_GLOBAL *v63; // [rsp+50h] [rbp-31h]
  unsigned __int64 v64; // [rsp+58h] [rbp-29h] BYREF
  _QWORD v65[2]; // [rsp+60h] [rbp-21h] BYREF
  __int128 v66; // [rsp+70h] [rbp-11h]
  __int64 v67; // [rsp+80h] [rbp-1h]

  v5 = a4;
  v63 = a1;
  v7 = a3[a4 + 81];
  if ( v7 )
  {
    v8 = &a3[4 * a4 + 36];
    v67 = 0LL;
    v66 = 0LL;
    v9 = *(int **)v8;
    if ( *(int **)v8 != v8 )
    {
      v10 = *a3;
      v11 = 304LL * *(unsigned __int16 *)a2;
      do
      {
        v12 = *((_QWORD *)v9 - 9);
        v13 = *((unsigned __int8 *)v9 - 8);
        v9 = *(int **)v9;
        v14 = v12 + 8 * v10;
        v15 = *((_QWORD *)&v66 + v13);
        if ( v15 <= *(_QWORD *)(v14 + v11 + 192) )
          v15 = *(_QWORD *)(v14 + v11 + 192);
        *((_QWORD *)&v66 + v13) = v15;
      }
      while ( v9 != v8 );
    }
    v16 = a5;
    v17 = dword_14005D370;
    v60 = a5;
    v64 = -1LL;
    v65[0] = -1LL;
    v65[1] = -1LL;
    v18 = 3LL;
    while ( 1 )
    {
      v19 = *(int **)v8;
      v20 = 0LL;
      v22 = v16;
      v21 = v16 / v7;
      v59 = v22 / v7;
      if ( *(int **)v8 == v8 )
        break;
      do
      {
        v23 = v19;
        v24 = (int **)v19;
        v19 = *(int **)v19;
        v62 = dword_14005D370[*((unsigned __int8 *)v23 - 8)];
        v25 = v21 * v62;
        v26 = *(_QWORD *)(*((_QWORD *)v23 - 9) + 8 * (*a3 + 38LL * *(unsigned __int16 *)a2) + 192);
        if ( v26 <= v25 )
        {
          v60 -= v26;
          v7 -= v62;
          v20 += v25 - v26;
          if ( *((int ***)v19 + 1) != v24 )
            goto LABEL_13;
          v27 = (int **)v24[1];
          if ( *v27 != (int *)v24 )
            goto LABEL_13;
          *v27 = v19;
          v28 = &a3[4 * v5 + 48];
          *((_QWORD *)v19 + 1) = v27;
          v29 = (int **)*((_QWORD *)v28 + 1);
          if ( *v29 != v28 )
            goto LABEL_13;
          *v24 = v28;
          v24[1] = (int *)v29;
          *v29 = (int *)v24;
          *((_QWORD *)v28 + 1) = v24;
        }
        v21 = v59;
      }
      while ( v19 != v8 );
      if ( !v20 )
        break;
      v30 = dword_14005D370;
      v31 = 0LL;
      v32 = 3LL;
      do
      {
        v33 = *(_QWORD *)((char *)&v66 + v31);
        v31 += 8LL;
        v34 = *v30++;
        v35 = v59 * v34;
        if ( v33 >= v35 )
          v33 = v35;
        *(VIDMM_GLOBAL **)((char *)&v63 + v31) = (VIDMM_GLOBAL *)(v20 + v33);
        --v32;
      }
      while ( v32 );
      if ( *(int **)v8 == v8 )
        goto LABEL_31;
      v16 = v60;
    }
    v54 = &v64;
    v55 = 3LL;
    do
    {
      v56 = *v17++;
      v57 = v21 * v56;
      v58 = *v54;
      if ( *v54 >= v57 )
        v58 = v57;
      *v54++ = v58;
      v21 = v59;
      --v55;
    }
    while ( v55 );
    v36 = *(int **)v8;
    if ( *(int **)v8 != v8 )
    {
      v37 = &a3[4 * v5 + 48];
      v38 = &a3[4 * v5 + 36];
      v39 = (int **)*((_QWORD *)v37 + 1);
      if ( *(int **)(*(_QWORD *)v37 + 8LL) != v37
        || *v39 != v37
        || *((int **)v36 + 1) != v38
        || **((int ***)v38 + 1) != v38
        || (*v39 = v38,
            *((_QWORD *)v37 + 1) = *((_QWORD *)v38 + 1),
            **((_QWORD **)v38 + 1) = v37,
            v40 = &a3[4 * v5 + 36],
            *((_QWORD *)v38 + 1) = v39,
            v41 = *(_QWORD *)v40,
            *(int **)(*(_QWORD *)v40 + 8LL) != v40)
        || *v39 != v40 )
      {
LABEL_13:
        __fastfail(3u);
      }
      *v39 = (int *)v41;
      *(_QWORD *)(v41 + 8) = v39;
      v42 = &a3[4 * v5 + 36];
      *((_QWORD *)v38 + 1) = v42;
      *(_QWORD *)v42 = v42;
    }
LABEL_31:
    v43 = v65;
    v44 = 2LL;
    do
    {
      v45 = *(v43 - 1);
      if ( v45 > *v43 )
        *v43 = v45;
      ++v43;
      --v44;
    }
    while ( v44 );
    v46 = &v64;
    do
    {
      v47 = *v46;
      if ( *v46 >= *((_QWORD *)a3 + 4) )
        v47 = *((_QWORD *)a3 + 4);
      *(unsigned __int64 *)((char *)v46++ + (_QWORD)a3 + 24 * (v5 + 2) - (_QWORD)&v64) = v47;
      --v18;
    }
    while ( v18 );
    v48 = &a3[4 * v5 + 48];
    v49 = *(int **)v48;
    if ( *(int **)v48 != v48 )
    {
      v50 = v63;
      do
      {
        VIDMM_GLOBAL::AssignProcessBudget(
          v50,
          a2,
          (struct VIDMM_SEGMENT_GROUP_STATE *)a3,
          (struct VIDMM_PROCESS_ADAPTER_INFO *)(v49 - 22),
          v65[*((unsigned __int8 *)v49 - 8) - 1]);
        v49 = *(int **)v49;
      }
      while ( v49 != v48 );
    }
  }
  else
  {
    v51 = a5;
    if ( a5 >= *((_QWORD *)a3 + 4) )
      v51 = *((_QWORD *)a3 + 4);
    v52 = &a3[6 * a4 + 12];
    v53 = 3LL;
    do
    {
      *(_QWORD *)v52 = v51;
      v52 += 2;
      --v53;
    }
    while ( v53 );
  }
}
