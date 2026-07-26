/*
 * XREFs of NdisGetSystemUpTime @ 0x1400D4E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisGetSystemUpTime(PULONG pSystemUpTime)
{
  *pSystemUpTime = MEMORY[0xFFFFF78000000320] * (int)ndisTimeIncrement / 10000LL;
}
