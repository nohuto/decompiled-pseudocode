/*
 * XREFs of MiZeroThreadContextPrepareToWait @ 0x14020EEC4
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020F1F0 (MiBackgroundZeroLocalPages.c)
 * Callees:
 *     MiFlushZeroPageHeatBatch @ 0x14046B9E4 (MiFlushZeroPageHeatBatch.c)
 *     MiFreeHardwareDescriptor @ 0x140684100 (MiFreeHardwareDescriptor.c)
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
