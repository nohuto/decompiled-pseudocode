/*
 * XREFs of PpmHvEnableQosEnlightenment @ 0x140AC46CC
 * Callers:
 *     PpmCheckInitProcessors @ 0x140AC1BF8 (PpmCheckInitProcessors.c)
 * Callees:
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     PpmConvertTimeFrom @ 0x1403E7C34 (PpmConvertTimeFrom.c)
 *     KeEnumerateNextProcessor @ 0x140405FA0 (KeEnumerateNextProcessor.c)
 *     HvlIsRootPowerSchedulerQosPresent @ 0x14057F074 (HvlIsRootPowerSchedulerQosPresent.c)
 *     PpmReinitializeHeteroEngine @ 0x140AC1DDC (PpmReinitializeHeteroEngine.c)
 */

void PpmHvEnableQosEnlightenment()
{
  __int64 v0; // rdx
  unsigned int v1; // r8d
  __int64 Prcb; // rax
  unsigned int v3; // edx
  char v4; // dl
  unsigned __int16 *v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+32h] [rbp-16h]
  __int16 v8; // [rsp+36h] [rbp-12h]
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( KeGetCurrentPrcb()->PowerState.Hypervisor == ProcHypervisorPresent
    && HvlIsRootPowerSchedulerQosPresent()
    && !PpmPerfVmQosSupported )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, v0, v1);
    v5[1] = (unsigned __int16 *)PpmCheckRegistered.Bitmap[0];
    v5[0] = (unsigned __int16 *)&PpmCheckRegistered;
    v6 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v9, v5) )
    {
      Prcb = KeGetPrcb(v9);
      v3 = PpmPerfQosTransitionHysteresisOverride;
      if ( PpmPerfQosTransitionHysteresisOverride == -1 )
        v3 = PpmPerfQosTransitionHysteresis;
      *(_QWORD *)(Prcb + 35384) = PpmConvertTimeFrom(v3, 1000000LL);
    }
    PpmPerfQosManageIdleProcessors = 0;
    PpmPerfVmQosSupported = 1;
    PpmReinitializeHeteroEngine(1, v4, 0);
  }
}
