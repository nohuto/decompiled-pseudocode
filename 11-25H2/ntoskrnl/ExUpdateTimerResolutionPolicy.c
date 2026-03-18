/*
 * XREFs of ExUpdateTimerResolutionPolicy @ 0x1409CCCAC
 * Callers:
 *     PspSetProcessTimerResolutionPolicy @ 0x1409CCC90 (PspSetProcessTimerResolutionPolicy.c)
 * Callees:
 *     ExpUpdateTimerResolution @ 0x140276C80 (ExpUpdateTimerResolution.c)
 *     PoTraceSystemTimerResolutionIgnore @ 0x1404AD974 (PoTraceSystemTimerResolutionIgnore.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x1409CCD20 (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x1409CCD84 (ExReleaseTimeRefreshLockExclusive.c)
 */

__int64 __fastcall ExUpdateTimerResolutionPolicy(__int64 a1, char a2)
{
  int v2; // r8d
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( KeDisableLowQosTimerResolution )
  {
    v2 = *(_DWORD *)(a1 + 1532);
    if ( a2 )
    {
      result = 0x4000000LL;
      if ( (v2 & 0x4000000) != 0 )
        return result;
      _InterlockedOr((volatile signed __int32 *)(a1 + 1532), 0x4000000u);
    }
    else
    {
      if ( (v2 & 0x4000000) == 0 )
        return result;
      _InterlockedAnd((volatile signed __int32 *)(a1 + 1532), 0xFBFFFFFF);
    }
    result = *(_DWORD *)(a1 + 500) >> 12;
    if ( (*(_DWORD *)(a1 + 500) & 0x1000) != 0 )
    {
      PoTraceSystemTimerResolutionIgnore(a1);
      ExAcquireTimeRefreshLockExclusive(v5, v4);
      ExpUpdateTimerResolution(0, 0, 0LL);
      return ExReleaseTimeRefreshLockExclusive();
    }
  }
  return result;
}
