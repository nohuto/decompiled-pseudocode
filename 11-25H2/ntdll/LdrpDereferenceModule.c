/*
 * XREFs of LdrpDereferenceModule @ 0x180048C70
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180007BE0 (LdrGetProcedureAddressForCaller.c)
 *     LdrLoadDll @ 0x180014E40 (LdrLoadDll.c)
 *     LdrResolveDelayLoadedAPI @ 0x180021000 (LdrResolveDelayLoadedAPI.c)
 *     LdrpHandleProtectedDelayload @ 0x180022ED0 (LdrpHandleProtectedDelayload.c)
 *     LdrAddRefDll @ 0x18003D580 (LdrAddRefDll.c)
 *     LdrpUnloadNode @ 0x1800465A0 (LdrpUnloadNode.c)
 *     EtwpProviderArrivalCallback @ 0x1800470F0 (EtwpProviderArrivalCallback.c)
 *     LdrUnloadDll @ 0x1800475F0 (LdrUnloadDll.c)
 *     LdrpFastpthReloadedDll @ 0x180047890 (LdrpFastpthReloadedDll.c)
 *     LdrGetDllFullName @ 0x180047DE0 (LdrGetDllFullName.c)
 *     RtlQueryInformationActivationContext @ 0x1800484F0 (RtlQueryInformationActivationContext.c)
 *     LdrpFindLoadedDll @ 0x1800492A0 (LdrpFindLoadedDll.c)
 *     LdrGetDllHandle @ 0x180049620 (LdrGetDllHandle.c)
 *     LdrGetDllHandleEx @ 0x180049800 (LdrGetDllHandleEx.c)
 *     LdrpLoadDllInternal @ 0x18004A300 (LdrpLoadDllInternal.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrGetDllHandleByMapping @ 0x18006CD70 (LdrGetDllHandleByMapping.c)
 *     LdrpMapDllWithSectionHandle @ 0x18006D3E0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpLoadContextReplaceModule @ 0x18006F2DC (LdrpLoadContextReplaceModule.c)
 *     LdrGetDllHandleByName @ 0x1800711A0 (LdrGetDllHandleByName.c)
 *     TppAlpcpExecuteCallback @ 0x18007FCA0 (TppAlpcpExecuteCallback.c)
 *     LdrFindEntryForAddress @ 0x1800D0470 (LdrFindEntryForAddress.c)
 *     LdrpCorInitialize @ 0x1800D0840 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x1800D0A34 (LdrpLoadWow64.c)
 *     LdrpInitShimEngine @ 0x1800D0BF0 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x1800D1760 (LdrpLoadShimEngine.c)
 *     LdrpFreeReplacedModule @ 0x1800D9148 (LdrpFreeReplacedModule.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x1800DC2A4 (LdrpHandleUnprotectedDelayLoad.c)
 *     AVrfCallAPILookupCallback @ 0x1800DC4EC (AVrfCallAPILookupCallback.c)
 *     LdrDisableThreadCalloutsForDll @ 0x1800EEDD0 (LdrDisableThreadCalloutsForDll.c)
 *     LdrpApplyPatchImage @ 0x18011A970 (LdrpApplyPatchImage.c)
 *     AVrfInitializeVerifier @ 0x18011B9E0 (AVrfInitializeVerifier.c)
 *     LdrpEnclaveFreeModule @ 0x180134994 (LdrpEnclaveFreeModule.c)
 *     LdrHotPatchNotify @ 0x18015FB50 (LdrHotPatchNotify.c)
 *     LdrIsModuleSxsRedirected @ 0x18015FD30 (LdrIsModuleSxsRedirected.c)
 *     LdrQueryModuleServiceTags @ 0x18015FD70 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x18015FE20 (LdrSetImplicitPathOptions.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015FF2C (LdrpIsCurrentPatchLatest.c)
 *     LdrpLoadPatchImage @ 0x1801600BC (LdrpLoadPatchImage.c)
 * Callees:
 *     LdrpDestroyNode @ 0x180008BB8 (LdrpDestroyNode.c)
 *     LdrpReleaseTlsEntry @ 0x180008C0C (LdrpReleaseTlsEntry.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x18001A130 (RtlReleaseActivationContext.c)
 *     LdrpUnmapModule @ 0x180024A44 (LdrpUnmapModule.c)
 *     LdrpFreeUnicodeString @ 0x18006F7E0 (LdrpFreeUnicodeString.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall LdrpDereferenceModule(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  _QWORD *v4; // rdx
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  __int64 v7; // rdx
  volatile signed __int32 *v8; // rcx

  result = *(_QWORD *)(a1 + 152);
  if ( *(_DWORD *)(result + 24) != -1 )
  {
    result = *(_QWORD *)result;
    if ( (*(_BYTE *)(result - 56) & 0x20) == 0 )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 276), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpModuleDatatableLock);
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
        v8 = *(volatile signed __int32 **)(a1 + 136);
        if ( (unsigned __int64)v8 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
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
