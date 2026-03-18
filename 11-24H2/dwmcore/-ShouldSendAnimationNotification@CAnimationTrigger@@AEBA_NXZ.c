/*
 * XREFs of ?ShouldSendAnimationNotification@CAnimationTrigger@@AEBA_NXZ @ 0x1802212F0
 * Callers:
 *     ?TransitionTrue@CAnimationTrigger@@AEAAXXZ @ 0x180220F3C (-TransitionTrue@CAnimationTrigger@@AEAAXXZ.c)
 *     ?OnChanged@CAnimationTrigger@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1802211B0 (-OnChanged@CAnimationTrigger@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAnimationTrigger::ShouldSendAnimationNotification(CAnimationTrigger *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 10) )
  {
    if ( *((_QWORD *)this + 11) )
      return (*((_BYTE *)this + 128) & 2) == 0;
  }
  return result;
}
