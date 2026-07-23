/*
 * XREFs of RtlpCaptureDynamicRelocationTableRva @ 0x1405EBB60
 * Callers:
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x1406A3DB0 (RtlPerformRetpolineRelocationsOnImageEx.c)
 *     RtlUpdateImportRelocationsInImage @ 0x1406A40F8 (RtlUpdateImportRelocationsInImage.c)
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x140787BC0 (RtlApplyFunctionOverrideFixupsToImage.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140414520 (RtlImageNtHeaderEx.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140A5E1A8 (LdrImageDirectoryEntryToLoadConfig.c)
 */

NTSTATUS __fastcall RtlpCaptureDynamicRelocationTableRva(PVOID BaseOfImage, ULONG64 Size, int *a3)
{
  ULONG64 v3; // rbp
  __int64 Config; // rax
  NTSTATUS result; // eax
  __int64 v8; // rbx
  int v9; // esi
  int v10; // eax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+58h] [rbp+20h] BYREF

  v3 = (unsigned int)Size;
  OutHeaders = 0LL;
  Config = LdrImageDirectoryEntryToLoadConfig(BaseOfImage);
  if ( !Config || *(_DWORD *)Config < 0xC8u )
    return -1073741637;
  if ( *(_DWORD *)Config < 0xE6u )
  {
    if ( *(_QWORD *)(Config + 192) )
    {
      v10 = *(_DWORD *)(Config + 192) - (_DWORD)BaseOfImage;
      goto LABEL_12;
    }
    return -1073741637;
  }
  v8 = *(unsigned __int16 *)(Config + 228);
  v9 = *(_DWORD *)(Config + 224);
  if ( !(_WORD)v8 )
    return -1073741637;
  result = RtlImageNtHeaderEx(0, BaseOfImage, v3, &OutHeaders);
  if ( result < 0 )
    return result;
  if ( (unsigned __int16)v8 > OutHeaders->FileHeader.NumberOfSections )
    return -1073741701;
  v10 = v9 + *(_DWORD *)((char *)OutHeaders + 40 * v8 + OutHeaders->FileHeader.SizeOfOptionalHeader - 4);
LABEL_12:
  *a3 = v10;
  return 0;
}
