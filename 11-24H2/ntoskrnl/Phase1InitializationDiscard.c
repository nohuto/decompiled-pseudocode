/*
 * XREFs of Phase1InitializationDiscard @ 0x140C0E048
 * Callers:
 *     Phase1Initialization @ 0x1406FA520 (Phase1Initialization.c)
 * Callees:
 *     KeSetSystemTime @ 0x140270898 (KeSetSystemTime.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeSetAffinityProcess @ 0x14032B26C (KeSetAffinityProcess.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KeSetPriorityThread @ 0x140371FE0 (KeSetPriorityThread.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlpTimeToTimeFields @ 0x140419FC0 (RtlpTimeToTimeFields.c)
 *     RtlpTimeFieldsToTime @ 0x14041A578 (RtlpTimeFieldsToTime.c)
 *     RtlStringCbCopyA @ 0x14044E2F8 (RtlStringCbCopyA.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1404549D0 (ExInitializeNPagedLookasideListInternal.c)
 *     RtlInitAnsiString @ 0x14045BBA0 (RtlInitAnsiString.c)
 *     FsRtlSendModernAppTermination @ 0x14048F270 (FsRtlSendModernAppTermination.c)
 *     PoNotifySystemTimeSet @ 0x1404C3C60 (PoNotifySystemTimeSet.c)
 *     KeBugCheck @ 0x1404F9230 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _strupr @ 0x1404FAAD0 (_strupr.c)
 *     strtoul @ 0x1404FAFA8 (strtoul.c)
 *     _strtoui64 @ 0x1404FB240 (_strtoui64.c)
 *     strstr @ 0x1404FB270 (strstr.c)
 *     atol @ 0x1404FB4C0 (atol.c)
 *     DisplayBootBitmap @ 0x14053746C (DisplayBootBitmap.c)
 *     MakeGdtReadOnly @ 0x140537688 (MakeGdtReadOnly.c)
 *     RtlStringCbPrintfA @ 0x140537878 (RtlStringCbPrintfA.c)
 *     RtlStringCbPrintfExA @ 0x1405378C4 (RtlStringCbPrintfExA.c)
 *     HvlDebuggerSupportInitialize @ 0x14057F7A0 (HvlDebuggerSupportInitialize.c)
 *     InbvDisplayString @ 0x14058C3A0 (InbvDisplayString.c)
 *     KiCommitGroupSubNodeAssignments @ 0x1405B88F4 (KiCommitGroupSubNodeAssignments.c)
 *     UcInitialize @ 0x140695608 (UcInitialize.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x1406A9FB0 (ZwQueryLicenseValue.c)
 *     ZwSetSystemTime @ 0x1406AAB70 (ZwSetSystemTime.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     strncmp @ 0x1406C0A20 (strncmp.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopInitializeBootLogging @ 0x14070FFB8 (IopInitializeBootLogging.c)
 *     AlpcpInitSystem @ 0x14073FD1C (AlpcpInitSystem.c)
 *     RtlInitFunctionalityCache @ 0x14077CE68 (RtlInitFunctionalityCache.c)
 *     EtwTimeProfileReset @ 0x1407A96EC (EtwTimeProfileReset.c)
 *     ExInitializeLeapSecondData @ 0x1407B6080 (ExInitializeLeapSecondData.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1407B626C (ExInitializeUtcTimeZoneBias.c)
 *     ExIsMultiSessionSku @ 0x1407B7F88 (ExIsMultiSessionSku.c)
 *     ExInitLicenseCallback @ 0x1407B8564 (ExInitLicenseCallback.c)
 *     ExpGetOriginalImageVersionRegistryValue @ 0x1407C5D68 (ExpGetOriginalImageVersionRegistryValue.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x1409A9310 (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x1409A9374 (ExReleaseTimeRefreshLockExclusive.c)
 *     RtlFindMessage @ 0x1409B98E0 (RtlFindMessage.c)
 *     ExpRefreshTimeZoneInformation @ 0x140A7981C (ExpRefreshTimeZoneInformation.c)
 *     ExpWriteTimeZoneBias @ 0x140A7A0B8 (ExpWriteTimeZoneBias.c)
 *     ExInitializePagedLookasideList @ 0x140A914C0 (ExInitializePagedLookasideList.c)
 *     HalInitSystem @ 0x140B4D700 (HalInitSystem.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     KdInitSystem @ 0x140B77E30 (KdInitSystem.c)
 *     BgDisplayBackgroundUpdate @ 0x140BB25EC (BgDisplayBackgroundUpdate.c)
 *     BgDisplayProgressIndicator @ 0x140BB2628 (BgDisplayProgressIndicator.c)
 *     BgGetDisplayContext @ 0x140BB26F4 (BgGetDisplayContext.c)
 *     MmInitSystem @ 0x140BE02E8 (MmInitSystem.c)
 *     BootApplicationPersistentDataProcess @ 0x140BE052C (BootApplicationPersistentDataProcess.c)
 *     PsInitSystem @ 0x140BE07F8 (PsInitSystem.c)
 *     VmInitSystem @ 0x140BE0898 (VmInitSystem.c)
 *     CreateMiniNtBootKey @ 0x140C0C220 (CreateMiniNtBootKey.c)
 *     CreateSystemRootLink @ 0x140C0C3F8 (CreateSystemRootLink.c)
 *     ExpComputeCyclesPerYield @ 0x140C0C900 (ExpComputeCyclesPerYield.c)
 *     GetBootSystemTime @ 0x140C0CA8C (GetBootSystemTime.c)
 *     MfgInitSystem @ 0x140C0DCB0 (MfgInitSystem.c)
 *     HalAllProcessorsStarted @ 0x140C0F6B0 (HalAllProcessorsStarted.c)
 *     HalReportResourceUsage @ 0x140C0F6E0 (HalReportResourceUsage.c)
 *     CcInitializeCacheManager @ 0x140C17A88 (CcInitializeCacheManager.c)
 *     DbgkInitialize @ 0x140C18074 (DbgkInitialize.c)
 *     FsRtlInitSystem @ 0x140C1AD7C (FsRtlInitSystem.c)
 *     InbvDriverInitialize @ 0x140C1C230 (InbvDriverInitialize.c)
 *     IoCreateObjectTypes @ 0x140C1C664 (IoCreateObjectTypes.c)
 *     PpInitSystem @ 0x140C24784 (PpInitSystem.c)
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 *     KiPerformGroupConfiguration @ 0x140C2AE80 (KiPerformGroupConfiguration.c)
 *     PfInitializeSuperfetch @ 0x140C2EA3C (PfInitializeSuperfetch.c)
 *     PsInitializeBootCpuPartitions @ 0x140C369DC (PsInitializeBootCpuPartitions.c)
 *     SeCodeIntegrityInitializePolicy @ 0x140C3BC58 (SeCodeIntegrityInitializePolicy.c)
 *     SeInitSystem @ 0x140C3BDD8 (SeInitSystem.c)
 *     VerifierInitSystem @ 0x140C3D310 (VerifierInitSystem.c)
 *     ExInitializeTimeRefresh @ 0x140C426DC (ExInitializeTimeRefresh.c)
 *     ExInitSystem @ 0x140C42854 (ExInitSystem.c)
 *     ExpWatchProductTypeInitialization @ 0x140C4381C (ExpWatchProductTypeInitialization.c)
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 *     BcdInitializeBcdSyncMutant @ 0x140C5E9F0 (BcdInitializeBcdSyncMutant.c)
 *     KeInitializeClock @ 0x140C624A0 (KeInitializeClock.c)
 *     EmInitSystem @ 0x140C62920 (EmInitSystem.c)
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 *     ObInitSystem @ 0x140C63408 (ObInitSystem.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 *     SmInitSystem @ 0x140C68AC8 (SmInitSystem.c)
 */

char __fastcall Phase1InitializationDiscard(ULONG_PTR BugCheckParameter3)
{
  struct _LIST_ENTRY *Blink; // r12
  char *Pool2; // r13
  struct _KTHREAD *CurrentThread; // rcx
  char *v5; // rcx
  char *v6; // rax
  const char *v7; // rdi
  char *v8; // rax
  char *v9; // rax
  char *v10; // rax
  char *v11; // rbx
  __int16 v12; // ax
  int v13; // edx
  char v14; // al
  char *v15; // rax
  char *v16; // rbx
  unsigned int v17; // eax
  char *v18; // rcx
  __int64 v19; // r14
  unsigned int v20; // eax
  unsigned int v21; // r15d
  __int64 v22; // r14
  __int64 v23; // rax
  char v24; // al
  __int64 v25; // rax
  __int64 v26; // rbx
  ULONG_PTR v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  NTSTATUS Message; // eax
  NTSTRSAFE_PSTR v34; // rbx
  int v35; // r15d
  NTSTATUS v36; // eax
  size_t v37; // r14
  char *v38; // rbx
  NTSTATUS v39; // eax
  NTSTATUS v40; // eax
  __int64 v41; // rdx
  NTSTATUS v42; // eax
  ULONG_PTR v43; // r10
  _OWORD *v44; // rax
  char *v45; // rcx
  __int64 v46; // rdx
  __int128 v47; // xmm1
  int Flink_high; // eax
  char *v49; // rax
  char *v50; // rax
  __int16 v51; // bx
  LARGE_INTEGER v52; // rax
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  char *v54; // rax
  char *v55; // rax
  char *v56; // rax
  char *v57; // rax
  char *v58; // rax
  char *v59; // rax
  char *v60; // rax
  char *v61; // rax
  char *v62; // rax
  char *v63; // rax
  const CHAR *v64; // rbx
  ULONG v65; // r9d
  NTSTATUS v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rbx
  _QWORD *v69; // rcx
  NTSTATUS v70; // eax
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  int inited; // eax
  int v75; // eax
  int SystemRootLink; // eax
  __int64 v77; // r8
  int v78; // eax
  __int128 *DisplayContext; // rax
  ULONG_PTR v80; // rbx
  int v81; // eax
  int v82; // eax
  int v83; // eax
  int v84; // eax
  int v85; // ebx
  __int64 v91; // r9
  char *v92; // rax
  const char *v93; // rbx
  int v94; // eax
  int v95; // ecx
  ULONG v96; // r9d
  __int64 v97; // rdx
  __int64 v98; // rdx
  __int16 v99; // ax
  bool v100; // zf
  int v101; // eax
  PMESSAGE_RESOURCE_ENTRY *MessageEntry; // [rsp+20h] [rbp-E0h]
  int pszFormat; // [rsp+28h] [rbp-D8h]
  char v105; // [rsp+40h] [rbp-C0h] BYREF
  char v106; // [rsp+41h] [rbp-BFh]
  LARGE_INTEGER v107; // [rsp+48h] [rbp-B8h] BYREF
  PMESSAGE_RESOURCE_ENTRY v108; // [rsp+50h] [rbp-B0h] BYREF
  int v109; // [rsp+58h] [rbp-A8h]
  PMESSAGE_RESOURCE_ENTRY v110; // [rsp+60h] [rbp-A0h] BYREF
  ULONG ResultDataSize; // [rsp+68h] [rbp-98h] BYREF
  ULONG Type; // [rsp+6Ch] [rbp-94h] BYREF
  char *EndPtr; // [rsp+70h] [rbp-90h] BYREF
  LARGE_INTEGER CurrentSystemTime; // [rsp+78h] [rbp-88h] BYREF
  int Buffer; // [rsp+80h] [rbp-80h] BYREF
  size_t pcbRemaining; // [rsp+88h] [rbp-78h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+90h] [rbp-70h] BYREF
  __int64 v118; // [rsp+98h] [rbp-68h] BYREF
  __int128 v119; // [rsp+A0h] [rbp-60h] BYREF
  STRING v120; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v122[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 (__fastcall *v123)(__int64, int, int); // [rsp+D8h] [rbp-28h]
  __int64 (__fastcall *v124)(__int64); // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v125)(__int64); // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall *v126)(int, int, int, __int64, __int64); // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v127)(int, __int64, __int64); // [rsp+F8h] [rbp-8h]
  char (__fastcall *v128)(unsigned int *); // [rsp+100h] [rbp+0h]
  __int64 (__fastcall *v129)(_QWORD *, int, __int64, int); // [rsp+108h] [rbp+8h]
  __int64 (__fastcall *v130)(ULONG_PTR); // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v131)(int, int *); // [rsp+118h] [rbp+18h]
  __int128 v132; // [rsp+120h] [rbp+20h]
  __int128 v133; // [rsp+130h] [rbp+30h]
  __int64 v134; // [rsp+140h] [rbp+40h]
  char pszDest[24]; // [rsp+150h] [rbp+50h] BYREF

  v107.QuadPart = 0LL;
  CurrentSystemTime.QuadPart = 0LL;
  v118 = 0LL;
  v110 = 0LL;
  v108 = 0LL;
  v120 = 0LL;
  LOBYTE(v109) = 0;
  v119 = 0LL;
  Buffer = 0;
  ResultDataSize = 0;
  Type = 0;
  DestinationString = 0LL;
  v122[1] = 0;
  memset_0(v122, 0, 0x74uLL);
  Blink = PsGetCurrentServerSiloGlobals()[76].Blink;
  Pool2 = (char *)ExAllocatePool2(0x40uLL, 0x200uLL, 0x74696E49uLL);
  if ( !Pool2 )
    KeBugCheck(0x31u);
  CurrentThread = KeGetCurrentThread();
  v106 = 0;
  LODWORD(InitializationPhase) = 1;
  KeSetPriorityThread(CurrentThread, 31);
  v5 = *(char **)(BugCheckParameter3 + 216);
  if ( v5 )
  {
    v6 = strupr(v5);
    v7 = v6;
    if ( v6 )
    {
      v8 = strstr(v6, " HYPERVISORROOTPROC=");
      if ( v8 )
      {
        v9 = strstr(v8, "=");
        if ( v9 )
          KeRootProcSpecified = atol(v9 + 1);
      }
      v10 = strstr(v7, " HYPERVISORROOTPROCNUMANODES=");
      v11 = v10;
      if ( v10 )
        v11 = strstr(v10, "=");
LABEL_10:
      while ( v11 && (unsigned int)KeRootProcNumaNodesSpecified < 0x40 )
      {
        v12 = atol(++v11);
        v13 = KeRootProcNumaNodesSpecified;
        *((_WORD *)&KeRootProcNumaNodes + (unsigned int)KeRootProcNumaNodesSpecified) = v12;
        v14 = *v11;
        KeRootProcNumaNodesSpecified = v13 + 1;
        if ( v14 != 44 )
        {
          while ( v14 != 32 && v14 )
          {
            v14 = *++v11;
            if ( *v11 == 44 )
              goto LABEL_10;
          }
          break;
        }
      }
      v15 = strstr(v7, " HYPERVISORROOTPROCNUMANODELPS=");
      v16 = v15;
      if ( v15 )
      {
        v16 = strstr(v15, "=");
        KeRootProcNumaNodeLpsSpecified = 1;
        KeRootProcNumaNodesSpecified = 0;
        KeRootProcSpecified = 0;
      }
LABEL_20:
      while ( v16 )
      {
        ++v16;
        EndPtr = 0LL;
        v17 = strtoul(v16, &EndPtr, 10);
        v18 = EndPtr;
        v19 = v17;
        if ( v16 == EndPtr || *EndPtr != 95 )
        {
          v21 = 0;
        }
        else
        {
          v16 = EndPtr + 1;
          v20 = strtoul(EndPtr + 1, &EndPtr, 10);
          v18 = EndPtr;
          v21 = v20;
        }
        if ( v16 != v18 && *v18 == 61 && (unsigned int)v19 < 0x40 )
        {
          v22 = 2 * v19;
          v16 = v18 + 1;
          if ( !qword_140FCCC88[v22] )
          {
            v23 = ExAllocatePool2(0x40uLL, 0x100uLL, 0x800uLL);
            if ( !v23 )
              KeBugCheck(0x31u);
            KeRootProcNumaNodeLps[v22] = 2048LL;
            qword_140FCCC88[v22] = v23;
          }
          if ( v21 < 0x20 )
            *(_QWORD *)(qword_140FCCC88[v22] + 8LL * v21) = strtoui64(v16, &EndPtr, 16);
        }
        v24 = *v16;
        if ( *v16 != 44 )
        {
          while ( v24 != 32 && v24 )
          {
            v24 = *++v16;
            if ( *v16 == 44 )
              goto LABEL_20;
          }
          break;
        }
      }
    }
  }
  else
  {
    v7 = 0LL;
  }
  v25 = KiSubNodeConfigBlock;
  word_140E668B0 = 0;
  *(_BYTE *)(KiSubNodeConfigBlock + 5) &= 0xFCu;
  *(_BYTE *)(v25 + 4) = 0;
  KiPerformGroupConfiguration(BugCheckParameter3);
  v26 = KiSubNodeConfigBlock;
  KiCommitGroupSubNodeAssignments(*(_WORD *)(KiSubNodeConfigBlock + 6));
  v27 = (unsigned int)InitializationPhase;
  *(_QWORD *)(v26 + 16) |= 1uLL;
  if ( !(unsigned __int8)HalInitSystem(v27, BugCheckParameter3) )
    goto LABEL_220;
  KeInitializeClock((unsigned int)InitializationPhase);
  if ( v7 && strstr(v7, "NOGUIBOOT") )
    goto LABEL_223;
  byte_140E65E78 = 0;
  if ( byte_140E65EE0 )
  {
    if ( byte_140E65EE8 )
    {
      LOBYTE(v29) = 1;
      if ( (int)BgDisplayProgressIndicator(v29, v28, v30, v31) >= 0 )
        byte_140E65EE1 = 1;
    }
    if ( byte_140E65EE0 )
    {
      if ( byte_140E65EE8 )
      {
        LOBYTE(v29) = 1;
        if ( (int)BgDisplayBackgroundUpdate(v29, v28, v30, v31) >= 0 )
          byte_140E65EA0 = 1;
      }
    }
  }
  qword_140E65E80 = (__int64)DisplayFilter;
  InbvDriverInitialize(1LL, BugCheckParameter3, 7LL);
  DisplayBootBitmap(0LL, v32);
  if ( v7 )
  {
LABEL_223:
    if ( strstr(v7, "MININT") )
    {
      InitIsWinPEMode = 1;
      if ( strstr(v7, "INRAM") )
        InitWinPEModeType |= 0x80000000;
      else
        InitWinPEModeType |= 1u;
    }
  }
  Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x4000007Eu, &v110);
  v34 = Pool2;
  ppszDestEnd = Pool2;
  v35 = Message;
  pcbRemaining = 256LL;
  if ( CmCSDVersionString.Length )
  {
    v36 = RtlStringCbPrintfExA(Pool2, 0xFFuLL, &ppszDestEnd, &pcbRemaining, 0, ": %wZ");
    if ( v36 < 0 )
      KeBugCheckEx(0x32u, v36, 7uLL, 0LL, 0LL);
    v34 = ppszDestEnd;
    v37 = pcbRemaining;
  }
  else
  {
    v37 = 255LL;
    pcbRemaining = 255LL;
  }
  *v34 = 0;
  v38 = v34 + 1;
  ppszDestEnd = v38;
  v39 = RtlStringCbPrintfA(pszDest, 0x18uLL, "%u.%u", 10, 0);
  if ( v39 < 0 )
    KeBugCheckEx(0x32u, v39, 7uLL, 1uLL, 0LL);
  if ( v35 < 0 )
  {
    v42 = RtlStringCbCopyA(v38, v37, "MICROSOFT (R) WINDOWS (TM)\n");
    if ( v42 < 0 )
      KeBugCheckEx(0x32u, v42, 7uLL, 3uLL, v43);
  }
  else
  {
    pszFormat = (int)Pool2;
    LODWORD(MessageEntry) = (unsigned __int16)NtBuildNumber;
    v40 = RtlStringCbPrintfA(v38, v37, (NTSTRSAFE_PCSTR)v110->Text, pszDest, MessageEntry);
    if ( v40 < 0 )
      KeBugCheckEx(0x32u, v40, 7uLL, 2uLL, 0LL);
  }
  InbvDisplayString((__int64)v38, v41);
  v44 = Pool2 + 256;
  v45 = Pool2;
  v46 = 2LL;
  do
  {
    *v44 = *(_OWORD *)v45;
    v44[1] = *((_OWORD *)v45 + 1);
    v44[2] = *((_OWORD *)v45 + 2);
    v44[3] = *((_OWORD *)v45 + 3);
    v44[4] = *((_OWORD *)v45 + 4);
    v44[5] = *((_OWORD *)v45 + 5);
    v44[6] = *((_OWORD *)v45 + 6);
    v44 += 8;
    v47 = *((_OWORD *)v45 + 7);
    v45 += 128;
    *(v44 - 1) = v47;
    --v46;
  }
  while ( v46 );
  if ( !(unsigned __int8)PoInitSystem(0LL, BugCheckParameter3) )
LABEL_219:
    KeBugCheck(0xA0u);
  if ( !ExpRealTimeIsUniversal )
  {
    Flink_high = HIDWORD(Blink[27].Flink);
    if ( Flink_high == -1 )
    {
      HIDWORD(Blink[27].Flink) = ExpAltTimeZoneBias;
      Flink_high = ExpAltTimeZoneBias;
      v106 = 1;
    }
    Blink[27].Blink = (struct _LIST_ENTRY *)(600000000LL * Flink_high);
    *(_DWORD *)(MmWriteableSharedUserData + 604) = 0;
    ExpWriteTimeZoneBias(&Blink[27].Blink);
  }
  GetBootSystemTime(*(__int64 **)(BugCheckParameter3 + 240), (ULONGLONG *)&v107.QuadPart);
  if ( v7 )
  {
    v49 = strstr(v7, "YEAR");
    if ( v49 )
    {
      v50 = strstr(v49, "=");
      if ( v50 )
      {
        v51 = atol(v50 + 1);
        RtlpTimeToTimeFields((__int64 *)&v107, &v119);
        LOWORD(v119) = v51;
        RtlpTimeFieldsToTime((__int64)&v119, (__int64 *)&v107);
      }
    }
  }
  if ( ExpRealTimeIsUniversal )
    v52 = v107;
  else
    v52.QuadPart = v107.QuadPart - (unsigned __int64)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink;
  CurrentSystemTime = v52;
  KeSetSystemTime((__int64)&v107, (__int64)&v118, 4);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  PoNotifySystemTimeSet(
    (__int64 *)&v107,
    &v118,
    0,
    (int)&CurrentSystemTime,
    HIDWORD(CurrentServerSiloGlobals[76].Blink[27].Flink),
    pszFormat,
    ExpSystemIsInCmosMode);
  RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
  if ( ZwQueryLicenseValue(&DestinationString, &Type, &KeRegisteredProcessors, 4u, &ResultDataSize) < 0
    || ResultDataSize != 4
    || Type != 4 )
  {
    KeRegisteredProcessors = 1;
  }
  if ( v7 )
  {
    v54 = strstr(v7, " BOOTPROC=");
    if ( v54 )
    {
      v55 = strstr(v54, "=");
      if ( v55 )
        KeBootprocSpecified = atol(v55 + 1);
    }
    v56 = strstr(v7, " NUMPROC=");
    if ( v56 )
    {
      v57 = strstr(v56, "=");
      if ( v57 )
        KeNumprocSpecified = atol(v57 + 1);
    }
    v58 = strstr(v7, " HYPERVISORNUMPROC=");
    if ( v58 )
    {
      v59 = strstr(v58, "=");
      if ( v59 )
        KeHypervisorNumprocSpecified = atol(v59 + 1);
    }
    if ( !KeRootProcNumaNodeLpsSpecified )
    {
      v60 = strstr(v7, " HYPERVISORROOTPROCPERNODE=");
      if ( v60 )
      {
        v61 = strstr(v60, "=");
        if ( v61 )
          KeRootProcPerNodeSpecified = atol(v61 + 1);
      }
      v62 = strstr(v7, " HYPERVISORROOTPROCPERCORE=");
      if ( v62 )
      {
        v63 = strstr(v62, "=");
        if ( v63 )
          KeRootProcPerCoreSpecified = atol(v63 + 1);
      }
    }
    if ( strstr(v7, " MAXPROC") )
      KeMaxprocSpecified = 1;
  }
  qword_1410087C8 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeStartAllProcessors();
  qword_1410087D0 = KeQueryPerformanceCounter(0LL).QuadPart;
  EtwTimeProfileReset();
  KeSetAffinityProcess(KeGetCurrentThread()->ApcState.Process, 0, &KeActiveProcessors);
  MakeGdtReadOnly();
  v64 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000089u, &v108) < 0
      ? "MultiProcessor Kernel\r\n"
      : (const CHAR *)v108->Text;
  if ( !(unsigned __int8)HalAllProcessorsStarted() )
LABEL_220:
    KeBugCheck(0x61u);
  RtlInitAnsiString(&v120, v64);
  if ( v120.Length >= 2u )
    v120.Length -= 2;
  v65 = 1073741981;
  if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    v65 = 1073741960;
  v66 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v65, &v110);
  v67 = 0LL;
  v68 = *(unsigned int *)MmPhysicalMemoryBlock;
  if ( (_DWORD)v68 )
  {
    v69 = (char *)MmPhysicalMemoryBlock + 24;
    do
    {
      v67 += *v69;
      v69 += 2;
      --v68;
    }
    while ( v68 );
  }
  if ( v66 < 0 )
    v70 = RtlStringCbPrintfA(
            Pool2,
            0x100uLL,
            "%u System Processor [%u MB Memory] %Z\n",
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v67 + 255) >> 8,
            &v120);
  else
    v70 = RtlStringCbPrintfA(
            Pool2,
            0x100uLL,
            (NTSTRSAFE_PCSTR)v110->Text,
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v67 + 255) >> 8,
            &v120);
  if ( v70 < 0 )
    KeBugCheckEx(0x32u, v70, 7uLL, 4uLL, 0LL);
  InbvDisplayString((__int64)Pool2, v71);
  ExFreePoolWithTag(Pool2, 0);
  if ( !(unsigned __int8)ObInitSystem(1LL) )
    KeBugCheck(0x62u);
  if ( !(unsigned __int8)ExInitSystem(BugCheckParameter3) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 1uLL, 0LL);
  HalReportResourceUsage(0xFFFFFFFFLL);
  if ( !(unsigned __int8)IoCreateObjectTypes() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 4uLL, 0LL);
  if ( !(unsigned __int8)KeInitSystem(1LL) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  if ( !KdInitSystem(InitializationPhase, 0LL, v72, v73) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 3uLL, 0LL);
  inited = TmInitSystem(
             &TmResourceManagerObjectType,
             &TmEnlistmentObjectType,
             &TmTransactionManagerObjectType,
             &TmTransactionObjectType);
  if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  v75 = DbgkInitialize();
  if ( v75 < 0 )
    KeBugCheckEx(0x32u, v75, 0LL, 0LL, 0LL);
  UcInitialize(0);
  BcdInitializeBcdSyncMutant();
  VerifierInitSystem(0LL);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x63u);
  LpcLegacyMaxMessageLength = 648;
  if ( (int)AlpcpInitSystem() < 0 )
    KeBugCheck(0x6Au);
  LpcPortObjectType = AlpcPortObjectType;
  PsInitSystem(1, (void *)BugCheckParameter3);
  ExInitLicenseCallback();
  SystemRootLink = CreateSystemRootLink((_QWORD *)BugCheckParameter3);
  if ( SystemRootLink < 0 )
    KeBugCheckEx(0x64u, SystemRootLink, 0LL, 0LL, 0LL);
  qword_1410087E8 = KeQueryPerformanceCounter(0LL).QuadPart;
  MmInitSystem(1LL, BugCheckParameter3, v77);
  qword_1410087F0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned __int8)CcInitializeCacheManager(1LL) )
    KeBugCheck(0x66u);
  if ( !(unsigned __int8)CmInitSystem1(BugCheckParameter3) )
    KeBugCheck(0x67u);
  PsInitializeBootCpuPartitions();
  v78 = ExInitializeLeapSecondData();
  if ( v78 < 0 )
    KeBugCheckEx(0x32u, v78, 0xCuLL, 0LL, 0LL);
  v105 = 0;
  if ( (int)ExIsMultiSessionSku(&v105) >= 0 && v105 )
    *(_DWORD *)(MmWriteableSharedUserData + 752) |= 0x100u;
  if ( RtlpMultiUsersInSessionSupported )
    *(_DWORD *)(MmWriteableSharedUserData + 752) |= 0x200u;
  if ( CmStateSeparationEnabled )
    *(_DWORD *)(MmWriteableSharedUserData + 752) |= 0x400u;
  qword_1410087B8 = KeQueryPerformanceCounter(0LL).QuadPart;
  memset_0(v122, 0, 0x78uLL);
  v123 = MmMapLockedRestartPages;
  v124 = MmUnmapLockedRestartPages;
  v125 = KeRemoveEnclavePage;
  v126 = KdPullRemoteFileEx;
  v127 = CmSaveKeyToBuffer;
  v128 = KeIsBugCheckActive;
  v129 = CmOpenKeyForBugCheckRecovery;
  v130 = MiPageToNode;
  v131 = MmGetNextNode;
  v122[0] = 120;
  if ( VslVsmEnabled )
  {
    VslpIumKsrInitContext = (__int64)VslpKsrEnterIumSecureMode;
    qword_141008738 = (__int64)VslpRegisterKsrCallback;
  }
  DisplayContext = BgGetDisplayContext();
  v80 = (int)KsrInitSystem(BugCheckParameter3, v122, DisplayContext);
  qword_1410087C0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)(v80 + 0x80000000) >= 0 && (_DWORD)v80 != -1073741637 )
    KeBugCheckEx(0x32u, v80, 0LL, 1uLL, 0LL);
  ExKsrInterface = v132;
  qword_140EFEDC0 = v134;
  xmmword_140EFEDB0 = v133;
  v81 = EmInitSystem(0LL, BugCheckParameter3);
  if ( v81 < 0 )
    KeBugCheckEx(0x32u, v81, 8uLL, 0LL, 0LL);
  v82 = MfgInitSystem(BugCheckParameter3);
  if ( v82 < 0 )
    KeBugCheckEx(0x32u, v82, 9uLL, 0LL, 0LL);
  PfInitializeSuperfetch();
  v83 = SmInitSystem(0LL);
  if ( v83 < 0 )
    KeBugCheckEx(0x32u, v83, 0xBuLL, 0LL, 0LL);
  v84 = VmInitSystem(1);
  if ( v84 < 0 )
    KeBugCheckEx(0x32u, v84, 0xAuLL, 0LL, 0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter3 + 240) + 2656LL) & 2) == 0 || strstr(v7, "FORCETIMESYNC") )
    ZwUpdateWnfStateData(&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( (HvlpFlags & 0x2000000) != 0 )
    ZwUpdateWnfStateData(&WNF_HVL_CPU_MGMT_PARTITION, 0LL, 0, 0LL, 0LL, 0, 0);
  FsRtlSendModernAppTermination(&Buffer, 1u, 1);
  ExInitializeTimeRefresh();
  ExAcquireTimeRefreshLockExclusive();
  ExInitializeUtcTimeZoneBias(&CurrentSystemTime);
  v85 = HIDWORD(Blink[27].Flink);
  ExpRefreshTimeZoneInformation(0);
  ExReleaseTimeRefreshLockExclusive();
  if ( v106 )
  {
    v107.QuadPart = (LONGLONG)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink + CurrentSystemTime.QuadPart;
    KeSetSystemTime((__int64)&v107, (__int64)&v118, 4);
  }
  else if ( v85 != HIDWORD(Blink[27].Flink) )
  {
    ZwSetSystemTime(0LL, 0LL);
  }
  if ( !(unsigned __int8)FsRtlInitSystem() )
    KeBugCheck(0x68u);
  ExInitializeNPagedLookasideListInternal(
    (__int64)&RtlLznt1DecompressChunkLookaside,
    0LL,
    0LL,
    512,
    88,
    1667529324,
    0,
    0);
  _RAX = 1LL;
  __asm { cpuid }
  x86_cpu_enable_ssse3 = _RCX & 0x200;
  x86_cpu_enable_simd = (_RDX & 0x4000000) != 0 && (_RCX & 0x100002) == 1048578;
  ExInitializePagedLookasideList(&RtlpRangeListEntryLookasideList, 0LL, 0LL, 0, 0x38uLL, 0x656C5252u, 0x10u);
  HvlDebuggerSupportInitialize(BugCheckParameter3);
  HalReportResourceUsage(0LL);
  KdInitialize(1LL, BugCheckParameter3, &KdpContext, v91);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x90u);
  if ( v7 )
  {
    v92 = strstr(v7, "SAFEBOOT:");
    if ( v92 )
    {
      v93 = v92 + 9;
      if ( !strncmp(v92 + 9, "MINIMAL", 7uLL) )
      {
        InitSafeBootMode = 1;
      }
      else
      {
        if ( strncmp(v93, "NETWORK", 7uLL) )
        {
          if ( !strncmp(v93, "DSREPAIR", 8uLL) )
          {
            v93 += 8;
            InitSafeBootMode = 3;
          }
          else
          {
            InitSafeBootMode = 0;
          }
          goto LABEL_192;
        }
        InitSafeBootMode = 2;
      }
      v93 += 7;
LABEL_192:
      if ( *v93 )
      {
        v94 = strncmp(v93, "(ALTERNATESHELL)", 0x10uLL);
        v95 = (unsigned __int8)v109;
        if ( !v94 )
          v95 = 1;
        v109 = v95;
      }
      if ( InitSafeBootMode )
      {
        v108 = 0LL;
        v96 = 0;
        switch ( InitSafeBootMode )
        {
          case 1:
            v96 = 168;
            break;
          case 2:
            v96 = 169;
            break;
          case 3:
            v96 = 170;
            break;
        }
        if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v96, &v108) >= 0 )
          InbvDisplayString((__int64)v108->Text, v97);
      }
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 240) + 132LL) & 0x800) != 0 )
  {
    if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0xB7u, &v110) >= 0 )
      InbvDisplayString((__int64)v110->Text, v98);
    IopInitializeBootLogging(BugCheckParameter3, (__int64)(Pool2 + 256));
  }
  ExpWatchProductTypeInitialization();
  *(_DWORD *)(MmWriteableSharedUserData + 736) = -1;
  BootApplicationPersistentDataProcess(0);
  ExpMicrocodeInitialization(2LL);
  if ( ExpFreeListCount > (unsigned int)KeMaximumProcessors )
    ExpFreeListCount = KeMaximumProcessors;
  LODWORD(v108) = 0;
  ExpOriginalImageVersion = 0;
  if ( (int)ExpGetOriginalImageVersionRegistryValue(&v108) >= 0 )
    ExpOriginalImageVersion = (int)v108;
  v99 = ExpComputeCyclesPerYield();
  v100 = InitIsWinPEMode == 0;
  *(_WORD *)(MmWriteableSharedUserData + 726) = v99;
  if ( !v100 )
    CreateMiniNtBootKey();
  SymCryptEntropyAccumulatorGlobalInitFromRegistry();
  v101 = SeCodeIntegrityInitializePolicy(BugCheckParameter3);
  if ( v101 < 0 )
    KeBugCheckEx(0x32u, v101, 0x69436553uLL, 0LL, 0LL);
  KdpTimeSlipPending = 0;
  qword_140EFAA68 = (__int64)&ExBootDeviceList;
  ExBootDeviceList = (__int64)&ExBootDeviceList;
  ExNumMissingBootDevices = 0;
  ExBootDevicesRemovedEvent.Header.WaitListHead.Blink = &ExBootDevicesRemovedEvent.Header.WaitListHead;
  ExBootDevicesRemovedEvent.Header.WaitListHead.Flink = &ExBootDevicesRemovedEvent.Header.WaitListHead;
  ExExternalBootSupportInitializationEvent.Header.WaitListHead.Blink = &ExExternalBootSupportInitializationEvent.Header.WaitListHead;
  ExExternalBootSupportInitializationEvent.Header.WaitListHead.Flink = &ExExternalBootSupportInitializationEvent.Header.WaitListHead;
  ExBootDeviceRemovalHandler = 0LL;
  ExBootDeviceListSpinLock = 0LL;
  LOWORD(ExBootDevicesRemovedEvent.Header.Lock) = 1;
  ExBootDevicesRemovedEvent.Header.Size = 6;
  ExBootDevicesRemovedEvent.Header.SignalState = 0;
  LOWORD(ExExternalBootSupportInitializationEvent.Header.Lock) = 1;
  ExExternalBootSupportInitializationEvent.Header.Size = 6;
  ExExternalBootSupportInitializationEvent.Header.SignalState = 1;
  if ( !(unsigned __int8)PoInitSystem(1LL, BugCheckParameter3) )
    goto LABEL_219;
  RtlInitFunctionalityCache();
  KeWaitForSingleObject(&stru_140E2FFE8, Executive, 0, 0, 0LL);
  return v109;
}
