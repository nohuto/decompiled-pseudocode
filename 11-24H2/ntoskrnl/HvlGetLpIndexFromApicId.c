/*
 * XREFs of HvlGetLpIndexFromApicId @ 0x140583300
 * Callers:
 *     PpmIdleUpdateHvStates @ 0x140763DD0 (PpmIdleUpdateHvStates.c)
 * Callees:
 *     HvlpGetLpcbByApicId @ 0x140584518 (HvlpGetLpcbByApicId.c)
 */

__int64 HvlGetLpIndexFromApicId()
{
  __int64 LpcbByApicId; // rax

  if ( (HvlpFlags & 2) != 0 && (LpcbByApicId = HvlpGetLpcbByApicId()) != 0 )
    return *(unsigned int *)(LpcbByApicId + 4);
  else
    return 0xFFFFFFFFLL;
}
