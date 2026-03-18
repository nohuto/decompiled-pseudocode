/*
 * XREFs of MiMirrorInSingleProcessorMode @ 0x1403A7018
 * Callers:
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiAssignInitialPageAttribute @ 0x1403A6FA4 (MiAssignInitialPageAttribute.c)
 *     MiSystemInSingleProcessorMode @ 0x14066EA30 (MiSystemInSingleProcessorMode.c)
 *     MmGetCacheAttributeEx @ 0x14066F620 (MmGetCacheAttributeEx.c)
 * Callees:
 *     <none>
 */

bool MiMirrorInSingleProcessorMode()
{
  if ( dword_140E3004C != 2 )
    return 0;
  if ( (struct _KTHREAD *)qword_140E30088 == KeGetCurrentThread() )
    return 1;
  if ( !qword_140E30088 || !_bittest64(&MiFlags, 0x28u) )
    return 0;
  return KeGetCurrentIrql() == 15;
}
