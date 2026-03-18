/*
 * XREFs of HalpFlushTLB @ 0x1404F281C
 * Callers:
 *     HalpUnmapVirtualAddress @ 0x140411990 (HalpUnmapVirtualAddress.c)
 *     HalpMap @ 0x140412738 (HalpMap.c)
 *     HalpAcpiCheckAndMapTable @ 0x140413610 (HalpAcpiCheckAndMapTable.c)
 *     HalpAcpiGetRsdt @ 0x140413928 (HalpAcpiGetRsdt.c)
 *     HalpMmZeroPageWithTemporaryMapping @ 0x1405407B8 (HalpMmZeroPageWithTemporaryMapping.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
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
