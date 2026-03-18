/*
 * XREFs of PopEtEnergyTrackerCleanup @ 0x14075DA34
 * Callers:
 *     PopEtEnergyTrackerDelete @ 0x14075DEF0 (PopEtEnergyTrackerDelete.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x1409050B0 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtAggregateKeyCleanup @ 0x1409051DC (PopEtAggregateKeyCleanup.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopEtEnergyTrackerCleanup(__int64 *a1)
{
  __int64 *v2; // rcx
  __int64 **v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int i; // esi
  void *v7; // rcx
  char *v8; // rsi
  char *v9; // rdi
  void *v10; // rcx
  char *v12; // rbp
  char *j; // rcx
  int v14; // [rsp+40h] [rbp+8h] BYREF

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
          v14 = *(_DWORD *)(a1[82] + 20LL * i);
          guard_dispatch_icall_no_overrides(&v14, 0LL, v4, v5);
        }
      }
    }
    ExFreePoolWithTag((PVOID)a1[82], 0x54456F50u);
    a1[82] = 0LL;
  }
  PopEtEnergyTrackerCleanupAggregates(a1);
  v7 = (void *)a1[7];
  if ( v7 )
    ExFreePoolWithTag(v7, 0x54456F50u);
  v8 = (char *)a1[9];
  v9 = v8;
  while ( v9 )
  {
    v9 = *(char **)v9;
    if ( ((unsigned __int8)v9 & 1) != 0 )
      break;
LABEL_21:
    if ( !v9 )
      goto LABEL_18;
    v12 = v9;
    for ( j = v8; (*(_QWORD *)j & 1) == 0; j = *(char **)j )
    {
      if ( *(char **)j == v9 )
      {
        *(_QWORD *)j = *(_QWORD *)v9;
        --*((_DWORD *)a1 + 16);
        *(_QWORD *)v9 |= 0x8000000000000002uLL;
        v9 = j;
        goto LABEL_28;
      }
    }
    v12 = 0LL;
LABEL_28:
    PopEtAggregateKeyCleanup(v12 + 16);
    ExFreePoolWithTag(v12, 0x54456F50u);
  }
  for ( v8 += 8; (unsigned __int64)v8 < a1[9] + 8 * ((unsigned __int64)*((unsigned int *)a1 + 17) >> 5); v8 += 8 )
  {
    v9 = *(char **)v8;
    if ( (*(_QWORD *)v8 & 1) == 0 )
      goto LABEL_21;
  }
LABEL_18:
  v10 = (void *)a1[9];
  if ( v10 )
    ExFreePoolWithTag(v10, 0x54456F50u);
  return PopEtAggregateKeyCleanup(a1 + 12);
}
