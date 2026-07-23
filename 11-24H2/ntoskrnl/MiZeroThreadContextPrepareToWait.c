/*
 * XREFs of MiZeroThreadContextPrepareToWait @ 0x140331A20
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x140332260 (MiBackgroundZeroLocalPages.c)
 * Callees:
 *     MiFlushZeroPageHeatBatch @ 0x140462F20 (MiFlushZeroPageHeatBatch.c)
 *     MiFreeHardwareDescriptor @ 0x1404A6770 (MiFreeHardwareDescriptor.c)
 */

__int64 __fastcall MiZeroThreadContextPrepareToWait(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 680) )
  {
    MiFreeHardwareDescriptor(*(_QWORD *)(a1 + 336));
    *(_QWORD *)(a1 + 680) = 0LL;
  }
  return MiFlushZeroPageHeatBatch(a1);
}
