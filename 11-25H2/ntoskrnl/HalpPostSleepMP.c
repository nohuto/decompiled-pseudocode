/*
 * XREFs of HalpPostSleepMP @ 0x140B58A3C
 * Callers:
 *     HaliAcpiSleep @ 0x14049B670 (HaliAcpiSleep.c)
 * Callees:
 *     HalpInterruptEnableNmi @ 0x140443DC4 (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x140444F88 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpCmciInitProcessor @ 0x14047C2E4 (HalpCmciInitProcessor.c)
 *     HalpRestartProfiling @ 0x1404B1CF0 (HalpRestartProfiling.c)
 *     HalpMcUpdateMicrocode @ 0x1404D1C6C (HalpMcUpdateMicrocode.c)
 *     HalpInterruptReinitializeThisProcessor @ 0x1404D9390 (HalpInterruptReinitializeThisProcessor.c)
 *     HalpTimerRestoreProcessorCounter @ 0x1404F37D8 (HalpTimerRestoreProcessorCounter.c)
 *     HalpTimerMarkWake @ 0x1404F70C0 (HalpTimerMarkWake.c)
 *     HalpHvIsReferenceTscConfigured @ 0x1404F80AC (HalpHvIsReferenceTscConfigured.c)
 *     HalpInterruptRestoreClock @ 0x140540090 (HalpInterruptRestoreClock.c)
 *     HalpTscInitializeSynchronizationContext @ 0x140546D98 (HalpTscInitializeSynchronizationContext.c)
 *     HalpTscSynchronizationWorker @ 0x140547070 (HalpTscSynchronizationWorker.c)
 *     HalpHvSetMachineCheckHandlerState @ 0x140548ED8 (HalpHvSetMachineCheckHandlerState.c)
 *     HalpSetResumeTime @ 0x140557C88 (HalpSetResumeTime.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     HalpIsCmciImplemented @ 0x140B3C2F4 (HalpIsCmciImplemented.c)
 *     HalpErrataApplyPerProcessor @ 0x140B58CD8 (HalpErrataApplyPerProcessor.c)
 *     KeLoadMTRR @ 0x140B58DF0 (KeLoadMTRR.c)
 *     HalpMcaResumeProcessorConfig @ 0x140B58FF0 (HalpMcaResumeProcessorConfig.c)
 *     HalpMcaSetProcessorConfig @ 0x140B590EC (HalpMcaSetProcessorConfig.c)
 */

char __fastcall HalpPostSleepMP(ULONG a1, __int64 a2, __int64 a3)
{
  bool IsReferenceTscConfigured; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  KPCR *Pcr; // rax
  __int64 i; // rdi
  __int64 v10; // rbx
  signed int Number; // [rsp+20h] [rbp-3F8h]
  ULONG v13; // [rsp+28h] [rbp-3F0h] BYREF
  _BYTE v14[976]; // [rsp+30h] [rbp-3E8h] BYREF

  v13 = a1;
  Number = KeGetCurrentPrcb()->Number;
  if ( Number )
  {
    HalpInterruptReinitializeThisProcessor();
    while ( Number != HalpBarrier )
      _mm_pause();
    __writecr8(0xFuLL);
  }
  if ( (HalpFeatureBits & 0xC) != 0 )
    HalpMcaResumeProcessorConfig(0LL, a2);
  if ( (HalpFeatureBits & 1) != 0 )
    HalpInterruptEnablePerformanceEvents(0LL, a2, a3);
  IsReferenceTscConfigured = HalpHvIsReferenceTscConfigured();
  if ( !Number )
  {
    dword_140E3E99C = 0;
    dword_140E3E948 = 0;
    dword_140E3E984 = v13 - 1;
    qword_140E3E990 = (__int64)&dword_140E3E948;
    if ( !IsReferenceTscConfigured )
      HalpTscInitializeSynchronizationContext((__int64)&Argument, 0, 0LL, &v13);
  }
  _InterlockedAdd(&HalpBarrier, 1u);
  while ( HalpBarrier != v13 )
    ;
  if ( !Number && HalpHvWheaEnlightenedCpuManager && HalpMceEnabled )
    HalpHvSetMachineCheckHandlerState();
  if ( !Number )
    HalpSetResumeTime(0LL, 1);
  HalpTimerMarkWake();
  HalpTimerRestoreProcessorCounter(v5, v4);
  if ( !Number )
  {
    SystemPowerPhase = 1;
    HalpSetResumeTime(0LL, 2);
    HalpInterruptRestoreClock();
    HalpHiberInProgress = 0;
    dword_140E3E998 = 0;
  }
  _InterlockedAdd(&dword_140E3E99C, 1u);
  while ( dword_140E3E99C != v13 )
    ;
  while ( dword_140E3E998 < Number )
    ;
  HalpMcUpdateMicrocode((unsigned int)dword_140E3E998);
  HalpErrataApplyPerProcessor();
  _InterlockedAdd(&dword_140E3E998, 1u);
  while ( dword_140E3E998 != v13 )
    ;
  HalpRestartProfiling(v7, v6);
  HalpInterruptEnableNmi();
  KeLoadMTRR(&unk_140E3E980);
  if ( !IsReferenceTscConfigured )
    HalpTscSynchronizationWorker((ULONG_PTR)&Argument);
  memset_0(v14, 0, 0x3CCuLL);
  LOBYTE(Pcr) = HalpFeatureBits;
  if ( (HalpFeatureBits & 0xC) != 0 )
  {
    Pcr = KeGetPcr();
    for ( i = *(_QWORD *)&Pcr->HalReserved[6]; i; i = *(_QWORD *)(i + 184) )
    {
      v10 = *(_QWORD *)(i + 172);
      HalpMcaSetProcessorConfig(HalpMceErrorSource, v10);
      LOBYTE(Pcr) = HalpIsCmciImplemented();
      if ( (_BYTE)Pcr )
        LOBYTE(Pcr) = HalpCmciInitProcessor((__int64)HalpCmcErrorSource, v10);
    }
  }
  return (char)Pcr;
}
