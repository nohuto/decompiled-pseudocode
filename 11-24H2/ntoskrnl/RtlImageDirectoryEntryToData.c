/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x14042CAF0
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x140280BA0 (RtlpLookupUserFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x14042C8CC (RtlInsertInvertedFunctionTable.c)
 *     RtlCaptureImageExceptionValues @ 0x14042CAB0 (RtlCaptureImageExceptionValues.c)
 *     KiIsPgiKernel @ 0x1405BDF38 (KiIsPgiKernel.c)
 *     RtlpGetKernelScpFunctionTable @ 0x1405F0E94 (RtlpGetKernelScpFunctionTable.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x1405F3AA8 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     MmProtectDriverSection @ 0x14066B7C0 (MmProtectDriverSection.c)
 *     MiReplaceImportEntry @ 0x14066C12C (MiReplaceImportEntry.c)
 *     MiLockPatchIatForDV @ 0x14067BF00 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14067C118 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiReplacePatchImportEntry @ 0x14067D820 (MiReplacePatchImportEntry.c)
 *     KsepPatchDriverImportsTable @ 0x14073F684 (KsepPatchDriverImportsTable.c)
 *     LdrEnumResources @ 0x14077E370 (LdrEnumResources.c)
 *     MmReplaceImportEntriesForVerifier @ 0x1407ED3B0 (MmReplaceImportEntriesForVerifier.c)
 *     RtlFindHotPatchInformation @ 0x14082F0C4 (RtlFindHotPatchInformation.c)
 *     EtwpFindDebugId @ 0x140837968 (EtwpFindDebugId.c)
 *     RtlFindExportedRoutineByName @ 0x1408B0E30 (RtlFindExportedRoutineByName.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1408F3470 (MiCaptureRetpolineRelocationTables.c)
 *     MiInitializeWowPeb @ 0x1409C2B2C (MiInitializeWowPeb.c)
 *     LdrpSearchResourceSection_U @ 0x140A0253C (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x140A0307C (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140A03160 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     MiResolveImageReferences @ 0x140A17C94 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x140A180B4 (MiSnapThunk.c)
 *     MiSnapUnresolvedImport @ 0x140A184E8 (MiSnapUnresolvedImport.c)
 *     MiMarkKernelImageCfgBits @ 0x140A3DD40 (MiMarkKernelImageCfgBits.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140A659F0 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140A8760C (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x140A8A44C (MiMarkKernelCfgAddressTakenImports.c)
 *     MiSetImportTableProtection @ 0x140AAB19C (MiSetImportTableProtection.c)
 *     MiCacheImageSymbols @ 0x140ABFD60 (MiCacheImageSymbols.c)
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 *     MmCreatePeb @ 0x140AE79AC (MmCreatePeb.c)
 *     ViXdvDriverLoadImage @ 0x140B8A9B0 (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140B97018 (VfThunkApplyDriverAddedThunks.c)
 *     VfThunkApplyThunksCurrentSession @ 0x140B971AC (VfThunkApplyThunksCurrentSession.c)
 *     ViThunkApplyPristineCurrentSession @ 0x140B972F4 (ViThunkApplyPristineCurrentSession.c)
 *     ViThunkFindAllThunkedImports @ 0x140B97688 (ViThunkFindAllThunkedImports.c)
 *     ViThunkSnapSharedExportByName @ 0x140BA65CC (ViThunkSnapSharedExportByName.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 *     ViThunkFindExportAddress @ 0x140C3BBD4 (ViThunkFindExportAddress.c)
 *     MiApplyDynamicRelocations @ 0x140C58C4C (MiApplyDynamicRelocations.c)
 *     MiBuildImportsForBootDrivers @ 0x140C5A924 (MiBuildImportsForBootDrivers.c)
 * Callees:
 *     RtlpImageDirectoryEntryToData32 @ 0x14042CE00 (RtlpImageDirectoryEntryToData32.c)
 *     RtlAddressInSectionTable @ 0x14042CEAC (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlImageDirectoryEntryToData(unsigned __int64 a1, char a2, unsigned __int16 a3, _DWORD *a4)
{
  char v4; // r11
  unsigned __int64 v6; // r10
  bool v7; // zf
  char v8; // cl
  unsigned __int64 v9; // rcx
  __int16 v10; // ax
  int v11; // edx
  __int64 v12; // r9
  __int64 v13; // r8
  signed int v14; // edx
  __int64 result; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  v17 = 0LL;
  v6 = a1;
  if ( (a1 & 3) != 0 )
  {
    v6 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v7 = (a1 & 1) == 0;
    v8 = 0;
    if ( v7 )
      v8 = a2;
    v4 = v8;
  }
  if ( v6 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
LABEL_26:
    v14 = -1073741811;
    goto LABEL_17;
  }
  if ( *(_WORD *)v6 != 23117
    || (v9 = v6 + *(unsigned int *)(v6 + 60), v9 < v6)
    || v6 <= 0x7FFFFFFEFFFFLL && (v9 + 263 < v9 || v9 + 263 > 0x7FFFFFFEFFFFLL)
    || *(_DWORD *)v9 != 17744 )
  {
    v14 = -1073741701;
    goto LABEL_17;
  }
  v10 = *(_WORD *)(v9 + 24);
  v11 = 267;
  if ( v10 == 267 )
  {
    LOBYTE(v11) = v4;
    v14 = RtlpImageDirectoryEntryToData32(v6, v11, a3, (_DWORD)a4, v9, (__int64)&v17);
  }
  else
  {
    if ( v10 != 523 || (unsigned int)a3 >= *(_DWORD *)(v9 + 132) )
      goto LABEL_26;
    v12 = a3;
    v13 = *(unsigned int *)(v9 + 8LL * a3 + 136);
    if ( !(_DWORD)v13 )
    {
      v14 = -1073741822;
      goto LABEL_17;
    }
    if ( v6 <= 0x7FFFFFFEFFFFLL )
    {
      v16 = v13 + v6 - 1;
      if ( v16 > 0x7FFFFFFEFFFFLL || v16 < v6 )
        goto LABEL_26;
    }
    *a4 = *(_DWORD *)(v9 + 8 * v12 + 140);
    if ( v4 || (unsigned int)v13 < *(_DWORD *)(v9 + 84) )
    {
      v14 = 0;
      v17 = v13 + v6;
    }
    else
    {
      v17 = RtlAddressInSectionTable(v9, v6);
      v14 = v17 == 0 ? 0xC000000D : 0;
    }
  }
LABEL_17:
  result = v17;
  if ( v14 < 0 )
    return 0LL;
  return result;
}
