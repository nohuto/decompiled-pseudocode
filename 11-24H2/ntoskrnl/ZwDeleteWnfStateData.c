/*
 * XREFs of ZwDeleteWnfStateData @ 0x1406A8FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteWnfStateData(PCWNF_STATE_NAME StateName, const void *ExplicitScope)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
