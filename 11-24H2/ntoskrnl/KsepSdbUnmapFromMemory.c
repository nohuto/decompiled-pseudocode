/*
 * XREFs of KsepSdbUnmapFromMemory @ 0x140944674
 * Callers:
 *     KseShimDatabaseClose @ 0x140943D3C (KseShimDatabaseClose.c)
 *     KseShimDatabaseOpen @ 0x140943EEC (KseShimDatabaseOpen.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x140290E7C (MiRemoveFromSystemSpace.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     SdbReleaseDatabase @ 0x1409446EC (SdbReleaseDatabase.c)
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
