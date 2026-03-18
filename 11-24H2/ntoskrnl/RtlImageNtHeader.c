/*
 * XREFs of RtlImageNtHeader @ 0x14043E310
 * Callers:
 *     KiLockExtendedServiceTable @ 0x140508278 (KiLockExtendedServiceTable.c)
 *     IopIsNotNativeDriverImage @ 0x1407125F4 (IopIsNotNativeDriverImage.c)
 *     KiTpIsSupportedKernelTracepointLocation @ 0x14073DFE8 (KiTpIsSupportedKernelTracepointLocation.c)
 *     ApiSetLoadSchemaEx @ 0x1407C9704 (ApiSetLoadSchemaEx.c)
 *     MiActOnLargeKernelHalPages @ 0x1407E79F8 (MiActOnLargeKernelHalPages.c)
 *     MmGetSectionRange @ 0x1407E8480 (MmGetSectionRange.c)
 *     EtwpFindDebugId @ 0x140837968 (EtwpFindDebugId.c)
 *     DbgkMapViewOfSection @ 0x140897F08 (DbgkMapViewOfSection.c)
 *     PerfLogImageUnload @ 0x1408E6808 (PerfLogImageUnload.c)
 *     DbgkCreateThread @ 0x1408FED24 (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x1408FF7F8 (PspMapSystemDll.c)
 *     PerfLogImageLoad @ 0x1408FFD20 (PerfLogImageLoad.c)
 *     EtwpCovSampContextGetModule @ 0x140901050 (EtwpCovSampContextGetModule.c)
 *     PopEtGetProcessImageInfo @ 0x140908E14 (PopEtGetProcessImageInfo.c)
 *     DbgkpPostFakeThreadMessages @ 0x140939BE0 (DbgkpPostFakeThreadMessages.c)
 *     DbgkSendSystemDllMessages @ 0x140939F18 (DbgkSendSystemDllMessages.c)
 *     EtwpQueryProcessOtherInfo @ 0x14094BC44 (EtwpQueryProcessOtherInfo.c)
 *     EtwpEnumerateAddressSpace @ 0x1409690F0 (EtwpEnumerateAddressSpace.c)
 *     PiUpdateDriverDBCache @ 0x1409C5084 (PiUpdateDriverDBCache.c)
 *     PnpPrepareDriverLoading @ 0x1409C7848 (PnpPrepareDriverLoading.c)
 *     PiLookupInDDBCache @ 0x1409C7CE8 (PiLookupInDDBCache.c)
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 *     IopLoadDriver @ 0x1409C90C0 (IopLoadDriver.c)
 *     RtlCreateUserStack @ 0x1409E5C7C (RtlCreateUserStack.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140A03160 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlpWow64CreateUserStack @ 0x140A1A87C (RtlpWow64CreateUserStack.c)
 *     MmResetDriverPaging @ 0x140A3D910 (MmResetDriverPaging.c)
 *     MiSnapDriverRange @ 0x140A3DE88 (MiSnapDriverRange.c)
 *     DbgkpPostModuleMessages @ 0x140A4A9B8 (DbgkpPostModuleMessages.c)
 *     MmLockPagableDataSection @ 0x140A5CF50 (MmLockPagableDataSection.c)
 *     MiGetSystemAddressForImage @ 0x140A5E524 (MiGetSystemAddressForImage.c)
 *     MiProtectSystemImage @ 0x140A90AEC (MiProtectSystemImage.c)
 *     MiConstructLoaderEntry @ 0x140A92FE4 (MiConstructLoaderEntry.c)
 *     MiLockdownSections @ 0x140A93500 (MiLockdownSections.c)
 *     MiCaptureImageExceptionValues @ 0x140A93608 (MiCaptureImageExceptionValues.c)
 *     MiInitializeImageSectionLocks @ 0x140AA19BC (MiInitializeImageSectionLocks.c)
 *     IopUnloadDriver @ 0x140AA8FB8 (IopUnloadDriver.c)
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 *     MmCreatePeb @ 0x140AE79AC (MmCreatePeb.c)
 *     KiVerifyXcpt15 @ 0x140BDEC40 (KiVerifyXcpt15.c)
 *     CcInitializeBcbProfiler @ 0x140BDEC74 (CcInitializeBcbProfiler.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 *     sub_140C08E44 @ 0x140C08E44 (sub_140C08E44.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlImageNtHeader(unsigned __int64 a1)
{
  __int64 v1; // r8
  _DWORD *v2; // rax

  v1 = 0LL;
  if ( a1 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *(_WORD *)a1 == 23117 )
  {
    v2 = (_DWORD *)(a1 + *(unsigned int *)(a1 + 60));
    if ( (unsigned __int64)v2 >= a1
      && (a1 > 0x7FFFFFFEFFFFLL || (_DWORD *)((char *)v2 + 263) >= v2 && (unsigned __int64)v2 + 263 <= 0x7FFFFFFEFFFFLL)
      && *v2 == 17744 )
    {
      return a1 + *(unsigned int *)(a1 + 60);
    }
  }
  return v1;
}
