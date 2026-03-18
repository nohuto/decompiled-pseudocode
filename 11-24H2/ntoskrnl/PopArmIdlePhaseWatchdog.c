/*
 * XREFs of PopArmIdlePhaseWatchdog @ 0x14090292C
 * Callers:
 *     PopProcessSessionDisplayStateChange @ 0x1409BBD90 (PopProcessSessionDisplayStateChange.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     ZwPowerInformation @ 0x1406A6FF0 (ZwPowerInformation.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopPdcAreAllPhasesDisengaged @ 0x140902A58 (PopPdcAreAllPhasesDisengaged.c)
 *     PopSnapSystemIdleContext @ 0x140902A80 (PopSnapSystemIdleContext.c)
 */

void __fastcall PopArmIdlePhaseWatchdog(int a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int InputBuffer; // [rsp+30h] [rbp-19h] BYREF
  __int64 v7; // [rsp+38h] [rbp-11h]
  int v8; // [rsp+40h] [rbp-9h]
  int v9; // [rsp+48h] [rbp-1h]
  __int64 v10; // [rsp+50h] [rbp+7h]
  __int64 v11; // [rsp+58h] [rbp+Fh]
  __int64 v12; // [rsp+60h] [rbp+17h]
  __int64 *v13; // [rsp+68h] [rbp+1Fh]
  __int64 (__fastcall *v14)(__int64, int, int, int, __int64, __int64); // [rsp+78h] [rbp+2Fh]
  int *p_InputBuffer; // [rsp+80h] [rbp+37h]
  int v16; // [rsp+B8h] [rbp+6Fh] BYREF
  void *v17; // [rsp+C0h] [rbp+77h] BYREF

  v17 = 0LL;
  v16 = 0;
  v1 = PopPdcIdlePhaseWatchdogContext;
  v2 = a1;
  if ( PopPdcIdlePhaseWatchdogContext && (unsigned __int8)PopPdcAreAllPhasesDisengaged() )
  {
    PopSnapSystemIdleContext(&v17, &v16);
    PopAcquireRwLockExclusive(&xmmword_140F07648);
    v3 = v16;
    qword_140F07658 = v17;
    dword_140F07660 = v16;
    PopReleaseRwLock((signed __int64 *)&xmmword_140F07648);
    if ( (unsigned int)v2 <= 0x10 && (v4 = 69728, _bittest(&v4, v2)) )
      v5 = PopIdleScanInterval + v3;
    else
      v5 = PopPdcIdlePhaseDefaultWatchdogTimeoutSeconds;
    memset_0(&InputBuffer, 0, 0x60uLL);
    InputBuffer = 21;
    v7 = v1;
    v9 = 160;
    v10 = 2050LL;
    v8 = 1000 * v5;
    v12 = (unsigned int)PopEventProcessorEnabled;
    v13 = &PopPdcIdlePhaseWatchdogContext;
    p_InputBuffer = &InputBuffer;
    v14 = PopIdlePhaseWatchdogCallback;
    v11 = v2;
    ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, 0LL, 0);
  }
}
