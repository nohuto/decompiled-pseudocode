/*
 * XREFs of PopNetUpdateCsConsumptionFlags @ 0x140A89BD4
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1404B4490 (PopNetEvaluationWorkerCallback.c)
 *     PopPdcCsDeviceNotification @ 0x140A89968 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     <none>
 */

bool PopNetUpdateCsConsumptionFlags()
{
  bool result; // al

  if ( qword_140E27C08 )
  {
    if ( (word_140E27CD8 & 0x100) == 0 )
    {
      result = PopNetCompliantNicCount != 0;
      HIBYTE(word_140E27CD8) = (PopNetCompliantNicCount != 0) | HIBYTE(word_140E27CD8) & 0xFE;
    }
  }
  return result;
}
