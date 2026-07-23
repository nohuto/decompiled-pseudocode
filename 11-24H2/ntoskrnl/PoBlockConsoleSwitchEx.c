/*
 * XREFs of PoBlockConsoleSwitchEx @ 0x140420E04
 * Callers:
 *     PdcPoBlockSessionSwitchEx @ 0x14075C050 (PdcPoBlockSessionSwitchEx.c)
 *     PopBlockSessionSwitch @ 0x14099E318 (PopBlockSessionSwitch.c)
 *     PopScreenOff @ 0x14099E658 (PopScreenOff.c)
 *     PopAcquireAdaptiveLock @ 0x140A24C58 (PopAcquireAdaptiveLock.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140A6E534 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PoBlockConsoleSwitch @ 0x140AAF468 (PoBlockConsoleSwitch.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     RtlGetActiveConsoleId @ 0x140421360 (RtlGetActiveConsoleId.c)
 *     PopDispatchStateCallout @ 0x1409A03B4 (PopDispatchStateCallout.c)
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
