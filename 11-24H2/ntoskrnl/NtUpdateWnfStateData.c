/*
 * XREFs of NtUpdateWnfStateData @ 0x1409027A0
 * Callers:
 *     SepSecureBootCheckForUpdates @ 0x140C3CD14 (SepSecureBootCheckForUpdates.c)
 * Callees:
 *     ExpNtUpdateWnfStateData @ 0x1409027E0 (ExpNtUpdateWnfStateData.c)
 */

NTSTATUS __cdecl NtUpdateWnfStateData(
        PCWNF_STATE_NAME StateName,
        const void *Buffer,
        ULONG Length,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        WNF_CHANGE_STAMP MatchingChangeStamp,
        LOGICAL CheckStamp)
{
  return ExpNtUpdateWnfStateData((void *)StateName, (void *)ExplicitScope, MatchingChangeStamp, CheckStamp, 1);
}
