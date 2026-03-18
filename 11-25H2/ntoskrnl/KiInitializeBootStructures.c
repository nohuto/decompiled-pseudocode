/*
 * XREFs of KiInitializeBootStructures @ 0x140B48120
 * Callers:
 *     KiSystemStartup @ 0x140B3B3A0 (KiSystemStartup.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     KiDetectTsx @ 0x1404D9ECC (KiDetectTsx.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 *     KiSaveInitialProcessorControlState @ 0x1404F94B0 (KiSaveInitialProcessorControlState.c)
 *     strstr @ 0x1404FB230 (strstr.c)
 *     atoi @ 0x1404FB460 (atoi.c)
 *     HalInitializeProcessor @ 0x140539540 (HalInitializeProcessor.c)
 *     HalInitializeBios @ 0x140539590 (HalInitializeBios.c)
 *     KiInitializeGlobalState @ 0x1405B3214 (KiInitializeGlobalState.c)
 *     KiConfigureInitialNodes @ 0x1405B74F8 (KiConfigureInitialNodes.c)
 *     KiDetermineImportOptimizationEnablement @ 0x1405B9F1C (KiDetermineImportOptimizationEnablement.c)
 *     KiDetermineRetpolineEnablement @ 0x1405B9F64 (KiDetermineRetpolineEnablement.c)
 *     KiGetProcessorSignature @ 0x1405BF228 (KiGetProcessorSignature.c)
 *     KiSetProcessorSignature @ 0x1405BF240 (KiSetProcessorSignature.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     KiInitPrcb @ 0x140B46260 (KiInitPrcb.c)
 *     KiInitializeIdt @ 0x140B48750 (KiInitializeIdt.c)
 *     KiSetFeatureBits @ 0x140B49BD0 (KiSetFeatureBits.c)
 *     KiEnableKvaShadowing @ 0x140B4A90C (KiEnableKvaShadowing.c)
 *     ExInitPoolLookasidePointers @ 0x140B51210 (ExInitPoolLookasidePointers.c)
 *     MmInitSystem @ 0x140BCD2E8 (MmInitSystem.c)
 *     InitializeBuildStrings @ 0x140BFAAF0 (InitializeBuildStrings.c)
 *     InbvDriverInitialize @ 0x140C09150 (InbvDriverInitialize.c)
 *     KiInitializeNxSupportDiscard @ 0x140C185A8 (KiInitializeNxSupportDiscard.c)
 *     ExRngInitializeSystem @ 0x140C3220C (ExRngInitializeSystem.c)
 *     CmInitBootFeatureConfigurations @ 0x140C33BDC (CmInitBootFeatureConfigurations.c)
 *     HvlEnableVsmCalls @ 0x140C4BC94 (HvlEnableVsmCalls.c)
 */

__int64 __fastcall KiInitializeBootStructures(__int64 a1)
{
  KPCR *Pcr; // r14
  _KPROCESS **v2; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  _KTHREAD **v4; // r11
  __int64 Number; // rbp
  __int64 v7; // rcx
  __int64 v8; // r10
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  _KTHREAD *v13; // rcx
  __int64 v14; // rax
  bool v15; // zf
  _KIDTENTRY64 *IdtBase; // r15
  __int64 ProcessorSignature; // r8
  __int64 v18; // rdx
  const char *v19; // rcx
  int v20; // edx
  char *v21; // rax
  char i; // cl
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 (__fastcall *v25)(); // rbx
  __int64 (__fastcall *v26)(); // rsi
  int v27; // ecx

  Pcr = KeGetPcr();
  v2 = (_KPROCESS **)(a1 + 144);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = (_KTHREAD **)(a1 + 152);
  *(_DWORD *)&Pcr->MajorVersion = 65537;
  *(_DWORD *)&CurrentPrcb->MinorVersion = 65537;
  CurrentPrcb->BuildType = 0;
  Number = Pcr->Prcb.Number;
  if ( !(_DWORD)Number )
  {
    KiInitializeGlobalState();
    InitializeBuildStrings(*(_QWORD *)(v7 + 240));
    v8 = *(_QWORD *)(a1 + 240);
    v9 = *(unsigned int *)(a1 + 160);
    KiFeatureSettings = *(_DWORD *)(v8 + 3492);
    KiFeatureSimulations = (*(_DWORD *)(v8 + 132) >> 21) & 0x3F;
    *v2 = (_KPROCESS *)&KiInitialProcess;
    *v4 = (_KTHREAD *)&KiInitialThread;
    LODWORD(KeKernelStackSize) = v9;
    v10 = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 3860LL);
    KeKernelLargeStackCommit = v9;
    KeDpcStackSize = v9;
    LODWORD(KeExceptionStackSize) = v9;
    LODWORD(KeIsrStackSize) = v9;
    LODWORD(KeIstStackSize) = v9;
    KeKernelLargeStackSize = v10;
    v11 = v9 + 4096 + *(_QWORD *)(a1 + 128);
    LODWORD(KeMaximumKernelStackExpansionSize) = v10 - 2048;
    CurrentPrcb->IsrStack = (void *)v11;
    v12 = (_QWORD *)(v11 + (unsigned int)KeExceptionStackSize + 4016LL);
    v12[5] = &KiExceptionDispatchOnExceptionStackContinue;
    CurrentPrcb->LocalSharedReadyQueue = (_KSHARED_READY_QUEUE *)&KiInitialSharedReadyQueue;
    CurrentPrcb->ExceptionStack = v12;
    CurrentPrcb->GroupSetMember = 1LL;
  }
  CurrentPrcb->SharedReadyQueue = CurrentPrcb->LocalSharedReadyQueue;
  if ( !(_DWORD)Number )
    CurrentPrcb->StaticRescheduleContext = (_KI_RESCHEDULE_CONTEXT *)&KiInitialStaticRescheduleContext;
  v13 = *v4;
  CurrentPrcb->NextThread = 0LL;
  CurrentPrcb->CurrentThread = v13;
  CurrentPrcb->IdleThread = v13;
  v13->ApcState.Process = *v2;
  v13->ApcState.ApcListHead[0].Blink = v13->ApcState.ApcListHead;
  v13->ApcState.ApcListHead[0].Flink = v13->ApcState.ApcListHead;
  if ( !(_DWORD)Number )
    CmInitBootFeatureConfigurations(a1);
  if ( (unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline() && !(_DWORD)Number )
    KiConfigureInitialNodes((__int64)CurrentPrcb);
  KiProcessorBlock[Number] = (__int64)CurrentPrcb;
  v14 = *(_QWORD *)(a1 + 128) - 80LL;
  *(_QWORD *)(v14 + 40) = &KiPlatformSwapStacksAndCallReturn;
  v15 = CurrentPrcb->Context == 0LL;
  CurrentPrcb->DpcStack = (void *)v14;
  if ( v15 )
  {
    CurrentPrcb->ContextFlagsInit = 1048587;
    CurrentPrcb->Context = &CurrentPrcb->ProcessorState.ContextFrame;
  }
  IdtBase = Pcr->IdtBase;
  ProcessorSignature = (unsigned int)KiGetProcessorSignature();
  v18 = 0LL;
  v19 = 0LL;
  CurrentPrcb->CpuID = 1;
  CurrentPrcb->CpuType = 0;
  CurrentPrcb->CpuStep = 0;
  if ( !(_DWORD)Number )
  {
    KiSetProcessorSignature((__int64)CurrentPrcb, ProcessorSignature);
    IdtBase[263].Alignment = (unsigned __int64)Pcr;
    HvlEnableVsmCalls(a1);
    ExRngInitializeSystem();
    KiDetermineImportOptimizationEnablement(a1);
    KiDetermineRetpolineEnablement(a1);
    MmInitSystem(0xFFFFFFFFLL, a1);
    v20 = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL);
    if ( (v20 & 8) != 0 )
      KiBootDebuggerActive = 1;
    if ( (v20 & 0x100) != 0 )
      KiSystemCallSelector = 1;
    KiInitializeIdt(IdtBase, 0LL);
    HalInitializeBios(-1, (_QWORD *)a1);
    InbvDriverInitialize(0xFFFFFFFFLL, a1, 0LL);
    v19 = *(const char **)(a1 + 216);
    if ( v19 )
    {
      v21 = strstr(v19, "GROUPSIZE");
      if ( v21 )
      {
        for ( i = *v21; *v21; i = *++v21 )
        {
          if ( i == 32 )
            break;
          if ( (unsigned __int8)(i - 48) <= 9u )
            break;
        }
        v23 = atoi(v21);
        KiMaximumGroupSize = v23;
        if ( !v23 || v23 > 0x40 )
          KiMaximumGroupSize = 64;
      }
    }
  }
  *((_WORD *)Pcr->NtTib.StackBase + 51) = 104;
  if ( !KeGetPcr()->Prcb.Number )
    KiInitializeNxSupportDiscard(v19, v18, ProcessorSignature);
  HalInitializeProcessor(Number, a1);
  KiSetFeatureBits(CurrentPrcb);
  v24 = CurrentPrcb->Number;
  v25 = KiSystemCall32;
  v26 = (__int64 (__fastcall *)())KiSystemCall64;
  if ( !v24 )
  {
    KiEnableKvaShadowing(CurrentPrcb, &Pcr->NtTib.ExceptionList[-763], 0LL);
    v24 = CurrentPrcb->Number;
  }
  if ( KiKvaShadow )
  {
    v25 = KiSystemCall32Shadow;
    v26 = KiSystemCall64Shadow;
  }
  if ( !v24 )
    KiTsxSupportedAtBoot = KiDetectTsx();
  if ( CurrentPrcb->MsrIa32TsxCtrl )
    __writemsr(0x122u, CurrentPrcb->MsrIa32TsxCtrl);
  if ( !CurrentPrcb->Number )
  {
    v27 = KiDebugTrapIndex;
    qword_140E08590 = (__int64)KiDebugTraps;
    qword_140E08598 = 64LL;
    KiDebugTraps[KiDebugTrapIndex] = v26;
    KiDebugTraps[++v27] = v25;
    KiDebugTrapIndex = v27 + 1;
  }
  __writemsr(0xC0000081, 0x23001000000000uLL);
  __writemsr(0xC0000083, (unsigned __int64)v25);
  __writemsr(0xC0000082, (unsigned __int64)v26);
  __writemsr(0xC0000084, 0x4700uLL);
  KiInitPrcb((__int64)CurrentPrcb, Number);
  ExInitPoolLookasidePointers();
  if ( !(_DWORD)Number )
  {
    KeActiveProcessors.Reserved = 0;
    LODWORD(KeNumberProcessors_0) = 1;
    KeNumberProcessorsGroup0[0] = 1;
    *(_DWORD *)&KeActiveProcessors.Count = 2097153;
    memset_0(&KeActiveProcessors.8, 0, sizeof(KeActiveProcessors.8));
    KeAddProcessorAffinityEx(&KeActiveProcessors.Count, 0);
  }
  return KiSaveInitialProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
}
