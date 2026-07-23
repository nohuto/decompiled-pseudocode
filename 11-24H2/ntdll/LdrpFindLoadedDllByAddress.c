/*
 * XREFs of LdrpFindLoadedDllByAddress @ 0x18003CEF0
 * Callers:
 *     LdrFindEntryForAddress @ 0x18007AA10 (LdrFindEntryForAddress.c)
 *     AVrfCallAPILookupCallback @ 0x1800D973C (AVrfCallAPILookupCallback.c)
 *     LdrpCgLogFailure @ 0x18015DFC0 (LdrpCgLogFailure.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180044840 (RtlpAcquireSRWLockSharedContended.c)
 */

__int64 __fastcall LdrpFindLoadedDllByAddress(unsigned __int64 a1, unsigned __int64 *a2, _DWORD *a3)
{
  unsigned int v3; // esi
  char *SchedulerSharedDataSlot; // r10
  unsigned int i; // r9d
  char *v9; // rcx
  unsigned __int64 Root; // rbx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdx

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
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 17LL, 0LL) )
    RtlpAcquireSRWLockSharedContended(&LdrpModuleDatatableLock);
  Root = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
  {
    if ( !LdrpModuleBaseAddressIndex.Root )
    {
      Root = 0LL;
      goto LABEL_25;
    }
    Root = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  }
  if ( !Root )
    goto LABEL_25;
  do
  {
    v11 = *(_QWORD *)(Root - 152);
    if ( a1 >= v11 )
    {
      if ( a1 < v11 + *(unsigned int *)(Root - 136) )
        break;
      v12 = *(_QWORD *)(Root + 8);
      if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v12 )
      {
        Root ^= v12;
        continue;
      }
LABEL_17:
      Root = v12;
      continue;
    }
    v12 = *(_QWORD *)Root;
    if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) == 0 || !v12 )
      goto LABEL_17;
    Root ^= v12;
  }
  while ( Root );
  if ( Root )
  {
    v13 = *(_QWORD *)(Root - 48);
    v14 = Root - 200;
    if ( *(_DWORD *)(v13 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v13 - 56LL) & 0x20) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 276));
    *a2 = v14;
    if ( a3 )
      *a3 = *(_DWORD *)(*(_QWORD *)(v14 + 152) + 56LL);
  }
LABEL_25:
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
  if ( !Root )
    return (unsigned int)-1073741515;
  return v3;
}
