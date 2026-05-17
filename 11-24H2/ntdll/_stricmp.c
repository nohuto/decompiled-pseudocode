/*
 * XREFs of _stricmp @ 0x1801225B0
 * Callers:
 *     AVrfpFindClosestThunkDuplicate @ 0x180131EBC (AVrfpFindClosestThunkDuplicate.c)
 *     ImportTablepInsertFunctionSorted @ 0x180134E20 (ImportTablepInsertFunctionSorted.c)
 *     RtlComputeImportTableHash @ 0x180134EA0 (RtlComputeImportTableHash.c)
 *     LdrpGetDelayloadDescriptor @ 0x18015F1A4 (LdrpGetDelayloadDescriptor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl stricmp(const char *String1, const char *String2)
{
  return _ascii_stricmp((unsigned __int8 *)String1, (unsigned __int8 *)String2);
}
