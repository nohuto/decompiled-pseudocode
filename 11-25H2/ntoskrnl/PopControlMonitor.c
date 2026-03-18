/*
 * XREFs of PopControlMonitor @ 0x140A2CCF0
 * Callers:
 *     PopScreenOn @ 0x140750B94 (PopScreenOn.c)
 *     PopScreenOff @ 0x140A2C5B8 (PopScreenOff.c)
 * Callees:
 *     TtmIsEnabled @ 0x140964038 (TtmIsEnabled.c)
 *     PopInvokeWin32Callout @ 0x140A2C928 (PopInvokeWin32Callout.c)
 *     TtmSessionMonitorControl @ 0x140A2D9F8 (TtmSessionMonitorControl.c)
 */

__int64 __fastcall PopControlMonitor(unsigned int *a1, unsigned int a2)
{
  __int128 v4; // [rsp+20h] [rbp-40h] BYREF
  __int128 v5; // [rsp+30h] [rbp-30h]
  __int128 v6; // [rsp+40h] [rbp-20h]
  __int64 v7; // [rsp+50h] [rbp-10h]
  unsigned int v8; // [rsp+78h] [rbp+18h] BYREF

  v8 = a2;
  DWORD1(v4) = 0;
  if ( TtmIsEnabled() )
    return TtmSessionMonitorControl(v8, a1[1], *a1);
  v7 = 0LL;
  v5 = 0LL;
  BYTE4(v5) = 0;
  LODWORD(v5) = 3;
  DWORD2(v5) = 8;
  v4 = 0LL;
  v6 = (unsigned __int64)a1;
  return PopInvokeWin32Callout(5u, &v4, 1, (int *)&v8);
}
