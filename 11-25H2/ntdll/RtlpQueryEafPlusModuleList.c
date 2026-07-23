/*
 * XREFs of RtlpQueryEafPlusModuleList @ 0x180116138
 * Callers:
 *     RtlQueryImageMitigationPolicy @ 0x1800B0AF0 (RtlQueryImageMitigationPolicy.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x1800B2AE0 (RtlQueryImageFileKeyOption.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpQueryEafPlusModuleList(HANDLE KeyHandle, void *a2)
{
  unsigned int v4; // esi
  NTSTATUS ImageFileKeyOption; // eax

  memset_thunk_772440563353939046(a2, 0, 0x400uLL);
  v4 = 0;
  ImageFileKeyOption = RtlQueryImageFileKeyOption(KeyHandle, (wchar_t *)L"EAFModules", 1, (ULONG *)a2, 0x400u, 0LL);
  if ( ImageFileKeyOption >= 0 )
    return 0LL;
  if ( ImageFileKeyOption != -1073741772 )
    return (unsigned int)ImageFileKeyOption;
  return v4;
}
