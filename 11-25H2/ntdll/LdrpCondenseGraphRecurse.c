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

__int64 __fastcall LdrpCondenseGraphRecurse(__int64 a1, int *a2, __int64 **a3)
{
  __int64 *v3; // r15
  int v4; // eax
  _QWORD *v7; // rbx
  __int64 result; // rax
  __int64 *v10; // rcx
  _QWORD *v11; // rdx
  __int64 *v12; // r8
  _QWORD *v13; // r9
  bool v14; // zf
  _QWORD *i; // rbx
  __int64 v16; // rcx
  __int64 v17; // rsi
  unsigned int v18; // eax
  _QWORD *v19; // [rsp+40h] [rbp+8h] BYREF

  ++*a2;
  v3 = (__int64 *)(a1 + 64);
  v4 = *a2;
  *(_DWORD *)(a1 + 72) = *a2;
  *(_DWORD *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 64) = *a3;
  v7 = *(_QWORD **)(a1 + 40);
  *a3 = (__int64 *)(a1 + 64);
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
  result = *(unsigned int *)(a1 + 72);
  if ( *(_DWORD *)(a1 + 32) == (_DWORD)result )
  {
    v10 = *a3;
    v11 = *a3;
    if ( *a3 )
    {
      v11 = (_QWORD *)*v10;
      *a3 = (__int64 *)*v10;
    }
    result = 0LL;
    if ( v3 != v10 )
    {
      do
      {
        *v10 = result;
        result = (__int64)v10;
        v12 = v10;
        v13 = v11;
        if ( v11 )
        {
          v13 = (_QWORD *)*v11;
          *a3 = (__int64 *)*v11;
        }
        v10 = v11;
        v11 = v13;
      }
      while ( v3 != v10 );
      v19 = (_QWORD *)result;
      if ( v12 )
      {
        RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpModuleDatatableLock);
        LdrpMergeNodes(a1, &v19);
        result = RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        for ( i = v19; i; result = LdrpDestroyNode(v16) )
        {
          v16 = (__int64)(i - 8);
          i = (_QWORD *)*i;
        }
      }
    }
    v14 = *(_DWORD *)(a1 + 56) == 5;
    *v3 = 0LL;
    if ( v14 )
      *(_DWORD *)(a1 + 56) = 6;
  }
  return result;
}
