/*
 * XREFs of ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x140048340
 * Callers:
 *     ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x140153530 (-Disarm@NdisWatchdogState@@QEAAXXZ.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14016B5D0 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
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
