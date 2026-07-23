/*
 * XREFs of HvlpGetLpcbByApicId @ 0x140581898
 * Callers:
 *     HvlGetLpIndexFromApicId @ 0x140580680 (HvlGetLpIndexFromApicId.c)
 *     HvlStartBootLogicalProcessors @ 0x140580E58 (HvlStartBootLogicalProcessors.c)
 *     KiQueryProcessorNode @ 0x1405B8EF0 (KiQueryProcessorNode.c)
 *     HvlInitializeProcessor @ 0x14070C95C (HvlInitializeProcessor.c)
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
