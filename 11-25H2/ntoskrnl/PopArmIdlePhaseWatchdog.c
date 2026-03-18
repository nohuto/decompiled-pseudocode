/*
 * XREFs of PopArmIdlePhaseWatchdog @ 0x140A2BF70
 * Callers:
 *     PopProcessSessionDisplayStateChange @ 0x140963FE0 (PopProcessSessionDisplayStateChange.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     ZwPowerInformation @ 0x14069BD20 (ZwPowerInformation.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopPdcAreAllPhasesDisengaged @ 0x140A2C09C (PopPdcAreAllPhasesDisengaged.c)
 *     PopSnapSystemIdleContext @ 0x140A2C0C4 (PopSnapSystemIdleContext.c)
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
    PopAcquireRwLockExclusive((unsigned __int64 *)&xmmword_140F06FA8);
    v3 = v16;
    qword_140F06FB8 = v17;
    dword_140F06FC0 = v16;
    PopReleaseRwLock((signed __int64 *)&xmmword_140F06FA8);
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
