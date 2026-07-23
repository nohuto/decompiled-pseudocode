/*
 * XREFs of LdrImageDirectoryEntryToLoadConfigEx @ 0x180149944
 * Callers:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180036000 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     RtlGetImageEnclaveConfig @ 0x18011C97C (RtlGetImageEnclaveConfig.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180035400 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
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
