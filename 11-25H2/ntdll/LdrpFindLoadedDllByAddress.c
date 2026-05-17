/*
 * XREFs of LdrpFindLoadedDllByAddress @ 0x18004F390
 * Callers:
 *     LdrFindEntryForAddress @ 0x1800D0470 (LdrFindEntryForAddress.c)
 *     AVrfCallAPILookupCallback @ 0x1800DC4EC (AVrfCallAPILookupCallback.c)
 *     LdrpCgLogFailure @ 0x180161150 (LdrpCgLogFailure.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x18007A040 (RtlpAcquireSRWLockSharedContended.c)
 */

__int64 __fastcall LdrpFindLoadedDllByAddress(unsigned __int64 a1, unsigned __int64 *a2, _DWORD *a3)
{
  unsigned int v3; // esi
  char *SchedulerSharedDataSlot; // r10
  unsigned int i; // r9d
  char *v9; // rcx
  signed __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rdx

  v3 = 0;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      v9 = &SchedulerSharedDataSlot[8 * i];
      if ( !*(_QWORD *)v9 )
      {
        if ( v9 )
          *(_QWORD *)v9 = &LdrpModuleDatatableLock;
        break;
      }
    }
  }
  v10 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 17LL, 0LL);
  if ( v10 )
    RtlpAcquireSRWLockSharedContended(&LdrpModuleDatatableLock, a2, v10);
  v11 = LdrpModuleBaseAddressIndex;
  if ( (qword_1801D44B0 & 1) != 0 )
  {
    if ( !LdrpModuleBaseAddressIndex )
    {
      v11 = 0LL;
      goto LABEL_25;
    }
    v11 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
  }
  if ( !v11 )
    goto LABEL_25;
  do
  {
    v12 = *(_QWORD *)(v11 - 152);
    if ( a1 >= v12 )
    {
      if ( a1 < v12 + *(unsigned int *)(v11 - 136) )
        break;
      v13 = *(_QWORD *)(v11 + 8);
      if ( (qword_1801D44B0 & 1) != 0 && v13 )
      {
        v11 ^= v13;
        continue;
      }
LABEL_17:
      v11 = v13;
      continue;
    }
    v13 = *(_QWORD *)v11;
    if ( (qword_1801D44B0 & 1) == 0 || !v13 )
      goto LABEL_17;
    v11 ^= v13;
  }
  while ( v11 );
  if ( v11 )
  {
    v14 = *(_QWORD *)(v11 - 48);
    v15 = v11 - 200;
    if ( *(_DWORD *)(v14 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v14 - 56LL) & 0x20) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 276));
    *a2 = v15;
    if ( a3 )
      *a3 = *(_DWORD *)(*(_QWORD *)(v15 + 152) + 56LL);
  }
LABEL_25:
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
  if ( !v11 )
    return (unsigned int)-1073741515;
  return v3;
}
