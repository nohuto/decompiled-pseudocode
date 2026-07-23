/*
 * XREFs of HalpHvQueryHyperlaunchEntrypoint @ 0x14055672C
 * Callers:
 *     HaliQuerySystemInformation @ 0x140B6CB90 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *HalpHvQueryHyperlaunchEntrypoint())()
{
  return HalpLMStubForVM;
}
