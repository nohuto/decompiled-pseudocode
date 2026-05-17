/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x180022220
 * Callers:
 *     LdrpAccessResourceData @ 0x18001D9D0 (LdrpAccessResourceData.c)
 *     RtlInsertInvertedFunctionTable @ 0x180020C04 (RtlInsertInvertedFunctionTable.c)
 *     LdrpGetImportDescriptorForSnap @ 0x180020E7C (LdrpGetImportDescriptorForSnap.c)
 *     LdrpCfgProcessLoadConfig @ 0x1800212A0 (LdrpCfgProcessLoadConfig.c)
 *     LdrpHandleTlsData @ 0x180021A20 (LdrpHandleTlsData.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180022070 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpCorValidateImage @ 0x18006CD44 (LdrpCorValidateImage.c)
 *     LdrpMinimalMapModule @ 0x18006D7B0 (LdrpMinimalMapModule.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180071520 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpInitializeTls @ 0x1800B7E90 (LdrpInitializeTls.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x1800D93A0 (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800D9458 (LdrpEnclaveAddForwarderModules.c)
 *     LdrpRelocateImage @ 0x1800E3E8C (LdrpRelocateImage.c)
 *     LdrRelocateImageWithBias @ 0x1800E43F0 (LdrRelocateImageWithBias.c)
 *     RtlFindExportedRoutineByName @ 0x1800EE8C0 (RtlFindExportedRoutineByName.c)
 *     AvrfMiniLoadDll @ 0x18010B9A4 (AvrfMiniLoadDll.c)
 *     LdrpCorFixupImage @ 0x18010CA20 (LdrpCorFixupImage.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180113590 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x180115F40 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     LdrEnumResources @ 0x180138150 (LdrEnumResources.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x18014CB44 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     LdrpFindDelayloadedMethod @ 0x180160588 (LdrpFindDelayloadedMethod.c)
 *     LdrpGetDelayloadDescriptor @ 0x1801606B4 (LdrpGetDelayloadDescriptor.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x1800206B0 (RtlAddressInSectionTable.c)
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
  v12 = RtlImageNtHeaderEx(1, v8, 0LL, &v22);
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
    v9 = RtlAddressInSectionTable(v13, v8, v15);
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
