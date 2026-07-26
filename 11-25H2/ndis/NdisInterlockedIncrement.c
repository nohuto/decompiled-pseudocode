/*
 * XREFs of NdisInterlockedIncrement @ 0x1400DC680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisInterlockedIncrement(volatile signed __int32 *a1)
{
  return (unsigned int)_InterlockedIncrement(a1);
}
