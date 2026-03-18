/*
 * XREFs of PsIsCurrentThreadPrefetching @ 0x14044BBF0
 * Callers:
 *     MiShareExistingControlArea @ 0x14093DCC0 (MiShareExistingControlArea.c)
 *     MiCreateImageFileMap @ 0x14093F578 (MiCreateImageFileMap.c)
 * Callees:
 *     <none>
 */

BOOLEAN PsIsCurrentThreadPrefetching(void)
{
  return ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0;
}
