/*
 * XREFs of HalpPostSleepMP @ 0x140B6886C
 * Callers:
 *     HaliAcpiSleep @ 0x1404D9F00 (HaliAcpiSleep.c)
 *     HaliAcpiSleepOld @ 0x140569940 (HaliAcpiSleepOld.c)
 * Callees:
 *     HalpInterruptEnablePerformanceEvents @ 0x1403B90F8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpCmciInitProcessor @ 0x14047D1E4 (HalpCmciInitProcessor.c)
 *     HalpInterruptEnableNmi @ 0x1404A356C (HalpInterruptEnableNmi.c)
 *     HalpRestartProfiling @ 0x1404B3050 (HalpRestartProfiling.c)
 *     HalpMcUpdateMicrocode @ 0x1404D1C2C (HalpMcUpdateMicrocode.c)
 *     HalpInterruptReinitializeThisProcessor @ 0x1404D8410 (HalpInterruptReinitializeThisProcessor.c)
 *     HalpTimerRestoreProcessorCounter @ 0x1404F602C (HalpTimerRestoreProcessorCounter.c)
 *     HalpTimerMarkWake @ 0x1404F98C0 (HalpTimerMarkWake.c)
 *     HalpHvIsReferenceTscConfigured @ 0x1404FA574 (HalpHvIsReferenceTscConfigured.c)
 *     HalpInterruptRestoreClock @ 0x1405428C0 (HalpInterruptRestoreClock.c)
 *     HalpTscInitializeSynchronizationContext @ 0x140549688 (HalpTscInitializeSynchronizationContext.c)
 *     HalpTscSynchronizationWorker @ 0x140549960 (HalpTscSynchronizationWorker.c)
 *     HalpHvSetMachineCheckHandlerState @ 0x14054B7C8 (HalpHvSetMachineCheckHandlerState.c)
 *     HalpSetResumeTime @ 0x14055A588 (HalpSetResumeTime.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     HalpIsCmciImplemented @ 0x140B4C2F4 (HalpIsCmciImplemented.c)
 *     HalpErrataApplyPerProcessor @ 0x140B68B08 (HalpErrataApplyPerProcessor.c)
 *     KeLoadMTRR @ 0x140B68C20 (KeLoadMTRR.c)
 *     HalpMcaResumeProcessorConfig @ 0x140B68E20 (HalpMcaResumeProcessorConfig.c)
 *     HalpMcaSetProcessorConfig @ 0x140B68F1C (HalpMcaSetProcessorConfig.c)
 */

char __fastcall HalpPostSleepMP(ULONG a1, __int64 a2)
{
  bool IsReferenceTscConfigured; // al
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  bool v7; // bl
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  KPCR *Pcr; // rax
  __int64 i; // rdi
  __int64 v20; // rbx
  unsigned int Number; // [rsp+20h] [rbp-3F8h]
  ULONG v23; // [rsp+28h] [rbp-3F0h] BYREF
  _BYTE v24[976]; // [rsp+30h] [rbp-3E8h] BYREF

  v23 = a1;
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
    HalpInterruptEnablePerformanceEvents(0LL);
  IsReferenceTscConfigured = HalpHvIsReferenceTscConfigured();
  v6 = Number;
  v7 = IsReferenceTscConfigured;
  if ( !Number )
  {
    v6 = v23 - 1;
    dword_140E3EBDC = 0;
    dword_140E3EB88 = 0;
    dword_140E3EBC4 = v23 - 1;
    qword_140E3EBD0 = (__int64)&dword_140E3EB88;
    if ( !IsReferenceTscConfigured )
      HalpTscInitializeSynchronizationContext((__int64)&Argument, 0, 0LL, &v23);
  }
  _InterlockedAdd(&HalpBarrier, 1u);
  while ( HalpBarrier != v23 )
    ;
  if ( !Number && HalpHvWheaEnlightenedCpuManager && HalpMceEnabled )
    HalpHvSetMachineCheckHandlerState(v6, v3, v4, v5);
  if ( !Number )
    HalpSetResumeTime(0LL, 1LL, v4, v5);
  HalpTimerMarkWake();
  HalpTimerRestoreProcessorCounter(v9, v8, v10, v11);
  if ( !Number )
  {
    SystemPowerPhase = 1;
    HalpSetResumeTime(0LL, 2LL, v12, v13);
    HalpInterruptRestoreClock();
    HalpHiberInProgress = 0;
    dword_140E3EBD8 = 0;
  }
  _InterlockedAdd(&dword_140E3EBDC, 1u);
  while ( dword_140E3EBDC != v23 )
    ;
  while ( dword_140E3EBD8 < (int)Number )
    ;
  HalpMcUpdateMicrocode((unsigned int)dword_140E3EBD8);
  HalpErrataApplyPerProcessor();
  _InterlockedAdd(&dword_140E3EBD8, 1u);
  while ( dword_140E3EBD8 != v23 )
    ;
  HalpRestartProfiling(v15, v14, v16, v17);
  HalpInterruptEnableNmi();
  KeLoadMTRR(&unk_140E3EBC0);
  if ( !v7 )
    HalpTscSynchronizationWorker((ULONG_PTR)&Argument);
  memset_0(v24, 0, 0x3CCuLL);
  LOBYTE(Pcr) = HalpFeatureBits;
  if ( (HalpFeatureBits & 0xC) != 0 )
  {
    Pcr = KeGetPcr();
    for ( i = *(_QWORD *)&Pcr->HalReserved[6]; i; i = *(_QWORD *)(i + 184) )
    {
      v20 = *(_QWORD *)(i + 172);
      HalpMcaSetProcessorConfig(HalpMceErrorSource, v20);
      LOBYTE(Pcr) = HalpIsCmciImplemented();
      if ( (_BYTE)Pcr )
        LOBYTE(Pcr) = HalpCmciInitProcessor((__int64)HalpCmcErrorSource, v20);
    }
  }
  return (char)Pcr;
}
