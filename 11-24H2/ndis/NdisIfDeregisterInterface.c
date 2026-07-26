/*
 * XREFs of NdisIfDeregisterInterface @ 0x140166920
 * Callers:
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14004EAC0 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisIfDeleteCompartment @ 0x1400CA980 (ndisIfDeleteCompartment.c)
 * Callees:
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x14002A7C0 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 */

void __stdcall NdisIfDeregisterInterface(NET_IFINDEX ifIndex)
{
  ndisIfDeregisterInterfaceEx(ifIndex, 0);
}
