/*
 * XREFs of KeBugCheck2 @ 0x1405B1780
 * Callers:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x140259B80 (KeQueryCurrentStackInformation.c)
 *     MmIsAddressValidEx @ 0x140262FC0 (MmIsAddressValidEx.c)
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 *     KeStallExecutionProcessor @ 0x14033A030 (KeStallExecutionProcessor.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeIsEmptyAffinityEx @ 0x1403B55D0 (KeIsEmptyAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403CA140 (KeRemoveProcessorAffinityEx.c)
 *     IoAddTriageDumpDataBlock @ 0x1403F2880 (IoAddTriageDumpDataBlock.c)
 *     KiSendThawExecution @ 0x1404D8230 (KiSendThawExecution.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSetDebuggerOwner @ 0x1404FB2A4 (KiSetDebuggerOwner.c)
 *     KiFilterBugCheckInfo @ 0x1405081EC (KiFilterBugCheckInfo.c)
 *     HalReturnToFirmware @ 0x140544920 (HalReturnToFirmware.c)
 *     HvlLogGuestCrashInformation @ 0x140582964 (HvlLogGuestCrashInformation.c)
 *     HvlNotifyRootCrashdump @ 0x140587BA8 (HvlNotifyRootCrashdump.c)
 *     HvlPrepareForRootCrashdump @ 0x140587C34 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x140588088 (HvlResumeFromRootCrashdump.c)
 *     IoNotifyDumpEx @ 0x140591C78 (IoNotifyDumpEx.c)
 *     IoRetryAsMiniDump @ 0x140591DA0 (IoRetryAsMiniDump.c)
 *     IoSaveBugCheckProgress @ 0x140591F10 (IoSaveBugCheckProgress.c)
 *     IoSaveInitialBugCheckProgress @ 0x140592120 (IoSaveInitialBugCheckProgress.c)
 *     IoSetBugCheckProgressFlag @ 0x1405922C0 (IoSetBugCheckProgressFlag.c)
 *     KdDecodeDataBlock @ 0x1405AF5A8 (KdDecodeDataBlock.c)
 *     KdEnableDebuggerWithLock @ 0x1405AFA7C (KdEnableDebuggerWithLock.c)
 *     KiBugCheckDebugBreak @ 0x1405B2D70 (KiBugCheckDebugBreak.c)
 *     KiBugCheckProgressCpusFrozen @ 0x1405B2F94 (KiBugCheckProgressCpusFrozen.c)
 *     KiBugCheckShouldEnterPostBugCheckDebugger @ 0x1405B3050 (KiBugCheckShouldEnterPostBugCheckDebugger.c)
 *     KiBugCheckUnicodeToAnsi @ 0x1405B30B4 (KiBugCheckUnicodeToAnsi.c)
 *     KiBugCheckWriteCrashDump @ 0x1405B30F8 (KiBugCheckWriteCrashDump.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x1405B3164 (KiBugcheckUnloadDebugSymbols.c)
 *     KiCollectTriageDumpDataBlocks @ 0x1405B33A8 (KiCollectTriageDumpDataBlocks.c)
 *     KiDisplayBlueScreen @ 0x1405B38C0 (KiDisplayBlueScreen.c)
 *     KiDumpParameterImages @ 0x1405B3C54 (KiDumpParameterImages.c)
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1405B3EF8 (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1405B4110 (KiInvokeBugCheckEntryCallbacks.c)
 *     KiPcToFileHeader @ 0x1405B41D8 (KiPcToFileHeader.c)
 *     KiScanBugCheckCallbackList @ 0x1405B43D0 (KiScanBugCheckCallbackList.c)
 *     KiYieldWaitForDebugger @ 0x1405B4640 (KiYieldWaitForDebugger.c)
 *     KeSaveSupervisorState @ 0x1405B8864 (KeSaveSupervisorState.c)
 *     KiSendFreeze @ 0x1405C1F30 (KiSendFreeze.c)
 *     KiAttemptBugcheckRecovery @ 0x1405C5784 (KiAttemptBugcheckRecovery.c)
 *     KiHandleMultipleBugchecksDuringRecovery @ 0x1405C62C0 (KiHandleMultipleBugchecksDuringRecovery.c)
 *     PpmHvSetVirtualProcessorQos @ 0x1405DC000 (PpmHvSetVirtualProcessorQos.c)
 *     WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x14065B6E4 (WheapSelLogSetNtSchedulerAvailabilityNoLock.c)
 *     MmLocateUnloadedDriver @ 0x14066C3F8 (MmLocateUnloadedDriver.c)
 *     IpmiHwContextInitialized @ 0x14069F66C (IpmiHwContextInitialized.c)
 *     IpmiLibAddSelBugcheckRecord @ 0x14069FBD0 (IpmiLibAddSelBugcheckRecord.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     VfNotifyVerifierOfEvent @ 0x140B82EA0 (VfNotifyVerifierOfEvent.c)
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
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // edx
  unsigned __int8 CurrentIrql; // cl
  signed __int32 v14; // eax
  unsigned int v15; // edx
  signed __int32 v16; // ecx
  unsigned __int8 v17; // si
  char CurrentStackInformation; // bl
  signed __int32 v19; // eax
  __int64 v20; // rdx
  signed __int32 v21; // ecx
  __int64 v22; // rdx
  int v23; // ecx
  __int64 v24; // rdi
  char *v25; // rbx
  unsigned __int8 v26; // r14
  signed __int64 v27; // rsi
  unsigned __int64 v28; // rdi
  struct _KTHREAD *v29; // rax
  unsigned __int64 v31; // rcx
  const void *v32; // rdx
  size_t v33; // r8
  struct _KPRCB *CurrentPrcb; // r14
  _XSAVE_AREA_HEADER *ExtendedSupervisorState; // rcx
  __int64 v36; // r9
  unsigned int v37; // ebx
  char v38; // si
  _CONTEXT *Context; // rax
  char *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int128 v43; // xmm1
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  _QWORD *v47; // rdi
  bool v48; // bl
  bool v49; // r15
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 *v52; // rcx
  unsigned __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 UnloadedDriver; // rax
  bool v57; // zf
  struct _KTHREAD *v58; // rcx
  __int64 v59; // rcx
  struct _KTHREAD *v60; // r12
  int IsEmptyAffinity; // eax
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  bool v65; // bl
  unsigned __int8 v66; // cl
  unsigned int v67; // ebx
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  bool v71; // di
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  _PROC_PERF_DOMAIN *Domain; // rax
  int v82; // ecx
  unsigned int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // rbx
  _CONTEXT *v86; // rax
  char *v87; // rcx
  __int128 v88; // xmm1
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // r9
  int v96; // ecx
  char v97; // [rsp+54h] [rbp-ACh]
  char v98; // [rsp+58h] [rbp-A8h]
  bool v99; // [rsp+59h] [rbp-A7h]
  _BYTE v100[6]; // [rsp+5Ah] [rbp-A6h] BYREF
  _QWORD *v101; // [rsp+60h] [rbp-A0h]
  bool v102; // [rsp+68h] [rbp-98h]
  PCSTR v103; // [rsp+70h] [rbp-90h]
  char v104; // [rsp+78h] [rbp-88h]
  bool v105; // [rsp+79h] [rbp-87h]
  char v106; // [rsp+7Ah] [rbp-86h]
  unsigned int v107; // [rsp+80h] [rbp-80h] BYREF
  __int64 v108; // [rsp+88h] [rbp-78h]
  int v109; // [rsp+90h] [rbp-70h]
  __int64 v110; // [rsp+98h] [rbp-68h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-60h]
  unsigned int v112; // [rsp+A8h] [rbp-58h] BYREF
  __int64 (__fastcall *v113)(); // [rsp+B0h] [rbp-50h]
  unsigned __int64 v114; // [rsp+B8h] [rbp-48h]
  _BYTE *v115; // [rsp+C0h] [rbp-40h] BYREF
  void *Src; // [rsp+C8h] [rbp-38h] BYREF
  PCSTR Format; // [rsp+D0h] [rbp-30h]
  struct _KAFFINITY_EX v118; // [rsp+E0h] [rbp-20h] BYREF
  char v119[1232]; // [rsp+1F0h] [rbp+F0h] BYREF
  char pszDest[192]; // [rsp+6C0h] [rbp+5C0h] BYREF

  v6 = a3;
  v7 = (const CHAR *)a5;
  v114 = a3;
  v107 = a1;
  v101 = a6;
  memset_0(&v118, 0, sizeof(v118));
  v99 = 1;
  pszDest[0] = 0;
  CurrentThread = KeGetCurrentThread();
  v113 = KiBugCheckProgress;
  v102 = IopAutoReboot != 0;
  v110 = 0LL;
  v100[0] = 0;
  v108 = 0LL;
  v97 = 0;
  v104 = 0;
  v106 = 0;
  Format = 0LL;
  v103 = 0LL;
  v105 = 0;
  v109 = 0;
  if ( !_InterlockedExchange(&KiBugCheckDataInitialized, 1) )
  {
    v11 = v107;
    if ( v107 == -1073741103 )
    {
      v11 = 195LL;
      v107 = 195;
    }
    KiBugCheckData = v11;
    qword_140F22748 = a2;
    qword_140F22750 = v6;
    qword_140F22758 = (__int64)a4;
    qword_140F22760 = a5;
  }
  IoNotifyDumpEx(4, v10, 0LL);
  if ( (HvlpFlags & 2) != 0 )
    HvlNotifyRootCrashdump(4);
  v115 = 0LL;
  Src = 0LL;
  v112 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v12) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v12);
    }
  }
  if ( KeGetCurrentThread()->InitialStack )
  {
    CurrentStackInformation = KeQueryCurrentStackInformation((__int64)&v112, (__int64)&Src, (__int64)&v115);
    v19 = KiBugCheckActive;
    v20 = (16 * KeGetCurrentPrcb()->Number) | 3;
    do
    {
      if ( (v19 & 3) == 3 )
      {
        v17 = 0;
        v98 = 0;
        goto LABEL_41;
      }
      v21 = v19;
      v19 = _InterlockedCompareExchange(&KiBugCheckActive, v20, v19);
    }
    while ( v19 != v21 );
    IoNotifyDumpEx(6, v20, 0LL);
    if ( CurrentStackInformation )
    {
      if ( v112 > 9 || (v23 = 929, !_bittest(&v23, v112)) )
      {
        v24 = 147456LL;
        v25 = (char *)Src;
        v26 = 1;
        if ( (unsigned __int64)(v115 - (_BYTE *)Src) > 0x24000 || (v24 = v115 - (_BYTE *)Src, v115 != Src) )
        {
          v27 = &KiPreBugcheckStackSaveArea - (_UNKNOWN *)Src;
          v28 = ((unsigned __int64)(v24 - 1) >> 12) + 1;
          do
          {
            if ( MmIsAddressValidEx((__int64)v25) )
              memmove(&v25[v27], v25, 0x1000uLL);
            else
              v26 = 0;
            v25 += 4096;
            --v28;
          }
          while ( v28 );
        }
        IoNotifyDumpEx(7, v22, v26);
        v6 = v114;
      }
    }
    if ( (_BYTE)KiKernelCetEnabled )
    {
      v29 = KeGetCurrentThread();
      __asm { rdsspq  r8 }
      v31 = (v29->KernelShadowStackLimit.AllFields & 0xFFFFFFFFFFFFF000uLL) + 4096;
      if ( _R8 > v31 && (void *)_R8 < (char *)v29->KernelShadowStackBase - 4096 )
      {
        v32 = (const void *)(_R8 - 256);
        if ( _R8 - 256 < v31 )
          v32 = (const void *)((v29->KernelShadowStackLimit.AllFields & 0xFFFFFFFFFFFFF000uLL) + 4096);
        v33 = _R8 - (_QWORD)v32;
        if ( v33 > 0x100 )
          v33 = 256LL;
        memmove(&unk_140FC70A0, v32, v33);
      }
    }
    v17 = 1;
    v98 = 1;
  }
  else
  {
    v14 = KiBugCheckActive;
    v15 = (16 * KeGetCurrentPrcb()->Number) | 3;
    while ( (v14 & 3) != 3 )
    {
      v16 = v14;
      v14 = _InterlockedCompareExchange(&KiBugCheckActive, v15, v14);
      if ( v14 == v16 )
      {
        v98 = 1;
        goto LABEL_16;
      }
    }
    v98 = 0;
LABEL_16:
    v17 = v98;
  }
LABEL_41:
  DbgPrintEx(5u, 2u, "KeBugCheck2(): KiSavePreBugcheckStack() -> ActiveBugCheck: 0x%02x\n", v17);
  if ( v17 && KiRecoveryCallbackCount <= 0 )
    KiBugcheckOwnerKeepsOthersFrozen = 1;
  if ( KeSmapEnabled )
    __asm { stac }
  CurrentPrcb = KeGetCurrentPrcb();
  ExtendedSupervisorState = CurrentPrcb->ExtendedSupervisorState;
  LODWORD(v114) = CurrentPrcb->Number;
  KeSaveSupervisorState(ExtendedSupervisorState, KeEnabledSupervisorXStateFeatures | 0x100);
  v37 = v107;
  if ( !BugCheckParameter4 )
    goto LABEL_47;
  if ( PopSimulateHiberBugcheck )
    PoPowerDownActionInProgress = 0;
  if ( *(_BYTE *)(BugCheckParameter4 + 2) )
  {
    if ( v17 )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "A bugcheck occurred during the late stages of hibernate suspend or resume.\n"
        "Due to verification temporarily enabled by Po during this time,\n"
        "regular bugcheck processing may not work.\n"
        "\n");
      if ( v107 == 10 )
        DbgPrintEx(
          0x65u,
          0,
          "Memory was accessed during this time that was not properly marked\n"
          "for the boot phase of hibernate! Check the callstack and parameters\n"
          "to find the pages that need to be marked.\n"
          "\n");
      v37 = v107;
    }
    v113 = 0LL;
    v38 = 1;
  }
  else
  {
LABEL_47:
    v38 = 0;
  }
  Context = CurrentPrcb->Context;
  v40 = v119;
  v41 = 9LL;
  v42 = 128LL;
  do
  {
    *(_OWORD *)v40 = *(_OWORD *)&Context->P1Home;
    *((_OWORD *)v40 + 1) = *(_OWORD *)&Context->P3Home;
    *((_OWORD *)v40 + 2) = *(_OWORD *)&Context->P5Home;
    *((_OWORD *)v40 + 3) = *(_OWORD *)&Context->ContextFlags;
    *((_OWORD *)v40 + 4) = *(_OWORD *)&Context->SegGs;
    *((_OWORD *)v40 + 5) = *(_OWORD *)&Context->Dr1;
    *((_OWORD *)v40 + 6) = *(_OWORD *)&Context->Dr3;
    v40 += 128;
    v43 = *(_OWORD *)&Context->Dr7;
    Context = (_CONTEXT *)((char *)Context + 128);
    *((_OWORD *)v40 - 1) = v43;
    --v41;
  }
  while ( v41 );
  *(_OWORD *)v40 = *(_OWORD *)&Context->P1Home;
  *((_OWORD *)v40 + 1) = *(_OWORD *)&Context->P3Home;
  *((_OWORD *)v40 + 2) = *(_OWORD *)&Context->P5Home;
  *((_OWORD *)v40 + 3) = *(_OWORD *)&Context->ContextFlags;
  *((_OWORD *)v40 + 4) = *(_OWORD *)&Context->SegGs;
  if ( !v98 )
  {
    v49 = 1;
    v60 = CurrentThread;
    v65 = v105;
    goto LABEL_173;
  }
  if ( ViVerifierEnabled )
  {
    VfNotifyVerifierOfEvent(2LL);
    v37 = v107;
  }
  if ( v37 == 229 )
  {
    KiScanBugCheckCallbackList(v40, v41, v42);
    guard_dispatch_icall_no_overrides(0LL, v44, v45, v46);
    HalReturnToFirmware(3);
  }
  if ( v37 > 0xD1 )
  {
    switch ( v37 )
    {
      case 0xD8u:
        *(_QWORD *)&KiBugCheckDriver = a2 + 88;
        goto LABEL_75;
      case 0xE6u:
        if ( (_DWORD)a2 == 39 )
          IoAddTriageDumpDataBlock(v6, (PVOID)8);
        goto LABEL_75;
      case 0xEAu:
        *(_QWORD *)&KiBugCheckDriver = a4;
        goto LABEL_75;
      case 0xEFu:
        v48 = 1;
        break;
      case 0xFCu:
        goto LABEL_134;
      case 0x139u:
        v48 = 0;
        if ( v101 )
        {
          v47 = v101;
          v108 = v101[45];
          goto LABEL_77;
        }
        if ( a2 == 10 )
          v6 = a5;
        v108 = v6;
        goto LABEL_127;
      case 0x13Du:
        v109 = 8;
        goto LABEL_75;
      case 0x14Fu:
        if ( v6 < 0x100 && a5 )
        {
          v58 = CurrentThread;
          if ( *(_QWORD *)(a5 + 8) )
            v58 = *(struct _KTHREAD **)(a5 + 8);
          CurrentThread = v58;
        }
        v48 = (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0;
        break;
      case 0x1C8u:
        v106 = 1;
        goto LABEL_75;
      default:
LABEL_116:
        v47 = v101;
        v57 = v101 == 0LL;
        goto LABEL_117;
    }
    v97 = v48;
LABEL_127:
    v47 = v101;
    goto LABEL_77;
  }
  switch ( v37 )
  {
    case 0xD1u:
    case 0xAu:
      v108 = a5;
      if ( a5 >= ExPoolCodeStart && a5 < ExPoolCodeEnd )
      {
        KiBugCheckData = 197LL;
        goto LABEL_75;
      }
      v54 = KiPcToFileHeader(a5, &v110, 0LL, v100);
      if ( v100[0] != 1 )
      {
        v47 = v101;
        v48 = 0;
        v49 = 1;
        KiBugCheckData = 209LL;
        if ( v54 )
        {
          KiBugCheckDriverOffset = a5 - v54;
          *(_QWORD *)&KiBugCheckDriver = v110 + 88;
        }
        goto LABEL_78;
      }
      KiBugCheckDriverOffset = a5 - v54;
      *(_QWORD *)&KiBugCheckDriver = v110 + 88;
      v55 = KiPcToFileHeader(a2, &v110, 1LL, v100);
      if ( v55 )
      {
        KiBugCheckData = 211LL;
        KiBugCheckDriverOffset = a2 - v55;
        *(_QWORD *)&KiBugCheckDriver = v110 + 88;
        goto LABEL_75;
      }
      UnloadedDriver = MmLocateUnloadedDriver(a2);
      v47 = v101;
      v48 = 0;
      v7 = v103;
      if ( UnloadedDriver )
      {
        KiBugCheckDriverOffset = a2 - *(_DWORD *)(UnloadedDriver + 16);
        *(_QWORD *)&KiBugCheckDriver = UnloadedDriver;
        KiBugCheckData = 212LL;
      }
LABEL_95:
      v49 = 1;
      goto LABEL_79;
    case 0x3Bu:
      v108 = a5;
      goto LABEL_75;
    case 0x4Cu:
      v48 = 1;
      v52 = &qword_140F22748;
      v97 = 1;
      v104 = 1;
      v41 = (__int64)qword_140F22768;
      KiBugCheckData = (unsigned int)a2;
      v53 = v6 - (_QWORD)&qword_140F22748;
      Format = a4;
      do
      {
        *v52 = *(__int64 *)((char *)v52 + v53);
        ++v52;
      }
      while ( (__int64)v52 < (__int64)qword_140F22768 );
      v47 = v101;
      goto LABEL_95;
    case 0x50u:
      v47 = v101;
      if ( !v101 )
      {
        if ( !a4 || ((unsigned __int8)a4 & 3) != 0 )
          goto LABEL_90;
        v47 = a4;
      }
      v108 = v47[45];
      qword_140F22758 = v108;
      v50 = KiPcToFileHeader(v108, &v110, 0LL, v100);
      v101 = v47;
      if ( v50 )
        goto LABEL_76;
LABEL_90:
      v51 = MmLocateUnloadedDriver(a2);
      if ( v51 )
      {
        KiBugCheckDriverOffset = a2 - *(_DWORD *)(v51 + 16);
        *(_QWORD *)&KiBugCheckDriver = v51;
        KiBugCheckData = 206LL;
      }
      goto LABEL_76;
    case 0x7Bu:
      v47 = v101;
      v48 = 0;
      v99 = ((unsigned __int8)a4 & 1) == 0;
      v49 = ((unsigned __int8)a4 & 2) == 0;
      goto LABEL_78;
    case 0x8Eu:
      goto LABEL_134;
  }
  if ( v37 != 160 )
  {
    if ( v37 != 190 )
    {
      if ( v37 == 203 )
      {
        v108 = a2;
LABEL_75:
        v47 = v101;
        goto LABEL_76;
      }
      goto LABEL_116;
    }
LABEL_134:
    v47 = v101;
    if ( !v101 )
    {
      if ( !a4 || ((unsigned __int8)a4 & 3) != 0 )
        goto LABEL_76;
      v47 = a4;
      v101 = a4;
    }
    v57 = v37 == 142;
LABEL_117:
    if ( !v57 )
      v108 = v47[45];
    goto LABEL_76;
  }
  if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
    goto LABEL_75;
  v47 = v101;
  if ( (unsigned __int64)(a2 - 240) <= 1 )
  {
    v48 = 1;
    v97 = 1;
    goto LABEL_77;
  }
LABEL_76:
  v48 = 0;
LABEL_77:
  v49 = 1;
LABEL_78:
  v7 = v103;
LABEL_79:
  if ( *(_QWORD *)&KiBugCheckDriver )
  {
    KiBugCheckUnicodeToAnsi(*(_QWORD *)&KiBugCheckDriver, pszDest, v42);
  }
  else if ( v108 )
  {
    KiDumpParameterImages(pszDest);
  }
  if ( !(_DWORD)WheapHighIrqlLogSelHandler )
  {
    WheapSelLogSetNtSchedulerAvailabilityNoLock();
    if ( (unsigned __int8)IpmiHwContextInitialized(&WheaIpmiContext) )
      IpmiLibAddSelBugcheckRecord();
  }
  v59 = KiBugCheckData;
  BugCheckProgressEfiSafeToCall = KiBugCheckData != 265;
  if ( v49 )
  {
    LOBYTE(v41) = v38;
    KiCollectTriageDumpDataBlocks(KiBugCheckData, v41);
  }
  v60 = CurrentThread;
  if ( v102 && (PartialDumpControl & 4) != 0 )
  {
    qword_140F22788 = (__int64)CurrentThread;
    KiCrashDumpContext = (__int64)v119;
    qword_140F22790 = (__int64)v113;
    qword_140F22798 = (__int64)v47;
    byte_140F227A0 = v48;
    byte_140F227A1 = v38;
    KiAttemptBugcheckRecovery();
  }
  KiBugcheckOwnerKeepsOthersFrozen = 1;
  guard_dispatch_icall_no_overrides(v59, v41, v42, v36);
  HvlEnlightenments &= 0x2000u;
  IoSaveBugCheckProgress(96);
  IsEmptyAffinity = KeIsEmptyAffinityEx(KiNmiInProgress);
  guard_dispatch_icall_no_overrides(IsEmptyAffinity == 0, v62, v63, v64);
  KiFilterBugCheckInfo(&v107, (__int64)&KiBugCheckData);
  v65 = !CrashdmpDumpBlock || !v49;
  HvlLogGuestCrashInformation(KiBugCheckData, qword_140F22748, qword_140F22750, qword_140F22758, qword_140F22760, v65);
  if ( !KdPitchDebugger )
    qword_140E01068 = (__int64)v119;
  if ( (unsigned __int8)KiBugCheckShouldEnterPostBugCheckDebugger(v107, 0LL) )
  {
    if ( !CurrentPrcb->NmiActive )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Fatal System Error: 0x%08lx\n                       (0x%p,0x%p,0x%p,0x%p)\n\n",
        KiBugCheckData,
        (const void *)qword_140F22748,
        (const void *)qword_140F22750,
        (const void *)qword_140F22758,
        (const void *)qword_140F22760);
      if ( *(_QWORD *)&KiBugCheckDriver )
        DbgPrintEx(0x65u, 0, "Driver at fault: %s.\n", pszDest);
      if ( v104 )
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
LABEL_173:
  _disable();
  v66 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v66, 15);
  if ( v98 )
    goto LABEL_188;
  if ( (unsigned __int8)KiHandleMultipleBugchecksDuringRecovery((unsigned int)KiBugCheckActive) )
  {
    KiBugcheckOwnerKeepsOthersFrozen = 1;
LABEL_188:
    if ( (unsigned int)KeNumberProcessors_0 > 1 && !KiHypervisorInitiatedCrashDump )
    {
      KiSetDebuggerOwner((__int64)CurrentPrcb);
      *(_QWORD *)&v118.Count = 2097153LL;
      memset_0(&v118.8, 0, sizeof(v118.8));
      KiCopyAffinityEx(&v118, v118.Size, &KeActiveProcessors);
      KeRemoveProcessorAffinityEx(&v118.Count, CurrentPrcb->Number);
      KiSendFreeze(&v118, 0LL);
      KeStallExecutionProcessor(0xF4240u);
    }
    IoSaveInitialBugCheckProgress(KiBugCheckData, qword_140F22748);
    IoSaveBugCheckProgress(1);
    LOBYTE(v76) = v65;
    KiBugCheckProgressCpusFrozen(v76);
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
        {
          LOBYTE(v80) = 1;
          LOBYTE(v79) = 1;
          guard_dispatch_icall_no_overrides(
            CurrentPrcb->PowerState.CheckContext.Constraint->PerfContext,
            Domain->QosSelection,
            v79,
            v80);
        }
      }
    }
    if ( v38 )
    {
      v71 = v99;
    }
    else
    {
      v82 = v109;
      if ( v65 )
        v82 = v109 | 4;
      v83 = v82 | 2;
      v71 = v99;
      if ( v102 )
        v83 = v82;
      v84 = v83 | 1;
      if ( v99 )
        v84 = v83;
      KiDisplayBlueScreen(v84);
    }
    LOBYTE(v78) = 1;
    HvlPrepareForRootCrashdump(v78, v77, v79, v80);
    if ( v38 )
    {
      v85 = 9LL;
    }
    else
    {
      IoSaveBugCheckProgress(2);
      KiInvokeBugCheckEntryCallbacks(1LL, 0LL, 0LL);
      KiInvokeBugCheckEntryCallbacks(8LL, 0LL, 0LL);
      v85 = 9LL;
      KiInvokeBugCheckEntryCallbacks(9LL, 0LL, 0LL);
      IoSaveBugCheckProgress(5);
      KiInvokeBugCheckAddTriageDumpDataCallbacks();
    }
    if ( !(_BYTE)KdDebuggerEnabled && !KdPitchDebugger )
      KdEnableDebuggerWithLock(0);
    v86 = CurrentPrcb->Context;
    v87 = v119;
    v68 = 128LL;
    do
    {
      *(_OWORD *)&v86->P1Home = *(_OWORD *)v87;
      *(_OWORD *)&v86->P3Home = *((_OWORD *)v87 + 1);
      *(_OWORD *)&v86->P5Home = *((_OWORD *)v87 + 2);
      *(_OWORD *)&v86->ContextFlags = *((_OWORD *)v87 + 3);
      *(_OWORD *)&v86->SegGs = *((_OWORD *)v87 + 4);
      *(_OWORD *)&v86->Dr1 = *((_OWORD *)v87 + 5);
      *(_OWORD *)&v86->Dr3 = *((_OWORD *)v87 + 6);
      v86 = (_CONTEXT *)((char *)v86 + 128);
      v88 = *((_OWORD *)v87 + 7);
      v87 += 128;
      *(_OWORD *)&v86[-1].LastExceptionToRip = v88;
      --v85;
    }
    while ( v85 );
    *(_OWORD *)&v86->P1Home = *(_OWORD *)v87;
    *(_OWORD *)&v86->P3Home = *((_OWORD *)v87 + 1);
    *(_OWORD *)&v86->P5Home = *((_OWORD *)v87 + 2);
    *(_OWORD *)&v86->ContextFlags = *((_OWORD *)v87 + 3);
    *(_OWORD *)&v86->SegGs = *((_OWORD *)v87 + 4);
    if ( v49 )
    {
      KdDecodeDataBlock();
      qword_140F22790 = (__int64)v113;
      byte_140F227A0 = v97;
      qword_140F22798 = (__int64)v101;
      KiCrashDumpContext = (__int64)v119;
      qword_140F22788 = (__int64)v60;
      byte_140F227A1 = v38;
      KiBugCheckWriteCrashDump(&KiCrashDumpContext);
    }
    goto LABEL_216;
  }
  if ( (_DWORD)v114 != (unsigned int)KiBugCheckActive >> 4 )
  {
    KiYieldWaitForDebugger();
    __debugbreak();
  }
  if ( KiHypervisorInitiatedCrashDump || (v67 = ((unsigned int)KiBugCheckActive >> 2) & 3, v67 >= 2) )
  {
    DbgPrintEx(5u, 1u, "Initiating HalHaltSystem()!\n");
    while ( 1 )
      guard_dispatch_icall_no_overrides(v73, v72, v74, v75);
  }
  DbgPrintEx(
    5u,
    2u,
    "DoubleFault detected!  CurrentProcessor: 0x%x, PreviousState: { BugCheckState: 0x%08lx, RecursionCount: 0x%08lx, Bug"
    "CheckOwner: 0x%08lx }\n",
    v114,
    KiBugCheckActive & 3,
    ((unsigned int)KiBugCheckActive >> 2) & 3,
    (unsigned int)KiBugCheckActive >> 4);
  IoSetBugCheckProgressFlag(0x20000);
  _InterlockedAdd(&KiBugCheckActive, 4u);
  if ( v67 )
  {
    DbgPrintEx(5u, 1u, "Initiating KiBugCheckDebugBreak(DBG_STATUS_BUGCHECK_SECOND)\n");
    KiBugCheckDebugBreak(4u);
  }
  else
  {
    KiCrashDumpContext = (__int64)v119;
    qword_140F22798 = (__int64)v101;
    qword_140F22790 = (__int64)v113;
    byte_140F227A0 = v97;
    qword_140F22788 = (__int64)v60;
    byte_140F227A1 = v38;
    IoRetryAsMiniDump(
      KiBugCheckData,
      qword_140F22748,
      qword_140F22750,
      qword_140F22758,
      qword_140F22760,
      v119,
      v60,
      v113,
      v97,
      v101);
  }
  v71 = v99;
LABEL_216:
  HvlResumeFromRootCrashdump(0LL, v68, v69, v70);
  IoSaveBugCheckProgress(99);
  if ( !v38 )
    ((void (*)(void))KiScanBugCheckCallbackList)();
  guard_dispatch_icall_no_overrides(v90, v89, v91, v92);
  IoSaveBugCheckProgress(4);
  if ( v102 )
  {
    KiResumeForReboot = 1;
    KiSendThawExecution(0);
    KiBugcheckUnloadDebugSymbols();
    guard_dispatch_icall_no_overrides(0LL, v93, v94, v95);
    if ( PoPowerDownActionInProgress && !PoPowerResetActionInProgress
      || PoModernStandbyActionInProgress
      || v106
      || (v96 = 3, !v71) )
    {
      v96 = 1;
    }
    HalReturnToFirmware(v96);
  }
  KiBugCheckDebugBreak(4u);
}
