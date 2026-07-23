/*
 * XREFs of TpWaitForJobNotification @ 0x180086370
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x18003E750 (TppBarrierAdjust.c)
 *     TppJobpRundownJob @ 0x180085608 (TppJobpRundownJob.c)
 *     TppJobpValidateJob @ 0x1800863AC (TppJobpValidateJob.c)
 */

int __fastcall TpWaitForJobNotification(_RTL_SRWLOCK *a1)
{
  int result; // eax

  result = TppJobpValidateJob(a1, 0LL);
  if ( result )
  {
    TppJobpRundownJob((__int64)a1);
    return TppBarrierAdjust(a1 + 16, 0, 1);
  }
  return result;
}
