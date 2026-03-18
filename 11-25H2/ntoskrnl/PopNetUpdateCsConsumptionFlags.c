/*
 * XREFs of PopNetUpdateCsConsumptionFlags @ 0x140A84DE4
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1404B4B70 (PopNetEvaluationWorkerCallback.c)
 *     PopPdcCsDeviceNotification @ 0x140A84B78 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     <none>
 */

bool PopNetUpdateCsConsumptionFlags()
{
  bool result; // al

  if ( qword_140E279C8 )
  {
    if ( (word_140E27A98 & 0x100) == 0 )
    {
      result = PopNetCompliantNicCount != 0;
      HIBYTE(word_140E27A98) = (PopNetCompliantNicCount != 0) | HIBYTE(word_140E27A98) & 0xFE;
    }
  }
  return result;
}
