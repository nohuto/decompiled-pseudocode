/*
 * XREFs of HvlGetQpcBias @ 0x1405871C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HvlGetQpcBias()
{
  return *((_QWORD *)HvlpReferenceTscPage + 3);
}
