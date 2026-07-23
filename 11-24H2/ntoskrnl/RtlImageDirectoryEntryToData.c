/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x1402EEB70
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x140236130 (RtlpLookupUserFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x1402EE3CC (RtlInsertInvertedFunctionTable.c)
 *     RtlCaptureImageExceptionValues @ 0x1402EEB24 (RtlCaptureImageExceptionValues.c)
 *     KiIsPgiKernel @ 0x1405BB568 (KiIsPgiKernel.c)
 *     RtlpGetKernelScpFunctionTable @ 0x1405EE4D4 (RtlpGetKernelScpFunctionTable.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x1405F10E8 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     MmProtectDriverSection @ 0x14066C990 (MmProtectDriverSection.c)
 *     MiReplaceImportEntry @ 0x14066D2FC (MiReplaceImportEntry.c)
 *     MiLockPatchIatForDV @ 0x14067D0E0 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14067D2F8 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiReplacePatchImportEntry @ 0x14067EA20 (MiReplacePatchImportEntry.c)
 *     KsepPatchDriverImportsTable @ 0x14073D5B4 (KsepPatchDriverImportsTable.c)
 *     LdrEnumResources @ 0x14077E2A0 (LdrEnumResources.c)
 *     MmReplaceImportEntriesForVerifier @ 0x1407ED980 (MmReplaceImportEntriesForVerifier.c)
 *     RtlFindHotPatchInformation @ 0x14082F8F4 (RtlFindHotPatchInformation.c)
 *     MiInitializeWowPeb @ 0x1408DCF04 (MiInitializeWowPeb.c)
 *     MmCreatePeb @ 0x1408DDBA4 (MmCreatePeb.c)
 *     RtlFindExportedRoutineByName @ 0x140907090 (RtlFindExportedRoutineByName.c)
 *     MiCaptureRetpolineRelocationTables @ 0x14093F254 (MiCaptureRetpolineRelocationTables.c)
 *     LdrpSearchResourceSection_U @ 0x1409B999C (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x1409BA4DC (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1409BA5C0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     EtwpFindDebugId @ 0x1409F9534 (EtwpFindDebugId.c)
 *     MiResolveImageReferences @ 0x140A10E04 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x140A11224 (MiSnapThunk.c)
 *     MiSnapUnresolvedImport @ 0x140A11658 (MiSnapUnresolvedImport.c)
 *     MiMarkKernelImageCfgBits @ 0x140A33650 (MiMarkKernelImageCfgBits.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140A5E1C0 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140A83AFC (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x140A8678C (MiMarkKernelCfgAddressTakenImports.c)
 *     MiSetImportTableProtection @ 0x140AA63CC (MiSetImportTableProtection.c)
 *     MiCacheImageSymbols @ 0x140ABAE40 (MiCacheImageSymbols.c)
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 *     ViXdvDriverLoadImage @ 0x140B8C9B0 (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140B99018 (VfThunkApplyDriverAddedThunks.c)
 *     VfThunkApplyThunksCurrentSession @ 0x140B991AC (VfThunkApplyThunksCurrentSession.c)
 *     ViThunkApplyPristineCurrentSession @ 0x140B992F4 (ViThunkApplyPristineCurrentSession.c)
 *     ViThunkFindAllThunkedImports @ 0x140B99688 (ViThunkFindAllThunkedImports.c)
 *     ViThunkSnapSharedExportByName @ 0x140BA85CC (ViThunkSnapSharedExportByName.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 *     ViThunkFindExportAddress @ 0x140C3DD2C (ViThunkFindExportAddress.c)
 *     MiApplyDynamicRelocations @ 0x140C5ADDC (MiApplyDynamicRelocations.c)
 *     MiBuildImportsForBootDrivers @ 0x140C5CAB4 (MiBuildImportsForBootDrivers.c)
 * Callees:
 *     RtlpImageDirectoryEntryToData32 @ 0x1402EEE80 (RtlpImageDirectoryEntryToData32.c)
 *     RtlAddressInSectionTable @ 0x1402EEF2C (RtlAddressInSectionTable.c)
 */

PVOID __cdecl RtlImageDirectoryEntryToData(
        PVOID BaseOfImage,
        BOOLEAN MappedAsImage,
        USHORT DirectoryEntry,
        PULONG Size)
{
  BOOLEAN v4; // r11
  _IMAGE_NT_HEADERS64 *v6; // r10
  bool v7; // zf
  BOOLEAN v8; // cl
  _IMAGE_NT_HEADERS64 *NtHeaders; // rcx
  unsigned __int16 Magic; // ax
  __int64 v11; // r9
  __int64 VirtualAddress; // r8
  signed int v13; // edx
  PVOID result; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v4 = MappedAsImage;
  v16 = 0LL;
  v6 = (_IMAGE_NT_HEADERS64 *)BaseOfImage;
  if ( ((unsigned __int8)BaseOfImage & 3) != 0 )
  {
    v6 = (_IMAGE_NT_HEADERS64 *)((unsigned __int64)BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
    v7 = ((unsigned __int8)BaseOfImage & 1) == 0;
    v8 = 0;
    if ( v7 )
      v8 = MappedAsImage;
    v4 = v8;
  }
  if ( (unsigned __int64)&v6[-1].OptionalHeader.DataDirectory[15].Size + 3 > 0xFFFFFFFFFFFFFFFDuLL )
  {
LABEL_26:
    v13 = -1073741811;
    goto LABEL_17;
  }
  if ( LOWORD(v6->Signature) != 23117
    || (NtHeaders = (_IMAGE_NT_HEADERS64 *)((char *)v6 + v6->OptionalHeader.FileAlignment), NtHeaders < v6)
    || (unsigned __int64)v6 <= 0x7FFFFFFEFFFFLL
    && ((_IMAGE_NT_HEADERS64 *)((char *)&NtHeaders->OptionalHeader.DataDirectory[15].Size + 3) < NtHeaders
     || (unsigned __int64)&NtHeaders->OptionalHeader.DataDirectory[15].Size + 3 > 0x7FFFFFFEFFFFLL)
    || NtHeaders->Signature != 17744 )
  {
    v13 = -1073741701;
    goto LABEL_17;
  }
  Magic = NtHeaders->OptionalHeader.Magic;
  if ( Magic == 267 )
  {
    v13 = RtlpImageDirectoryEntryToData32(v6, NtHeaders, (__int64)&v16);
  }
  else
  {
    if ( Magic != 523 || DirectoryEntry >= NtHeaders->OptionalHeader.NumberOfRvaAndSizes )
      goto LABEL_26;
    v11 = DirectoryEntry;
    VirtualAddress = NtHeaders->OptionalHeader.DataDirectory[DirectoryEntry].VirtualAddress;
    if ( !(_DWORD)VirtualAddress )
    {
      v13 = -1073741822;
      goto LABEL_17;
    }
    if ( (unsigned __int64)v6 <= 0x7FFFFFFEFFFFLL )
    {
      v15 = (unsigned __int64)&v6[-1].OptionalHeader.DataDirectory[15].Size + VirtualAddress + 3;
      if ( v15 > 0x7FFFFFFEFFFFLL || v15 < (unsigned __int64)v6 )
        goto LABEL_26;
    }
    *Size = NtHeaders->OptionalHeader.DataDirectory[v11].Size;
    if ( v4 || (unsigned int)VirtualAddress < NtHeaders->OptionalHeader.SizeOfHeaders )
    {
      v13 = 0;
      v16 = (__int64)v6 + VirtualAddress;
    }
    else
    {
      v16 = (__int64)RtlAddressInSectionTable(NtHeaders, v6, VirtualAddress);
      v13 = v16 == 0 ? 0xC000000D : 0;
    }
  }
LABEL_17:
  result = (PVOID)v16;
  if ( v13 < 0 )
    return 0LL;
  return result;
}
