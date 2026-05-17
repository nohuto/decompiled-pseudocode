/*
 * XREFs of LdrpGetImportDescriptorForSnap @ 0x180020E7C
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18004B770 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x180022220 (RtlImageDirectoryEntryToData.c)
 *     LdrpCheckPagesForTampering @ 0x180110664 (LdrpCheckPagesForTampering.c)
 *     LdrpMapCleanModuleView @ 0x180160F8C (LdrpMapCleanModuleView.c)
 */

__int64 __fastcall LdrpGetImportDescriptorForSnap(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  __int64 v6; // rdx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  v7 = 0;
  v8 = 0LL;
  LOBYTE(a2) = 1;
  v4 = RtlImageDirectoryEntryToData(*(_QWORD *)(v2 + 48), a2, 1LL, &v7);
  if ( v2 == LdrpImageEntry && ((*((_QWORD *)&xmmword_1801EC4E0 + 1) >> 44) & 3) == 1 )
  {
    RtlImageNtHeaderEx(3, *(_QWORD *)(v2 + 48), 0LL, &v8);
    if ( ((unsigned __int8)LdrpCheckPagesForTampering(v8 + 144, 8LL)
       || (unsigned __int8)LdrpCheckPagesForTampering(v4, v7))
      && (int)LdrpMapCleanModuleView(a1) >= 0 )
    {
      LOBYTE(v6) = 1;
      return RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 192), v6, 1LL, &v7);
    }
  }
  return v4;
}
