/*
 * XREFs of TpWaitForJobNotification @ 0x180069C80
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x180011D50 (TppBarrierAdjust.c)
 *     TppJobpRundownJob @ 0x180069A78 (TppJobpRundownJob.c)
 *     TppJobpValidateJob @ 0x180069CBC (TppJobpValidateJob.c)
 */

struct _TEB *__fastcall TpWaitForJobNotification(__int64 a1)
{
  struct _TEB *result; // rax
  volatile signed __int32 **v3; // rdx
  unsigned __int64 v4; // r8

  result = (struct _TEB *)TppJobpValidateJob(a1, 0LL);
  if ( (_DWORD)result )
  {
    TppJobpRundownJob(a1, v3, v4);
    return TppBarrierAdjust((volatile signed __int64 *)(a1 + 128), 0, 1);
  }
  return result;
}
