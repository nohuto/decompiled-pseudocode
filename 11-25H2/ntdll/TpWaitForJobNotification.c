/*
 * XREFs of TpWaitForJobNotification @ 0x1800D69D0
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     TppJobpValidateJob @ 0x1800D6A0C (TppJobpValidateJob.c)
 *     TppJobpRundownJob @ 0x1800D6F9C (TppJobpRundownJob.c)
 */

struct _TEB *__fastcall TpWaitForJobNotification(__int64 a1)
{
  struct _TEB *result; // rax

  result = (struct _TEB *)TppJobpValidateJob(a1, 0LL);
  if ( (_DWORD)result )
  {
    TppJobpRundownJob(a1);
    return TppBarrierAdjust((volatile signed __int64 *)(a1 + 128), 0, 1);
  }
  return result;
}
