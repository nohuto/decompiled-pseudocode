/*
 * XREFs of RtlImageNtHeader @ 0x140432E80
 * Callers:
 *     KiLockExtendedServiceTable @ 0x140505B38 (KiLockExtendedServiceTable.c)
 *     IopIsNotNativeDriverImage @ 0x140710184 (IopIsNotNativeDriverImage.c)
 *     KiTpIsSupportedKernelTracepointLocation @ 0x14073BF18 (KiTpIsSupportedKernelTracepointLocation.c)
 *     ApiSetLoadSchemaEx @ 0x1407C9BF4 (ApiSetLoadSchemaEx.c)
 *     MiActOnLargeKernelHalPages @ 0x1407E7FC8 (MiActOnLargeKernelHalPages.c)
 *     MmGetSectionRange @ 0x1407E8A50 (MmGetSectionRange.c)
 *     DbgkMapViewOfSection @ 0x1408A05A8 (DbgkMapViewOfSection.c)
 *     MmCreatePeb @ 0x1408DDBA4 (MmCreatePeb.c)
 *     PopEtGetProcessImageInfo @ 0x1408E0534 (PopEtGetProcessImageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x1408F01B4 (EtwpQueryProcessOtherInfo.c)
 *     DbgkpPostFakeThreadMessages @ 0x1408F50E4 (DbgkpPostFakeThreadMessages.c)
 *     DbgkSendSystemDllMessages @ 0x1408F541C (DbgkSendSystemDllMessages.c)
 *     DbgkCreateThread @ 0x140921604 (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x1409220D8 (PspMapSystemDll.c)
 *     PerfLogImageLoad @ 0x140922600 (PerfLogImageLoad.c)
 *     EtwpCovSampContextGetModule @ 0x140923930 (EtwpCovSampContextGetModule.c)
 *     EtwpEnumerateAddressSpace @ 0x140951B80 (EtwpEnumerateAddressSpace.c)
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 *     PiLookupInDDBCache @ 0x1409B8B68 (PiLookupInDDBCache.c)
 *     PnpPrepareDriverLoading @ 0x1409B8F8C (PnpPrepareDriverLoading.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1409BA5C0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlCreateUserStack @ 0x1409E050C (RtlCreateUserStack.c)
 *     EtwpFindDebugId @ 0x1409F9534 (EtwpFindDebugId.c)
 *     PerfLogImageUnload @ 0x140A0E50C (PerfLogImageUnload.c)
 *     RtlpWow64CreateUserStack @ 0x140A130B8 (RtlpWow64CreateUserStack.c)
 *     MmResetDriverPaging @ 0x140A33220 (MmResetDriverPaging.c)
 *     MiSnapDriverRange @ 0x140A33798 (MiSnapDriverRange.c)
 *     DbgkpPostModuleMessages @ 0x140A41618 (DbgkpPostModuleMessages.c)
 *     MmLockPagableDataSection @ 0x140A54770 (MmLockPagableDataSection.c)
 *     MiGetSystemAddressForImage @ 0x140A5536C (MiGetSystemAddressForImage.c)
 *     PiUpdateDriverDBCache @ 0x140A6C434 (PiUpdateDriverDBCache.c)
 *     MiProtectSystemImage @ 0x140A8D1E8 (MiProtectSystemImage.c)
 *     MiConstructLoaderEntry @ 0x140A8F794 (MiConstructLoaderEntry.c)
 *     MiLockdownSections @ 0x140A8FCB0 (MiLockdownSections.c)
 *     MiCaptureImageExceptionValues @ 0x140A8FDB8 (MiCaptureImageExceptionValues.c)
 *     MiInitializeImageSectionLocks @ 0x140A9CD4C (MiInitializeImageSectionLocks.c)
 *     IopUnloadDriver @ 0x140AA4068 (IopUnloadDriver.c)
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 *     KiVerifyXcpt15 @ 0x140BE0C40 (KiVerifyXcpt15.c)
 *     CcInitializeBcbProfiler @ 0x140BE0C74 (CcInitializeBcbProfiler.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 *     sub_140C0AE44 @ 0x140C0AE44 (sub_140C0AE44.c)
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
