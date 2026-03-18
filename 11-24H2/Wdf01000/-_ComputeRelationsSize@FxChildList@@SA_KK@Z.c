/*
 * XREFs of ?_ComputeRelationsSize@FxChildList@@SA_KK@Z @ 0x14002F644
 * Callers:
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x140030B24 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x140062AEC (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxChildList::_ComputeRelationsSize(unsigned int Count)
{
  if ( Count )
    return 8LL * (Count - 1) + 16;
  else
    return 4LL;
}
