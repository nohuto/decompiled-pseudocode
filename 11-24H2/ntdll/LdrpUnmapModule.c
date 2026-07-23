/*
 * XREFs of LdrpUnmapModule @ 0x1800331C8
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x1800319F0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18003C480 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
 *     LdrpUnloadNode @ 0x180049460 (LdrpUnloadNode.c)
 *     LdrpResolveProcedureAddress @ 0x18006DB10 (LdrpResolveProcedureAddress.c)
 *     LdrpLoadEnclaveModule @ 0x1800D4588 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlRemoveInvertedFunctionTable @ 0x180033134 (RtlRemoveInvertedFunctionTable.c)
 *     RtlpInsertOrRemoveScpCfgFunctionTable @ 0x1800332D0 (RtlpInsertOrRemoveScpCfgFunctionTable.c)
 *     NtUnmapViewOfSection @ 0x180160590 (NtUnmapViewOfSection.c)
 */

NTSTATUS __fastcall LdrpUnmapModule(__int64 a1)
{
  __int64 v2; // rcx
  NTSTATUS result; // eax

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    if ( (*(_DWORD *)(a1 + 104) & 0x200) != 0 )
      RtlRemoveInvertedFunctionTable(v2);
    if ( (*(_DWORD *)(a1 + 104) & 0x200000) != 0 )
      RtlpInsertOrRemoveScpCfgFunctionTable(*(PVOID *)(a1 + 48));
    result = NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *(PVOID *)(a1 + 48));
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
