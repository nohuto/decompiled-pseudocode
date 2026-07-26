/*
 * XREFs of ??_GNdisHistogramEntry@@QEAAPEAXI@Z @ 0x1401387B0
 * Callers:
 *     ndisAllocateHistogramEntry @ 0x1401388A8 (ndisAllocateHistogramEntry.c)
 *     ndisHistogramDeleteAllEntries @ 0x140138C60 (ndisHistogramDeleteAllEntries.c)
 * Callees:
 *     ?reset@?$unique_ptr@VKHistogram@@U?$default_delete@VKHistogram@@@wistd@@@wistd@@QEAAXPEAVKHistogram@@@Z @ 0x1400A318C (-reset@-$unique_ptr@VKHistogram@@U-$default_delete@VKHistogram@@@wistd@@@wistd@@QEAAXPEAVKHistog.c)
 */

void **__fastcall NdisHistogramEntry::`scalar deleting destructor'(void **P)
{
  wistd::unique_ptr<KHistogram,wistd::default_delete<KHistogram>>::reset(P + 4, 0LL);
  if ( P )
    ExFreePoolWithTag(P, 0x6568444Eu);
  return P;
}
