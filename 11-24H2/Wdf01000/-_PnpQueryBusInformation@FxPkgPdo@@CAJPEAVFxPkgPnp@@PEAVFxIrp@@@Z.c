/*
 * XREFs of ?_PnpQueryBusInformation@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x140079440
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x14002D90C (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?HandleQueryBusInformation@FxPkgPnp@@QEAAJPEAVFxIrp@@@Z @ 0x140079488 (-HandleQueryBusInformation@FxPkgPnp@@QEAAJPEAVFxIrp@@@Z.c)
 */

__int64 __fastcall FxPkgPdo::_PnpQueryBusInformation(FxPkgPnp *This, FxIrp *Irp)
{
  unsigned int BusInformation; // eax

  BusInformation = FxPkgPnp::HandleQueryBusInformation(
                     *(FxPkgPnp **)(*(_QWORD *)&This->m_DeviceBase[1].m_ObjectFlags + 648LL),
                     Irp);
  return FxPkgPnp::CompletePnpRequest(This, Irp, BusInformation);
}
