/*
 * XREFs of LdrpDereferenceModule @ 0x18001B350
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180004FF0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpHandleProtectedDelayload @ 0x1800096B0 (LdrpHandleProtectedDelayload.c)
 *     LdrpFindLoadedDll @ 0x18000A400 (LdrpFindLoadedDll.c)
 *     LdrGetDllHandle @ 0x18000A780 (LdrGetDllHandle.c)
 *     LdrGetDllHandleEx @ 0x18000A960 (LdrGetDllHandleEx.c)
 *     LdrpLoadDllInternal @ 0x18000B460 (LdrpLoadDllInternal.c)
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180019870 (LdrpFastpthReloadedDll.c)
 *     LdrGetDllFullName @ 0x18001A4C0 (LdrGetDllFullName.c)
 *     RtlQueryInformationActivationContext @ 0x18001ABD0 (RtlQueryInformationActivationContext.c)
 *     LdrUnloadDll @ 0x18001B6B0 (LdrUnloadDll.c)
 *     EtwpProviderArrivalCallback @ 0x18001B9D0 (EtwpProviderArrivalCallback.c)
 *     LdrpUnloadNode @ 0x18001CA60 (LdrpUnloadNode.c)
 *     LdrResolveDelayLoadedAPI @ 0x18001CEA0 (LdrResolveDelayLoadedAPI.c)
 *     TppAlpcpExecuteCallback @ 0x1800258C0 (TppAlpcpExecuteCallback.c)
 *     LdrLoadDll @ 0x180059200 (LdrLoadDll.c)
 *     LdrFindEntryForAddress @ 0x180064BF0 (LdrFindEntryForAddress.c)
 *     LdrpCorInitialize @ 0x180065128 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x18006531C (LdrpLoadWow64.c)
 *     LdrpInitShimEngine @ 0x1800654D8 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180065AE0 (LdrpLoadShimEngine.c)
 *     LdrAddRefDll @ 0x18006F1D0 (LdrAddRefDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x180072B70 (LdrpMapDllWithSectionHandle.c)
 *     LdrpLoadContextReplaceModule @ 0x1800D6BB8 (LdrpLoadContextReplaceModule.c)
 *     LdrpFreeReplacedModule @ 0x1800D91A8 (LdrpFreeReplacedModule.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x1800DE380 (LdrpHandleUnprotectedDelayLoad.c)
 *     AVrfCallAPILookupCallback @ 0x1800DE5CC (AVrfCallAPILookupCallback.c)
 *     LdrGetDllHandleByName @ 0x1800EDDB0 (LdrGetDllHandleByName.c)
 *     LdrDisableThreadCalloutsForDll @ 0x1800EE2F0 (LdrDisableThreadCalloutsForDll.c)
 *     LdrGetDllHandleByMapping @ 0x1800EF240 (LdrGetDllHandleByMapping.c)
 *     LdrpApplyPatchImage @ 0x180117730 (LdrpApplyPatchImage.c)
 *     AVrfInitializeVerifier @ 0x180118960 (AVrfInitializeVerifier.c)
 *     LdrpEnclaveFreeModule @ 0x180132EB4 (LdrpEnclaveFreeModule.c)
 *     LdrHotPatchNotify @ 0x18015E690 (LdrHotPatchNotify.c)
 *     LdrIsModuleSxsRedirected @ 0x18015E870 (LdrIsModuleSxsRedirected.c)
 *     LdrQueryModuleServiceTags @ 0x18015E8B0 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x18015E960 (LdrSetImplicitPathOptions.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015EA6C (LdrpIsCurrentPatchLatest.c)
 *     LdrpLoadPatchImage @ 0x18015EBFC (LdrpLoadPatchImage.c)
 * Callees:
 *     LdrpReleaseTlsEntry @ 0x1800049CC (LdrpReleaseTlsEntry.c)
 *     LdrpDestroyNode @ 0x180004B28 (LdrpDestroyNode.c)
 *     LdrpUnmapModule @ 0x1800067C8 (LdrpUnmapModule.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x18005E4D0 (RtlReleaseActivationContext.c)
 *     LdrpFreeUnicodeString @ 0x18007625C (LdrpFreeUnicodeString.c)
 */

__int64 __fastcall LdrpDereferenceModule(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  _QWORD *v4; // rdx
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx

  result = *(_QWORD *)(a1 + 152);
  if ( *(_DWORD *)(result + 24) != -1 )
  {
    result = *(_QWORD *)result;
    if ( (*(_BYTE *)(result - 56) & 0x20) == 0 )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 276), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v3 = *(_QWORD *)(a1 + 160);
        if ( *(_QWORD *)(v3 + 8) != a1 + 160 || (v4 = *(_QWORD **)(a1 + 168), *v4 != a1 + 160) )
          __fastfail(3u);
        *v4 = v3;
        *(_QWORD *)(v3 + 8) = v4;
        v5 = *(_QWORD **)(a1 + 152);
        v6 = (_QWORD *)*v5;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *(_WORD *)(a1 + 110) )
          LdrpReleaseTlsEntry(a1, 0LL);
        LdrpUnmapModule(a1, v7);
        v8 = *(_QWORD *)(a1 + 136);
        if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v8);
        if ( *(_QWORD *)(a1 + 80) )
          LdrpFreeUnicodeString(a1 + 72);
        result = RtlFreeHeap(LdrpHeap, 0LL, a1);
        if ( v6 == v5 )
          return LdrpDestroyNode((__int64)v5);
      }
    }
  }
  return result;
}
