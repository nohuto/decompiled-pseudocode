/*
 * XREFs of SdbpCleanupUserSDBCache @ 0x14082AD5C
 * Callers:
 *     SdbReleaseDatabase @ 0x14082AC3C (SdbReleaseDatabase.c)
 * Callees:
 *     SdbpRemoveSDBLookupEntry @ 0x14082B458 (SdbpRemoveSDBLookupEntry.c)
 */

void __fastcall SdbpCleanupUserSDBCache(__int64 a1)
{
  __int64 i; // rax

  if ( a1 )
  {
    for ( i = *(_QWORD *)(a1 + 576); i; i = *(_QWORD *)(a1 + 576) )
      SdbpRemoveSDBLookupEntry(a1, i);
  }
}
