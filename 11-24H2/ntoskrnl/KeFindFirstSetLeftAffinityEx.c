/*
 * XREFs of KeFindFirstSetLeftAffinityEx @ 0x14044C2E0
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14031ED40 (KiDeferredReadySingleThread.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1403CA530 (PpmUpdatePlatformIdleVeto.c)
 *     PnpReplacePartitionUnit @ 0x14072E220 (PnpReplacePartitionUnit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetLeftAffinityEx(__int16 *a1)
{
  __int16 v1; // dx
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx

  v1 = *a1;
  while ( --v1 >= 0 )
  {
    v2 = *(_QWORD *)&a1[4 * v1 + 4];
    if ( v2 )
    {
      _BitScanReverse64(&v3, v2);
      return *((unsigned int *)qword_140F21E78 + (unsigned int)((v1 << 6) + v3));
    }
  }
  return 0xFFFFFFFFLL;
}
