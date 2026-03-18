/*
 * XREFs of PsIsCurrentThreadPrefetching @ 0x14044ADC0
 * Callers:
 *     MiShareExistingControlArea @ 0x1409425C0 (MiShareExistingControlArea.c)
 *     MiCreateImageFileMap @ 0x140944150 (MiCreateImageFileMap.c)
 * Callees:
 *     <none>
 */

BOOLEAN PsIsCurrentThreadPrefetching(void)
{
  return ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0;
}
