/*
 * XREFs of RtlQueryDepthSList @ 0x1800E3D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WORD __stdcall RtlQueryDepthSList(PSLIST_HEADER ListHead)
{
  return ListHead->Alignment;
}
