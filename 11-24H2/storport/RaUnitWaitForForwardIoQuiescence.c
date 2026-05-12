/*
 * XREFs of RaUnitWaitForForwardIoQuiescence @ 0x140056320
 * Callers:
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x140050270 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     GatewayWaitForForwardIoWithTimeout @ 0x1400A5F18 (GatewayWaitForForwardIoWithTimeout.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaUnitCheckForwardIoOutstanding @ 0x140054AEC (RaUnitCheckForwardIoOutstanding.c)
 */

__int64 __fastcall RaUnitWaitForForwardIoQuiescence(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rax
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !*(_QWORD *)(a1 + 32) || !RaidIsUnitControlSupported(a1, 31) )
    return 0LL;
  v5 = 10LL;
  Interval.QuadPart = -100000LL;
  while ( RaUnitCheckForwardIoOutstanding(a1) )
  {
    if ( a2 && a2 <= v5 )
      return 258;
    KeDelayExecutionThread(0, 0, &Interval);
    Interval.QuadPart = -1000000LL;
    v6 = a2 - v5;
    v5 = 100LL;
    if ( !a2 )
      v6 = 0LL;
    a2 = v6;
  }
  return v2;
}
