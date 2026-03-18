/*
 * XREFs of HvlGetLpIndexFromApicId @ 0x14057FB50
 * Callers:
 *     PpmIdleUpdateHvStates @ 0x140754310 (PpmIdleUpdateHvStates.c)
 * Callees:
 *     HvlpGetLpcbByApicId @ 0x140580D68 (HvlpGetLpcbByApicId.c)
 */

__int64 HvlGetLpIndexFromApicId()
{
  __int64 LpcbByApicId; // rax

  if ( (HvlpFlags & 2) != 0 && (LpcbByApicId = HvlpGetLpcbByApicId()) != 0 )
    return *(unsigned int *)(LpcbByApicId + 4);
  else
    return 0xFFFFFFFFLL;
}
