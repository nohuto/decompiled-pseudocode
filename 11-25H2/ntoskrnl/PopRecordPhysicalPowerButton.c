/*
 * XREFs of PopRecordPhysicalPowerButton @ 0x14073D764
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1405D39C0 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A7FA0 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopRecordPhysicalPowerButton(char a1)
{
  __int64 v2; // r8
  __int128 v3; // xmm0

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock);
  v2 = 1LL << ((dword_140F07198 + dword_140F0719C) & 0x3F);
  if ( a1 )
  {
    v3 = xmmword_140F071C0;
    *(_QWORD *)&PopBsdPhysicalPowerButtonInfo = MEMORY[0xFFFFF78000000014];
    ++DWORD2(PopBsdPhysicalPowerButtonInfo);
    qword_140F071A0 |= v2;
    WORD6(PopBsdPhysicalPowerButtonInfo) = MEMORY[0xFFFFF780000002C4];
    BYTE14(PopBsdPhysicalPowerButtonInfo) = PopBsdLastPowerWatchdogStage;
    qword_140F071A8 = MEMORY[0xFFFFF78000000014];
    ++dword_140F07198;
    LOBYTE(xmmword_140E67060) = PopBsdCurrentCsPhase;
    *(_QWORD *)((char *)&xmmword_140E67060 + 4) = __PAIR64__(
                                                    PopBsdTransitionLatestCheckpointType,
                                                    PopBsdTransitionLatestCheckpointId);
    HIDWORD(xmmword_140E67060) = PopBsdTransitionLatestCheckpointSeqNumber;
    HIBYTE(PopBsdPhysicalPowerButtonInfo) = PopBsdPowerWatchdogArmed & 1 | HIBYTE(PopBsdPhysicalPowerButtonInfo) & 0xFC | (2 * (PopBsdShutdownInProgress & 1));
  }
  else
  {
    v3 = 0LL;
    *(_QWORD *)&xmmword_140E67050 = MEMORY[0xFFFFF78000000014];
    ++DWORD2(xmmword_140E67050);
    qword_140F071A0 &= ~v2;
    ++dword_140F0719C;
    WORD6(xmmword_140E67050) = MEMORY[0xFFFFF780000002C4];
    qword_140F071B0 = MEMORY[0xFFFFF78000000014];
  }
  xmmword_140E67040 = v3;
  if ( dword_140F07198 < (unsigned int)dword_140F0719C || (unsigned int)(dword_140F07198 - dword_140F0719C) > 1 )
    byte_140F071E8 = 1;
  PopBsdHandleRequest(4u);
  return PopReleaseRwLock(&PopBsdUpdateLock);
}
