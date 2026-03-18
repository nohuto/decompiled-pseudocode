/*
 * XREFs of DbgkpLkmdSqmStatus @ 0x1406FC80C
 * Callers:
 *     DbgkCaptureLiveDump @ 0x1406FBB5C (DbgkCaptureLiveDump.c)
 * Callees:
 *     DbgkpLkmdSqmIncrementDword @ 0x14057B708 (DbgkpLkmdSqmIncrementDword.c)
 */

NTSTATUS __fastcall DbgkpLkmdSqmStatus(REGHANDLE a1, int *a2)
{
  if ( (a2[1] & 2) != 0 )
    DbgkpLkmdSqmIncrementDword(a1, 3297);
  if ( (a2[1] & 8) != 0 )
    DbgkpLkmdSqmIncrementDword(a1, 3298);
  if ( (a2[1] & 0x4000) != 0 )
    DbgkpLkmdSqmIncrementDword(a1, 3294);
  if ( (a2[1] & 0x8000) != 0 )
    DbgkpLkmdSqmIncrementDword(a1, 3295);
  if ( *a2 >= 0 )
    DbgkpLkmdSqmIncrementDword(a1, 3296);
  return DbgkpLkmdSqmIncrementDword(a1, 3293);
}
