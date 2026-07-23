/*
 * XREFs of RtlImageNtHeader @ 0x14043DFA0
 * Callers:
 *     KiLockExtendedServiceTable @ 0x140505AF8 (KiLockExtendedServiceTable.c)
 *     IopIsNotNativeDriverImage @ 0x1407064F4 (IopIsNotNativeDriverImage.c)
 *     KiTpIsSupportedKernelTracepointLocation @ 0x140731FC8 (KiTpIsSupportedKernelTracepointLocation.c)
 *     ApiSetLoadSchemaEx @ 0x1407B9F34 (ApiSetLoadSchemaEx.c)
 *     MiActOnLargeKernelHalPages @ 0x1407D7B40 (MiActOnLargeKernelHalPages.c)
 *     MmGetSectionRange @ 0x1407D85C0 (MmGetSectionRange.c)
 *     PopEtGetProcessImageInfo @ 0x14083D17C (PopEtGetProcessImageInfo.c)
 *     EtwpFindDebugId @ 0x140898408 (EtwpFindDebugId.c)
 *     EtwpQueryProcessOtherInfo @ 0x1408BEAE4 (EtwpQueryProcessOtherInfo.c)
 *     EtwpEnumerateAddressSpace @ 0x1408C04E0 (EtwpEnumerateAddressSpace.c)
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 *     MmCreatePeb @ 0x1408FA99C (MmCreatePeb.c)
 *     DbgkMapViewOfSection @ 0x1408FD08C (DbgkMapViewOfSection.c)
 *     DbgkCreateThread @ 0x14090B274 (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x14090B898 (PspMapSystemDll.c)
 *     PerfLogImageLoad @ 0x14090BDC0 (PerfLogImageLoad.c)
 *     EtwpCovSampContextGetModule @ 0x14090D0F0 (EtwpCovSampContextGetModule.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1409AEF90 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     PiLookupInDDBCache @ 0x1409AF4C4 (PiLookupInDDBCache.c)
 *     PnpPrepareDriverLoading @ 0x1409AFA84 (PnpPrepareDriverLoading.c)
 *     MmLoadSystemImageEx @ 0x1409B0468 (MmLoadSystemImageEx.c)
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 *     DbgkpPostFakeThreadMessages @ 0x1409B9A84 (DbgkpPostFakeThreadMessages.c)
 *     DbgkSendSystemDllMessages @ 0x1409B9DBC (DbgkSendSystemDllMessages.c)
 *     RtlCreateUserStack @ 0x1409EB5AC (RtlCreateUserStack.c)
 *     PerfLogImageUnload @ 0x140A0BE8C (PerfLogImageUnload.c)
 *     RtlpWow64CreateUserStack @ 0x140A144C8 (RtlpWow64CreateUserStack.c)
 *     MmResetDriverPaging @ 0x140A395F0 (MmResetDriverPaging.c)
 *     MiSnapDriverRange @ 0x140A39B68 (MiSnapDriverRange.c)
 *     DbgkpPostModuleMessages @ 0x140A4772C (DbgkpPostModuleMessages.c)
 *     MiGetSystemAddressForImage @ 0x140A5B2CC (MiGetSystemAddressForImage.c)
 *     MmLockPagableDataSection @ 0x140A5F0D0 (MmLockPagableDataSection.c)
 *     PiUpdateDriverDBCache @ 0x140A706C4 (PiUpdateDriverDBCache.c)
 *     MiProtectSystemImage @ 0x140A8B9E8 (MiProtectSystemImage.c)
 *     MiConstructLoaderEntry @ 0x140A8E4EC (MiConstructLoaderEntry.c)
 *     MiLockdownSections @ 0x140A8EA10 (MiLockdownSections.c)
 *     MiCaptureImageExceptionValues @ 0x140A8EB18 (MiCaptureImageExceptionValues.c)
 *     MiInitializeImageSectionLocks @ 0x140A9C1AC (MiInitializeImageSectionLocks.c)
 *     IopUnloadDriver @ 0x140AA3F28 (IopUnloadDriver.c)
 *     KiVerifyXcpt15 @ 0x140BCDC40 (KiVerifyXcpt15.c)
 *     CcInitializeBcbProfiler @ 0x140BCDC74 (CcInitializeBcbProfiler.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 *     sub_140BF7E44 @ 0x140BF7E44 (sub_140BF7E44.c)
 * Callees:
 *     <none>
 */

PIMAGE_NT_HEADERS __cdecl RtlImageNtHeader(PVOID BaseOfImage)
{
  _IMAGE_NT_HEADERS64 *v1; // r8
  _DWORD *v2; // rax

  v1 = 0LL;
  if ( (char *)BaseOfImage - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL && *(_WORD *)BaseOfImage == 23117 )
  {
    v2 = (char *)BaseOfImage + *((unsigned int *)BaseOfImage + 15);
    if ( v2 >= BaseOfImage
      && ((unsigned __int64)BaseOfImage > 0x7FFFFFFEFFFFLL
       || (_DWORD *)((char *)v2 + 263) >= v2 && (unsigned __int64)v2 + 263 <= 0x7FFFFFFEFFFFLL)
      && *v2 == 17744 )
    {
      return (PIMAGE_NT_HEADERS)((char *)BaseOfImage + *((unsigned int *)BaseOfImage + 15));
    }
  }
  return v1;
}
