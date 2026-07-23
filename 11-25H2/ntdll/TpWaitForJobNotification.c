/*
 * XREFs of TpWaitForJobNotification @ 0x1800D69D0
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     TppJobpValidateJob @ 0x1800D6A0C (TppJobpValidateJob.c)
 *     TppJobpRundownJob @ 0x1800D6F9C (TppJobpRundownJob.c)
 */

int __fastcall TpWaitForJobNotification(_RTL_SRWLOCK *a1)
{
  int result; // eax

  result = TppJobpValidateJob(a1, 0LL);
  if ( result )
  {
    TppJobpRundownJob(a1);
    return TppBarrierAdjust(a1 + 16, 0, 1);
  }
  return result;
}
