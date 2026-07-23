/*
 * XREFs of MiCleanupBestCandidatesContext @ 0x14048F3DC
 * Callers:
 *     MiFindLargePageMemory @ 0x140A8F22C (MiFindLargePageMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiCleanupBestCandidatesContext(void **a1, void *a2)
{
  void *v3; // rcx

  v3 = *a1;
  if ( v3 )
  {
    if ( v3 != a2 )
      ExFreePoolWithTag(v3, 0);
    *a1 = 0LL;
  }
}
