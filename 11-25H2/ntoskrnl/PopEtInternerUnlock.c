/*
 * XREFs of PopEtInternerUnlock @ 0x1409621B0
 * Callers:
 *     RtlInternEntryDereference @ 0x140961FE0 (RtlInternEntryDereference.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 */

__int64 PopEtInternerUnlock()
{
  return PopReleaseRwLock((signed __int64 *)(PopEtGlobals + 40));
}
