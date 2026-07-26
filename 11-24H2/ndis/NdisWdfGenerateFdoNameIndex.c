/*
 * XREFs of NdisWdfGenerateFdoNameIndex @ 0x140094AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NdisWdfGenerateFdoNameIndex()
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&ndisFdoIndex);
}
