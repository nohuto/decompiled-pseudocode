/*
 * XREFs of PopUpdateSystemIdleContext @ 0x1409A0024
 * Callers:
 *     PopUserPresentSetWorker @ 0x14048D0E0 (PopUserPresentSetWorker.c)
 *     PopAdaptiveUpdateIdleContextWorker @ 0x14075E5F0 (PopAdaptiveUpdateIdleContextWorker.c)
 *     PopSleepPowerSettingCallback @ 0x14099E850 (PopSleepPowerSettingCallback.c)
 *     PopApplyPolicy @ 0x14099EC20 (PopApplyPolicy.c)
 *     PopBatteryApplyCompositeState @ 0x140A304E8 (PopBatteryApplyCompositeState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     SSHSupportIsPlatformAoAc @ 0x14048B408 (SSHSupportIsPlatformAoAc.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404ACF80 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1404CF814 (PopIdleArmAoAcDozeS4Timer.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopFilterCapabilities @ 0x14099F88C (PopFilterCapabilities.c)
 *     PopDiagTraceSystemIdleContextUpdate @ 0x1409A01FC (PopDiagTraceSystemIdleContextUpdate.c)
 *     PopAdaptiveGetBootIsUnattended @ 0x1409A04C0 (PopAdaptiveGetBootIsUnattended.c)
 *     PopPulseSystemIdleEvent @ 0x140A1C20C (PopPulseSystemIdleEvent.c)
 *     PopIsDozeSupported @ 0x140A882C8 (PopIsDozeSupported.c)
 */

__int64 __fastcall PopUpdateSystemIdleContext(int a1)
{
  char v2; // di
  int v3; // ebp
  char v4; // bl
  int v5; // r14d
  int v6; // edi
  unsigned __int64 v7; // r15
  int v8; // ebx
  int v9; // r9d
  _BYTE v11[80]; // [rsp+30h] [rbp-68h] BYREF

  memset_0(v11, 0, 0x4CuLL);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopSystemIdleLock);
  if ( !PopSystemIdleContext )
    return PopReleaseRwLock(&PopSystemIdleLock);
  v2 = 0;
  if ( (PopFullWake & 3) == 0 || (unsigned __int8)PopAdaptiveGetBootIsUnattended() )
    v2 = 1;
  v3 = dword_140E0B6E4;
  v4 = 0;
  v5 = dword_140E0B6E8;
  if ( (PopSimulate & 0x1000000) == 0 )
    v4 = v2;
  v6 = 0;
  v7 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v11);
  if ( v4 )
  {
    v6 = dword_140F0B3A0;
    if ( dword_140F0B3A0 )
    {
      v8 = 4;
      goto LABEL_23;
    }
    v6 = 0;
  }
  else if ( SSHSupportIsPlatformAoAc() )
  {
    if ( *((_DWORD *)PopPolicy + 15) )
    {
      v6 = *((_DWORD *)PopPolicy + 15);
      v8 = 1;
      goto LABEL_23;
    }
  }
  else
  {
    if ( *((_DWORD *)PopPolicy + 15) && (v11[3] || v11[4] || v11[5]) )
    {
      v6 = *((_DWORD *)PopPolicy + 15);
      v8 = 2;
      goto LABEL_23;
    }
    if ( *((_DWORD *)PopPolicy + 22) && (unsigned __int8)PopIsDozeSupported(v11) )
    {
      v6 = v9;
      v8 = 3;
      goto LABEL_23;
    }
  }
  v8 = 5;
LABEL_23:
  if ( a1 == 1 || a1 == 4 )
    PopPulseSystemIdleEvent(3LL);
  if ( a1 == 3 )
  {
    PopIdleCancelAoAcDozeS4Timer(6u);
    if ( byte_140F0B8E0 )
      PopIdleArmAoAcDozeS4Timer();
  }
  dword_140E0B6E4 = v8;
  dword_140E0B6E8 = v6;
  qword_140E0B810 = v7;
  dword_140E0B818 = a1;
  dword_140E0B81C = v3;
  dword_140E0B820 = v5;
  PopDiagTraceSystemIdleContextUpdate(a1, v3, v5, v8, v6);
  return PopReleaseRwLock(&PopSystemIdleLock);
}
