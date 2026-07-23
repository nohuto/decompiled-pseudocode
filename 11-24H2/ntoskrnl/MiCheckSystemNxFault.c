/*
 * XREFs of MiCheckSystemNxFault @ 0x1404939B0
 * Callers:
 *     MiRaisedIrqlFault @ 0x1402FADDC (MiRaisedIrqlFault.c)
 *     MiCheckSystemPageTables @ 0x1402FC6C0 (MiCheckSystemPageTables.c)
 *     MiSystemFault @ 0x1402FC7E0 (MiSystemFault.c)
 *     MiLargePageFault @ 0x1404C1204 (MiLargePageFault.c)
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
