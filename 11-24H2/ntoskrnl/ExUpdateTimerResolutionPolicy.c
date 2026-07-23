/*
 * XREFs of ExUpdateTimerResolutionPolicy @ 0x1409A929C
 * Callers:
 *     PspSetProcessTimerResolutionPolicy @ 0x1409A9280 (PspSetProcessTimerResolutionPolicy.c)
 * Callees:
 *     ExpUpdateTimerResolution @ 0x1404110E0 (ExpUpdateTimerResolution.c)
 *     PoTraceSystemTimerResolutionIgnore @ 0x1404A91A8 (PoTraceSystemTimerResolutionIgnore.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x1409A9310 (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x1409A9374 (ExReleaseTimeRefreshLockExclusive.c)
 */

__int64 __fastcall ExUpdateTimerResolutionPolicy(__int64 a1, char a2)
{
  int v2; // r8d
  __int64 result; // rax

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
      ExAcquireTimeRefreshLockExclusive();
      ExpUpdateTimerResolution(0, 0LL, 0LL);
      return ExReleaseTimeRefreshLockExclusive();
    }
  }
  return result;
}
