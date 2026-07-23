/*
 * XREFs of PopEtEnergyTrackerCleanup @ 0x14075C9D4
 * Callers:
 *     PopEtEnergyTrackerDelete @ 0x14075CE90 (PopEtEnergyTrackerDelete.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x14099BD34 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtAggregateKeyCleanup @ 0x14099BE60 (PopEtAggregateKeyCleanup.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopEtEnergyTrackerCleanup(__int64 *a1)
{
  __int64 *v2; // rcx
  __int64 **v3; // rax
  unsigned int i; // esi
  void *v5; // rcx
  char *v6; // rsi
  char *v7; // rdi
  void *v8; // rcx
  char *v10; // rbp
  char *j; // rcx
  int v12; // [rsp+40h] [rbp+8h] BYREF

  PopAcquireRwLockExclusive((unsigned __int64 *)(PopEtGlobals + 16));
  v2 = (__int64 *)*a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v3 = (__int64 **)a1[1], *v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = (__int64)v3;
  PopReleaseRwLock((signed __int64 *)(PopEtGlobals + 16));
  if ( a1[82] )
  {
    if ( *(int *)(PopEtGlobals + 1096) >= 0 )
    {
      if ( *(_QWORD *)(PopEtGlobals + 1088) )
      {
        for ( i = 0; i < *((_DWORD *)a1 + 162); ++i )
        {
          v12 = *(_DWORD *)(a1[82] + 20LL * i);
          guard_dispatch_icall_no_overrides(&v12, 0LL);
        }
      }
    }
    ExFreePoolWithTag((PVOID)a1[82], 0x54456F50u);
    a1[82] = 0LL;
  }
  PopEtEnergyTrackerCleanupAggregates(a1);
  v5 = (void *)a1[7];
  if ( v5 )
    ExFreePoolWithTag(v5, 0x54456F50u);
  v6 = (char *)a1[9];
  v7 = v6;
  while ( v7 )
  {
    v7 = *(char **)v7;
    if ( ((unsigned __int8)v7 & 1) != 0 )
      break;
LABEL_21:
    if ( !v7 )
      goto LABEL_18;
    v10 = v7;
    for ( j = v6; (*(_QWORD *)j & 1) == 0; j = *(char **)j )
    {
      if ( *(char **)j == v7 )
      {
        *(_QWORD *)j = *(_QWORD *)v7;
        --*((_DWORD *)a1 + 16);
        *(_QWORD *)v7 |= 0x8000000000000002uLL;
        v7 = j;
        goto LABEL_28;
      }
    }
    v10 = 0LL;
LABEL_28:
    PopEtAggregateKeyCleanup(v10 + 16);
    ExFreePoolWithTag(v10, 0x54456F50u);
  }
  for ( v6 += 8; (unsigned __int64)v6 < a1[9] + 8 * ((unsigned __int64)*((unsigned int *)a1 + 17) >> 5); v6 += 8 )
  {
    v7 = *(char **)v6;
    if ( (*(_QWORD *)v6 & 1) == 0 )
      goto LABEL_21;
  }
LABEL_18:
  v8 = (void *)a1[9];
  if ( v8 )
    ExFreePoolWithTag(v8, 0x54456F50u);
  return PopEtAggregateKeyCleanup(a1 + 12);
}
