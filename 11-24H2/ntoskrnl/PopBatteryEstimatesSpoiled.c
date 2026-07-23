/*
 * XREFs of PopBatteryEstimatesSpoiled @ 0x140A7D4C4
 * Callers:
 *     PopEstimateChargeTime @ 0x140A7D338 (PopEstimateChargeTime.c)
 *     PopBatteryWorker @ 0x140AC5DB0 (PopBatteryWorker.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 */

char PopBatteryEstimatesSpoiled()
{
  char v0; // bl

  if ( (unsigned __int64)PopEstimateSpoiledUntilTime < MEMORY[0xFFFFF78000000008] )
    return 0;
  v0 = 1;
  DbgPrintEx(0x92u, 3u, "Battery estimate suppressed\n");
  return v0;
}
