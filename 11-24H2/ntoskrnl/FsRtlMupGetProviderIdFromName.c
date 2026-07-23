/*
 * XREFs of FsRtlMupGetProviderIdFromName @ 0x1407086E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall FsRtlMupGetProviderIdFromName(PCUNICODE_STRING pProviderName, PULONG32 pProviderId)
{
  if ( pFsRtlpMupCalls )
    return guard_dispatch_icall_no_overrides(pProviderName, pProviderId);
  else
    return -1073741637;
}
