/*
 * XREFs of HalpAcpiGetFacsMapping @ 0x14053ACA0
 * Callers:
 *     HalAcpiGetFacsMappingDispatch @ 0x14053A580 (HalAcpiGetFacsMappingDispatch.c)
 *     HaliInitPowerManagement @ 0x1406F6570 (HaliInitPowerManagement.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     DbgPrint @ 0x1403A9600 (DbgPrint.c)
 *     HalpAcpiGetTableWork @ 0x1404131DC (HalpAcpiGetTableWork.c)
 *     HalpAcpiCheckAndMapTable @ 0x140413610 (HalpAcpiCheckAndMapTable.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpAcpiGetFacsMapping(__int64 a1)
{
  unsigned __int64 TableWork; // rax
  int v3; // [rsp+50h] [rbp+8h] BYREF
  int v4; // [rsp+54h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  if ( !HalpAcpiFacsMapping )
  {
    TableWork = HalpAcpiGetTableWork(0LL, 0x50434146u, 0LL, 0LL);
    if ( !TableWork )
    {
      DbgPrint("**** HalpAcpiGetFacsMapping: No FADT found.\n");
      KeBugCheckEx(0xA5u, 0x10009uLL, 0LL, 0LL, 0LL);
    }
    HalpAcpiFacsMapping = HalpAcpiCheckAndMapTable(
                            0LL,
                            *(unsigned int *)(TableWork + 36),
                            0x21u,
                            1396916550,
                            0LL,
                            0LL,
                            0,
                            &v3);
  }
  KeReleaseGuardedMutex(&HalpAcpiTableCacheLock);
  return HalpAcpiFacsMapping;
}
