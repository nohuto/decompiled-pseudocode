/*
 * XREFs of SdbpCleanupUserSDBCache @ 0x14094480C
 * Callers:
 *     SdbReleaseDatabase @ 0x1409446EC (SdbReleaseDatabase.c)
 * Callees:
 *     SdbpRemoveSDBLookupEntry @ 0x140943848 (SdbpRemoveSDBLookupEntry.c)
 */

void __fastcall SdbpCleanupUserSDBCache(__int64 a1)
{
  _QWORD **i; // rax

  if ( a1 )
  {
    for ( i = *(_QWORD ***)(a1 + 576); i; i = *(_QWORD ***)(a1 + 576) )
      SdbpRemoveSDBLookupEntry(a1, i);
  }
}
