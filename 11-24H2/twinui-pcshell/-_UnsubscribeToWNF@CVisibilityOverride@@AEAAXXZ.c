/*
 * XREFs of ?_UnsubscribeToWNF@CVisibilityOverride@@AEAAXXZ @ 0x180209694
 * Callers:
 *     ??1CVisibilityOverride@@UEAA@XZ @ 0x18020962C (--1CVisibilityOverride@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisibilityOverride::_UnsubscribeToWNF(CVisibilityOverride *this)
{
  if ( *((_QWORD *)this + 7) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)this + 7) = 0LL;
  }
  if ( *((_QWORD *)this + 8) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)this + 8) = 0LL;
  }
}
