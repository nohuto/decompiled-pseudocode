/*
 * XREFs of ?xwtol@@YAKPEBG@Z @ 0x1404028A4
 * Callers:
 *     ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x140192098 (-InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ.c)
 *     ?_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x14028BC08 (-_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 *     ParseModeCap @ 0x1403F4438 (ParseModeCap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xwtol(const unsigned __int16 *a1)
{
  unsigned int v1; // edx
  int v2; // r8d

  v1 = 0;
  while ( 1 )
  {
    v2 = *a1;
    if ( (unsigned __int16)(v2 - 48) <= 9u )
    {
      v1 = v2 + 2 * (5 * v1 - 24);
      goto LABEL_5;
    }
    if ( v2 != 32 )
      return v1;
LABEL_5:
    ++a1;
  }
}
