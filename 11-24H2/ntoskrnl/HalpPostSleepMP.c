/*
 * XREFs of HalpPostSleepMP @ 0x140B70824
 * Callers:
 *     HaliAcpiSleep @ 0x1404D3920 (HaliAcpiSleep.c)
 * Callees:
 *     HalpInterruptEnablePerformanceEvents @ 0x140373A20 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptEnableNmi @ 0x14049E4CC (HalpInterruptEnableNmi.c)
 *     HalpRestartProfiling @ 0x1404AD860 (HalpRestartProfiling.c)
 *     HalpMcUpdateMicrocode @ 0x1404CAC6C (HalpMcUpdateMicrocode.c)
 *     HalpInterruptReinitializeThisProcessor @ 0x1404D1860 (HalpInterruptReinitializeThisProcessor.c)
 *     HalpTimerRestoreProcessorCounter @ 0x1404F392C (HalpTimerRestoreProcessorCounter.c)
 *     HalpTimerMarkWake @ 0x1404F71A0 (HalpTimerMarkWake.c)
 *     HalpHvIsReferenceTscConfigured @ 0x1404F7E54 (HalpHvIsReferenceTscConfigured.c)
 *     HalpTimerReinitializeThisProcessor @ 0x140538F60 (HalpTimerReinitializeThisProcessor.c)
 *     HalpInterruptRestoreClock @ 0x140540210 (HalpInterruptRestoreClock.c)
 *     HalpTscInitializeSynchronizationContext @ 0x140546F48 (HalpTscInitializeSynchronizationContext.c)
 *     HalpTscSynchronizationWorker @ 0x140547220 (HalpTscSynchronizationWorker.c)
 *     HalpHvSetMachineCheckHandlerState @ 0x140549088 (HalpHvSetMachineCheckHandlerState.c)
 *     HalpSetResumeTime @ 0x1405581B8 (HalpSetResumeTime.c)
 *     HalpMcaResumeProcessorConfig @ 0x140B6D4AC (HalpMcaResumeProcessorConfig.c)
 *     KeLoadMTRR @ 0x140B6F790 (KeLoadMTRR.c)
 *     HalpErrataApplyPerProcessor @ 0x140B6FE5C (HalpErrataApplyPerProcessor.c)
 */

char __fastcall HalpPostSleepMP(ULONG a1, __int64 a2, __int64 a3)
{
  bool IsReferenceTscConfigured; // al
  bool v4; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  ULONG v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h]

  v11 = a2;
  v10 = a1;
  LODWORD(v11) = KeGetCurrentPrcb()->Number;
  if ( (_DWORD)v11 )
  {
    HalpInterruptReinitializeThisProcessor();
    while ( (_DWORD)v11 != HalpBarrier )
      _mm_pause();
    __writecr8(0xFuLL);
    HalpTimerReinitializeThisProcessor();
  }
  if ( (HalpFeatureBits & 0xC) != 0 )
    HalpMcaResumeProcessorConfig(0);
  if ( (HalpFeatureBits & 1) != 0 )
    HalpInterruptEnablePerformanceEvents(0LL, a2, a3);
  IsReferenceTscConfigured = HalpHvIsReferenceTscConfigured();
  v4 = IsReferenceTscConfigured;
  if ( !(_DWORD)v11 )
  {
    dword_140E3ED1C = 0;
    dword_140E3ECC8 = 0;
    qword_140E3ED10 = (__int64)&dword_140E3ECC8;
    dword_140E3ED04 = v10 - 1;
    if ( !IsReferenceTscConfigured )
      HalpTscInitializeSynchronizationContext((__int64)&Argument, 0, 0LL, &v10);
  }
  _InterlockedIncrement(&HalpBarrier);
  while ( HalpBarrier != v10 )
    ;
  if ( !(_DWORD)v11 && HalpHvWheaEnlightenedCpuManager && HalpMceEnabled )
    HalpHvSetMachineCheckHandlerState();
  if ( !(_DWORD)v11 )
    HalpSetResumeTime(0LL, 1LL);
  HalpTimerMarkWake();
  HalpTimerRestoreProcessorCounter(v6, v5);
  if ( !(_DWORD)v11 )
  {
    SystemPowerPhase = 1;
    HalpSetResumeTime(0LL, 2LL);
    HalpInterruptRestoreClock();
    HalpHiberInProgress = 0;
    dword_140E3ED18 = 0;
  }
  _InterlockedIncrement(&dword_140E3ED1C);
  while ( dword_140E3ED1C != v10 )
    ;
  while ( dword_140E3ED18 < (int)v11 )
    ;
  HalpMcUpdateMicrocode((unsigned int)dword_140E3ED18);
  HalpErrataApplyPerProcessor();
  _InterlockedIncrement(&dword_140E3ED18);
  while ( dword_140E3ED18 != v10 )
    ;
  HalpRestartProfiling(v8, v7);
  HalpInterruptEnableNmi();
  KeLoadMTRR((__int64)&unk_140E3ED00);
  if ( !v4 )
    HalpTscSynchronizationWorker((ULONG_PTR)&Argument);
  return HalpMcaResumeProcessorConfig(1);
}
