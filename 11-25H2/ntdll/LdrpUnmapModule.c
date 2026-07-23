/*
 * XREFs of LdrpUnmapModule @ 0x180024A44
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180007BE0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveProcedureAddress @ 0x180013B70 (LdrpResolveProcedureAddress.c)
 *     LdrpUnloadNode @ 0x1800465A0 (LdrpUnloadNode.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18004E920 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpLoadEnclaveModule @ 0x1800D91B8 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlpInsertOrRemoveScpCfgFunctionTable @ 0x180024960 (RtlpInsertOrRemoveScpCfgFunctionTable.c)
 *     RtlRemoveInvertedFunctionTable @ 0x180024A98 (RtlRemoveInvertedFunctionTable.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 */

NTSTATUS __fastcall LdrpUnmapModule(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax

  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( (*(_DWORD *)(a1 + 104) & 0x200) != 0 )
      RtlRemoveInvertedFunctionTable();
    if ( (*(_DWORD *)(a1 + 104) & 0x200000) != 0 )
      RtlpInsertOrRemoveScpCfgFunctionTable(*(char **)(a1 + 48), a2, 0);
    result = NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *(PVOID *)(a1 + 48));
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
