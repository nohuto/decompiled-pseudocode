/*
 * XREFs of HalpFlushTLB @ 0x1404F50C4
 * Callers:
 *     HalpAcpiCheckAndMapTable @ 0x140264C3C (HalpAcpiCheckAndMapTable.c)
 *     HalpAcpiGetRsdt @ 0x1404789A4 (HalpAcpiGetRsdt.c)
 *     HalpUnmapVirtualAddress @ 0x140478B90 (HalpUnmapVirtualAddress.c)
 *     HalpMap @ 0x140478C5C (HalpMap.c)
 *     HalpMmZeroPageWithTemporaryMapping @ 0x140542FE8 (HalpMmZeroPageWithTemporaryMapping.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
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
