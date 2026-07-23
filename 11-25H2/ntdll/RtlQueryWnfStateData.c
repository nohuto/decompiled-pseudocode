/*
 * XREFs of RtlQueryWnfStateData @ 0x1800043B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x1800043E0 (RtlQueryWnfStateDataWithExplicitScope.c)
 */

NTSTATUS __cdecl RtlQueryWnfStateData(
        PWNF_CHANGE_STAMP ChangeStamp,
        WNF_STATE_NAME StateName,
        PWNF_USER_CALLBACK Callback,
        PVOID CallbackContext,
        PWNF_TYPE_ID TypeId)
{
  return RtlQueryWnfStateDataWithExplicitScope(
           (int)ChangeStamp,
           StateName.Data[0],
           0,
           (int)Callback,
           (__int64)CallbackContext,
           TypeId);
}
