/*
 * XREFs of PopControlMonitor @ 0x1409B7F80
 * Callers:
 *     PopScreenOn @ 0x14075D4A0 (PopScreenOn.c)
 *     PopScreenOff @ 0x1409B8008 (PopScreenOff.c)
 * Callees:
 *     TtmSessionMonitorControl @ 0x140903874 (TtmSessionMonitorControl.c)
 *     TtmIsEnabled @ 0x1409BBDE8 (TtmIsEnabled.c)
 *     PopInvokeWin32Callout @ 0x1409BE358 (PopInvokeWin32Callout.c)
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
