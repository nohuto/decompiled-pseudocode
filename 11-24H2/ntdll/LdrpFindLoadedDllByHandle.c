/*
 * XREFs of LdrpFindLoadedDllByHandle @ 0x18000F8E0
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x1800096B0 (LdrpHandleProtectedDelayload.c)
 *     LdrpGetDelayloadExportDll @ 0x180009D20 (LdrpGetDelayloadExportDll.c)
 *     LdrpLoadDllInternal @ 0x18000B460 (LdrpLoadDllInternal.c)
 *     RtlQueryInformationActivationContext @ 0x18001ABD0 (RtlQueryInformationActivationContext.c)
 *     LdrDisableThreadCalloutsForDll @ 0x1800EE2F0 (LdrDisableThreadCalloutsForDll.c)
 *     LdrpApplyPatchImage @ 0x180117730 (LdrpApplyPatchImage.c)
 *     LdrHotPatchNotify @ 0x18015E690 (LdrHotPatchNotify.c)
 *     LdrIsModuleSxsRedirected @ 0x18015E870 (LdrIsModuleSxsRedirected.c)
 *     LdrQueryModuleServiceTags @ 0x18015E8B0 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x18015E960 (LdrSetImplicitPathOptions.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015EA6C (LdrpIsCurrentPatchLatest.c)
 *     LdrpLoadPatchImage @ 0x18015EBFC (LdrpLoadPatchImage.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180017E40 (RtlpAcquireSRWLockSharedContended.c)
 */

__int64 __fastcall LdrpFindLoadedDllByHandle(unsigned __int64 a1, __int64 *i, _DWORD *a3)
{
  __int64 *v4; // r14
  __int64 v6; // rdi
  char *SchedulerSharedDataSlot; // r8
  char *v8; // rcx
  signed __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 result; // rax

  v4 = i;
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
    for ( i = 0LL; (unsigned int)i < 8; i = (__int64 *)(unsigned int)((_DWORD)i + 1) )
    {
      v8 = &SchedulerSharedDataSlot[8 * (unsigned int)i];
      if ( !*(_QWORD *)v8 )
      {
        if ( v8 )
          *(_QWORD *)v8 = &LdrpModuleDatatableLock;
        break;
      }
    }
  }
  v9 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 17LL, 0LL);
  if ( v9 )
    RtlpAcquireSRWLockSharedContended(&LdrpModuleDatatableLock, i, v9);
  v10 = LdrpModuleBaseAddressIndex;
  if ( (qword_1801D2460 & 1) != 0 )
  {
    if ( !LdrpModuleBaseAddressIndex )
      goto LABEL_27;
    v10 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
  }
  if ( !v10 )
    goto LABEL_27;
  do
  {
    if ( a1 >= *(_QWORD *)(v10 - 152) )
    {
      if ( a1 <= *(_QWORD *)(v10 - 152) )
        break;
      v11 = *(_QWORD *)(v10 + 8);
      if ( (qword_1801D2460 & 1) != 0 && v11 )
      {
        v10 ^= v11;
        continue;
      }
LABEL_19:
      v10 = v11;
      continue;
    }
    v11 = *(_QWORD *)v10;
    if ( (qword_1801D2460 & 1) == 0 || !v11 )
      goto LABEL_19;
    v10 ^= v11;
  }
  while ( v10 );
  if ( v10 )
  {
    v12 = *(_QWORD *)(v10 - 48);
    v6 = v10 - 200;
    if ( *(_DWORD *)(v12 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v12 - 56LL) & 0x20) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 276));
    if ( a3 )
      *a3 = *(_DWORD *)(*(_QWORD *)(v6 + 152) + 56LL);
  }
LABEL_27:
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
LABEL_28:
  result = 3221225781LL;
  *v4 = v6;
  if ( v6 )
    return 0LL;
  return result;
}
