/*
 * XREFs of HUBDSM_CheckingIfExitLatencyNeedsToBeIncreased @ 0x140020910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfExitLatencyNeedsToBeIncreased(__int64 a1)
{
  return *(_WORD *)(*(_QWORD *)(a1 + 960) + 2216LL) < *(_WORD *)(*(_QWORD *)(a1 + 960) + 2218LL) ? 4089 : 4061;
}
