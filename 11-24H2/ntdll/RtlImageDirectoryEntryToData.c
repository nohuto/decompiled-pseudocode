/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x180035400
 * Callers:
 *     LdrpInitializeTls @ 0x1800266A4 (LdrpInitializeTls.c)
 *     RtlInsertInvertedFunctionTable @ 0x180033C34 (RtlInsertInvertedFunctionTable.c)
 *     LdrpGetImportDescriptorForSnap @ 0x180034090 (LdrpGetImportDescriptorForSnap.c)
 *     LdrpCfgProcessLoadConfig @ 0x180034480 (LdrpCfgProcessLoadConfig.c)
 *     LdrpHandleTlsData @ 0x180034C00 (LdrpHandleTlsData.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180035250 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpAccessResourceData @ 0x180077950 (LdrpAccessResourceData.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18008D200 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpMinimalMapModule @ 0x18008F820 (LdrpMinimalMapModule.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x1800D4770 (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800D4828 (LdrpEnclaveAddForwarderModules.c)
 *     LdrpRelocateImage @ 0x1800E036C (LdrpRelocateImage.c)
 *     LdrRelocateImageWithBias @ 0x1800E08D0 (LdrRelocateImageWithBias.c)
 *     RtlFindExportedRoutineByName @ 0x1800E8C20 (RtlFindExportedRoutineByName.c)
 *     AvrfMiniLoadDll @ 0x180103EC4 (AvrfMiniLoadDll.c)
 *     LdrpCorFixupImage @ 0x180104EE0 (LdrpCorFixupImage.c)
 *     LdrpCorValidateImage @ 0x180108CF4 (LdrpCorValidateImage.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18010B9E0 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18010E270 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     LdrEnumResources @ 0x180134C10 (LdrEnumResources.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x180149944 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     LdrpFindDelayloadedMethod @ 0x18015D438 (LdrpFindDelayloadedMethod.c)
 *     LdrpGetDelayloadDescriptor @ 0x18015D564 (LdrpGetDelayloadDescriptor.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x18007A5A0 (RtlAddressInSectionTable.c)
 */

PVOID __cdecl RtlImageDirectoryEntryToData(
        PVOID BaseOfImage,
        BOOLEAN MappedAsImage,
        USHORT DirectoryEntry,
        PULONG Size)
{
  void *v4; // rbx
  __int64 v5; // r14
  BOOLEAN v6; // bp
  char *v8; // rdi
  char *v9; // rsi
  bool v10; // zf
  BOOLEAN v11; // cl
  NTSTATUS v12; // eax
  PIMAGE_NT_HEADERS v13; // rcx
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rdx
  __int64 v17; // r10
  unsigned int v18; // r8d
  unsigned int *v19; // rdx
  __int64 v20; // r9
  int v21; // ecx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = DirectoryEntry;
  v6 = MappedAsImage;
  OutHeaders = 0LL;
  v8 = (char *)BaseOfImage;
  v9 = 0LL;
  if ( ((unsigned __int8)BaseOfImage & 3) != 0 )
  {
    v8 = (char *)((unsigned __int64)BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
    v10 = ((unsigned __int8)BaseOfImage & 1) == 0;
    v11 = 0;
    if ( v10 )
      v11 = MappedAsImage;
    v6 = v11;
  }
  v12 = RtlImageNtHeaderEx(1u, v8, 0LL, &OutHeaders);
  v13 = OutHeaders;
  if ( !OutHeaders )
    goto LABEL_13;
  Magic = OutHeaders->OptionalHeader.Magic;
  if ( Magic == 267 )
  {
    if ( (unsigned int)v5 < HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) )
    {
      v17 = *((unsigned int *)&OutHeaders->OptionalHeader.SizeOfHeapCommit + 2 * v5);
      if ( !(_DWORD)v17 )
        goto LABEL_27;
      *Size = *((_DWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit + 2 * v5 + 1);
      if ( v6 || (unsigned int)v17 < v13->OptionalHeader.SizeOfHeaders )
      {
        v9 = &v8[v17];
        v12 = 0;
        goto LABEL_13;
      }
      v18 = 0;
      v19 = (unsigned int *)((char *)&OutHeaders->OptionalHeader.Magic + v13->FileHeader.SizeOfOptionalHeader);
      while ( v18 < OutHeaders->FileHeader.NumberOfSections )
      {
        v20 = v19[3];
        if ( (unsigned int)v17 >= (unsigned int)v20 && (unsigned int)v17 < (unsigned int)v20 + v19[4] )
        {
          v9 = &v8[v19[5] - v20 + v17];
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
  if ( Magic != 523 || (unsigned int)v5 >= OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
    goto LABEL_26;
  VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[v5].VirtualAddress;
  if ( !(_DWORD)VirtualAddress )
  {
LABEL_27:
    v12 = -1073741822;
    goto LABEL_13;
  }
  *Size = OutHeaders->OptionalHeader.DataDirectory[v5].Size;
  if ( v6 || (unsigned int)VirtualAddress < v13->OptionalHeader.SizeOfHeaders )
  {
    v9 = &v8[VirtualAddress];
LABEL_12:
    v12 = 0;
  }
  else
  {
    v9 = (char *)RtlAddressInSectionTable(v13, v8, VirtualAddress);
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
