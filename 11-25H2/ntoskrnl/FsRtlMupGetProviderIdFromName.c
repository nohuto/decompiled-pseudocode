/*
 * XREFs of FsRtlMupGetProviderIdFromName @ 0x1406FEC40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall FsRtlMupGetProviderIdFromName(PCUNICODE_STRING pProviderName, PULONG32 pProviderId)
{
  if ( pFsRtlpMupCalls )
    return guard_dispatch_icall_no_overrides(pProviderName);
  else
    return -1073741637;
}
