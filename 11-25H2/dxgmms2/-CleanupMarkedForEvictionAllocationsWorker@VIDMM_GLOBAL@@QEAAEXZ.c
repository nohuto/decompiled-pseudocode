/*
 * XREFs of ?CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ @ 0x1400BBAF4
 * Callers:
 *     ?CleanupMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400F0CC8 (-CleanupMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ @ 0x1400BBBB8 (-CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ.c)
 */

char __fastcall VIDMM_GLOBAL::CleanupMarkedForEvictionAllocationsWorker(VIDMM_GLOBAL *this)
{
  char v2; // bl
  unsigned __int16 i; // di
  char v4; // r15
  unsigned __int16 v5; // si
  __int64 v6; // r14
  __int64 v7; // rcx

  v2 = 0;
  for ( i = 0; (unsigned int)i < *((_DWORD *)this + 1736); v2 |= v4 )
  {
    v4 = 0;
    v5 = 0;
    v6 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * i);
    if ( *(_DWORD *)(v6 + 64) )
    {
      do
      {
        v7 = *(_QWORD *)(*(_QWORD *)(v6 + 1648) + 8LL * v5);
        if ( (*(_DWORD *)(v7 + 104) & 0x1001) != 0 && *(_QWORD *)(v7 + 216) != v7 + 216 )
          v4 |= VIDMM_SEGMENT::CleanupMarkedForEvictionAllocations((VIDMM_SEGMENT *)v7) != 0;
        ++v5;
      }
      while ( (unsigned int)v5 < *(_DWORD *)(v6 + 64) );
    }
    ++i;
  }
  return v2;
}
