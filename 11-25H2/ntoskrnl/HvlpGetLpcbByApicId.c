/*
 * XREFs of HvlpGetLpcbByApicId @ 0x140580D68
 * Callers:
 *     HvlGetLpIndexFromApicId @ 0x14057FB50 (HvlGetLpIndexFromApicId.c)
 *     HvlStartBootLogicalProcessors @ 0x140580328 (HvlStartBootLogicalProcessors.c)
 *     KiQueryProcessorNode @ 0x1405B7A20 (KiQueryProcessorNode.c)
 *     HvlInitializeProcessor @ 0x140702EEC (HvlInitializeProcessor.c)
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
