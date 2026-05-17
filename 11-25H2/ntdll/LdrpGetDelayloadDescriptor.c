/*
 * XREFs of LdrpGetDelayloadDescriptor @ 0x1801606B4
 * Callers:
 *     LdrQueryOptionalDelayLoadedAPI @ 0x18011AE70 (LdrQueryOptionalDelayLoadedAPI.c)
 *     LdrResolveDelayLoadsFromDll @ 0x180160540 (LdrResolveDelayLoadsFromDll.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180022220 (RtlImageDirectoryEntryToData.c)
 *     _stricmp @ 0x180124090 (_stricmp.c)
 */

__int64 __fastcall LdrpGetDelayloadDescriptor(unsigned __int64 a1, const char *a2)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  unsigned int v6; // esi
  unsigned int i; // ebx
  __int64 v8; // rbp
  unsigned int v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0;
  v4 = 0LL;
  v5 = RtlImageDirectoryEntryToData(a1, 1, 0xDu, &v10);
  if ( v5 )
  {
    v6 = v10 >> 5;
    for ( i = 0; ; ++i )
    {
      v8 = v5 + 32LL * i;
      if ( !*(_DWORD *)(v8 + 4) || i >= v6 )
        break;
      if ( !stricmp((const char *)(a1 + *(unsigned int *)(v8 + 4)), a2) )
        return v5 + 32LL * i;
    }
  }
  return v4;
}
