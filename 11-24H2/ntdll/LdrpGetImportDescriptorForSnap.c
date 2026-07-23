/*
 * XREFs of LdrpGetImportDescriptorForSnap @ 0x180034090
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x1800392D0 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180035400 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 *     LdrpCheckPagesForTampering @ 0x180108A94 (LdrpCheckPagesForTampering.c)
 *     LdrpMapCleanModuleView @ 0x18015DDF8 (LdrpMapCleanModuleView.c)
 */

PVOID __fastcall LdrpGetImportDescriptorForSnap(__int64 a1)
{
  __int64 v1; // rsi
  PVOID v3; // rbx
  ULONG Size; // [rsp+30h] [rbp+8h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  Size = 0;
  OutHeaders = 0LL;
  v3 = RtlImageDirectoryEntryToData(*(PVOID *)(v1 + 48), 1u, 1u, &Size);
  if ( v1 == LdrpImageEntry && ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 44) & 3) == 1 )
  {
    RtlImageNtHeaderEx(3u, *(PVOID *)(v1 + 48), 0LL, &OutHeaders);
    if ( ((unsigned __int8)LdrpCheckPagesForTampering(&OutHeaders->OptionalHeader.DataDirectory[1], 8LL)
       || (unsigned __int8)LdrpCheckPagesForTampering(v3, Size))
      && (int)LdrpMapCleanModuleView(a1) >= 0 )
    {
      return RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 192), 1u, 1u, &Size);
    }
  }
  return v3;
}
