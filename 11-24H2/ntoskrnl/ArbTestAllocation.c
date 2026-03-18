/*
 * XREFs of ArbTestAllocation @ 0x140706690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ArbpBuildAllocationStack @ 0x140706810 (ArbpBuildAllocationStack.c)
 *     RtlCopyRangeList @ 0x140A52170 (RtlCopyRangeList.c)
 *     RtlFreeRangeList @ 0x140A52340 (RtlFreeRangeList.c)
 */

__int64 __fastcall ArbTestAllocation(_QWORD *a1, __int64 ***a2)
{
  __int64 **v2; // r8
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r9
  int v8; // ebx
  unsigned int v9; // ebp
  __int64 v10; // r15
  __int64 *i; // rsi
  __int64 **v12; // r8
  unsigned __int64 j; // rbx
  int v14; // eax
  __int64 *v15; // rdx
  char v16; // cl
  __int64 *v17; // r9
  __int64 **v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 result; // rax

  v2 = a2[2];
  if ( v2 )
    v5 = guard_dispatch_icall_no_overrides(a1, *((unsigned int *)a2 + 2), v2, a1[6]);
  else
    v5 = RtlCopyRangeList(a1[6], a1[5]);
  v8 = v5;
  if ( v5 < 0 )
    goto LABEL_25;
  v9 = 0;
  v10 = 0LL;
  for ( i = **a2; ; i = (__int64 *)*i )
  {
    v12 = *a2;
    if ( *a2 == (__int64 **)i )
      break;
    ++v9;
    if ( !a2[2] )
    {
      v6 = i[4];
      if ( v10 != v6 )
      {
        v10 = i[4];
        v8 = guard_dispatch_icall_no_overrides(a1, v6, v12, v7);
        if ( v8 < 0 )
          goto LABEL_25;
      }
    }
    i[6] = 0LL;
    if ( a1[18] )
    {
      for ( j = i[3]; j < i[3] + 32 * (unsigned __int64)*((unsigned int *)i + 4); j += 32LL )
      {
        v14 = guard_dispatch_icall_no_overrides(j, v6, v12, v7);
        if ( v14 < 0 )
        {
          v8 = -1073741438;
          goto LABEL_25;
        }
        i[6] += v14;
      }
    }
  }
  do
  {
    v15 = *v12;
    v16 = 1;
    if ( *v12 == (__int64 *)v12 )
      break;
    do
    {
      v17 = (__int64 *)*v15;
      if ( (__int64 **)*v15 == v12 )
        break;
      if ( v15[6] > v17[6] )
      {
        v18 = (__int64 **)v15[1];
        v19 = *v17;
        *v18 = v17;
        *(_QWORD *)(v19 + 8) = v15;
        *v15 = v19;
        v15[1] = (__int64)v17;
        v17[1] = (__int64)v18;
        v16 = 0;
        *v17 = (__int64)v15;
      }
      v15 = (__int64 *)*v15;
    }
    while ( v15 != (__int64 *)v12 );
  }
  while ( !v16 );
  v8 = ArbpBuildAllocationStack(a1, *a2, v9);
  if ( v8 < 0 || (result = guard_dispatch_icall_no_overrides(a1, a1[14], v20, v21), v8 = result, (int)result < 0) )
  {
LABEL_25:
    RtlFreeRangeList(a1[6]);
    return (unsigned int)v8;
  }
  return result;
}
