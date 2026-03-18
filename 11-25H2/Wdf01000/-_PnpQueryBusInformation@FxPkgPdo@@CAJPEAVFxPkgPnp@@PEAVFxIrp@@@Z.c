/*
 * XREFs of ?_PnpQueryBusInformation@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x140079920
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1400161AC (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?HandleQueryBusInformation@FxPkgPnp@@QEAAJPEAVFxIrp@@@Z @ 0x140079968 (-HandleQueryBusInformation@FxPkgPnp@@QEAAJPEAVFxIrp@@@Z.c)
 */

__int64 __fastcall FxPkgPdo::_PnpQueryBusInformation(FxPkgPnp *This, FxIrp *Irp)
{
  unsigned int BusInformation; // eax

  BusInformation = FxPkgPnp::HandleQueryBusInformation(
                     *(FxPkgPnp **)(*(_QWORD *)&This->m_DeviceBase[1].m_ObjectFlags + 648LL),
                     Irp);
  return FxPkgPnp::CompletePnpRequest(This, Irp, BusInformation);
}
