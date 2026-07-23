/*
 * XREFs of PopControlMonitor @ 0x14099E5D0
 * Callers:
 *     PopScreenOn @ 0x14075C440 (PopScreenOn.c)
 *     PopScreenOff @ 0x14099E658 (PopScreenOff.c)
 * Callees:
 *     TtmSessionMonitorControl @ 0x14099DE24 (TtmSessionMonitorControl.c)
 *     TtmIsEnabled @ 0x1409A2438 (TtmIsEnabled.c)
 *     PopInvokeWin32Callout @ 0x1409A49A8 (PopInvokeWin32Callout.c)
 */

__int64 __fastcall PopControlMonitor(unsigned int *a1, unsigned int a2)
{
  __int128 v4; // [rsp+20h] [rbp-40h] BYREF
  __int128 v5; // [rsp+30h] [rbp-30h]
  __int128 v6; // [rsp+40h] [rbp-20h]
  __int64 v7; // [rsp+50h] [rbp-10h]

  DWORD1(v4) = 0;
  if ( (unsigned __int8)TtmIsEnabled() )
    return TtmSessionMonitorControl(a2, a1[1], *a1);
  v7 = 0LL;
  v5 = 0LL;
  BYTE4(v5) = 0;
  LODWORD(v5) = 3;
  DWORD2(v5) = 8;
  v4 = 0LL;
  v6 = (unsigned __int64)a1;
  return PopInvokeWin32Callout(5LL, &v4, 1LL);
}
