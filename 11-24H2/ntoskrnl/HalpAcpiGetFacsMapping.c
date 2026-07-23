/*
 * XREFs of HalpAcpiGetFacsMapping @ 0x14053ADD0
 * Callers:
 *     HalAcpiGetFacsMappingDispatch @ 0x14053A6B0 (HalAcpiGetFacsMappingDispatch.c)
 *     HaliInitPowerManagement @ 0x1406FFFA0 (HaliInitPowerManagement.c)
 * Callees:
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     HalpAcpiGetTableWork @ 0x14045F9FC (HalpAcpiGetTableWork.c)
 *     HalpAcpiCheckAndMapTable @ 0x14045FE34 (HalpAcpiCheckAndMapTable.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
