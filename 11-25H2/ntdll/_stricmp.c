/*
 * XREFs of _stricmp @ 0x180124090
 * Callers:
 *     AVrfpFindClosestThunkDuplicate @ 0x18013399C (AVrfpFindClosestThunkDuplicate.c)
 *     ImportTablepInsertFunctionSorted @ 0x1801366D0 (ImportTablepInsertFunctionSorted.c)
 *     RtlComputeImportTableHash @ 0x180136750 (RtlComputeImportTableHash.c)
 *     LdrpGetDelayloadDescriptor @ 0x1801606B4 (LdrpGetDelayloadDescriptor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl stricmp(const char *String1, const char *String2)
{
  return _ascii_stricmp((unsigned __int8 *)String1, (unsigned __int8 *)String2);
}
