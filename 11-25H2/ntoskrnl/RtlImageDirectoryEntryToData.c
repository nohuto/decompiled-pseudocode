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
