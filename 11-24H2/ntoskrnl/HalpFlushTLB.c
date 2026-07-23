/*
 * XREFs of HalpFlushTLB @ 0x1404F29C4
 * Callers:
 *     HalpAcpiCheckAndMapTable @ 0x14045FE34 (HalpAcpiCheckAndMapTable.c)
 *     HalpAcpiGetRsdt @ 0x14046014C (HalpAcpiGetRsdt.c)
 *     HalpMap @ 0x140460358 (HalpMap.c)
 *     HalpUnmapVirtualAddress @ 0x1404605A0 (HalpUnmapVirtualAddress.c)
 *     HalpMmZeroPageWithTemporaryMapping @ 0x140540938 (HalpMmZeroPageWithTemporaryMapping.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 */

char HalpFlushTLB()
{
  unsigned __int64 v0; // rax
  char v1; // r8
  unsigned __int64 v2; // rdx

  LOBYTE(v0) = HalpDisableInterrupts();
  v1 = v0;
  v2 = __readcr4();
  if ( (v2 & 0x20080) != 0 )
  {
    __writecr4(v2 ^ 0x80);
    __writecr4(v2);
  }
  else
  {
    v0 = __readcr3();
    __writecr3(v0);
  }
  if ( v1 )
    _enable();
  return v0;
}
