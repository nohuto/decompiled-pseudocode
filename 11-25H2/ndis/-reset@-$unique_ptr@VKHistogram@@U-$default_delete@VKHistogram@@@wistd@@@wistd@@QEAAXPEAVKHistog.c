/*
 * XREFs of ?reset@?$unique_ptr@VKHistogram@@U?$default_delete@VKHistogram@@@wistd@@@wistd@@QEAAXPEAVKHistogram@@@Z @ 0x1400AB33C
 * Callers:
 *     ??_GNdisHistogramEntry@@QEAAPEAXI@Z @ 0x1401437B0 (--_GNdisHistogramEntry@@QEAAPEAXI@Z.c)
 *     ndisAllocateHistogramEntry @ 0x1401438A8 (ndisAllocateHistogramEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<KHistogram,wistd::default_delete<KHistogram>>::reset(void **a1, void *a2)
{
  void *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    ExFreePoolWithTag(v2, 0x7473484Bu);
}
