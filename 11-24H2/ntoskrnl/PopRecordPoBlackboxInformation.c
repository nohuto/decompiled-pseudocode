/*
 * XREFs of PopRecordPoBlackboxInformation @ 0x140765D88
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1405D58C0 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopRecordPoIrpBlackboxInformation @ 0x1404BD7D4 (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1404C2E3C (PopRecordPowerWatchdogBlackboxInformation.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x1405DE620 (PopRecordPepWorkorderBlackboxInformation.c)
 */

void PopRecordPoBlackboxInformation()
{
  PopRecordPoIrpBlackboxInformation();
  PopRecordPepWorkorderBlackboxInformation();
  PopRecordPowerWatchdogBlackboxInformation();
}
