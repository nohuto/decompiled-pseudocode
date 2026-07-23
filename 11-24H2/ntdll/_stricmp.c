/*
 * XREFs of _stricmp @ 0x1801207E0
 * Callers:
 *     AVrfpFindClosestThunkDuplicate @ 0x1801300EC (AVrfpFindClosestThunkDuplicate.c)
 *     ImportTablepInsertFunctionSorted @ 0x180133050 (ImportTablepInsertFunctionSorted.c)
 *     RtlComputeImportTableHash @ 0x1801330D0 (RtlComputeImportTableHash.c)
 *     LdrpGetDelayloadDescriptor @ 0x18015D564 (LdrpGetDelayloadDescriptor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl stricmp(const char *String1, const char *String2)
{
  return _ascii_stricmp((unsigned __int8 *)String1, (unsigned __int8 *)String2);
}
