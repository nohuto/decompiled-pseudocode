/*
 * XREFs of EmpEvaluateTargetRule @ 0x140431830
 * Callers:
 *     EmpEvaluateUpdateRuleEvalState @ 0x14057CAA8 (EmpEvaluateUpdateRuleEvalState.c)
 *     EmClientRuleEvaluate @ 0x140B6A540 (EmClientRuleEvaluate.c)
 * Callees:
 *     EmpEvaluateNodeLink @ 0x140431B1C (EmpEvaluateNodeLink.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EmpEvaluateTargetRule(__int64 a1, __int64 a2, int a3)
{
  char *v4; // rdi
  char *v5; // rsi
  __int64 v6; // r13
  __int64 v7; // r14
  char *Pool2; // rbx
  __int64 v9; // r12
  unsigned int v10; // ebp
  ULONG_PTR v11; // rdx
  int v12; // r8d
  unsigned __int64 v13; // rcx
  unsigned int v14; // r13d
  unsigned int v15; // r15d
  unsigned int v16; // eax
  unsigned int v17; // r10d
  unsigned int v18; // r8d
  char *v19; // r9
  int v20; // edx
  __int64 v21; // rax
  unsigned int i; // r8d
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // ebp
  unsigned int v27; // [rsp+60h] [rbp-78h]
  unsigned __int64 v28; // [rsp+68h] [rbp-70h]
  __int64 v29; // [rsp+70h] [rbp-68h]
  __int64 v30; // [rsp+78h] [rbp-60h]
  unsigned int v31; // [rsp+E0h] [rbp+8h]
  int v34; // [rsp+F8h] [rbp+20h]

  v27 = 1;
  v30 = *(_QWORD *)(a1 + 8);
  v4 = 0LL;
  v5 = 0LL;
  v6 = *(unsigned int *)(v30 + 44);
  v7 = *(unsigned int *)(v30 + 40);
  v34 = *(_DWORD *)(v30 + 44);
  v29 = *(_QWORD *)(a1 + 16);
  Pool2 = (char *)ExAllocatePool2(0x100uLL, 0x1000uLL, 0x76654D45u);
  v9 = (__int64)Pool2;
  v31 = Pool2 != 0LL ? 0x1000 : 0;
  v10 = v31;
  if ( !__PAIR64__(v6, v7) )
  {
    v14 = 0;
    LODWORD(v28) = 1;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    do
    {
LABEL_11:
      v18 = 0;
      if ( (_DWORD)v7 )
      {
        v19 = v4;
        v20 = v15 * v16;
        do
        {
          v21 = v20 + v18++;
          *(_QWORD *)v19 = *((_QWORD *)EmpStringTable + *(unsigned int *)(v29 + 4 * v21));
          v19 += 8;
        }
        while ( v18 < (unsigned int)v7 );
      }
      for ( i = v7; i < v17; *(_DWORD *)&v5[4 * v24] = v23 )
      {
        v23 = *(_DWORD *)(v29 + 4LL * (v15 * v14 + i));
        v24 = i - (unsigned int)v7;
        ++i;
      }
      v27 = EmpEvaluateNodeLink(*(_QWORD *)(v30 + 96), (_DWORD)v4, v7, (_DWORD)v5, v34, a2, a3, 0LL, 0, v9, v10);
      if ( v27 - 1 <= 1 )
        break;
      ++v15;
      v17 = v14;
      v16 = v14;
    }
    while ( v15 < (unsigned int)v28 );
    goto LABEL_18;
  }
  v28 = *(unsigned int *)(a1 + 24) / (unsigned __int64)(v7 + v6);
  if ( (_DWORD)v7 )
  {
    v11 = 8 * v7;
    if ( Pool2 && v31 >= v11 )
    {
      v9 = (__int64)&Pool2[v11];
      v10 = v31 - v11;
      v4 = Pool2;
    }
    else
    {
      v4 = (char *)ExAllocatePool2(0x100uLL, v11, 0x76654D45u);
      if ( !v4 )
        goto LABEL_28;
    }
  }
  v12 = v6;
  if ( (_DWORD)v6 )
  {
    v13 = (4 * v6 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v9 && v10 >= v13 )
    {
      v5 = (char *)v9;
      v9 += v13;
      v10 -= v13;
    }
    else
    {
      v5 = (char *)ExAllocatePool2(0x100uLL, 4 * v6, 0x76654D45u);
      if ( !v5 )
        goto LABEL_35;
      v12 = v6;
    }
  }
  v14 = v12 + v7;
  v15 = 0;
  v16 = v12 + v7;
  v17 = v12 + v7;
  if ( (_DWORD)v28 )
    goto LABEL_11;
LABEL_18:
  if ( !v5 )
  {
LABEL_35:
    v25 = Pool2 != 0LL ? 0x1000 : 0;
    goto LABEL_22;
  }
  if ( Pool2 && v5 >= Pool2 )
  {
    v25 = Pool2 != 0LL ? 0x1000 : 0;
    if ( v5 < &Pool2[v31] )
      goto LABEL_22;
  }
  else
  {
    v25 = Pool2 != 0LL ? 0x1000 : 0;
  }
  ExFreePoolWithTag(v5, 0x76654D45u);
LABEL_22:
  if ( v4 )
  {
    if ( Pool2 && v4 >= Pool2 && v4 < &Pool2[v25] )
      goto LABEL_29;
    ExFreePoolWithTag(v4, 0x76654D45u);
  }
LABEL_28:
  if ( Pool2 )
LABEL_29:
    ExFreePoolWithTag(Pool2, 0x76654D45u);
  return v27;
}
