/*
 * XREFs of NtUpdateWnfStateData @ 0x1408E4340
 * Callers:
 *     SepSecureBootCheckForUpdates @ 0x140C298EC (SepSecureBootCheckForUpdates.c)
 * Callees:
 *     ExpNtUpdateWnfStateData @ 0x1408E4380 (ExpNtUpdateWnfStateData.c)
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
