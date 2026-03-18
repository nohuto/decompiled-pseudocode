/*
 * XREFs of ArbTestAllocation @ 0x1406FA7B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ArbpBuildAllocationStack @ 0x1406FA930 (ArbpBuildAllocationStack.c)
 *     RtlCopyRangeList @ 0x140A4EA20 (RtlCopyRangeList.c)
 *     RtlFreeRangeList @ 0x140A4EBF0 (RtlFreeRangeList.c)
 */

__int64 __fastcall ArbTestAllocation(_QWORD *a1, __int64 ***a2)
{
  int v4; // eax
  int v5; // ebx
  unsigned int v6; // ebp
  __int64 v7; // r15
  __int64 *i; // rsi
  __int64 **v9; // r8
  unsigned __int64 j; // rbx
  int v11; // eax
  __int64 *v12; // rdx
  char v13; // cl
  __int64 *v14; // r9
  __int64 **v15; // rcx
  __int64 v16; // rax
  __int64 result; // rax

  if ( a2[2] )
    v4 = guard_dispatch_icall_no_overrides(a1);
  else
    v4 = RtlCopyRangeList(a1[6], a1[5]);
  v5 = v4;
  if ( v4 < 0 )
    goto LABEL_25;
  v6 = 0;
  v7 = 0LL;
  for ( i = **a2; ; i = (__int64 *)*i )
  {
    v9 = *a2;
    if ( *a2 == (__int64 **)i )
      break;
    ++v6;
    if ( !a2[2] && v7 != i[4] )
    {
      v7 = i[4];
      v5 = guard_dispatch_icall_no_overrides(a1);
      if ( v5 < 0 )
        goto LABEL_25;
    }
    i[6] = 0LL;
    if ( a1[18] )
    {
      for ( j = i[3]; j < i[3] + 32 * (unsigned __int64)*((unsigned int *)i + 4); j += 32LL )
      {
        v11 = guard_dispatch_icall_no_overrides(j);
        if ( v11 < 0 )
        {
          v5 = -1073741438;
          goto LABEL_25;
        }
        i[6] += v11;
      }
    }
  }
  do
  {
    v12 = *v9;
    v13 = 1;
    if ( *v9 == (__int64 *)v9 )
      break;
    do
    {
      v14 = (__int64 *)*v12;
      if ( (__int64 **)*v12 == v9 )
        break;
      if ( v12[6] > v14[6] )
      {
        v15 = (__int64 **)v12[1];
        v16 = *v14;
        *v15 = v14;
        *(_QWORD *)(v16 + 8) = v12;
        *v12 = v16;
        v12[1] = (__int64)v14;
        v14[1] = (__int64)v15;
        v13 = 0;
        *v14 = (__int64)v12;
      }
      v12 = (__int64 *)*v12;
    }
    while ( v12 != (__int64 *)v9 );
  }
  while ( !v13 );
  v5 = ArbpBuildAllocationStack(a1, *a2, v6);
  if ( v5 < 0 || (result = guard_dispatch_icall_no_overrides(a1), v5 = result, (int)result < 0) )
  {
LABEL_25:
    RtlFreeRangeList(a1[6]);
    return (unsigned int)v5;
  }
  return result;
}
