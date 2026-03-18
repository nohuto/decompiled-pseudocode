/*
 * XREFs of KeBugCheck2 @ 0x1405ADDF0
 * Callers:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x1402571A0 (KeQueryCurrentStackInformation.c)
 *     KeRemoveProcessorAffinityEx @ 0x14026A790 (KeRemoveProcessorAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeStallExecutionProcessor @ 0x140278EE0 (KeStallExecutionProcessor.c)
 *     MmIsAddressValidEx @ 0x1402AA5A0 (MmIsAddressValidEx.c)
 *     KeIsEmptyAffinityEx @ 0x140377880 (KeIsEmptyAffinityEx.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     IoAddTriageDumpDataBlock @ 0x14041F7F0 (IoAddTriageDumpDataBlock.c)
 *     KiSendThawExecution @ 0x1404D91B0 (KiSendThawExecution.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSetDebuggerOwner @ 0x1404F8C24 (KiSetDebuggerOwner.c)
 *     KiFilterBugCheckInfo @ 0x140505A6C (KiFilterBugCheckInfo.c)
 *     HalReturnToFirmware @ 0x140542060 (HalReturnToFirmware.c)
 *     HvlLogGuestCrashInformation @ 0x14057F1B4 (HvlLogGuestCrashInformation.c)
 *     HvlNotifyRootCrashdump @ 0x140584428 (HvlNotifyRootCrashdump.c)
 *     HvlPrepareForRootCrashdump @ 0x1405844B4 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x140584908 (HvlResumeFromRootCrashdump.c)
 *     IoNotifyDumpEx @ 0x14058E448 (IoNotifyDumpEx.c)
 *     IoRetryAsMiniDump @ 0x14058E570 (IoRetryAsMiniDump.c)
 *     IoSaveBugCheckProgress @ 0x14058E6E0 (IoSaveBugCheckProgress.c)
 *     IoSaveInitialBugCheckProgress @ 0x14058E8F0 (IoSaveInitialBugCheckProgress.c)
 *     IoSetBugCheckProgressFlag @ 0x14058EA90 (IoSetBugCheckProgressFlag.c)
 *     KdDecodeDataBlock @ 0x1405ABC18 (KdDecodeDataBlock.c)
 *     KdEnableDebuggerWithLock @ 0x1405AC0EC (KdEnableDebuggerWithLock.c)
 *     KiBugCheckDebugBreak @ 0x1405AF3E0 (KiBugCheckDebugBreak.c)
 *     KiBugCheckProgressCpusFrozen @ 0x1405AF604 (KiBugCheckProgressCpusFrozen.c)
 *     KiBugCheckShouldEnterPostBugCheckDebugger @ 0x1405AF6C0 (KiBugCheckShouldEnterPostBugCheckDebugger.c)
 *     KiBugCheckUnicodeToAnsi @ 0x1405AF724 (KiBugCheckUnicodeToAnsi.c)
 *     KiBugCheckWriteCrashDump @ 0x1405AF768 (KiBugCheckWriteCrashDump.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x1405AF7D4 (KiBugcheckUnloadDebugSymbols.c)
 *     KiCollectTriageDumpDataBlocks @ 0x1405AFA18 (KiCollectTriageDumpDataBlocks.c)
 *     KiDisplayBlueScreen @ 0x1405AFF14 (KiDisplayBlueScreen.c)
 *     KiDumpParameterImages @ 0x1405B02A8 (KiDumpParameterImages.c)
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1405B054C (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1405B0764 (KiInvokeBugCheckEntryCallbacks.c)
 *     KiPcToFileHeader @ 0x1405B082C (KiPcToFileHeader.c)
 *     KiScanBugCheckCallbackList @ 0x1405B0A24 (KiScanBugCheckCallbackList.c)
 *     KiYieldWaitForDebugger @ 0x1405B0C94 (KiYieldWaitForDebugger.c)
 *     KeSaveSupervisorState @ 0x1405B4AA4 (KeSaveSupervisorState.c)
 *     KiSendFreeze @ 0x1405BDEE4 (KiSendFreeze.c)
 *     KiAttemptBugcheckRecovery @ 0x1405C13E4 (KiAttemptBugcheckRecovery.c)
 *     KiHandleMultipleBugchecksDuringRecovery @ 0x1405C1F20 (KiHandleMultipleBugchecksDuringRecovery.c)
 *     PpmHvSetVirtualProcessorQos @ 0x1405D6E20 (PpmHvSetVirtualProcessorQos.c)
 *     WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x14064F754 (WheapSelLogSetNtSchedulerAvailabilityNoLock.c)
 *     MmLocateUnloadedDriver @ 0x1406608B8 (MmLocateUnloadedDriver.c)
 *     IpmiHwContextInitialized @ 0x1406942CC (IpmiHwContextInitialized.c)
 *     IpmiLibAddSelBugcheckRecord @ 0x140694830 (IpmiLibAddSelBugcheckRecord.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     VfNotifyVerifierOfEvent @ 0x140B72EC0 (VfNotifyVerifierOfEvent.c)
 */

void __fastcall __noreturn KeBugCheck2(
        unsigned int a1,
        __int64 a2,
        unsigned __int64 a3,
        const CHAR *a4,
        unsigned __int64 a5,
        _QWORD *a6)
{
  unsigned __int64 v6; // rdi
  const CHAR *v7; // r13
  __int64 v10; // rax
  int v11; // edx
  unsigned __int8 CurrentIrql; // cl
  signed __int32 v13; // eax
  unsigned int v14; // edx
  signed __int32 v15; // ecx
  unsigned __int8 v16; // si
  char CurrentStackInformation; // bl
  signed __int32 v18; // eax
  unsigned int v19; // edx
  signed __int32 v20; // ecx
  int v21; // ecx
  __int64 v22; // rdi
  char *v23; // rbx
  signed __int64 v24; // rsi
  unsigned __int64 v25; // rdi
  struct _KTHREAD *v26; // rax
  unsigned __int64 v28; // rcx
  const void *v29; // rdx
  size_t v30; // r8
  struct _KPRCB *CurrentPrcb; // r14
  _XSAVE_AREA_HEADER *ExtendedSupervisorState; // rcx
  unsigned int v33; // ebx
  char v34; // si
  _CONTEXT *Context; // rax
  char *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int128 v39; // xmm1
  _QWORD *v40; // rdi
  bool v41; // bl
  bool v42; // r15
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 *v45; // rcx
  unsigned __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 UnloadedDriver; // rax
  bool v50; // zf
  struct _KTHREAD *v51; // rcx
  __int64 v52; // rcx
  struct _KTHREAD *v53; // r12
  int IsEmptyAffinity; // eax
  bool v55; // bl
  unsigned __int8 v56; // cl
  unsigned int v57; // ebx
  bool v58; // di
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  int v62; // ecx
  unsigned int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // rbx
  _CONTEXT *v66; // rax
  char *v67; // rcx
  __int128 v68; // xmm1
  __int64 v69; // rcx
  int v70; // ecx
  char v71; // [rsp+54h] [rbp-ACh]
  char v72; // [rsp+58h] [rbp-A8h]
  bool v73; // [rsp+59h] [rbp-A7h]
  _BYTE v74[6]; // [rsp+5Ah] [rbp-A6h] BYREF
  _QWORD *v75; // [rsp+60h] [rbp-A0h]
  bool v76; // [rsp+68h] [rbp-98h]
  PCSTR v77; // [rsp+70h] [rbp-90h]
  char v78; // [rsp+78h] [rbp-88h]
  bool v79; // [rsp+79h] [rbp-87h]
  char v80; // [rsp+7Ah] [rbp-86h]
  unsigned int v81; // [rsp+80h] [rbp-80h] BYREF
  __int64 v82; // [rsp+88h] [rbp-78h]
  int v83; // [rsp+90h] [rbp-70h]
  __int64 v84; // [rsp+98h] [rbp-68h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-60h]
  unsigned int v86; // [rsp+A8h] [rbp-58h] BYREF
  __int64 (__fastcall *v87)(); // [rsp+B0h] [rbp-50h]
  unsigned __int64 v88; // [rsp+B8h] [rbp-48h]
  _BYTE *v89; // [rsp+C0h] [rbp-40h] BYREF
  void *Src; // [rsp+C8h] [rbp-38h] BYREF
  PCSTR Format; // [rsp+D0h] [rbp-30h]
  struct _KAFFINITY_EX v92; // [rsp+E0h] [rbp-20h] BYREF
  char v93[1232]; // [rsp+1F0h] [rbp+F0h] BYREF
  char pszDest[192]; // [rsp+6C0h] [rbp+5C0h] BYREF

  v6 = a3;
  v7 = (const CHAR *)a5;
  v88 = a3;
  v81 = a1;
  v75 = a6;
  memset_0(&v92, 0, sizeof(v92));
  v73 = 1;
  pszDest[0] = 0;
  CurrentThread = KeGetCurrentThread();
  v87 = KiBugCheckProgress;
  v76 = IopAutoReboot != 0;
  v84 = 0LL;
  v74[0] = 0;
  v82 = 0LL;
  v71 = 0;
  v78 = 0;
  v80 = 0;
  Format = 0LL;
  v77 = 0LL;
  v79 = 0;
  v83 = 0;
  if ( !_InterlockedExchange(&KiBugCheckDataInitialized, 1) )
  {
    v10 = v81;
    if ( v81 == -1073741103 )
    {
      v10 = 195LL;
      v81 = 195;
    }
    KiBugCheckData = v10;
    qword_140F46028 = a2;
    qword_140F46030 = v6;
    qword_140F46038 = (__int64)a4;
    qword_140F46040 = a5;
  }
  IoNotifyDumpEx(4);
  if ( (HvlpFlags & 2) != 0 )
    HvlNotifyRootCrashdump(4);
  v89 = 0LL;
  Src = 0LL;
  v86 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v11) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v11);
    }
  }
  if ( KeGetCurrentThread()->InitialStack )
  {
    CurrentStackInformation = KeQueryCurrentStackInformation((__int64)&v86, (__int64)&Src, (__int64)&v89);
    v18 = KiBugCheckActive;
    v19 = (16 * KeGetCurrentPrcb()->Number) | 3;
    do
    {
      if ( (v18 & 3) == 3 )
      {
        v16 = 0;
        v72 = 0;
        goto LABEL_40;
      }
      v20 = v18;
      v18 = _InterlockedCompareExchange(&KiBugCheckActive, v19, v18);
    }
    while ( v18 != v20 );
    IoNotifyDumpEx(6);
    if ( CurrentStackInformation )
    {
      if ( v86 > 9 || (v21 = 929, !_bittest(&v21, v86)) )
      {
        v22 = 147456LL;
        v23 = (char *)Src;
        if ( (unsigned __int64)(v89 - (_BYTE *)Src) > 0x24000 || (v22 = v89 - (_BYTE *)Src, v89 != Src) )
        {
          v24 = &KiPreBugcheckStackSaveArea - (_UNKNOWN *)Src;
          v25 = ((unsigned __int64)(v22 - 1) >> 12) + 1;
          do
          {
            if ( MmIsAddressValidEx((__int64)v23) )
              memmove(&v23[v24], v23, 0x1000uLL);
            v23 += 4096;
            --v25;
          }
          while ( v25 );
        }
        IoNotifyDumpEx(7);
        v6 = v88;
      }
    }
    if ( (_BYTE)KiKernelCetEnabled )
    {
      v26 = KeGetCurrentThread();
      __asm { rdsspq  r8 }
      v28 = (v26->KernelShadowStackLimit.AllFields & 0xFFFFFFFFFFFFF000uLL) + 4096;
      if ( _R8 > v28 && (void *)_R8 < (char *)v26->KernelShadowStackBase - 4096 )
      {
        v29 = (const void *)(_R8 - 256);
        if ( _R8 - 256 < v28 )
          v29 = (const void *)((v26->KernelShadowStackLimit.AllFields & 0xFFFFFFFFFFFFF000uLL) + 4096);
        v30 = _R8 - (_QWORD)v29;
        if ( v30 > 0x100 )
          v30 = 256LL;
        memmove(&unk_140FC70C0, v29, v30);
      }
    }
    v16 = 1;
    v72 = 1;
  }
  else
  {
    v13 = KiBugCheckActive;
    v14 = (16 * KeGetCurrentPrcb()->Number) | 3;
    while ( (v13 & 3) != 3 )
    {
      v15 = v13;
      v13 = _InterlockedCompareExchange(&KiBugCheckActive, v14, v13);
      if ( v13 == v15 )
      {
        v72 = 1;
        goto LABEL_16;
      }
    }
    v72 = 0;
LABEL_16:
    v16 = v72;
  }
LABEL_40:
  DbgPrintEx(5u, 2u, "KeBugCheck2(): KiSavePreBugcheckStack() -> ActiveBugCheck: 0x%02x\n", v16);
  if ( v16 && KiRecoveryCallbackCount <= 0 )
    KiBugcheckOwnerKeepsOthersFrozen = 1;
  if ( KeSmapEnabled )
    __asm { stac }
  CurrentPrcb = KeGetCurrentPrcb();
  ExtendedSupervisorState = CurrentPrcb->ExtendedSupervisorState;
  LODWORD(v88) = CurrentPrcb->Number;
  KeSaveSupervisorState(ExtendedSupervisorState, KeEnabledSupervisorXStateFeatures | 0x100);
  v33 = v81;
  if ( !BugCheckParameter4 )
    goto LABEL_46;
  if ( PopSimulateHiberBugcheck )
    PoPowerDownActionInProgress = 0;
  if ( *(_BYTE *)(BugCheckParameter4 + 2) )
  {
    if ( v16 )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "A bugcheck occurred during the late stages of hibernate suspend or resume.\n"
        "Due to verification temporarily enabled by Po during this time,\n"
        "regular bugcheck processing may not work.\n"
        "\n");
      if ( v81 == 10 )
        DbgPrintEx(
          0x65u,
          0,
          "Memory was accessed during this time that was not properly marked\n"
          "for the boot phase of hibernate! Check the callstack and parameters\n"
          "to find the pages that need to be marked.\n"
          "\n");
      v33 = v81;
    }
    v87 = 0LL;
    v34 = 1;
  }
  else
  {
LABEL_46:
    v34 = 0;
  }
  Context = CurrentPrcb->Context;
  v36 = v93;
  v37 = 9LL;
  v38 = 128LL;
  do
  {
    *(_OWORD *)v36 = *(_OWORD *)&Context->P1Home;
    *((_OWORD *)v36 + 1) = *(_OWORD *)&Context->P3Home;
    *((_OWORD *)v36 + 2) = *(_OWORD *)&Context->P5Home;
    *((_OWORD *)v36 + 3) = *(_OWORD *)&Context->ContextFlags;
    *((_OWORD *)v36 + 4) = *(_OWORD *)&Context->SegGs;
    *((_OWORD *)v36 + 5) = *(_OWORD *)&Context->Dr1;
    *((_OWORD *)v36 + 6) = *(_OWORD *)&Context->Dr3;
    v36 += 128;
    v39 = *(_OWORD *)&Context->Dr7;
    Context = (_CONTEXT *)((char *)Context + 128);
    *((_OWORD *)v36 - 1) = v39;
    --v37;
  }
  while ( v37 );
  *(_OWORD *)v36 = *(_OWORD *)&Context->P1Home;
  *((_OWORD *)v36 + 1) = *(_OWORD *)&Context->P3Home;
  *((_OWORD *)v36 + 2) = *(_OWORD *)&Context->P5Home;
  *((_OWORD *)v36 + 3) = *(_OWORD *)&Context->ContextFlags;
  *((_OWORD *)v36 + 4) = *(_OWORD *)&Context->SegGs;
  if ( !v72 )
  {
    v42 = 1;
    v53 = CurrentThread;
    v55 = v79;
    goto LABEL_172;
  }
  if ( ViVerifierEnabled )
  {
    VfNotifyVerifierOfEvent(2LL);
    v33 = v81;
  }
  if ( v33 == 229 )
  {
    KiScanBugCheckCallbackList(v36, v37, v38);
    guard_dispatch_icall_no_overrides(0LL);
    HalReturnToFirmware(3);
  }
  if ( v33 > 0xD1 )
  {
    switch ( v33 )
    {
      case 0xD8u:
        *(_QWORD *)&KiBugCheckDriver = a2 + 88;
        goto LABEL_74;
      case 0xE6u:
        if ( (_DWORD)a2 == 39 )
          IoAddTriageDumpDataBlock(v6, (PVOID)8);
        goto LABEL_74;
      case 0xEAu:
        *(_QWORD *)&KiBugCheckDriver = a4;
        goto LABEL_74;
      case 0xEFu:
        v41 = 1;
        break;
      case 0xFCu:
        goto LABEL_133;
      case 0x139u:
        v41 = 0;
        if ( v75 )
        {
          v40 = v75;
          v82 = v75[45];
          goto LABEL_76;
        }
        if ( a2 == 10 )
          v6 = a5;
        v82 = v6;
        goto LABEL_126;
      case 0x13Du:
        v83 = 8;
        goto LABEL_74;
      case 0x14Fu:
        if ( v6 < 0x100 && a5 )
        {
          v51 = CurrentThread;
          if ( *(_QWORD *)(a5 + 8) )
            v51 = *(struct _KTHREAD **)(a5 + 8);
          CurrentThread = v51;
        }
        v41 = (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0;
        break;
      case 0x1C8u:
        v80 = 1;
        goto LABEL_74;
      default:
LABEL_115:
        v40 = v75;
        v50 = v75 == 0LL;
        goto LABEL_116;
    }
    v71 = v41;
LABEL_126:
    v40 = v75;
    goto LABEL_76;
  }
  switch ( v33 )
  {
    case 0xD1u:
    case 0xAu:
      v82 = a5;
      if ( a5 >= ExPoolCodeStart && a5 < ExPoolCodeEnd )
      {
        KiBugCheckData = 197LL;
        goto LABEL_74;
      }
      v47 = KiPcToFileHeader(a5, &v84, 0LL, v74);
      if ( v74[0] != 1 )
      {
        v40 = v75;
        v41 = 0;
        v42 = 1;
        KiBugCheckData = 209LL;
        if ( v47 )
        {
          KiBugCheckDriverOffset = a5 - v47;
          *(_QWORD *)&KiBugCheckDriver = v84 + 88;
        }
        goto LABEL_77;
      }
      KiBugCheckDriverOffset = a5 - v47;
      *(_QWORD *)&KiBugCheckDriver = v84 + 88;
      v48 = KiPcToFileHeader(a2, &v84, 1LL, v74);
      if ( v48 )
      {
        KiBugCheckData = 211LL;
        KiBugCheckDriverOffset = a2 - v48;
        *(_QWORD *)&KiBugCheckDriver = v84 + 88;
        goto LABEL_74;
      }
      UnloadedDriver = MmLocateUnloadedDriver(a2);
      v40 = v75;
      v41 = 0;
      v7 = v77;
      if ( UnloadedDriver )
      {
        KiBugCheckDriverOffset = a2 - *(_DWORD *)(UnloadedDriver + 16);
        *(_QWORD *)&KiBugCheckDriver = UnloadedDriver;
        KiBugCheckData = 212LL;
      }
LABEL_94:
      v42 = 1;
      goto LABEL_78;
    case 0x3Bu:
      v82 = a5;
      goto LABEL_74;
    case 0x4Cu:
      v41 = 1;
      v45 = &qword_140F46028;
      v71 = 1;
      v78 = 1;
      v37 = (__int64)&KiNmiCallbackListHead;
      KiBugCheckData = (unsigned int)a2;
      v46 = v6 - (_QWORD)&qword_140F46028;
      Format = a4;
      do
      {
        *v45 = *(__int64 *)((char *)v45 + v46);
        ++v45;
      }
      while ( (__int64)v45 < (__int64)&KiNmiCallbackListHead );
      v40 = v75;
      goto LABEL_94;
    case 0x50u:
      v40 = v75;
      if ( !v75 )
      {
        if ( !a4 || ((unsigned __int8)a4 & 3) != 0 )
          goto LABEL_89;
        v40 = a4;
      }
      v82 = v40[45];
      qword_140F46038 = v82;
      v43 = KiPcToFileHeader(v82, &v84, 0LL, v74);
      v75 = v40;
      if ( v43 )
        goto LABEL_75;
LABEL_89:
      v44 = MmLocateUnloadedDriver(a2);
      if ( v44 )
      {
        KiBugCheckDriverOffset = a2 - *(_DWORD *)(v44 + 16);
        *(_QWORD *)&KiBugCheckDriver = v44;
        KiBugCheckData = 206LL;
      }
      goto LABEL_75;
    case 0x7Bu:
      v40 = v75;
      v41 = 0;
      v73 = ((unsigned __int8)a4 & 1) == 0;
      v42 = ((unsigned __int8)a4 & 2) == 0;
      goto LABEL_77;
    case 0x8Eu:
      goto LABEL_133;
  }
  if ( v33 != 160 )
  {
    if ( v33 != 190 )
    {
      if ( v33 == 203 )
      {
        v82 = a2;
LABEL_74:
        v40 = v75;
        goto LABEL_75;
      }
      goto LABEL_115;
    }
LABEL_133:
    v40 = v75;
    if ( !v75 )
    {
      if ( !a4 || ((unsigned __int8)a4 & 3) != 0 )
        goto LABEL_75;
      v40 = a4;
      v75 = a4;
    }
    v50 = v33 == 142;
LABEL_116:
    if ( !v50 )
      v82 = v40[45];
    goto LABEL_75;
  }
  if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
    goto LABEL_74;
  v40 = v75;
  if ( (unsigned __int64)(a2 - 240) <= 1 )
  {
    v41 = 1;
    v71 = 1;
    goto LABEL_76;
  }
LABEL_75:
  v41 = 0;
LABEL_76:
  v42 = 1;
LABEL_77:
  v7 = v77;
LABEL_78:
  if ( *(_QWORD *)&KiBugCheckDriver )
  {
    KiBugCheckUnicodeToAnsi(*(_QWORD *)&KiBugCheckDriver, pszDest, v38);
  }
  else if ( v82 )
  {
    KiDumpParameterImages(pszDest);
  }
  if ( !LODWORD(WheapDispatchPtr.Dpc.SystemArgument2) )
  {
    WheapSelLogSetNtSchedulerAvailabilityNoLock();
    if ( (unsigned __int8)IpmiHwContextInitialized(&WheaIpmiContext) )
      IpmiLibAddSelBugcheckRecord();
  }
  v52 = KiBugCheckData;
  BugCheckProgressEfiSafeToCall = KiBugCheckData != 265;
  if ( v42 )
  {
    LOBYTE(v37) = v34;
    KiCollectTriageDumpDataBlocks(KiBugCheckData, v37);
  }
  v53 = CurrentThread;
  if ( v76 && (PartialDumpControl & 4) != 0 )
  {
    qword_140F21FA8 = (__int64)CurrentThread;
    KiCrashDumpContext = (__int64)v93;
    qword_140F21FB0 = (__int64)v87;
    qword_140F21FB8 = (__int64)v40;
    byte_140F21FC0 = v41;
    byte_140F21FC1 = v34;
    KiAttemptBugcheckRecovery();
  }
  KiBugcheckOwnerKeepsOthersFrozen = 1;
  guard_dispatch_icall_no_overrides(v52);
  HvlEnlightenments &= 0x2000u;
  IoSaveBugCheckProgress(96);
  IsEmptyAffinity = KeIsEmptyAffinityEx(KiNmiInProgress);
  guard_dispatch_icall_no_overrides(IsEmptyAffinity == 0);
  KiFilterBugCheckInfo(&v81, (__int64)&KiBugCheckData);
  v55 = !CrashdmpDumpBlock || !v42;
  HvlLogGuestCrashInformation(KiBugCheckData, qword_140F46028, qword_140F46030, qword_140F46038, qword_140F46040, v55);
  if ( !KdPitchDebugger )
    qword_140E01068 = (__int64)v93;
  if ( (unsigned __int8)KiBugCheckShouldEnterPostBugCheckDebugger(v81, 0LL) )
  {
    if ( !CurrentPrcb->NmiActive )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Fatal System Error: 0x%08lx\n                       (0x%p,0x%p,0x%p,0x%p)\n\n",
        KiBugCheckData,
        (const void *)qword_140F46028,
        (const void *)qword_140F46030,
        (const void *)qword_140F46038,
        (const void *)qword_140F46040);
      if ( *(_QWORD *)&KiBugCheckDriver )
        DbgPrintEx(0x65u, 0, "Driver at fault: %s.\n", pszDest);
      if ( v78 )
      {
        if ( Format )
          DbgPrintEx(0x65u, 0, Format);
        if ( v7 )
          DbgPrintEx(0x65u, 0, v7);
      }
    }
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
      KiBugCheckDebugBreak(3u);
  }
LABEL_172:
  _disable();
  v56 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v56, 15);
  if ( v72 )
    goto LABEL_187;
  if ( (unsigned __int8)KiHandleMultipleBugchecksDuringRecovery((unsigned int)KiBugCheckActive) )
  {
    KiBugcheckOwnerKeepsOthersFrozen = 1;
LABEL_187:
    if ( (unsigned int)KeNumberProcessors_0 > 1 && !KiHypervisorInitiatedCrashDump )
    {
      KiSetDebuggerOwner((__int64)CurrentPrcb);
      *(_QWORD *)&v92.Count = 2097153LL;
      memset_0(&v92.8, 0, sizeof(v92.8));
      KiCopyAffinityEx(&v92, v92.Size, &KeActiveProcessors);
      KeRemoveProcessorAffinityEx(&v92.Count, CurrentPrcb->Number);
      KiSendFreeze(&v92);
      KeStallExecutionProcessor(0xF4240u);
    }
    IoSaveInitialBugCheckProgress(KiBugCheckData);
    IoSaveBugCheckProgress(1);
    LOBYTE(v60) = v55;
    KiBugCheckProgressCpusFrozen(v60);
    if ( CurrentPrcb->PowerState.ResolvedQosClass )
    {
      if ( PpmPerfVmQosSupported )
      {
        PpmHvSetVirtualProcessorQos(CurrentPrcb);
      }
      else if ( PpmPerfSchedulerDirectedPerfStatesSupported && CurrentPrcb->PowerState.CheckContext.Domain )
      {
        guard_dispatch_icall_no_overrides(CurrentPrcb->PowerState.CheckContext.Constraint->PerfContext);
      }
    }
    if ( v34 )
    {
      v58 = v73;
    }
    else
    {
      v62 = v83;
      if ( v55 )
        v62 = v83 | 4;
      v63 = v62 | 2;
      v58 = v73;
      if ( v76 )
        v63 = v62;
      v64 = v63 | 1;
      if ( v73 )
        v64 = v63;
      KiDisplayBlueScreen(v64);
    }
    LOBYTE(v61) = 1;
    HvlPrepareForRootCrashdump(v61);
    if ( v34 )
    {
      v65 = 9LL;
    }
    else
    {
      IoSaveBugCheckProgress(2);
      KiInvokeBugCheckEntryCallbacks(1LL, 0LL, 0LL);
      KiInvokeBugCheckEntryCallbacks(8LL, 0LL, 0LL);
      v65 = 9LL;
      KiInvokeBugCheckEntryCallbacks(9LL, 0LL, 0LL);
      IoSaveBugCheckProgress(5);
      KiInvokeBugCheckAddTriageDumpDataCallbacks();
    }
    if ( !(_BYTE)KdDebuggerEnabled && !KdPitchDebugger )
      KdEnableDebuggerWithLock(0);
    v66 = CurrentPrcb->Context;
    v67 = v93;
    do
    {
      *(_OWORD *)&v66->P1Home = *(_OWORD *)v67;
      *(_OWORD *)&v66->P3Home = *((_OWORD *)v67 + 1);
      *(_OWORD *)&v66->P5Home = *((_OWORD *)v67 + 2);
      *(_OWORD *)&v66->ContextFlags = *((_OWORD *)v67 + 3);
      *(_OWORD *)&v66->SegGs = *((_OWORD *)v67 + 4);
      *(_OWORD *)&v66->Dr1 = *((_OWORD *)v67 + 5);
      *(_OWORD *)&v66->Dr3 = *((_OWORD *)v67 + 6);
      v66 = (_CONTEXT *)((char *)v66 + 128);
      v68 = *((_OWORD *)v67 + 7);
      v67 += 128;
      *(_OWORD *)&v66[-1].LastExceptionToRip = v68;
      --v65;
    }
    while ( v65 );
    *(_OWORD *)&v66->P1Home = *(_OWORD *)v67;
    *(_OWORD *)&v66->P3Home = *((_OWORD *)v67 + 1);
    *(_OWORD *)&v66->P5Home = *((_OWORD *)v67 + 2);
    *(_OWORD *)&v66->ContextFlags = *((_OWORD *)v67 + 3);
    *(_OWORD *)&v66->SegGs = *((_OWORD *)v67 + 4);
    if ( v42 )
    {
      KdDecodeDataBlock();
      qword_140F21FB0 = (__int64)v87;
      byte_140F21FC0 = v71;
      qword_140F21FB8 = (__int64)v75;
      KiCrashDumpContext = (__int64)v93;
      qword_140F21FA8 = (__int64)v53;
      byte_140F21FC1 = v34;
      KiBugCheckWriteCrashDump(&KiCrashDumpContext);
    }
    goto LABEL_215;
  }
  if ( (_DWORD)v88 != (unsigned int)KiBugCheckActive >> 4 )
  {
    KiYieldWaitForDebugger();
    __debugbreak();
  }
  if ( KiHypervisorInitiatedCrashDump || (v57 = ((unsigned int)KiBugCheckActive >> 2) & 3, v57 >= 2) )
  {
    DbgPrintEx(5u, 1u, "Initiating HalHaltSystem()!\n");
    while ( 1 )
      guard_dispatch_icall_no_overrides(v59);
  }
  DbgPrintEx(
    5u,
    2u,
    "DoubleFault detected!  CurrentProcessor: 0x%x, PreviousState: { BugCheckState: 0x%08lx, RecursionCount: 0x%08lx, Bug"
    "CheckOwner: 0x%08lx }\n",
    v88,
    KiBugCheckActive & 3,
    ((unsigned int)KiBugCheckActive >> 2) & 3,
    (unsigned int)KiBugCheckActive >> 4);
  IoSetBugCheckProgressFlag(0x20000);
  _InterlockedAdd(&KiBugCheckActive, 4u);
  if ( v57 )
  {
    DbgPrintEx(5u, 1u, "Initiating KiBugCheckDebugBreak(DBG_STATUS_BUGCHECK_SECOND)\n");
    KiBugCheckDebugBreak(4u);
  }
  else
  {
    KiCrashDumpContext = (__int64)v93;
    qword_140F21FB8 = (__int64)v75;
    qword_140F21FB0 = (__int64)v87;
    byte_140F21FC0 = v71;
    qword_140F21FA8 = (__int64)v53;
    byte_140F21FC1 = v34;
    IoRetryAsMiniDump(
      KiBugCheckData,
      qword_140F46028,
      qword_140F46030,
      qword_140F46038,
      qword_140F46040,
      v93,
      v53,
      v87,
      v71,
      v75);
  }
  v58 = v73;
LABEL_215:
  HvlResumeFromRootCrashdump(0LL);
  IoSaveBugCheckProgress(99);
  if ( !v34 )
    ((void (*)(void))KiScanBugCheckCallbackList)();
  guard_dispatch_icall_no_overrides(v69);
  IoSaveBugCheckProgress(4);
  if ( v76 )
  {
    KiResumeForReboot = 1;
    KiSendThawExecution(0);
    KiBugcheckUnloadDebugSymbols();
    guard_dispatch_icall_no_overrides(0LL);
    if ( PoPowerDownActionInProgress && !PoPowerResetActionInProgress
      || PoModernStandbyActionInProgress
      || v80
      || (v70 = 3, !v58) )
    {
      v70 = 1;
    }
    HalReturnToFirmware(v70);
  }
  KiBugCheckDebugBreak(4u);
}
