/*
 * XREFs of HvlQueryActiveHypervisorProcessorCount @ 0x1405807C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryActiveHypervisorProcessorCount(_DWORD *a1)
{
  if ( (HvlpFlags & 2) == 0 )
    return 3221225473LL;
  *a1 = HvlpActiveProcessorCount;
  return 0LL;
}
