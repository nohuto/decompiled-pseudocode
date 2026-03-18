/*
 * XREFs of KiInitializeBootStructures @ 0x140B580C0
 * Callers:
 *     KiSystemStartup @ 0x140B4B3A0 (KiSystemStartup.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140257130 (KeAddProcessorAffinityEx.c)
 *     KiDetectTsx @ 0x1404D8E7C (KiDetectTsx.c)
 *     KiSaveInitialProcessorControlState @ 0x1404FBBC0 (KiSaveInitialProcessorControlState.c)
 *     strstr @ 0x1404FD9B0 (strstr.c)
 *     atoi @ 0x1404FDBE0 (atoi.c)
 *     HalInitializeProcessor @ 0x14053BCF0 (HalInitializeProcessor.c)
 *     HalInitializeBios @ 0x14053BD40 (HalInitializeBios.c)
 *     KiInitializeGlobalState @ 0x1405B70E4 (KiInitializeGlobalState.c)
 *     KiConfigureInitialNodes @ 0x1405BB388 (KiConfigureInitialNodes.c)
 *     KiDetermineImportOptimizationEnablement @ 0x1405BDD68 (KiDetermineImportOptimizationEnablement.c)
 *     KiDetermineRetpolineEnablement @ 0x1405BDDB0 (KiDetermineRetpolineEnablement.c)
 *     KiGetProcessorSignature @ 0x1405C3308 (KiGetProcessorSignature.c)
 *     KiSetProcessorSignature @ 0x1405C3320 (KiSetProcessorSignature.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     KiInitPrcb @ 0x140B56204 (KiInitPrcb.c)
 *     KiInitializeIdt @ 0x140B586E0 (KiInitializeIdt.c)
 *     KiSetFeatureBits @ 0x140B59BF4 (KiSetFeatureBits.c)
 *     KiEnableKvaShadowing @ 0x140B5A87C (KiEnableKvaShadowing.c)
 *     ExInitPoolLookasidePointers @ 0x140B61340 (ExInitPoolLookasidePointers.c)
 *     MmInitSystem @ 0x140BDE2E8 (MmInitSystem.c)
 *     InitializeBuildStrings @ 0x140C0BAF0 (InitializeBuildStrings.c)
 *     InbvDriverInitialize @ 0x140C1A1F0 (InbvDriverInitialize.c)
 *     KiInitializeNxSupportDiscard @ 0x140C296B8 (KiInitializeNxSupportDiscard.c)
 *     ExRngInitializeSystem @ 0x140C434D8 (ExRngInitializeSystem.c)
 *     CmInitBootFeatureConfigurations @ 0x140C44EA8 (CmInitBootFeatureConfigurations.c)
 *     HvlEnableVsmCalls @ 0x140C5D014 (HvlEnableVsmCalls.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  bool v19; // zf
  _KIDTENTRY64 *IdtBase; // r15
  __int64 ProcessorSignature; // r8
  __int64 v22; // rdx
  const char *v23; // rcx
  int v24; // edx
  char *v25; // rax
  char i; // cl
  unsigned int v27; // eax
  unsigned int v28; // eax
  __int64 (__fastcall *v29)(); // rbx
  __int64 (__fastcall *v30)(); // rsi
  int v31; // ecx

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
    KiConfigureInitialNodes((__int64)CurrentPrcb, v15, v16, v17);
  }
  KiProcessorBlock[Number] = (__int64)CurrentPrcb;
  v18 = *v4 - 80LL;
  *(_QWORD *)(v18 + 40) = &KiPlatformSwapStacksAndCallReturn;
  v19 = CurrentPrcb->Context == 0LL;
  CurrentPrcb->DpcStack = (void *)v18;
  if ( v19 )
  {
    CurrentPrcb->ContextFlagsInit = 1048587;
    CurrentPrcb->Context = &CurrentPrcb->ProcessorState.ContextFrame;
  }
  IdtBase = Pcr->IdtBase;
  ProcessorSignature = (unsigned int)KiGetProcessorSignature();
  v22 = 0LL;
  v23 = 0LL;
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
    v24 = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL);
    if ( (v24 & 8) != 0 )
      KiBootDebuggerActive = 1;
    if ( (v24 & 0x100) != 0 )
      KiSystemCallSelector = 1;
    KiInitializeIdt(IdtBase, 0LL);
    HalInitializeBios(-1, (_QWORD *)a1);
    InbvDriverInitialize(0xFFFFFFFFLL, a1, 0LL);
    v23 = *(const char **)(a1 + 216);
    if ( v23 )
    {
      v25 = strstr(v23, "GROUPSIZE");
      if ( v25 )
      {
        for ( i = *v25; *v25; i = *++v25 )
        {
          if ( i == 32 )
            break;
          if ( (unsigned __int8)(i - 48) <= 9u )
            break;
        }
        v27 = atoi(v25);
        KiMaximumGroupSize = v27;
        if ( !v27 || v27 > 0x40 )
          KiMaximumGroupSize = 64;
      }
    }
  }
  *((_WORD *)Pcr->NtTib.StackBase + 51) = 104;
  if ( !KeGetPcr()->Prcb.Number )
    KiInitializeNxSupportDiscard(v23, v22, ProcessorSignature);
  HalInitializeProcessor(Number, a1);
  KiSetFeatureBits(CurrentPrcb);
  v28 = CurrentPrcb->Number;
  v29 = KiSystemCall32;
  v30 = (__int64 (__fastcall *)())KiSystemCall64;
  if ( !v28 )
  {
    KiEnableKvaShadowing(CurrentPrcb, &Pcr->NtTib.ExceptionList[-763], 0LL);
    v28 = CurrentPrcb->Number;
  }
  if ( KiKvaShadow )
  {
    v29 = KiSystemCall32Shadow;
    v30 = KiSystemCall64Shadow;
  }
  if ( !v28 )
    KiTsxSupportedAtBoot = KiDetectTsx();
  if ( CurrentPrcb->MsrIa32TsxCtrl )
    __writemsr(0x122u, CurrentPrcb->MsrIa32TsxCtrl);
  if ( !CurrentPrcb->Number )
  {
    v31 = KiDebugTrapIndex;
    qword_140E08680 = (__int64)KiDebugTraps;
    qword_140E08688 = 64LL;
    KiDebugTraps[KiDebugTrapIndex] = v30;
    KiDebugTraps[++v31] = v29;
    KiDebugTrapIndex = v31 + 1;
  }
  __writemsr(0xC0000081, 0x23001000000000uLL);
  __writemsr(0xC0000083, (unsigned __int64)v29);
  __writemsr(0xC0000082, (unsigned __int64)v30);
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
