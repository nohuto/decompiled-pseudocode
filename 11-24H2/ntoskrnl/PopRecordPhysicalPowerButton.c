/*
 * XREFs of PopRecordPhysicalPowerButton @ 0x140747AF0
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1405D58C0 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A3364 (PopBsdHandleRequest.c)
 *     Feature_ExpandSTEIgnoreReasons__private_IsEnabledDeviceUsageNoInline @ 0x1405CA558 (Feature_ExpandSTEIgnoreReasons__private_IsEnabledDeviceUsageNoInline.c)
 *     PopGetCurrentPdcPhase @ 0x1405D5E10 (PopGetCurrentPdcPhase.c)
 */

__int64 __fastcall PopRecordPhysicalPowerButton(char a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  char CurrentPdcPhase; // al

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock);
  v2 = 1LL << ((dword_140F07B58 + dword_140F07B5C) & 0x3F);
  v3 = MEMORY[0xFFFFF78000000014];
  if ( a1 )
  {
    *(_QWORD *)&PopBsdPhysicalPowerButtonInfo = MEMORY[0xFFFFF78000000014];
    ++DWORD2(PopBsdPhysicalPowerButtonInfo);
    WORD6(PopBsdPhysicalPowerButtonInfo) = MEMORY[0xFFFFF780000002C4];
    BYTE14(PopBsdPhysicalPowerButtonInfo) = PopBsdLastPowerWatchdogStage;
    HIBYTE(PopBsdPhysicalPowerButtonInfo) = PopBsdPowerWatchdogArmed & 1 | HIBYTE(PopBsdPhysicalPowerButtonInfo) & 0xFC | (2 * (PopBsdShutdownInProgress & 1));
    xmmword_140E674B0 = xmmword_140F07B80;
    if ( (unsigned int)Feature_ExpandSTEIgnoreReasons__private_IsEnabledDeviceUsageNoInline() )
      CurrentPdcPhase = PopGetCurrentPdcPhase();
    else
      CurrentPdcPhase = PopBsdCurrentCsPhase;
    qword_140F07B60 |= v2;
    ++dword_140F07B58;
    LOBYTE(xmmword_140E674D0) = CurrentPdcPhase;
    DWORD1(xmmword_140E674D0) = PopBsdTransitionLatestCheckpointId;
    *((_QWORD *)&xmmword_140E674D0 + 1) = __PAIR64__(
                                            PopBsdTransitionLatestCheckpointSeqNumber,
                                            PopBsdTransitionLatestCheckpointType);
    qword_140F07B68 = v3;
  }
  else
  {
    *(_QWORD *)&xmmword_140E674C0 = MEMORY[0xFFFFF78000000014];
    ++DWORD2(xmmword_140E674C0);
    qword_140F07B60 &= ~v2;
    ++dword_140F07B5C;
    xmmword_140E674B0 = 0LL;
    WORD6(xmmword_140E674C0) = MEMORY[0xFFFFF780000002C4];
    qword_140F07B70 = MEMORY[0xFFFFF78000000014];
  }
  if ( dword_140F07B58 < (unsigned int)dword_140F07B5C || (unsigned int)(dword_140F07B58 - dword_140F07B5C) > 1 )
    byte_140F07BA8 = 1;
  PopBsdHandleRequest(4u);
  return PopReleaseRwLock(&PopBsdUpdateLock);
}
