/*
 * XREFs of KeQuerySystemAllowedCpuSetAffinity @ 0x1402B0944
 * Callers:
 *     PpmCheckContinueExecution @ 0x1402B065C (PpmCheckContinueExecution.c)
 *     PpmParkSteerInterrupts @ 0x1402B0A40 (PpmParkSteerInterrupts.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 KeQuerySystemAllowedCpuSetAffinity()
{
  __int64 v0; // rbx
  __int64 result; // rax
  unsigned int v2; // ebp
  unsigned int v3; // edi
  unsigned __int64 *v4; // rsi
  unsigned __int64 v5; // r9
  __int64 v6; // r8
  unsigned __int64 v7; // rdx

  while ( 1 )
  {
    while ( 1 )
    {
      v0 = KiCpuSetSequence;
      if ( (KiCpuSetSequence & 1) == 0 )
        break;
      _mm_pause();
    }
    if ( PpmCachedSystemAllowedCpuSetVersion == KiCpuSetSequence )
      break;
    memset_0(&PpmCachedSystemAllowedCpuSet.8, 0, 8LL * PpmCachedSystemAllowedCpuSet.Count);
    PpmCachedSystemAllowedCpuSet.Count = 1;
    if ( KiRestrictedSystemCpuSetsActive )
    {
      v2 = (unsigned __int16)KiActiveGroups;
      v3 = 0;
      if ( KiActiveGroups )
      {
        v4 = (unsigned __int64 *)KiSystemAllowedCpuSets;
        do
        {
          v5 = *v4;
          v6 = 0LL;
          if ( *v4 )
          {
            do
            {
              _BitScanForward64(&v7, v5);
              v6 |= *((_QWORD *)KiCpuSetAffinities + 64 * v3 + (unsigned int)v7);
              v5 &= ~(1LL << v7);
            }
            while ( v5 );
            if ( v6 )
              KeAddGroupAffinityEx(&PpmCachedSystemAllowedCpuSet.Count, v3, v6);
          }
          ++v3;
          v4 += 2;
        }
        while ( v3 < v2 );
      }
    }
    else
    {
      KiCopyAffinityEx(&PpmCachedSystemAllowedCpuSet, PpmCachedSystemAllowedCpuSet.Size, &KeActiveProcessors);
    }
    result = KiCpuSetSequence;
    if ( KiCpuSetSequence == v0 )
    {
      PpmCachedSystemAllowedCpuSetVersion = v0;
      return result;
    }
  }
  return result;
}
