/*
 * XREFs of LdrImageDirectoryEntryToLoadConfigEx @ 0x1405F10E8
 * Callers:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140A5E1A8 (LdrImageDirectoryEntryToLoadConfig.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402EEB70 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x140414520 (RtlImageNtHeaderEx.c)
 */

_DWORD *__fastcall LdrImageDirectoryEntryToLoadConfigEx(PVOID BaseOfImage)
{
  __int64 v1; // rbx
  _DWORD *v3; // rdx
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
