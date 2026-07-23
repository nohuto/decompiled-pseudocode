/*
 * XREFs of SdbpCleanupLocalDatabaseSupport @ 0x140944848
 * Callers:
 *     SdbReleaseDatabase @ 0x1409446EC (SdbReleaseDatabase.c)
 * Callees:
 *     SdbpCloseLocalDatabaseEx @ 0x1408068D4 (SdbpCloseLocalDatabaseEx.c)
 */

__int64 __fastcall SdbpCleanupLocalDatabaseSupport(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  int v5; // eax

  if ( (*(_DWORD *)(a1 + 36) & 0xFFF8) != 0 )
  {
    for ( i = 3; i < 0x10; ++i )
    {
      v5 = *(_DWORD *)(a1 + 36);
      if ( _bittest(&v5, i) )
        SdbpCloseLocalDatabaseEx(a1, a2, i);
    }
  }
  if ( *(_QWORD *)(a1 + 24) )
    SdbpCloseLocalDatabaseEx(a1, a2, 1u);
  return 1LL;
}
