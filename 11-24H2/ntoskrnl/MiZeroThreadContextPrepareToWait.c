/*
 * XREFs of MiZeroThreadContextPrepareToWait @ 0x14020A440
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020A480 (MiBackgroundZeroLocalPages.c)
 * Callees:
 *     MiFlushZeroPageHeatBatch @ 0x140469FF0 (MiFlushZeroPageHeatBatch.c)
 *     MiFreeHardwareDescriptor @ 0x1404AC318 (MiFreeHardwareDescriptor.c)
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
