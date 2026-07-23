/*
 * XREFs of PiDrvDbDriverStoreNodesUpdated @ 0x14072A9BC
 * Callers:
 *     PiDrvDbRegisterNode @ 0x14072C178 (PiDrvDbRegisterNode.c)
 *     PiDrvDbUnregisterNode @ 0x14072DA18 (PiDrvDbUnregisterNode.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 */

NTSTATUS PiDrvDbDriverStoreNodesUpdated()
{
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  Buffer = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  return ZwUpdateWnfStateData(&WNF_PNPD_DRIVER_STORE_NODES_UDPATED, &Buffer, 4u, 0LL, 0LL, 0, 0);
}
