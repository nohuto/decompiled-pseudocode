/*
 * XREFs of PopRecordPoBlackboxInformation @ 0x1407663B8
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1405D83A0 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopRecordPoIrpBlackboxInformation @ 0x1404C229C (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1404C998C (PopRecordPowerWatchdogBlackboxInformation.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x1405E1000 (PopRecordPepWorkorderBlackboxInformation.c)
 */

void PopRecordPoBlackboxInformation()
{
  PopRecordPoIrpBlackboxInformation();
  PopRecordPepWorkorderBlackboxInformation();
  PopRecordPowerWatchdogBlackboxInformation();
}
