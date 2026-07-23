/*
 * XREFs of RtlIsNtDdiVersionAvailable @ 0x14045D9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsNtDdiVersionAvailable(ULONG Version)
{
  return !(_WORD)Version && Version <= 0xA000010;
}
