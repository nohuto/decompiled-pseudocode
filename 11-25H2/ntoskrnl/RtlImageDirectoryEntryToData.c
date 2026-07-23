/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x14040FE90
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x14025AB80 (RtlpLookupUserFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x14040F6F0 (RtlInsertInvertedFunctionTable.c)
 *     RtlCaptureImageExceptionValues @ 0x14040FE48 (RtlCaptureImageExceptionValues.c)
 *     KiIsPgiKernel @ 0x1405BA0EC (KiIsPgiKernel.c)
 *     RtlpGetKernelScpFunctionTable @ 0x1405E4B40 (RtlpGetKernelScpFunctionTable.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x1405E7760 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     MmProtectDriverSection @ 0x14065FC80 (MmProtectDriverSection.c)
 *     MiReplaceImportEntry @ 0x1406605EC (MiReplaceImportEntry.c)
 *     MiLockPatchIatForDV @ 0x140670740 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x140670958 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiReplacePatchImportEntry @ 0x140672010 (MiReplacePatchImportEntry.c)
 *     KsepPatchDriverImportsTable @ 0x140733664 (KsepPatchDriverImportsTable.c)
 *     LdrEnumResources @ 0x14076F120 (LdrEnumResources.c)
 *     MmReplaceImportEntriesForVerifier @ 0x1407DD510 (MmReplaceImportEntriesForVerifier.c)
 *     RtlFindHotPatchInformation @ 0x14081F384 (RtlFindHotPatchInformation.c)
 *     EtwpFindDebugId @ 0x140898408 (EtwpFindDebugId.c)
 *     RtlFindExportedRoutineByName @ 0x1408E85B0 (RtlFindExportedRoutineByName.c)
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 *     MiInitializeWowPeb @ 0x1408F97C8 (MiInitializeWowPeb.c)
 *     MmCreatePeb @ 0x1408FA99C (MmCreatePeb.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140944F04 (MiCaptureRetpolineRelocationTables.c)
 *     LdrpSearchResourceSection_U @ 0x1409AE35C (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x1409AEEAC (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1409AEF90 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     MiResolveImageReferences @ 0x140A1286C (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x140A12C8C (MiSnapThunk.c)
 *     MiSnapUnresolvedImport @ 0x140A130C8 (MiSnapUnresolvedImport.c)
 *     MiMarkKernelImageCfgBits @ 0x140A39A20 (MiMarkKernelImageCfgBits.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140A63318 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x140A85AE4 (MiMarkKernelCfgAddressTakenImports.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140A8DB7C (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiSetImportTableProtection @ 0x140AA5BDC (MiSetImportTableProtection.c)
 *     MiCacheImageSymbols @ 0x140ABB930 (MiCacheImageSymbols.c)
 *     ViXdvDriverLoadImage @ 0x140B7A9D0 (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140B87038 (VfThunkApplyDriverAddedThunks.c)
 *     VfThunkApplyThunksCurrentSession @ 0x140B871CC (VfThunkApplyThunksCurrentSession.c)
 *     ViThunkApplyPristineCurrentSession @ 0x140B87314 (ViThunkApplyPristineCurrentSession.c)
 *     ViThunkFindAllThunkedImports @ 0x140B876A8 (ViThunkFindAllThunkedImports.c)
 *     ViThunkSnapSharedExportByName @ 0x140B965EC (ViThunkSnapSharedExportByName.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 *     ViThunkFindExportAddress @ 0x140C2A8F4 (ViThunkFindExportAddress.c)
 *     MiApplyDynamicRelocations @ 0x140C4796C (MiApplyDynamicRelocations.c)
 *     MiBuildImportsForBootDrivers @ 0x140C49598 (MiBuildImportsForBootDrivers.c)
 * Callees:
 *     RtlpImageDirectoryEntryToData32 @ 0x1404101A4 (RtlpImageDirectoryEntryToData32.c)
 *     RtlAddressInSectionTable @ 0x140410250 (RtlAddressInSectionTable.c)
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
