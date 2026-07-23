/*
 * XREFs of PopEtInternerUnlock @ 0x14099C9D0
 * Callers:
 *     RtlInternEntryDereference @ 0x14099C800 (RtlInternEntryDereference.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 */

__int64 PopEtInternerUnlock()
{
  return PopReleaseRwLock((signed __int64 *)(PopEtGlobals + 40));
}
