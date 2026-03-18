/*
 * XREFs of HalpHvQueryHyperlaunchEntrypoint @ 0x140558DEC
 * Callers:
 *     HaliQuerySystemInformation @ 0x140B6B760 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *HalpHvQueryHyperlaunchEntrypoint())()
{
  return HalpLMStubForVM;
}
