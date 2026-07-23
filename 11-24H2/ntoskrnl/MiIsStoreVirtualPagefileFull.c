/*
 * XREFs of MiIsStoreVirtualPagefileFull @ 0x14049DEC8
 * Callers:
 *     MiCanFlushMakeProgress @ 0x140261320 (MiCanFlushMakeProgress.c)
 *     MiFillNoReservationCluster @ 0x1402EC57C (MiFillNoReservationCluster.c)
 *     MiGatherPagefilePages @ 0x1402F9BC8 (MiGatherPagefilePages.c)
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 *     MiStoreExtendVirtualPagefile @ 0x1404F3E10 (MiStoreExtendVirtualPagefile.c)
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
