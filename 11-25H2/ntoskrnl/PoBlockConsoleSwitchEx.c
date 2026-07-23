/*
 * XREFs of PoBlockConsoleSwitchEx @ 0x140311910
 * Callers:
 *     PdcPoBlockSessionSwitchEx @ 0x140750730 (PdcPoBlockSessionSwitchEx.c)
 *     PopAcquireAdaptiveLock @ 0x140A22A64 (PopAcquireAdaptiveLock.c)
 *     PopBlockSessionSwitch @ 0x140A2BB70 (PopBlockSessionSwitch.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140A2C294 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopScreenOff @ 0x140A2C5B8 (PopScreenOff.c)
 *     PoBlockConsoleSwitch @ 0x140AAF508 (PoBlockConsoleSwitch.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     RtlGetActiveConsoleId @ 0x1403117E0 (RtlGetActiveConsoleId.c)
 *     PopDispatchStateCallout @ 0x140A2C7C0 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoBlockConsoleSwitchEx(__int64 a1, ULONG *a2, _QWORD *a3)
{
  unsigned __int64 v3; // rdi
  unsigned int i; // esi
  int v7; // ebx
  ULONG ActiveConsoleId; // [rsp+60h] [rbp+18h] BYREF
  LARGE_INTEGER Interval; // [rsp+68h] [rbp+20h] BYREF

  ActiveConsoleId = 0;
  v3 = -1LL;
  Interval.QuadPart = -100000LL;
  if ( a3 )
    v3 = MEMORY[0xFFFFF78000000008] + 10000000LL * *a3;
  for ( i = 1; ; ++i )
  {
    ActiveConsoleId = RtlGetActiveConsoleId();
    if ( ActiveConsoleId != -1 )
    {
      *(_DWORD *)(a1 + 32) = 0;
      v7 = PopDispatchStateCallout(a1, &ActiveConsoleId);
      if ( v7 >= 0 )
        break;
    }
    if ( i == 100 * (i / 0x64) && MEMORY[0xFFFFF78000000008] >= v3 )
    {
      v7 = 258;
      break;
    }
    KeDelayExecutionThread(0, 0, &Interval);
  }
  *a2 = RtlGetActiveConsoleId();
  return (unsigned int)v7;
}
