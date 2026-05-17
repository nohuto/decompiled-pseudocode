/*
 * XREFs of RtlGetLengthWithoutLastFullDosOrNtPathElement @ 0x18010D770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetLengthWithoutLastFullDosOrNtPathElement(__int64 a1, unsigned __int16 *a2, int *a3)
{
  return RtlpGetLengthWithoutLastPathElement(a1, (__int64)a2, a2, a3);
}
