/*
 * XREFs of LdrpDereferenceModule @ 0x180047D50
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x1800319F0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpHandleProtectedDelayload @ 0x1800360B0 (LdrpHandleProtectedDelayload.c)
 *     LdrpFindLoadedDll @ 0x180036E00 (LdrpFindLoadedDll.c)
 *     LdrGetDllHandle @ 0x180037180 (LdrGetDllHandle.c)
 *     LdrGetDllHandleEx @ 0x180037360 (LdrGetDllHandleEx.c)
 *     LdrpLoadDllInternal @ 0x180037E60 (LdrpLoadDllInternal.c)
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180046270 (LdrpFastpthReloadedDll.c)
 *     LdrGetDllFullName @ 0x180046EC0 (LdrGetDllFullName.c)
 *     RtlQueryInformationActivationContext @ 0x1800475D0 (RtlQueryInformationActivationContext.c)
 *     LdrUnloadDll @ 0x1800480B0 (LdrUnloadDll.c)
 *     EtwpProviderArrivalCallback @ 0x1800483D0 (EtwpProviderArrivalCallback.c)
 *     LdrpUnloadNode @ 0x180049460 (LdrpUnloadNode.c)
 *     LdrResolveDelayLoadedAPI @ 0x1800498A0 (LdrResolveDelayLoadedAPI.c)
 *     TppAlpcpExecuteCallback @ 0x1800522C0 (TppAlpcpExecuteCallback.c)
 *     LdrLoadDll @ 0x18006EDE0 (LdrLoadDll.c)
 *     LdrFindEntryForAddress @ 0x18007AA10 (LdrFindEntryForAddress.c)
 *     LdrAddRefDll @ 0x18008BAB0 (LdrAddRefDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x18008F450 (LdrpMapDllWithSectionHandle.c)
 *     LdrpCorInitialize @ 0x1800ACFF8 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x1800AD1EC (LdrpLoadWow64.c)
 *     LdrpInitShimEngine @ 0x1800AD3A8 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x1800AD9B0 (LdrpLoadShimEngine.c)
 *     LdrpLoadContextReplaceModule @ 0x1800D1F28 (LdrpLoadContextReplaceModule.c)
 *     LdrpFreeReplacedModule @ 0x1800D4518 (LdrpFreeReplacedModule.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x1800D94F0 (LdrpHandleUnprotectedDelayLoad.c)
 *     AVrfCallAPILookupCallback @ 0x1800D973C (AVrfCallAPILookupCallback.c)
 *     LdrGetDllHandleByName @ 0x1800E8F90 (LdrGetDllHandleByName.c)
 *     LdrDisableThreadCalloutsForDll @ 0x1800E94D0 (LdrDisableThreadCalloutsForDll.c)
 *     LdrGetDllHandleByMapping @ 0x1800EA420 (LdrGetDllHandleByMapping.c)
 *     LdrpApplyPatchImage @ 0x1801127D0 (LdrpApplyPatchImage.c)
 *     AVrfInitializeVerifier @ 0x180113994 (AVrfInitializeVerifier.c)
 *     LdrpEnclaveFreeModule @ 0x1801310E4 (LdrpEnclaveFreeModule.c)
 *     LdrHotPatchNotify @ 0x18015CA50 (LdrHotPatchNotify.c)
 *     LdrIsModuleSxsRedirected @ 0x18015CC30 (LdrIsModuleSxsRedirected.c)
 *     LdrQueryModuleServiceTags @ 0x18015CC70 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x18015CD20 (LdrSetImplicitPathOptions.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015CE2C (LdrpIsCurrentPatchLatest.c)
 *     LdrpLoadPatchImage @ 0x18015CFBC (LdrpLoadPatchImage.c)
 * Callees:
 *     LdrpDestroyNode @ 0x180031528 (LdrpDestroyNode.c)
 *     LdrpUnmapModule @ 0x1800331C8 (LdrpUnmapModule.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x1800740B0 (RtlReleaseActivationContext.c)
 *     LdrpFreeUnicodeString @ 0x180092B3C (LdrpFreeUnicodeString.c)
 *     LdrpReleaseTlsEntry @ 0x1800D73C8 (LdrpReleaseTlsEntry.c)
 */

int __fastcall LdrpDereferenceModule(char *BaseAddress)
{
  __int64 *v1; // rax
  char **v3; // r8
  PVOID *v4; // rdx
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  _ACTIVATION_CONTEXT *v7; // rcx

  v1 = (__int64 *)*((_QWORD *)BaseAddress + 19);
  if ( *((_DWORD *)v1 + 6) != -1 )
  {
    v1 = (__int64 *)*v1;
    if ( (*(_BYTE *)(v1 - 7) & 0x20) == 0 )
    {
      LODWORD(v1) = _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 69, 0xFFFFFFFF);
      if ( (_DWORD)v1 == 1 )
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v3 = (char **)*((_QWORD *)BaseAddress + 20);
        if ( v3[1] != BaseAddress + 160 || (v4 = (PVOID *)*((_QWORD *)BaseAddress + 21), *v4 != BaseAddress + 160) )
          __fastfail(3u);
        *v4 = v3;
        v3[1] = (char *)v4;
        v5 = (_QWORD *)*((_QWORD *)BaseAddress + 19);
        v6 = (_QWORD *)*v5;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *((_WORD *)BaseAddress + 55) )
          LdrpReleaseTlsEntry(BaseAddress, 0LL);
        LdrpUnmapModule((__int64)BaseAddress);
        v7 = (_ACTIVATION_CONTEXT *)*((_QWORD *)BaseAddress + 17);
        if ( (unsigned __int64)&v7[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v7);
        if ( *((_QWORD *)BaseAddress + 10) )
          LdrpFreeUnicodeString(BaseAddress + 72);
        LODWORD(v1) = RtlFreeHeap(LdrpHeap, 0, BaseAddress);
        if ( v6 == v5 )
          LODWORD(v1) = LdrpDestroyNode(v5);
      }
    }
  }
  return (int)v1;
}
