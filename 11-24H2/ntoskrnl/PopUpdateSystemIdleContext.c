/*
 * XREFs of PopUpdateSystemIdleContext @ 0x1409B99D4
 * Callers:
 *     PopUserPresentSetWorker @ 0x140492270 (PopUserPresentSetWorker.c)
 *     PopAdaptiveUpdateIdleContextWorker @ 0x14075F650 (PopAdaptiveUpdateIdleContextWorker.c)
 *     PopSleepPowerSettingCallback @ 0x1409B8200 (PopSleepPowerSettingCallback.c)
 *     PopApplyPolicy @ 0x1409B85D0 (PopApplyPolicy.c)
 *     PopBatteryApplyCompositeState @ 0x140A3AD08 (PopBatteryApplyCompositeState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     SSHSupportIsPlatformAoAc @ 0x140490DC8 (SSHSupportIsPlatformAoAc.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404B26F0 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1404D63C4 (PopIdleArmAoAcDozeS4Timer.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopFilterCapabilities @ 0x1409B923C (PopFilterCapabilities.c)
 *     PopDiagTraceSystemIdleContextUpdate @ 0x1409B9BAC (PopDiagTraceSystemIdleContextUpdate.c)
 *     PopAdaptiveGetBootIsUnattended @ 0x1409B9E70 (PopAdaptiveGetBootIsUnattended.c)
 *     PopPulseSystemIdleEvent @ 0x140A2778C (PopPulseSystemIdleEvent.c)
 *     PopIsDozeSupported @ 0x140A8BDD8 (PopIsDozeSupported.c)
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
  PopAcquireRwLockExclusive(&PopSystemIdleLock);
  if ( !PopSystemIdleContext )
    return PopReleaseRwLock((signed __int64 *)&PopSystemIdleLock);
  v2 = 0;
  if ( (PopFullWake & 3) == 0 || (unsigned __int8)PopAdaptiveGetBootIsUnattended() )
    v2 = 1;
  v3 = dword_140E0B664;
  v4 = 0;
  v5 = dword_140E0B668;
  if ( (PopSimulate & 0x1000000) == 0 )
    v4 = v2;
  v6 = 0;
  v7 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v11);
  if ( v4 )
  {
    v6 = dword_140F0BA60;
    if ( dword_140F0BA60 )
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
    if ( byte_140F0BDC0 )
      PopIdleArmAoAcDozeS4Timer();
  }
  dword_140E0B664 = v8;
  dword_140E0B668 = v6;
  qword_140E0B790 = v7;
  dword_140E0B798 = a1;
  dword_140E0B79C = v3;
  dword_140E0B7A0 = v5;
  PopDiagTraceSystemIdleContextUpdate(a1, v3, v5, v8, v6);
  return PopReleaseRwLock((signed __int64 *)&PopSystemIdleLock);
}
