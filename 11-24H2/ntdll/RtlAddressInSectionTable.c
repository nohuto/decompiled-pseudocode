/*
 * XREFs of RtlAddressInSectionTable @ 0x1800649C0
 * Callers:
 *     RtlImageDirectoryEntryToData @ 0x180008A00 (RtlImageDirectoryEntryToData.c)
 *     RtlpxLookupFunctionTable @ 0x1800166E0 (RtlpxLookupFunctionTable.c)
 *     EtwpProviderArrivalCallback @ 0x18001B9D0 (EtwpProviderArrivalCallback.c)
 *     LdrpSnapModule @ 0x180056F30 (LdrpSnapModule.c)
 *     LdrpResolveProcedureAddress @ 0x180057F30 (LdrpResolveProcedureAddress.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180058BE0 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpGetProcedureAddress @ 0x180058DA0 (LdrpGetProcedureAddress.c)
 *     RtlGetImageFileMachines @ 0x1800594E0 (RtlGetImageFileMachines.c)
 *     LdrpSearchResourceSection_U @ 0x180061FF0 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180063850 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpCompleteMapModule @ 0x180073340 (LdrpCompleteMapModule.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x180134B40 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_S.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x180134C04 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPO.c)
 *     RtlComputeImportTableHash @ 0x180134EA0 (RtlComputeImportTableHash.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlAddressInSectionTable(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int *v3; // r10
  unsigned int i; // r9d
  __int64 v5; // rax

  v3 = (unsigned int *)(a1 + *(unsigned __int16 *)(a1 + 20) + 24LL);
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 6); ++i )
  {
    v5 = v3[3];
    if ( a3 >= (unsigned int)v5 && a3 < (unsigned int)v5 + v3[4] )
      return a2 + v3[5] - v5 + a3;
    v3 += 10;
  }
  return 0LL;
}
