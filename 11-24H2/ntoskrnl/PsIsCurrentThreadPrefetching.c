/*
 * XREFs of PsIsCurrentThreadPrefetching @ 0x140441F00
 * Callers:
 *     MiShareExistingControlArea @ 0x14098C830 (MiShareExistingControlArea.c)
 *     MiCreateImageFileMap @ 0x14098DFC0 (MiCreateImageFileMap.c)
 * Callees:
 *     <none>
 */

BOOLEAN PsIsCurrentThreadPrefetching(void)
{
  return ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0;
}
