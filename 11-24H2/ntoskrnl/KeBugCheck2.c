/*
 * XREFs of KeBugCheck2 @ 0x1405AE6F0
 * Callers:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140244560 (MmIsAddressValidEx.c)
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     KeQueryCurrentStackInformation @ 0x14028A190 (KeQueryCurrentStackInformation.c)
 *     KeStallExecutionProcessor @ 0x140319510 (KeStallExecutionProcessor.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403A4D10 (KeRemoveProcessorAffinityEx.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     KiSendThawExecution @ 0x1404D1680 (KiSendThawExecution.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSetDebuggerOwner @ 0x1404F8B84 (KiSetDebuggerOwner.c)
 *     KiFilterBugCheckInfo @ 0x140505AAC (KiFilterBugCheckInfo.c)
 *     HalReturnToFirmware @ 0x1405421E0 (HalReturnToFirmware.c)
 *     HvlLogGuestCrashInformation @ 0x14057FCE4 (HvlLogGuestCrashInformation.c)
 *     HvlNotifyRootCrashdump @ 0x140584F08 (HvlNotifyRootCrashdump.c)
 *     HvlPrepareForRootCrashdump @ 0x140584F94 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x1405853A8 (HvlResumeFromRootCrashdump.c)
 *     IoNotifyDumpEx @ 0x14058EC98 (IoNotifyDumpEx.c)
 *     IoRetryAsMiniDump @ 0x14058EDC0 (IoRetryAsMiniDump.c)
 *     IoSaveBugCheckProgress @ 0x14058EF30 (IoSaveBugCheckProgress.c)
 *     IoSaveInitialBugCheckProgress @ 0x14058F140 (IoSaveInitialBugCheckProgress.c)
 *     IoSetBugCheckProgressFlag @ 0x14058F2E0 (IoSetBugCheckProgressFlag.c)
 *     KdDecodeDataBlock @ 0x1405AC518 (KdDecodeDataBlock.c)
 *     KdEnableDebuggerWithLock @ 0x1405AC9EC (KdEnableDebuggerWithLock.c)
 *     KiBugCheckDebugBreak @ 0x1405AFCE0 (KiBugCheckDebugBreak.c)
 *     KiBugCheckProgressCpusFrozen @ 0x1405AFF04 (KiBugCheckProgressCpusFrozen.c)
 *     KiBugCheckShouldEnterPostBugCheckDebugger @ 0x1405AFFC0 (KiBugCheckShouldEnterPostBugCheckDebugger.c)
 *     KiBugCheckUnicodeToAnsi @ 0x1405B0024 (KiBugCheckUnicodeToAnsi.c)
 *     KiBugCheckWriteCrashDump @ 0x1405B0068 (KiBugCheckWriteCrashDump.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x1405B00D4 (KiBugcheckUnloadDebugSymbols.c)
 *     KiCollectTriageDumpDataBlocks @ 0x1405B0318 (KiCollectTriageDumpDataBlocks.c)
 *     KiDisplayBlueScreen @ 0x1405B0834 (KiDisplayBlueScreen.c)
 *     KiDumpParameterImages @ 0x1405B0BC8 (KiDumpParameterImages.c)
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1405B0E70 (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1405B1088 (KiInvokeBugCheckEntryCallbacks.c)
 *     KiPcToFileHeader @ 0x1405B1150 (KiPcToFileHeader.c)
 *     KiScanBugCheckCallbackList @ 0x1405B134C (KiScanBugCheckCallbackList.c)
 *     KiYieldWaitForDebugger @ 0x1405B15C4 (KiYieldWaitForDebugger.c)
 *     KeSaveSupervisorState @ 0x1405B5EA4 (KeSaveSupervisorState.c)
 *     KiSendFreeze @ 0x1405BF500 (KiSendFreeze.c)
 *     KiAttemptBugcheckRecovery @ 0x1405C2EB4 (KiAttemptBugcheckRecovery.c)
 *     KiHandleMultipleBugchecksDuringRecovery @ 0x1405C39F0 (KiHandleMultipleBugchecksDuringRecovery.c)
 *     PpmHvSetVirtualProcessorQos @ 0x1405D8ED0 (PpmHvSetVirtualProcessorQos.c)
 *     WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x140659E04 (WheapSelLogSetNtSchedulerAvailabilityNoLock.c)
 *     MmLocateUnloadedDriver @ 0x14066D5C8 (MmLocateUnloadedDriver.c)
 *     IpmiHwContextInitialized @ 0x1406A0770 (IpmiHwContextInitialized.c)
 *     IpmiLibAddSelBugcheckRecord @ 0x1406A0CD4 (IpmiLibAddSelBugcheckRecord.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     VfNotifyVerifierOfEvent @ 0x140B84EA0 (VfNotifyVerifierOfEvent.c)
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
  __int64 v40; // rdx
  _QWORD *v41; // rdi
  bool v42; // bl
  bool v43; // r15
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 *v46; // rcx
  unsigned __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 UnloadedDriver; // rax
  bool v51; // zf
  struct _KTHREAD *v52; // rcx
  __int64 v53; // rcx
  struct _KTHREAD *v54; // r12
  int IsEmptyAffinity; // eax
  __int64 v56; // rdx
  bool v57; // bl
  unsigned __int8 v58; // cl
  unsigned int v59; // ebx
  bool v60; // di
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rcx
  _PROC_PERF_DOMAIN *Domain; // rax
  int v65; // ecx
  unsigned int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rbx
  _CONTEXT *v69; // rax
  char *v70; // rcx
  __int128 v71; // xmm1
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdx
  int v75; // ecx
  char v76; // [rsp+54h] [rbp-ACh]
  char v77; // [rsp+58h] [rbp-A8h]
  bool v78; // [rsp+59h] [rbp-A7h]
  _BYTE v79[6]; // [rsp+5Ah] [rbp-A6h] BYREF
  _QWORD *v80; // [rsp+60h] [rbp-A0h]
  bool v81; // [rsp+68h] [rbp-98h]
  PCSTR v82; // [rsp+70h] [rbp-90h]
  char v83; // [rsp+78h] [rbp-88h]
  bool v84; // [rsp+79h] [rbp-87h]
  char v85; // [rsp+7Ah] [rbp-86h]
  unsigned int v86; // [rsp+80h] [rbp-80h] BYREF
  __int64 v87; // [rsp+88h] [rbp-78h]
  int v88; // [rsp+90h] [rbp-70h]
  __int64 v89; // [rsp+98h] [rbp-68h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-60h]
  unsigned int v91; // [rsp+A8h] [rbp-58h] BYREF
  __int64 (__fastcall *v92)(); // [rsp+B0h] [rbp-50h]
  unsigned __int64 v93; // [rsp+B8h] [rbp-48h]
  _BYTE *v94; // [rsp+C0h] [rbp-40h] BYREF
  void *Src; // [rsp+C8h] [rbp-38h] BYREF
  PCSTR Format; // [rsp+D0h] [rbp-30h]
  struct _KAFFINITY_EX v97; // [rsp+E0h] [rbp-20h] BYREF
  char v98[1232]; // [rsp+1F0h] [rbp+F0h] BYREF
  char pszDest[192]; // [rsp+6C0h] [rbp+5C0h] BYREF

  v6 = a3;
  v7 = (const CHAR *)a5;
  v93 = a3;
  v86 = a1;
  v80 = a6;
  memset_0(&v97, 0, sizeof(v97));
  v78 = 1;
  pszDest[0] = 0;
  CurrentThread = KeGetCurrentThread();
  v92 = KiBugCheckProgress;
  v81 = IopAutoReboot != 0;
  v89 = 0LL;
  v79[0] = 0;
  v87 = 0LL;
  v76 = 0;
  v83 = 0;
  v85 = 0;
  Format = 0LL;
  v82 = 0LL;
  v84 = 0;
  v88 = 0;
  if ( !_InterlockedExchange(&KiBugCheckDataInitialized, 1) )
  {
    v10 = v86;
    if ( v86 == -1073741103 )
    {
      v10 = 195LL;
      v86 = 195;
    }
    KiBugCheckData = v10;
    qword_140F22A08 = a2;
    qword_140F22A10 = v6;
    qword_140F22A18 = (__int64)a4;
    qword_140F22A20 = a5;
  }
  IoNotifyDumpEx(4);
  if ( (HvlpFlags & 2) != 0 )
    HvlNotifyRootCrashdump(4);
  v94 = 0LL;
  Src = 0LL;
  v91 = 0;
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
    CurrentStackInformation = KeQueryCurrentStackInformation((__int64)&v91, (__int64)&Src, (__int64)&v94);
    v18 = KiBugCheckActive;
    v19 = (16 * KeGetCurrentPrcb()->Number) | 3;
    do
    {
      if ( (v18 & 3) == 3 )
      {
        v16 = 0;
        v77 = 0;
        goto LABEL_40;
      }
      v20 = v18;
      v18 = _InterlockedCompareExchange(&KiBugCheckActive, v19, v18);
    }
    while ( v18 != v20 );
    IoNotifyDumpEx(6);
    if ( CurrentStackInformation )
    {
      if ( v91 > 9 || (v21 = 929, !_bittest(&v21, v91)) )
      {
        v22 = 147456LL;
        v23 = (char *)Src;
        if ( (unsigned __int64)(v94 - (_BYTE *)Src) > 0x24000 || (v22 = v94 - (_BYTE *)Src, v94 != Src) )
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
        v6 = v93;
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
        memmove(&unk_140FC8100, v29, v30);
      }
    }
    v16 = 1;
    v77 = 1;
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
        v77 = 1;
        goto LABEL_16;
      }
    }
    v77 = 0;
LABEL_16:
    v16 = v77;
  }
LABEL_40:
  DbgPrintEx(5u, 2u, "KeBugCheck2(): KiSavePreBugcheckStack() -> ActiveBugCheck: 0x%02x\n", v16);
  if ( v16 && KiRecoveryCallbackCount <= 0 )
    KiBugcheckOwnerKeepsOthersFrozen = 1;
  if ( KeSmapEnabled )
    __asm { stac }
  CurrentPrcb = KeGetCurrentPrcb();
  ExtendedSupervisorState = CurrentPrcb->ExtendedSupervisorState;
  LODWORD(v93) = CurrentPrcb->Number;
  KeSaveSupervisorState(ExtendedSupervisorState, KeEnabledSupervisorXStateFeatures | 0x100);
  v33 = v86;
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
      if ( v86 == 10 )
        DbgPrintEx(
          0x65u,
          0,
          "Memory was accessed during this time that was not properly marked\n"
          "for the boot phase of hibernate! Check the callstack and parameters\n"
          "to find the pages that need to be marked.\n"
          "\n");
      v33 = v86;
    }
    v92 = 0LL;
    v34 = 1;
  }
  else
  {
LABEL_46:
    v34 = 0;
  }
  Context = CurrentPrcb->Context;
  v36 = v98;
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
  if ( !v77 )
  {
    v43 = 1;
    v54 = CurrentThread;
    v57 = v84;
    goto LABEL_172;
  }
  if ( ViVerifierEnabled )
  {
    VfNotifyVerifierOfEvent(2LL);
    v33 = v86;
  }
  if ( v33 == 229 )
  {
    KiScanBugCheckCallbackList(v36, v37, v38);
    guard_dispatch_icall_no_overrides(0LL, v40);
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
        v42 = 1;
        break;
      case 0xFCu:
        goto LABEL_133;
      case 0x139u:
        v42 = 0;
        if ( v80 )
        {
          v41 = v80;
          v87 = v80[45];
          goto LABEL_76;
        }
        if ( a2 == 10 )
          v6 = a5;
        v87 = v6;
        goto LABEL_126;
      case 0x13Du:
        v88 = 8;
        goto LABEL_74;
      case 0x14Fu:
        if ( v6 < 0x100 && a5 )
        {
          v52 = CurrentThread;
          if ( *(_QWORD *)(a5 + 8) )
            v52 = *(struct _KTHREAD **)(a5 + 8);
          CurrentThread = v52;
        }
        v42 = (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0;
        break;
      case 0x1C8u:
        v85 = 1;
        goto LABEL_74;
      default:
LABEL_115:
        v41 = v80;
        v51 = v80 == 0LL;
        goto LABEL_116;
    }
    v76 = v42;
LABEL_126:
    v41 = v80;
    goto LABEL_76;
  }
  switch ( v33 )
  {
    case 0xD1u:
    case 0xAu:
      v87 = a5;
      if ( a5 >= ExPoolCodeStart && a5 < ExPoolCodeEnd )
      {
        KiBugCheckData = 197LL;
        goto LABEL_74;
      }
      v48 = KiPcToFileHeader(a5, &v89, 0LL, v79);
      if ( v79[0] != 1 )
      {
        v41 = v80;
        v42 = 0;
        v43 = 1;
        KiBugCheckData = 209LL;
        if ( v48 )
        {
          KiBugCheckDriverOffset = a5 - v48;
          *(_QWORD *)&KiBugCheckDriver = v89 + 88;
        }
        goto LABEL_77;
      }
      KiBugCheckDriverOffset = a5 - v48;
      *(_QWORD *)&KiBugCheckDriver = v89 + 88;
      v49 = KiPcToFileHeader(a2, &v89, 1LL, v79);
      if ( v49 )
      {
        KiBugCheckData = 211LL;
        KiBugCheckDriverOffset = a2 - v49;
        *(_QWORD *)&KiBugCheckDriver = v89 + 88;
        goto LABEL_74;
      }
      UnloadedDriver = MmLocateUnloadedDriver(a2);
      v41 = v80;
      v42 = 0;
      v7 = v82;
      if ( UnloadedDriver )
      {
        KiBugCheckDriverOffset = a2 - *(_DWORD *)(UnloadedDriver + 16);
        *(_QWORD *)&KiBugCheckDriver = UnloadedDriver;
        KiBugCheckData = 212LL;
      }
LABEL_94:
      v43 = 1;
      goto LABEL_78;
    case 0x3Bu:
      v87 = a5;
      goto LABEL_74;
    case 0x4Cu:
      v42 = 1;
      v46 = &qword_140F22A08;
      v76 = 1;
      v83 = 1;
      v37 = (__int64)&KiBugCheckActive;
      KiBugCheckData = (unsigned int)a2;
      v47 = v6 - (_QWORD)&qword_140F22A08;
      Format = a4;
      do
      {
        *v46 = *(__int64 *)((char *)v46 + v47);
        ++v46;
      }
      while ( (__int64)v46 < (__int64)&KiBugCheckActive );
      v41 = v80;
      goto LABEL_94;
    case 0x50u:
      v41 = v80;
      if ( !v80 )
      {
        if ( !a4 || ((unsigned __int8)a4 & 3) != 0 )
          goto LABEL_89;
        v41 = a4;
      }
      v87 = v41[45];
      qword_140F22A18 = v87;
      v44 = KiPcToFileHeader(v87, &v89, 0LL, v79);
      v80 = v41;
      if ( v44 )
        goto LABEL_75;
LABEL_89:
      v45 = MmLocateUnloadedDriver(a2);
      if ( v45 )
      {
        KiBugCheckDriverOffset = a2 - *(_DWORD *)(v45 + 16);
        *(_QWORD *)&KiBugCheckDriver = v45;
        KiBugCheckData = 206LL;
      }
      goto LABEL_75;
    case 0x7Bu:
      v41 = v80;
      v42 = 0;
      v78 = ((unsigned __int8)a4 & 1) == 0;
      v43 = ((unsigned __int8)a4 & 2) == 0;
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
        v87 = a2;
LABEL_74:
        v41 = v80;
        goto LABEL_75;
      }
      goto LABEL_115;
    }
LABEL_133:
    v41 = v80;
    if ( !v80 )
    {
      if ( !a4 || ((unsigned __int8)a4 & 3) != 0 )
        goto LABEL_75;
      v41 = a4;
      v80 = a4;
    }
    v51 = v33 == 142;
LABEL_116:
    if ( !v51 )
      v87 = v41[45];
    goto LABEL_75;
  }
  if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
    goto LABEL_74;
  v41 = v80;
  if ( (unsigned __int64)(a2 - 240) <= 1 )
  {
    v42 = 1;
    v76 = 1;
    goto LABEL_76;
  }
LABEL_75:
  v42 = 0;
LABEL_76:
  v43 = 1;
LABEL_77:
  v7 = v82;
LABEL_78:
  if ( *(_QWORD *)&KiBugCheckDriver )
  {
    KiBugCheckUnicodeToAnsi(*(_QWORD *)&KiBugCheckDriver, pszDest, v38);
  }
  else if ( v87 )
  {
    KiDumpParameterImages(pszDest);
  }
  if ( !WheapDispatchPtr.DeviceLock.Header.LockNV )
  {
    WheapSelLogSetNtSchedulerAvailabilityNoLock();
    if ( (unsigned __int8)IpmiHwContextInitialized(&WheaIpmiContext) )
      IpmiLibAddSelBugcheckRecord();
  }
  v53 = KiBugCheckData;
  BugCheckProgressEfiSafeToCall = KiBugCheckData != 265;
  if ( v43 )
  {
    LOBYTE(v37) = v34;
    KiCollectTriageDumpDataBlocks(KiBugCheckData, v37);
  }
  v54 = CurrentThread;
  if ( v81 && (PartialDumpControl & 4) != 0 )
  {
    qword_140F46A48 = (__int64)CurrentThread;
    KiCrashDumpContext = (__int64)v98;
    qword_140F46A50 = (__int64)v92;
    qword_140F46A58 = (__int64)v41;
    byte_140F46A60 = v42;
    byte_140F46A61 = v34;
    KiAttemptBugcheckRecovery();
  }
  KiBugcheckOwnerKeepsOthersFrozen = 1;
  guard_dispatch_icall_no_overrides(v53, v37);
  HvlEnlightenments &= 0x2000u;
  IoSaveBugCheckProgress(96);
  IsEmptyAffinity = KeIsEmptyAffinityEx(KiNmiInProgress);
  guard_dispatch_icall_no_overrides(IsEmptyAffinity == 0, v56);
  KiFilterBugCheckInfo(&v86, (__int64)&KiBugCheckData);
  v57 = !CrashdmpDumpBlock || !v43;
  HvlLogGuestCrashInformation(KiBugCheckData, qword_140F22A08, qword_140F22A10, qword_140F22A18, qword_140F22A20, v57);
  if ( !KdPitchDebugger )
    qword_140E01068 = (__int64)v98;
  if ( (unsigned __int8)KiBugCheckShouldEnterPostBugCheckDebugger(v86, 0LL) )
  {
    if ( !CurrentPrcb->NmiActive )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Fatal System Error: 0x%08lx\n                       (0x%p,0x%p,0x%p,0x%p)\n\n",
        KiBugCheckData,
        (const void *)qword_140F22A08,
        (const void *)qword_140F22A10,
        (const void *)qword_140F22A18,
        (const void *)qword_140F22A20);
      if ( *(_QWORD *)&KiBugCheckDriver )
        DbgPrintEx(0x65u, 0, "Driver at fault: %s.\n", pszDest);
      if ( v83 )
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
  v58 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v58, 15);
  if ( v77 )
    goto LABEL_187;
  if ( (unsigned __int8)KiHandleMultipleBugchecksDuringRecovery((unsigned int)KiBugCheckActive) )
  {
    KiBugcheckOwnerKeepsOthersFrozen = 1;
LABEL_187:
    if ( (unsigned int)KeNumberProcessors_0 > 1 && !KiHypervisorInitiatedCrashDump )
    {
      KiSetDebuggerOwner((__int64)CurrentPrcb);
      *(_QWORD *)&v97.Count = 2097153LL;
      memset_0(&v97.8, 0, sizeof(v97.8));
      KiCopyAffinityEx(&v97, v97.Size, &KeActiveProcessors);
      KeRemoveProcessorAffinityEx(&v97.Count, CurrentPrcb->Number);
      KiSendFreeze(&v97, 0LL);
      KeStallExecutionProcessor(0xF4240u);
    }
    IoSaveInitialBugCheckProgress(KiBugCheckData);
    IoSaveBugCheckProgress(1);
    LOBYTE(v63) = v57;
    KiBugCheckProgressCpusFrozen(v63);
    if ( CurrentPrcb->PowerState.ResolvedQosClass )
    {
      if ( PpmPerfVmQosSupported )
      {
        PpmHvSetVirtualProcessorQos(CurrentPrcb);
      }
      else if ( PpmPerfSchedulerDirectedPerfStatesSupported )
      {
        Domain = CurrentPrcb->PowerState.CheckContext.Domain;
        if ( Domain )
          guard_dispatch_icall_no_overrides(
            CurrentPrcb->PowerState.CheckContext.Constraint->PerfContext,
            Domain->QosSelection);
      }
    }
    if ( v34 )
    {
      v60 = v78;
    }
    else
    {
      v65 = v88;
      if ( v57 )
        v65 = v88 | 4;
      v66 = v65 | 2;
      v60 = v78;
      if ( v81 )
        v66 = v65;
      v67 = v66 | 1;
      if ( v78 )
        v67 = v66;
      KiDisplayBlueScreen(v67);
    }
    HvlPrepareForRootCrashdump(1);
    if ( v34 )
    {
      v68 = 9LL;
    }
    else
    {
      IoSaveBugCheckProgress(2);
      KiInvokeBugCheckEntryCallbacks(1LL, 0LL, 0LL);
      KiInvokeBugCheckEntryCallbacks(8LL, 0LL, 0LL);
      v68 = 9LL;
      KiInvokeBugCheckEntryCallbacks(9LL, 0LL, 0LL);
      IoSaveBugCheckProgress(5);
      KiInvokeBugCheckAddTriageDumpDataCallbacks();
    }
    if ( !(_BYTE)KdDebuggerEnabled && !KdPitchDebugger )
      KdEnableDebuggerWithLock(0);
    v69 = CurrentPrcb->Context;
    v70 = v98;
    do
    {
      *(_OWORD *)&v69->P1Home = *(_OWORD *)v70;
      *(_OWORD *)&v69->P3Home = *((_OWORD *)v70 + 1);
      *(_OWORD *)&v69->P5Home = *((_OWORD *)v70 + 2);
      *(_OWORD *)&v69->ContextFlags = *((_OWORD *)v70 + 3);
      *(_OWORD *)&v69->SegGs = *((_OWORD *)v70 + 4);
      *(_OWORD *)&v69->Dr1 = *((_OWORD *)v70 + 5);
      *(_OWORD *)&v69->Dr3 = *((_OWORD *)v70 + 6);
      v69 = (_CONTEXT *)((char *)v69 + 128);
      v71 = *((_OWORD *)v70 + 7);
      v70 += 128;
      *(_OWORD *)&v69[-1].LastExceptionToRip = v71;
      --v68;
    }
    while ( v68 );
    *(_OWORD *)&v69->P1Home = *(_OWORD *)v70;
    *(_OWORD *)&v69->P3Home = *((_OWORD *)v70 + 1);
    *(_OWORD *)&v69->P5Home = *((_OWORD *)v70 + 2);
    *(_OWORD *)&v69->ContextFlags = *((_OWORD *)v70 + 3);
    *(_OWORD *)&v69->SegGs = *((_OWORD *)v70 + 4);
    if ( v43 )
    {
      KdDecodeDataBlock();
      qword_140F46A50 = (__int64)v92;
      byte_140F46A60 = v76;
      qword_140F46A58 = (__int64)v80;
      KiCrashDumpContext = (__int64)v98;
      qword_140F46A48 = (__int64)v54;
      byte_140F46A61 = v34;
      KiBugCheckWriteCrashDump(&KiCrashDumpContext);
    }
    goto LABEL_215;
  }
  if ( (_DWORD)v93 != (unsigned int)KiBugCheckActive >> 4 )
  {
    KiYieldWaitForDebugger();
    __debugbreak();
  }
  if ( KiHypervisorInitiatedCrashDump || (v59 = ((unsigned int)KiBugCheckActive >> 2) & 3, v59 >= 2) )
  {
    DbgPrintEx(5u, 1u, "Initiating HalHaltSystem()!\n");
    while ( 1 )
      guard_dispatch_icall_no_overrides(v62, v61);
  }
  DbgPrintEx(
    5u,
    2u,
    "DoubleFault detected!  CurrentProcessor: 0x%x, PreviousState: { BugCheckState: 0x%08lx, RecursionCount: 0x%08lx, Bug"
    "CheckOwner: 0x%08lx }\n",
    v93,
    KiBugCheckActive & 3,
    ((unsigned int)KiBugCheckActive >> 2) & 3,
    (unsigned int)KiBugCheckActive >> 4);
  IoSetBugCheckProgressFlag(0x20000);
  _InterlockedAdd(&KiBugCheckActive, 4u);
  if ( v59 )
  {
    DbgPrintEx(5u, 1u, "Initiating KiBugCheckDebugBreak(DBG_STATUS_BUGCHECK_SECOND)\n");
    KiBugCheckDebugBreak(4u);
  }
  else
  {
    KiCrashDumpContext = (__int64)v98;
    qword_140F46A58 = (__int64)v80;
    qword_140F46A50 = (__int64)v92;
    byte_140F46A60 = v76;
    qword_140F46A48 = (__int64)v54;
    byte_140F46A61 = v34;
    IoRetryAsMiniDump(
      KiBugCheckData,
      qword_140F22A08,
      qword_140F22A10,
      qword_140F22A18,
      qword_140F22A20,
      v98,
      v54,
      v92,
      v76,
      v80);
  }
  v60 = v78;
LABEL_215:
  HvlResumeFromRootCrashdump(0);
  IoSaveBugCheckProgress(99);
  if ( !v34 )
    ((void (*)(void))KiScanBugCheckCallbackList)();
  guard_dispatch_icall_no_overrides(v73, v72);
  IoSaveBugCheckProgress(4);
  if ( v81 )
  {
    KiResumeForReboot = 1;
    KiSendThawExecution(0);
    KiBugcheckUnloadDebugSymbols();
    guard_dispatch_icall_no_overrides(0LL, v74);
    if ( PoPowerDownActionInProgress && !PoPowerResetActionInProgress
      || PoModernStandbyActionInProgress
      || v85
      || (v75 = 3, !v60) )
    {
      v75 = 1;
    }
    HalReturnToFirmware(v75);
  }
  KiBugCheckDebugBreak(4u);
}
