/*
 * XREFs of ??3?$KALLOCATOR@$0GHGIEEEO@$00@@SAXPEAX@Z @ 0x140143788
 * Callers:
 *     ?ndisReinitializeHistograms@@YAJXZ @ 0x140143CD8 (-ndisReinitializeHistograms@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall KALLOCATOR<1734886478,1>::operator delete(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x6768444Eu);
}
