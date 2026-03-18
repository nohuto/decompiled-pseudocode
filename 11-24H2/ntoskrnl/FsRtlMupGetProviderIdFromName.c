/*
 * XREFs of FsRtlMupGetProviderIdFromName @ 0x14070AB20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall FsRtlMupGetProviderIdFromName(PCUNICODE_STRING pProviderName, PULONG32 pProviderId)
{
  __int64 v2; // r8
  __int64 v3; // r9

  if ( pFsRtlpMupCalls )
    return guard_dispatch_icall_no_overrides(pProviderName, pProviderId, v2, v3);
  else
    return -1073741637;
}
