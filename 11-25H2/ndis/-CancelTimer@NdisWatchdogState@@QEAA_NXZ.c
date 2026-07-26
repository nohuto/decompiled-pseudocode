/*
 * XREFs of ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1400621E0
 * Callers:
 *     ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x14015FDA0 (-Disarm@NdisWatchdogState@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall NdisWatchdogState::CancelTimer(NdisWatchdogState *this)
{
  bool result; // al

  if ( KeCancelTimer((PKTIMER)this + 1) )
  {
    KeSetEvent((PRKEVENT)this + 7, 0, 0);
    result = 1;
    *((_DWORD *)this + 40) = 0;
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)this + 40, 0);
    return 0;
  }
  return result;
}
