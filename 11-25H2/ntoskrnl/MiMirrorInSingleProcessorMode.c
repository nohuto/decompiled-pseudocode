/*
 * XREFs of MiMirrorInSingleProcessorMode @ 0x140390068
 * Callers:
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     MiAssignInitialPageAttribute @ 0x14038FFF4 (MiAssignInitialPageAttribute.c)
 *     MiSystemInSingleProcessorMode @ 0x140662EF0 (MiSystemInSingleProcessorMode.c)
 *     MmGetCacheAttributeEx @ 0x140663B00 (MmGetCacheAttributeEx.c)
 * Callees:
 *     <none>
 */

bool MiMirrorInSingleProcessorMode()
{
  if ( dword_140E2FE0C != 2 )
    return 0;
  if ( (struct _KTHREAD *)qword_140E2FE48 == KeGetCurrentThread() )
    return 1;
  if ( !qword_140E2FE48 || !_bittest64(&MiFlags, 0x28u) )
    return 0;
  return KeGetCurrentIrql() == 15;
}
