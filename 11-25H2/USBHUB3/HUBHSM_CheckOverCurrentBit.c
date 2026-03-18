/*
 * XREFs of HUBHSM_CheckOverCurrentBit @ 0x1400089C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBHSM_CheckOverCurrentBit(__int64 a1)
{
  return (*(_BYTE *)(*(_QWORD *)(a1 + 960) + 788LL) & 2) != 0 ? 2041 : 2057;
}
