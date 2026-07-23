/*
 * XREFs of LdrpCondenseGraphRecurse @ 0x1800EB7D0
 * Callers:
 *     LdrpCondenseGraph @ 0x1800EB790 (LdrpCondenseGraph.c)
 *     LdrpCondenseGraphRecurse @ 0x1800EB7D0 (LdrpCondenseGraphRecurse.c)
 * Callees:
 *     LdrpDestroyNode @ 0x180008BB8 (LdrpDestroyNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpCondenseGraphRecurse @ 0x1800EB7D0 (LdrpCondenseGraphRecurse.c)
 *     LdrpMergeNodes @ 0x1800EF5D4 (LdrpMergeNodes.c)
 */

void __fastcall LdrpCondenseGraphRecurse(__int64 a1, int *a2, _QWORD *a3)
{
  _QWORD *v3; // r15
  int v4; // eax
  _QWORD *v7; // rbx
  _QWORD **v9; // rcx
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  _QWORD **v12; // r8
  _QWORD *v13; // r9
  bool v14; // zf
  _QWORD *v15; // rbx
  _QWORD *v16; // rcx
  __int64 v17; // rsi
  unsigned int v18; // eax
  _QWORD *v19; // [rsp+40h] [rbp+8h] BYREF

  ++*a2;
  v3 = (_QWORD *)(a1 + 64);
  v4 = *a2;
  *(_DWORD *)(a1 + 72) = *a2;
  *(_DWORD *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 64) = *a3;
  v7 = *(_QWORD **)(a1 + 40);
  *a3 = a1 + 64;
  if ( v7 )
  {
    while ( 1 )
    {
      v7 = (_QWORD *)*v7;
      v17 = v7[1];
      if ( *(int *)(v17 + 56) <= 5 )
        break;
LABEL_17:
      if ( v7 == *(_QWORD **)(a1 + 40) )
        goto LABEL_2;
    }
    v18 = *(_DWORD *)(v17 + 72);
    if ( v18 )
    {
      if ( !*(_QWORD *)(v17 + 64) || *(_DWORD *)(a1 + 32) <= v18 )
      {
LABEL_22:
        if ( *(_DWORD *)(v17 + 56) == -3 )
          *(_DWORD *)(a1 + 56) = -3;
        goto LABEL_17;
      }
    }
    else
    {
      LdrpCondenseGraphRecurse(v7[1], a2, a3);
      v18 = *(_DWORD *)(v17 + 32);
      if ( *(_DWORD *)(a1 + 32) <= v18 )
        goto LABEL_22;
    }
    *(_DWORD *)(a1 + 32) = v18;
    goto LABEL_22;
  }
LABEL_2:
  if ( *(_DWORD *)(a1 + 32) == *(_DWORD *)(a1 + 72) )
  {
    v9 = (_QWORD **)*a3;
    v10 = (_QWORD *)*a3;
    if ( *a3 )
    {
      v10 = *v9;
      *a3 = *v9;
    }
    v11 = 0LL;
    if ( v3 != v9 )
    {
      do
      {
        *v9 = v11;
        v11 = v9;
        v12 = v9;
        v13 = v10;
        if ( v10 )
        {
          v13 = (_QWORD *)*v10;
          *a3 = *v10;
        }
        v9 = (_QWORD **)v10;
        v10 = v13;
      }
      while ( v3 != v9 );
      v19 = v11;
      if ( v12 )
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        LdrpMergeNodes(a1, &v19);
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        v15 = v19;
        while ( v15 )
        {
          v16 = v15 - 8;
          v15 = (_QWORD *)*v15;
          LdrpDestroyNode(v16);
        }
      }
    }
    v14 = *(_DWORD *)(a1 + 56) == 5;
    *v3 = 0LL;
    if ( v14 )
      *(_DWORD *)(a1 + 56) = 6;
  }
}
