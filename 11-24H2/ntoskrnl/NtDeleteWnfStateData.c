/*
 * XREFs of NtDeleteWnfStateData @ 0x1407BFFD0
 * Callers:
 *     <none>
 * Callees:
 *     ExpNtDeleteWnfStateData @ 0x1407BFBF8 (ExpNtDeleteWnfStateData.c)
 */

NTSTATUS __cdecl NtDeleteWnfStateData(PCWNF_STATE_NAME StateName, const void *ExplicitScope)
{
  return ExpNtDeleteWnfStateData((void *)StateName, (__int64)ExplicitScope, 1);
}
