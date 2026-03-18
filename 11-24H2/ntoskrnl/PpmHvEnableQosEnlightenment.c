/*
 * XREFs of PpmHvEnableQosEnlightenment @ 0x140ACB488
 * Callers:
 *     PpmCheckInitProcessors @ 0x140AC75E0 (PpmCheckInitProcessors.c)
 * Callees:
 *     PpmConvertTimeFrom @ 0x14032D050 (PpmConvertTimeFrom.c)
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 *     KeEnumerateNextProcessor @ 0x14040D4F0 (KeEnumerateNextProcessor.c)
 *     HvlIsRootPowerSchedulerQosPresent @ 0x140582824 (HvlIsRootPowerSchedulerQosPresent.c)
 *     PpmReinitializeHeteroEngine @ 0x140AC7948 (PpmReinitializeHeteroEngine.c)
 */

void PpmHvEnableQosEnlightenment()
{
  __int64 v0; // rdx
  unsigned int v1; // r8d
  unsigned int v2; // edx
  __int64 v3; // rax
  __int64 v4; // r11
  char v5; // dl
  unsigned __int16 *v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+32h] [rbp-16h]
  __int16 v9; // [rsp+36h] [rbp-12h]
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( KeGetCurrentPrcb()->PowerState.Hypervisor == ProcHypervisorPresent
    && HvlIsRootPowerSchedulerQosPresent()
    && !PpmPerfVmQosSupported )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, v0, v1);
    v6[1] = (unsigned __int16 *)PpmCheckRegistered.Bitmap[0];
    v6[0] = (unsigned __int16 *)&PpmCheckRegistered;
    v7 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v10, v6) )
    {
      KeGetPrcb(v10);
      v2 = PpmPerfQosTransitionHysteresisOverride;
      if ( PpmPerfQosTransitionHysteresisOverride == -1 )
        v2 = PpmPerfQosTransitionHysteresis;
      v3 = PpmConvertTimeFrom(v2, 1000000LL);
      *(_QWORD *)(v4 + 35384) = v3;
    }
    PpmPerfQosManageIdleProcessors = 0;
    PpmPerfVmQosSupported = 1;
    PpmReinitializeHeteroEngine(1, v5, 0);
  }
}
