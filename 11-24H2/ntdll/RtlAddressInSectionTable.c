/*
 * XREFs of RtlAddressInSectionTable @ 0x18007A5A0
 * Callers:
 *     RtlImageDirectoryEntryToData @ 0x180035400 (RtlImageDirectoryEntryToData.c)
 *     RtlpxLookupFunctionTable @ 0x1800430E0 (RtlpxLookupFunctionTable.c)
 *     EtwpProviderArrivalCallback @ 0x1800483D0 (EtwpProviderArrivalCallback.c)
 *     LdrpSnapModule @ 0x18006CB10 (LdrpSnapModule.c)
 *     LdrpResolveProcedureAddress @ 0x18006DB10 (LdrpResolveProcedureAddress.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18006E7C0 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpGetProcedureAddress @ 0x18006E980 (LdrpGetProcedureAddress.c)
 *     RtlGetImageFileMachines @ 0x18006F0C0 (RtlGetImageFileMachines.c)
 *     LdrpSearchResourceSection_U @ 0x180077BD0 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180079430 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpCompleteMapModule @ 0x18008FC20 (LdrpCompleteMapModule.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x180132D70 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_S.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x180132E34 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPO.c)
 *     RtlComputeImportTableHash @ 0x1801330D0 (RtlComputeImportTableHash.c)
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlAddressInSectionTable(PIMAGE_NT_HEADERS NtHeaders, PVOID BaseOfImage, ULONG VirtualAddress)
{
  unsigned int *v3; // r10
  unsigned int i; // r9d
  __int64 v5; // rax

  v3 = (unsigned int *)((char *)&NtHeaders->OptionalHeader.Magic + NtHeaders->FileHeader.SizeOfOptionalHeader);
  for ( i = 0; i < NtHeaders->FileHeader.NumberOfSections; ++i )
  {
    v5 = v3[3];
    if ( VirtualAddress >= (unsigned int)v5 && VirtualAddress < (unsigned int)v5 + v3[4] )
      return (char *)BaseOfImage + v3[5] - v5 + VirtualAddress;
    v3 += 10;
  }
  return 0LL;
}
