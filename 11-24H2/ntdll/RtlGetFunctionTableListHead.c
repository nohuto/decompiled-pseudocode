/*
 * XREFs of RtlGetFunctionTableListHead @ 0x180120760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *RtlGetFunctionTableListHead()
{
  return &RtlpDynamicFunctionTable;
}
