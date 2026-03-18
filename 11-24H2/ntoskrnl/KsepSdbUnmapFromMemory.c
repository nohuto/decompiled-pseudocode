/*
 * XREFs of KsepSdbUnmapFromMemory @ 0x14095CBB4
 * Callers:
 *     KseShimDatabaseClose @ 0x14095C27C (KseShimDatabaseClose.c)
 *     KseShimDatabaseOpen @ 0x14095C42C (KseShimDatabaseOpen.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x14026086C (MiRemoveFromSystemSpace.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     SdbReleaseDatabase @ 0x14095CC2C (SdbReleaseDatabase.c)
 */

void __fastcall KsepSdbUnmapFromMemory(_QWORD *a1)
{
  ULONG_PTR v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  if ( *a1 )
  {
    SdbReleaseDatabase();
    *a1 = 0LL;
  }
  v2 = a1[1];
  if ( v2 )
  {
    MiRemoveFromSystemSpace(v2, 1);
    a1[1] = 0LL;
  }
  v3 = (void *)a1[4];
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    a1[4] = 0LL;
  }
  v4 = (void *)a1[3];
  if ( v4 )
  {
    ZwClose(v4);
    a1[3] = 0LL;
  }
  v5 = (void *)a1[2];
  if ( v5 )
  {
    ZwClose(v5);
    a1[2] = 0LL;
  }
}
