/*
 * XREFs of HvlpDiscoverTopologyComplete @ 0x140C1B6CC
 * Callers:
 *     HvlPhase2Initialize @ 0x14057FF00 (HvlPhase2Initialize.c)
 * Callees:
 *     HvlpDiscoverTopologyWorker @ 0x14070CC94 (HvlpDiscoverTopologyWorker.c)
 */

void HvlpDiscoverTopologyComplete()
{
  _DWORD *v0; // rbx
  unsigned int i; // ebp
  unsigned int v2; // r9d
  unsigned int v3; // r8d
  _DWORD *v4; // rdx
  char v5; // al
  char v6; // r10
  char v7; // cl

  v0 = HvlpLogicalProcessorRegions;
  for ( i = 0; i < (unsigned int)HvlpLogicalProcessorCount; v0 += 26 )
  {
    if ( v0[5] == -1 )
      HvlpDiscoverTopologyWorker();
    v2 = v0[3];
    if ( v2 > dword_140E3EE08 )
      dword_140E3EE08 = v0[3];
    v3 = v0[4];
    if ( v3 > dword_140E3EE0C )
      dword_140E3EE0C = v0[4];
    if ( *((_BYTE *)v0 + 98) )
    {
      v4 = HvlpLogicalProcessorRegions;
      v5 = 1;
      v6 = 1;
      if ( HvlpLogicalProcessorRegions == v0 )
        goto LABEL_17;
      do
      {
        if ( *((_BYTE *)v4 + 98) )
        {
          v7 = 0;
          if ( v4[3] != v2 )
            v7 = v5;
          v5 = v7;
          if ( v4[4] == v3 )
            v6 = 0;
        }
        v4 += 26;
      }
      while ( v4 != v0 );
      if ( v5 )
LABEL_17:
        ++HvlpPackageCount;
      if ( v6 )
        ++HvlpCoreCount;
    }
    ++i;
  }
}
