/*
 * XREFs of PopNetUpdateCsConsumptionFlags @ 0x140A85FD4
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1404AECD0 (PopNetEvaluationWorkerCallback.c)
 *     PopPdcCsDeviceNotification @ 0x140A85D68 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     <none>
 */

bool PopNetUpdateCsConsumptionFlags()
{
  bool result; // al

  if ( qword_140E27D48 )
  {
    if ( (word_140E27E18 & 0x100) == 0 )
    {
      result = PopNetCompliantNicCount != 0;
      HIBYTE(word_140E27E18) = (PopNetCompliantNicCount != 0) | HIBYTE(word_140E27E18) & 0xFE;
    }
  }
  return result;
}
