/*
 * XREFs of LdrpUnmapModule @ 0x1800067C8
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180004FF0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18000FA80 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     LdrpUnloadNode @ 0x18001CA60 (LdrpUnloadNode.c)
 *     LdrpResolveProcedureAddress @ 0x180057F30 (LdrpResolveProcedureAddress.c)
 *     LdrpLoadEnclaveModule @ 0x1800D9218 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlRemoveInvertedFunctionTable @ 0x180006734 (RtlRemoveInvertedFunctionTable.c)
 *     RtlpInsertOrRemoveScpCfgFunctionTable @ 0x1800068D0 (RtlpInsertOrRemoveScpCfgFunctionTable.c)
 *     NtUnmapViewOfSection @ 0x1801621D0 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall LdrpUnmapModule(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    if ( (*(_DWORD *)(a1 + 104) & 0x200) != 0 )
      RtlRemoveInvertedFunctionTable(v3);
    if ( (*(_DWORD *)(a1 + 104) & 0x200000) != 0 )
      RtlpInsertOrRemoveScpCfgFunctionTable(*(_QWORD *)(a1 + 48), a2, 0LL);
    result = NtUnmapViewOfSection(-1LL);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
