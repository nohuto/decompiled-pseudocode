/*
 * XREFs of LdrImageDirectoryEntryToLoadConfigEx @ 0x1405F3AA8
 * Callers:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140A659D8 (LdrImageDirectoryEntryToLoadConfig.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14041E7E0 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x14042CAF0 (RtlImageDirectoryEntryToData.c)
 */

_DWORD *__fastcall LdrImageDirectoryEntryToLoadConfigEx(unsigned __int64 a1)
{
  __int64 v1; // rbx
  _DWORD *v3; // rdx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  v6 = 0;
  v5 = 0LL;
  RtlImageNtHeaderEx(1, a1, 0LL, &v5);
  if ( !a1 )
    return 0LL;
  v3 = (_DWORD *)RtlImageDirectoryEntryToData(a1, 1, 0xAu, &v6);
  if ( !v3 || !v6 || v6 != *v3 )
    return 0LL;
  if ( *(_WORD *)(v5 + 4) == 0x8664 )
    return v3;
  return (_DWORD *)v1;
}
