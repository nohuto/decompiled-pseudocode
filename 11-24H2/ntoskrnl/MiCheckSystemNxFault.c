/*
 * XREFs of MiCheckSystemNxFault @ 0x140499024
 * Callers:
 *     MiCheckSystemPageTables @ 0x140229450 (MiCheckSystemPageTables.c)
 *     MiSystemFault @ 0x140229570 (MiSystemFault.c)
 *     MiRaisedIrqlFault @ 0x140245EB8 (MiRaisedIrqlFault.c)
 *     MiLargePageFault @ 0x1403F38B4 (MiLargePageFault.c)
 *     MiValidFault @ 0x1404F2C70 (MiValidFault.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall MiCheckSystemNxFault(__int64 a1, signed __int64 a2, unsigned int a3)
{
  if ( (*(_BYTE *)(a1 + 8) & 0x10) != 0 )
  {
    if ( (KeFeatureBits & 1) != 0 && (a2 & 4) != 0 )
      KeBugCheckEx(0xFCu, *(_QWORD *)a1, a2, *(_QWORD *)(a1 + 16), a3 | 0x80000000LL);
    if ( a2 < 0 )
      KeBugCheckEx(0xFCu, *(_QWORD *)a1, a2, *(_QWORD *)(a1 + 16), a3);
  }
}
