/*
 * XREFs of MiMirrorInSingleProcessorMode @ 0x14026C0E4
 * Callers:
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiAssignInitialPageAttribute @ 0x14026C070 (MiAssignInitialPageAttribute.c)
 *     MiSystemInSingleProcessorMode @ 0x14066FC00 (MiSystemInSingleProcessorMode.c)
 *     MmGetCacheAttributeEx @ 0x1406707F0 (MmGetCacheAttributeEx.c)
 * Callees:
 *     <none>
 */

bool MiMirrorInSingleProcessorMode()
{
  if ( dword_140E3018C != 2 )
    return 0;
  if ( (struct _KTHREAD *)qword_140E301C8 == KeGetCurrentThread() )
    return 1;
  if ( !qword_140E301C8 || !_bittest64(&MiFlags, 0x28u) )
    return 0;
  return KeGetCurrentIrql() == 15;
}
