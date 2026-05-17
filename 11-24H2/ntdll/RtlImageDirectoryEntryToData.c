/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x180008A00
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x180007234 (RtlInsertInvertedFunctionTable.c)
 *     LdrpGetImportDescriptorForSnap @ 0x180007690 (LdrpGetImportDescriptorForSnap.c)
 *     LdrpCfgProcessLoadConfig @ 0x180007A80 (LdrpCfgProcessLoadConfig.c)
 *     LdrpHandleTlsData @ 0x180008200 (LdrpHandleTlsData.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180008850 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpAccessResourceData @ 0x180061D70 (LdrpAccessResourceData.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180070920 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpMinimalMapModule @ 0x180072F40 (LdrpMinimalMapModule.c)
 *     LdrpInitializeTls @ 0x18008ECD0 (LdrpInitializeTls.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x1800D9400 (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800D94B8 (LdrpEnclaveAddForwarderModules.c)
 *     LdrpRelocateImage @ 0x1800E4EBC (LdrpRelocateImage.c)
 *     LdrRelocateImageWithBias @ 0x1800E5420 (LdrRelocateImageWithBias.c)
 *     RtlFindExportedRoutineByName @ 0x1800EDA40 (RtlFindExportedRoutineByName.c)
 *     AvrfMiniLoadDll @ 0x180108F94 (AvrfMiniLoadDll.c)
 *     LdrpCorFixupImage @ 0x180109FB0 (LdrpCorFixupImage.c)
 *     LdrpCorValidateImage @ 0x18010DE14 (LdrpCorValidateImage.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180110720 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x180112FB0 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     LdrEnumResources @ 0x1801369E0 (LdrEnumResources.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x18014B594 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     LdrpFindDelayloadedMethod @ 0x18015F078 (LdrpFindDelayloadedMethod.c)
 *     LdrpGetDelayloadDescriptor @ 0x18015F1A4 (LdrpGetDelayloadDescriptor.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x1800649C0 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlImageDirectoryEntryToData(unsigned __int64 a1, char a2, unsigned __int16 a3, _DWORD *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  char v6; // bp
  unsigned __int64 v8; // rdi
  __int64 v9; // rsi
  bool v10; // zf
  char v11; // cl
  int v12; // eax
  __int64 v13; // rcx
  __int16 v14; // ax
  __int64 v15; // rdx
  __int64 v17; // r10
  unsigned int v18; // r8d
  unsigned int *v19; // rdx
  __int64 v20; // r9
  int v21; // ecx
  __int64 v22; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = a3;
  v6 = a2;
  v22 = 0LL;
  v8 = a1;
  v9 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v8 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v10 = (a1 & 1) == 0;
    v11 = 0;
    if ( v10 )
      v11 = a2;
    v6 = v11;
  }
  v12 = RtlImageNtHeaderEx(1LL, v8, 0LL, &v22);
  v13 = v22;
  if ( !v22 )
    goto LABEL_13;
  v14 = *(_WORD *)(v22 + 24);
  if ( v14 == 267 )
  {
    if ( (unsigned int)v5 < *(_DWORD *)(v22 + 116) )
    {
      v17 = *(unsigned int *)(v22 + 8 * v5 + 120);
      if ( !(_DWORD)v17 )
        goto LABEL_27;
      *a4 = *(_DWORD *)(v22 + 8 * v5 + 124);
      if ( v6 || (unsigned int)v17 < *(_DWORD *)(v13 + 84) )
      {
        v9 = v8 + v17;
        v12 = 0;
        goto LABEL_13;
      }
      v18 = 0;
      v19 = (unsigned int *)(*(unsigned __int16 *)(v13 + 20) + v22 + 24);
      while ( v18 < *(unsigned __int16 *)(v22 + 6) )
      {
        v20 = v19[3];
        if ( (unsigned int)v17 >= (unsigned int)v20 && (unsigned int)v17 < (unsigned int)v20 + v19[4] )
        {
          v9 = v8 + v19[5] - v20 + v17;
          if ( v9 )
            goto LABEL_12;
          break;
        }
        v19 += 10;
        ++v18;
      }
    }
LABEL_26:
    v12 = -1073741811;
    goto LABEL_13;
  }
  if ( v14 != 523 || (unsigned int)v5 >= *(_DWORD *)(v22 + 132) )
    goto LABEL_26;
  v15 = *(unsigned int *)(v22 + 8 * v5 + 136);
  if ( !(_DWORD)v15 )
  {
LABEL_27:
    v12 = -1073741822;
    goto LABEL_13;
  }
  *a4 = *(_DWORD *)(v22 + 8 * v5 + 140);
  if ( v6 || (unsigned int)v15 < *(_DWORD *)(v13 + 84) )
  {
    v9 = v8 + v15;
LABEL_12:
    v12 = 0;
  }
  else
  {
    v9 = RtlAddressInSectionTable(v13, v8, (unsigned int)v15);
    v21 = 0;
    if ( !v9 )
      v21 = -1073741811;
    v12 = v21;
  }
LABEL_13:
  if ( v12 >= 0 )
    return v9;
  return v4;
}
