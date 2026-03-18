/*
 * XREFs of RtlFlushNonVolatileMemory @ 0x1404F89F0
 * Callers:
 *     CcCopyToCacheHelper @ 0x140404E90 (CcCopyToCacheHelper.c)
 *     RtlWriteNonVolatileMemory @ 0x1404A4BB0 (RtlWriteNonVolatileMemory.c)
 *     RtlFillNonVolatileMemory @ 0x1405E20C0 (RtlFillNonVolatileMemory.c)
 *     RtlFlushNonVolatileMemoryRanges @ 0x1405E2170 (RtlFlushNonVolatileMemoryRanges.c)
 * Callees:
 *     RtlDrainNonVolatileFlush @ 0x1405DBDA0 (RtlDrainNonVolatileFlush.c)
 */

__int64 __fastcall RtlFlushNonVolatileMemory(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v7; // rdx

  if ( (a1 & 1) == 0 )
    return 3221225485LL;
  if ( (a1 & 2) != 0 )
  {
    _RCX = (char *)(a2 & -RtlpClFlushSize);
    v7 = a3 + a2;
    if ( RtlpOptimalFlushMethod == 2 )
    {
      while ( (unsigned __int64)_RCX < v7 )
      {
        __asm { clwb    byte ptr [rcx] }
        _RCX += RtlpClFlushSize;
      }
    }
    else if ( RtlpOptimalFlushMethod == 3 )
    {
      while ( (unsigned __int64)_RCX < v7 )
      {
        __asm { clflushopt byte ptr [rcx] }
        _RCX += RtlpClFlushSize;
      }
    }
    else
    {
      while ( (unsigned __int64)_RCX < v7 )
      {
        _mm_clflush(_RCX);
        _RCX += RtlpClFlushSize;
      }
    }
    if ( (a4 & 1) == 0 )
      RtlDrainNonVolatileFlush(a1);
  }
  return 0LL;
}
