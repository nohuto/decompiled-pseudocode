/*
 * XREFs of KiInitializeBootStructures @ 0x140B5A140
 * Callers:
 *     KiSystemStartup @ 0x140B4D3E0 (KiSystemStartup.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KiDetectTsx @ 0x1404D22CC (KiDetectTsx.c)
 *     KiSaveInitialProcessorControlState @ 0x1404F9480 (KiSaveInitialProcessorControlState.c)
 *     strstr @ 0x1404FB270 (strstr.c)
 *     atoi @ 0x1404FB4A0 (atoi.c)
 *     HalInitializeProcessor @ 0x1405395D0 (HalInitializeProcessor.c)
 *     HalInitializeBios @ 0x140539620 (HalInitializeBios.c)
 *     KiInitializeGlobalState @ 0x1405B4444 (KiInitializeGlobalState.c)
 *     KiConfigureInitialNodes @ 0x1405B89B8 (KiConfigureInitialNodes.c)
 *     KiDetermineImportOptimizationEnablement @ 0x1405BB398 (KiDetermineImportOptimizationEnablement.c)
 *     KiDetermineRetpolineEnablement @ 0x1405BB3E0 (KiDetermineRetpolineEnablement.c)
 *     KiGetProcessorSignature @ 0x1405C08D8 (KiGetProcessorSignature.c)
 *     KiSetProcessorSignature @ 0x1405C08F0 (KiSetProcessorSignature.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     KiInitPrcb @ 0x140B58254 (KiInitPrcb.c)
 *     KiInitializeIdt @ 0x140B5A760 (KiInitializeIdt.c)
 *     KiSetFeatureBits @ 0x140B5BC74 (KiSetFeatureBits.c)
 *     KiEnableKvaShadowing @ 0x140B5C8EC (KiEnableKvaShadowing.c)
 *     ExInitPoolLookasidePointers @ 0x140B63410 (ExInitPoolLookasidePointers.c)
 *     MmInitSystem @ 0x140BE02E8 (MmInitSystem.c)
 *     InitializeBuildStrings @ 0x140C0DAF0 (InitializeBuildStrings.c)
 *     HvlEnableVsmCalls @ 0x140C1B930 (HvlEnableVsmCalls.c)
 *     InbvDriverInitialize @ 0x140C1C230 (InbvDriverInitialize.c)
 *     KiInitializeNxSupportDiscard @ 0x140C2B758 (KiInitializeNxSupportDiscard.c)
 *     ExRngInitializeSystem @ 0x140C45628 (ExRngInitializeSystem.c)
 *     CmInitBootFeatureConfigurations @ 0x140C46FF8 (CmInitBootFeatureConfigurations.c)
 */

__int64 __fastcall KiInitializeBootStructures(__int64 a1)
{
  KPCR *Pcr; // r14
  _KPROCESS **v2; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *v4; // r15
  _KTHREAD **v5; // r11
  __int64 Number; // rbp
  __int64 v8; // rcx
  __int64 v9; // r10
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  _KTHREAD *v14; // rcx
  __int64 v15; // rax
  bool v16; // zf
  _KIDTENTRY64 *IdtBase; // r15
  __int64 ProcessorSignature; // r8
  __int64 v19; // rdx
  const char *v20; // rcx
  int v21; // edx
  char *v22; // rax
  char i; // cl
  unsigned int v24; // eax
  unsigned int v25; // eax
  __int64 (__fastcall *v26)(); // rbx
  __int64 (__fastcall *v27)(); // rsi
  int v28; // ecx

  Pcr = KeGetPcr();
  v2 = (_KPROCESS **)(a1 + 144);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = (_QWORD *)(a1 + 128);
  v5 = (_KTHREAD **)(a1 + 152);
  *(_DWORD *)&Pcr->MajorVersion = 65537;
  *(_DWORD *)&CurrentPrcb->MinorVersion = 65537;
  CurrentPrcb->BuildType = 0;
  Number = Pcr->Prcb.Number;
  if ( !(_DWORD)Number )
  {
    KiInitializeGlobalState();
    InitializeBuildStrings(*(_QWORD *)(v8 + 240));
    v9 = *(_QWORD *)(a1 + 240);
    v10 = *(unsigned int *)(a1 + 160);
    KiFeatureSettings = *(_DWORD *)(v9 + 3492);
    KiFeatureSimulations = (*(_DWORD *)(v9 + 132) >> 21) & 0x3F;
    *v2 = (_KPROCESS *)&KiInitialProcess;
    *v5 = (_KTHREAD *)&KiInitialThread;
    LODWORD(KeKernelStackSize) = v10;
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 3860LL);
    KeKernelLargeStackCommit = v10;
    KeDpcStackSize = v10;
    LODWORD(KeExceptionStackSize) = v10;
    LODWORD(KeIsrStackSize) = v10;
    LODWORD(KeIstStackSize) = v10;
    KeKernelLargeStackSize = v11;
    v12 = v10 + 4096 + *v4;
    LODWORD(KeMaximumKernelStackExpansionSize) = v11 - 2048;
    CurrentPrcb->IsrStack = (void *)v12;
    v13 = (_QWORD *)(v12 + (unsigned int)KeExceptionStackSize + 4016LL);
    v13[5] = &KiExceptionDispatchOnExceptionStackContinue;
    CurrentPrcb->LocalSharedReadyQueue = (_KSHARED_READY_QUEUE *)&KiInitialSharedReadyQueue;
    CurrentPrcb->ExceptionStack = v13;
    CurrentPrcb->GroupSetMember = 1LL;
  }
  CurrentPrcb->SharedReadyQueue = CurrentPrcb->LocalSharedReadyQueue;
  if ( !(_DWORD)Number )
    CurrentPrcb->StaticRescheduleContext = (_KI_RESCHEDULE_CONTEXT *)&KiInitialStaticRescheduleContext;
  v14 = *v5;
  CurrentPrcb->NextThread = 0LL;
  CurrentPrcb->CurrentThread = v14;
  CurrentPrcb->IdleThread = v14;
  v14->ApcState.Process = *v2;
  v14->ApcState.ApcListHead[0].Blink = v14->ApcState.ApcListHead;
  v14->ApcState.ApcListHead[0].Flink = v14->ApcState.ApcListHead;
  if ( !(_DWORD)Number )
  {
    CmInitBootFeatureConfigurations(a1);
    KiConfigureInitialNodes((__int64)CurrentPrcb);
  }
  KiProcessorBlock[Number] = (__int64)CurrentPrcb;
  v15 = *v4 - 80LL;
  *(_QWORD *)(v15 + 40) = &KiPlatformSwapStacksAndCallReturn;
  v16 = CurrentPrcb->Context == 0LL;
  CurrentPrcb->DpcStack = (void *)v15;
  if ( v16 )
  {
    CurrentPrcb->ContextFlagsInit = 1048587;
    CurrentPrcb->Context = &CurrentPrcb->ProcessorState.ContextFrame;
  }
  IdtBase = Pcr->IdtBase;
  ProcessorSignature = (unsigned int)KiGetProcessorSignature();
  v19 = 0LL;
  v20 = 0LL;
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
    v21 = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL);
    if ( (v21 & 8) != 0 )
      KiBootDebuggerActive = 1;
    if ( (v21 & 0x100) != 0 )
      KiSystemCallSelector = 1;
    KiInitializeIdt(IdtBase, 0LL);
    HalInitializeBios(-1, (_QWORD *)a1);
    InbvDriverInitialize(0xFFFFFFFFLL, a1, 0LL);
    v20 = *(const char **)(a1 + 216);
    if ( v20 )
    {
      v22 = strstr(v20, "GROUPSIZE");
      if ( v22 )
      {
        for ( i = *v22; *v22; i = *++v22 )
        {
          if ( i == 32 )
            break;
          if ( (unsigned __int8)(i - 48) <= 9u )
            break;
        }
        v24 = atoi(v22);
        KiMaximumGroupSize = v24;
        if ( !v24 || v24 > 0x40 )
          KiMaximumGroupSize = 64;
      }
    }
  }
  *((_WORD *)Pcr->NtTib.StackBase + 51) = 104;
  if ( !KeGetPcr()->Prcb.Number )
    KiInitializeNxSupportDiscard(v20, v19, ProcessorSignature);
  HalInitializeProcessor(Number, a1);
  KiSetFeatureBits(CurrentPrcb);
  v25 = CurrentPrcb->Number;
  v26 = KiSystemCall32;
  v27 = (__int64 (__fastcall *)())KiSystemCall64;
  if ( !v25 )
  {
    KiEnableKvaShadowing(CurrentPrcb, &Pcr->NtTib.ExceptionList[-763], 0LL);
    v25 = CurrentPrcb->Number;
  }
  if ( KiKvaShadow )
  {
    v26 = KiSystemCall32Shadow;
    v27 = KiSystemCall64Shadow;
  }
  if ( !v25 )
    KiTsxSupportedAtBoot = KiDetectTsx();
  if ( CurrentPrcb->MsrIa32TsxCtrl )
    __writemsr(0x122u, CurrentPrcb->MsrIa32TsxCtrl);
  if ( !CurrentPrcb->Number )
  {
    v28 = KiDebugTrapIndex;
    qword_140E086E0 = (__int64)KiDebugTraps;
    qword_140E086E8 = 64LL;
    KiDebugTraps[KiDebugTrapIndex] = v27;
    KiDebugTraps[++v28] = v26;
    KiDebugTrapIndex = v28 + 1;
  }
  __writemsr(0xC0000081, 0x23001000000000uLL);
  __writemsr(0xC0000083, (unsigned __int64)v26);
  __writemsr(0xC0000082, (unsigned __int64)v27);
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
