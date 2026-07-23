/*
 * XREFs of LdrpFindLoadedDllByHandle @ 0x18003C2E0
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x1800360B0 (LdrpHandleProtectedDelayload.c)
 *     LdrpGetDelayloadExportDll @ 0x180036720 (LdrpGetDelayloadExportDll.c)
 *     LdrpLoadDllInternal @ 0x180037E60 (LdrpLoadDllInternal.c)
 *     RtlQueryInformationActivationContext @ 0x1800475D0 (RtlQueryInformationActivationContext.c)
 *     LdrDisableThreadCalloutsForDll @ 0x1800E94D0 (LdrDisableThreadCalloutsForDll.c)
 *     LdrpApplyPatchImage @ 0x1801127D0 (LdrpApplyPatchImage.c)
 *     LdrHotPatchNotify @ 0x18015CA50 (LdrHotPatchNotify.c)
 *     LdrIsModuleSxsRedirected @ 0x18015CC30 (LdrIsModuleSxsRedirected.c)
 *     LdrQueryModuleServiceTags @ 0x18015CC70 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x18015CD20 (LdrSetImplicitPathOptions.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015CE2C (LdrpIsCurrentPatchLatest.c)
 *     LdrpLoadPatchImage @ 0x18015CFBC (LdrpLoadPatchImage.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180044840 (RtlpAcquireSRWLockSharedContended.c)
 */

__int64 __fastcall LdrpFindLoadedDllByHandle(PVOID a1, __int64 *a2, _DWORD *a3)
{
  __int64 v6; // rdi
  char *SchedulerSharedDataSlot; // r8
  unsigned int i; // edx
  char *v9; // rcx
  unsigned __int64 Root; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 result; // rax

  v6 = 0LL;
  if ( !a1 )
    goto LABEL_28;
  if ( a1 == LdrpSystemDllBase )
  {
    v6 = LdrpNtDllDataTableEntry;
    if ( a3 )
      *a3 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
    goto LABEL_28;
  }
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
      goto LABEL_27;
    Root = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  }
  if ( !Root )
    goto LABEL_27;
  do
  {
    if ( (unsigned __int64)a1 >= *(_QWORD *)(Root - 152) )
    {
      if ( (unsigned __int64)a1 <= *(_QWORD *)(Root - 152) )
        break;
      v11 = *(_QWORD *)(Root + 8);
      if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v11 )
      {
        Root ^= v11;
        continue;
      }
LABEL_19:
      Root = v11;
      continue;
    }
    v11 = *(_QWORD *)Root;
    if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) == 0 || !v11 )
      goto LABEL_19;
    Root ^= v11;
  }
  while ( Root );
  if ( Root )
  {
    v12 = *(_QWORD *)(Root - 48);
    v6 = Root - 200;
    if ( *(_DWORD *)(v12 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v12 - 56LL) & 0x20) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 276));
    if ( a3 )
      *a3 = *(_DWORD *)(*(_QWORD *)(v6 + 152) + 56LL);
  }
LABEL_27:
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
LABEL_28:
  result = 3221225781LL;
  *a2 = v6;
  if ( v6 )
    return 0LL;
  return result;
}
