/*
 * XREFs of PopEtInternerUnlock @ 0x140905D50
 * Callers:
 *     RtlInternEntryDereference @ 0x140905B7C (RtlInternEntryDereference.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 */

__int64 PopEtInternerUnlock()
{
  return PopReleaseRwLock((signed __int64 *)(PopEtGlobals + 40));
}
