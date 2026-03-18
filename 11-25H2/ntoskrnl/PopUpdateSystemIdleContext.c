/*
 * XREFs of PopUpdateSystemIdleContext @ 0x140A1112C
 * Callers:
 *     PopUserPresentSetWorker @ 0x140492FE0 (PopUserPresentSetWorker.c)
 *     PopSleepPowerSettingCallback @ 0x140A0FC00 (PopSleepPowerSettingCallback.c)
 *     PopApplyPolicy @ 0x140A0FFD0 (PopApplyPolicy.c)
 *     PopBatteryApplyCompositeState @ 0x140AC1ED8 (PopBatteryApplyCompositeState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     SSHSupportIsPlatformAoAc @ 0x140491754 (SSHSupportIsPlatformAoAc.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404B170C (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1404D6CD4 (PopIdleArmAoAcDozeS4Timer.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopFilterCapabilities @ 0x140A10C3C (PopFilterCapabilities.c)
 *     PopDiagTraceSystemIdleContextUpdate @ 0x140A11304 (PopDiagTraceSystemIdleContextUpdate.c)
 *     PopAdaptiveGetBootIsUnattended @ 0x140A113E4 (PopAdaptiveGetBootIsUnattended.c)
 *     PopPulseSystemIdleEvent @ 0x140A1E7EC (PopPulseSystemIdleEvent.c)
 *     PopIsDozeSupported @ 0x140A870C0 (PopIsDozeSupported.c)
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
  v3 = dword_140E0B504;
  v4 = 0;
  v5 = dword_140E0B508;
  if ( (PopSimulate & 0x1000000) == 0 )
    v4 = v2;
  v6 = 0;
  v7 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v11);
  if ( v4 )
  {
    v6 = dword_140F0B720;
    if ( dword_140F0B720 )
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
    if ( byte_140F0A9E0 )
      PopIdleArmAoAcDozeS4Timer();
  }
  dword_140E0B504 = v8;
  dword_140E0B508 = v6;
  qword_140E0B630 = v7;
  dword_140E0B638 = a1;
  dword_140E0B63C = v3;
  dword_140E0B640 = v5;
  PopDiagTraceSystemIdleContextUpdate(a1, v3, v5, v8, v6);
  return PopReleaseRwLock(&PopSystemIdleLock);
}
