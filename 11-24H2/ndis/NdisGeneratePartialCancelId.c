/*
 * XREFs of NdisGeneratePartialCancelId @ 0x140071B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

UCHAR NdisGeneratePartialCancelId(void)
{
  return _InterlockedExchangeAdd(&ndisCancelId, 1u) + 1;
}
