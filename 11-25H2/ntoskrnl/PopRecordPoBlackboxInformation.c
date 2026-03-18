/*
 * XREFs of PopRecordPoBlackboxInformation @ 0x1407563A8
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1405D39C0 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopRecordPoIrpBlackboxInformation @ 0x1404C38F0 (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1404C9650 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x1405D8260 (PopRecordPepWorkorderBlackboxInformation.c)
 */

void PopRecordPoBlackboxInformation()
{
  PopRecordPoIrpBlackboxInformation();
  PopRecordPepWorkorderBlackboxInformation();
  PopRecordPowerWatchdogBlackboxInformation();
}
