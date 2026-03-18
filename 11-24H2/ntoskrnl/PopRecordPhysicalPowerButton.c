/*
 * XREFs of PopRecordPhysicalPowerButton @ 0x1407497C0
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1405D83A0 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A8F44 (PopBsdHandleRequest.c)
 *     Feature_ExpandSTEIgnoreReasons__private_IsEnabledDeviceUsageNoInline @ 0x1405CCDE8 (Feature_ExpandSTEIgnoreReasons__private_IsEnabledDeviceUsageNoInline.c)
 *     PopGetCurrentPdcPhase @ 0x1405D88FC (PopGetCurrentPdcPhase.c)
 */

__int64 __fastcall PopRecordPhysicalPowerButton(char a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  char CurrentPdcPhase; // al

  PopAcquireRwLockExclusive(&PopBsdUpdateLock);
  v2 = 1LL << ((dword_140F07738 + dword_140F0773C) & 0x3F);
  v3 = MEMORY[0xFFFFF78000000014];
  if ( a1 )
  {
    *(_QWORD *)&PopBsdPhysicalPowerButtonInfo = MEMORY[0xFFFFF78000000014];
    ++DWORD2(PopBsdPhysicalPowerButtonInfo);
    WORD6(PopBsdPhysicalPowerButtonInfo) = MEMORY[0xFFFFF780000002C4];
    BYTE14(PopBsdPhysicalPowerButtonInfo) = PopBsdLastPowerWatchdogStage;
    HIBYTE(PopBsdPhysicalPowerButtonInfo) = PopBsdPowerWatchdogArmed & 1 | HIBYTE(PopBsdPhysicalPowerButtonInfo) & 0xFC | (2 * (PopBsdShutdownInProgress & 1));
    xmmword_140E672B0 = xmmword_140F07760;
    if ( (unsigned int)Feature_ExpandSTEIgnoreReasons__private_IsEnabledDeviceUsageNoInline() )
      CurrentPdcPhase = PopGetCurrentPdcPhase();
    else
      CurrentPdcPhase = PopBsdCurrentCsPhase;
    qword_140F07740 |= v2;
    ++dword_140F07738;
    LOBYTE(xmmword_140E672D0) = CurrentPdcPhase;
    *(_QWORD *)((char *)&xmmword_140E672D0 + 4) = __PAIR64__(
                                                    PopBsdTransitionLatestCheckpointType,
                                                    PopBsdTransitionLatestCheckpointId);
    HIDWORD(xmmword_140E672D0) = PopBsdTransitionLatestCheckpointSeqNumber;
    qword_140F07748 = v3;
  }
  else
  {
    *(_QWORD *)&xmmword_140E672C0 = MEMORY[0xFFFFF78000000014];
    ++DWORD2(xmmword_140E672C0);
    qword_140F07740 &= ~v2;
    ++dword_140F0773C;
    xmmword_140E672B0 = 0LL;
    WORD6(xmmword_140E672C0) = MEMORY[0xFFFFF780000002C4];
    qword_140F07750 = MEMORY[0xFFFFF78000000014];
  }
  if ( dword_140F07738 < (unsigned int)dword_140F0773C || (unsigned int)(dword_140F07738 - dword_140F0773C) > 1 )
    byte_140F07788 = 1;
  PopBsdHandleRequest(4u);
  return PopReleaseRwLock((signed __int64 *)&PopBsdUpdateLock);
}
