/*
 * XREFs of HalpHvQueryHyperlaunchEntrypoint @ 0x1405564EC
 * Callers:
 *     HaliQuerySystemInformation @ 0x140B5BC60 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *HalpHvQueryHyperlaunchEntrypoint())()
{
  return HalpLMStubForVM;
}
