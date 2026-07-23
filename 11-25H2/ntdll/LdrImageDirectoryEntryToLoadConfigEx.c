/*
 * XREFs of LdrImageDirectoryEntryToLoadConfigEx @ 0x18014CB44
 * Callers:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180022E20 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     RtlGetImageEnclaveConfig @ 0x18012001C (RtlGetImageEnclaveConfig.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x180022220 (RtlImageDirectoryEntryToData.c)
 */

_DWORD *__fastcall LdrImageDirectoryEntryToLoadConfigEx(PVOID BaseOfImage)
{
  __int64 v1; // rbx
  _DWORD *v3; // rax
  PIMAGE_NT_HEADERS v5; // [rsp+30h] [rbp+8h] BYREF
  ULONG Size; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  Size = 0;
  v5 = 0LL;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &v5);
  if ( !BaseOfImage )
    return 0LL;
  v3 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xAu, &Size);
  if ( !v3 || !Size || Size != *v3 )
    return 0LL;
  if ( v5->FileHeader.Machine == 0x8664 )
    return v3;
  return (_DWORD *)v1;
}
