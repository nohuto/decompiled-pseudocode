/*
 * XREFs of LdrpGetImportDescriptorForSnap @ 0x180007690
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18000C8D0 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180008A00 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     LdrpCheckPagesForTampering @ 0x18010DBB4 (LdrpCheckPagesForTampering.c)
 *     LdrpMapCleanModuleView @ 0x18015FA38 (LdrpMapCleanModuleView.c)
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
  if ( v2 == LdrpImageEntry && ((*((_QWORD *)&xmmword_1801EA4F0 + 1) >> 44) & 3) == 1 )
  {
    RtlImageNtHeaderEx(3LL, *(_QWORD *)(v2 + 48), 0LL, &v8);
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
