/*
 * XREFs of RtlpCaptureDynamicRelocationTableRva @ 0x1405E2240
 * Callers:
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x140697B80 (RtlPerformRetpolineRelocationsOnImageEx.c)
 *     RtlUpdateImportRelocationsInImage @ 0x140697EC8 (RtlUpdateImportRelocationsInImage.c)
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x140778A40 (RtlApplyFunctionOverrideFixupsToImage.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140420FB0 (RtlImageNtHeaderEx.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140A63300 (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlpCaptureDynamicRelocationTableRva(unsigned __int64 a1, unsigned int a2, _DWORD *a3)
{
  unsigned __int64 v3; // rbp
  __int64 Config; // rax
  __int64 result; // rax
  __int64 v8; // rbx
  int v9; // esi
  int v10; // eax
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  v11 = 0LL;
  Config = LdrImageDirectoryEntryToLoadConfig(a1);
  if ( !Config || *(_DWORD *)Config < 0xC8u )
    return 3221225659LL;
  if ( *(_DWORD *)Config < 0xE6u )
  {
    if ( *(_QWORD *)(Config + 192) )
    {
      v10 = *(_DWORD *)(Config + 192) - a1;
      goto LABEL_12;
    }
    return 3221225659LL;
  }
  v8 = *(unsigned __int16 *)(Config + 228);
  v9 = *(_DWORD *)(Config + 224);
  if ( !(_WORD)v8 )
    return 3221225659LL;
  result = RtlImageNtHeaderEx(0, a1, v3, &v11);
  if ( (int)result < 0 )
    return result;
  if ( (unsigned __int16)v8 > *(_WORD *)(v11 + 6) )
    return 3221225595LL;
  v10 = v9 + *(_DWORD *)(v11 + *(unsigned __int16 *)(v11 + 20) + 40 * v8 - 4);
LABEL_12:
  *a3 = v10;
  return 0LL;
}
