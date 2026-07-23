/*
 * XREFs of KeRelaxTimingConstraints @ 0x1405B18B0
 * Callers:
 *     KiDeferDpcWatchdogViolation @ 0x14043FF9C (KiDeferDpcWatchdogViolation.c)
 *     KdEnableDebugger @ 0x1405AC9B0 (KdEnableDebugger.c)
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 * Callees:
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1404F71F8 (KiResetGlobalDpcWatchdogProfiler.c)
 */

bool __fastcall KeRelaxTimingConstraints(int a1)
{
  bool v1; // r9
  __int64 v2; // r8
  __int64 *v3; // r10
  __int64 v4; // rcx
  __int64 v5; // r10
  __int64 v6; // r11

  v1 = KeEnableWatchdogTimeout == 0;
  if ( a1 )
  {
    LOBYTE(v2) = 0;
  }
  else
  {
    LOBYTE(v2) = 1;
    if ( !KeEnableWatchdogTimeout && (_DWORD)KeNumberProcessors_0 )
    {
      v3 = KiProcessorBlock;
      do
      {
        v4 = *v3;
        *(_DWORD *)(v4 + 33708) = 0;
        *(_DWORD *)(v4 + 34396) = 0;
        KiResetGlobalDpcWatchdogProfiler(v4);
        v3 = (__int64 *)(v5 + 8);
      }
      while ( v6 != v2 );
    }
  }
  KeEnableWatchdogTimeout = v2;
  return v1;
}
