/*
 * XREFs of HvlpGetLpcbByApicId @ 0x140584518
 * Callers:
 *     HvlGetLpIndexFromApicId @ 0x140583300 (HvlGetLpIndexFromApicId.c)
 *     HvlStartBootLogicalProcessors @ 0x140583AD8 (HvlStartBootLogicalProcessors.c)
 *     KiQueryProcessorNode @ 0x1405BB8C0 (KiQueryProcessorNode.c)
 *     HvlInitializeProcessor @ 0x14070EDCC (HvlInitializeProcessor.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall HvlpGetLpcbByApicId(int a1)
{
  _DWORD *result; // rax
  unsigned int i; // edx

  result = HvlpLogicalProcessorRegions;
  for ( i = 0; i < (unsigned int)HvlpLogicalProcessorCount; ++i )
  {
    if ( result[2] == a1 )
      return result;
    result += 26;
  }
  return 0LL;
}
