/*
 * XREFs of StorIsEventQueueEmpty @ 0x1400A1DB0
 * Callers:
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x14009DAF8 (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitHierarchicalReset @ 0x14009F474 (RaidUnitHierarchicalReset.c)
 * Callees:
 *     <none>
 */

char __fastcall StorIsEventQueueEmpty(__int64 a1)
{
  char v1; // dl
  unsigned int i; // r8d

  v1 = 1;
  for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
  {
    if ( *(_QWORD *)(a1 + ((i + 1LL) << 6)) != a1 + ((i + 1LL) << 6) )
      return 0;
  }
  return v1;
}
