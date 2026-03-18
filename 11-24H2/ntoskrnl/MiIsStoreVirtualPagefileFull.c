/*
 * XREFs of MiIsStoreVirtualPagefileFull @ 0x1404A2F68
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402281F4 (MiStoreWriteModifiedPages.c)
 *     MiCanFlushMakeProgress @ 0x1402D0318 (MiCanFlushMakeProgress.c)
 *     MiFillNoReservationCluster @ 0x14036A7DC (MiFillNoReservationCluster.c)
 *     MiGatherPagefilePages @ 0x14039C8C8 (MiGatherPagefilePages.c)
 *     MiStoreExtendVirtualPagefile @ 0x1404F6510 (MiStoreExtendVirtualPagefile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsStoreVirtualPagefileFull(_DWORD *a1)
{
  unsigned int v2; // edx
  unsigned int *v3; // rcx
  unsigned int v4; // r9d
  unsigned __int64 v5; // rcx

  if ( a1[301] == -1 )
    return 0LL;
  v2 = 0;
  v3 = *(unsigned int **)&a1[2 * a1[301] + 4632];
  if ( v3[3] )
    return 0LL;
  v4 = v3[1];
  if ( *v3 < v4 )
    return 0LL;
  v5 = (unsigned int)a1[303];
  if ( ((*((_QWORD *)a1 + 2105) + 0x3FFFFLL) & 0xFFFFFFFFFFFC0000uLL) <= v5 )
    LODWORD(v5) = (a1[4210] + 0x3FFFF) & 0xFFFC0000;
  if ( (unsigned int)v5 <= v4 )
    return 1LL;
  LOBYTE(v2) = a1[308] != 0;
  return v2;
}
