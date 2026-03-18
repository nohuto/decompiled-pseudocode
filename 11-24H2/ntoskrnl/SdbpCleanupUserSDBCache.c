/*
 * XREFs of SdbpCleanupUserSDBCache @ 0x14095CD4C
 * Callers:
 *     SdbReleaseDatabase @ 0x14095CC2C (SdbReleaseDatabase.c)
 * Callees:
 *     SdbpRemoveSDBLookupEntry @ 0x14095BD88 (SdbpRemoveSDBLookupEntry.c)
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
