/*
 * XREFs of Phase1InitializationDiscard @ 0x140C0C048
 * Callers:
 *     Phase1Initialization @ 0x1406FC8E0 (Phase1Initialization.c)
 * Callees:
 *     KeSetAffinityProcess @ 0x140202B7C (KeSetAffinityProcess.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     KeSetPriorityThread @ 0x1403F96D0 (KeSetPriorityThread.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     RtlpTimeToTimeFields @ 0x140426110 (RtlpTimeToTimeFields.c)
 *     RtlpTimeFieldsToTime @ 0x1404266C8 (RtlpTimeFieldsToTime.c)
 *     RtlStringCbCopyA @ 0x140459248 (RtlStringCbCopyA.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x14045FB10 (ExInitializeNPagedLookasideListInternal.c)
 *     RtlInitAnsiString @ 0x1404654C0 (RtlInitAnsiString.c)
 *     FsRtlSendModernAppTermination @ 0x1404947E0 (FsRtlSendModernAppTermination.c)
 *     KeSetSystemTime @ 0x1404B3F6C (KeSetSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x1404CA740 (PoNotifySystemTimeSet.c)
 *     KeBugCheck @ 0x1404FB970 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _strupr @ 0x1404FD210 (_strupr.c)
 *     strtoul @ 0x1404FD6E8 (strtoul.c)
 *     _strtoui64 @ 0x1404FD980 (_strtoui64.c)
 *     strstr @ 0x1404FD9B0 (strstr.c)
 *     atol @ 0x1404FDC00 (atol.c)
 *     DisplayBootBitmap @ 0x140539C2C (DisplayBootBitmap.c)
 *     MakeGdtReadOnly @ 0x140539E48 (MakeGdtReadOnly.c)
 *     RtlStringCbPrintfA @ 0x14053A038 (RtlStringCbPrintfA.c)
 *     RtlStringCbPrintfExA @ 0x14053A084 (RtlStringCbPrintfExA.c)
 *     HvlDebuggerSupportInitialize @ 0x140582420 (HvlDebuggerSupportInitialize.c)
 *     InbvDisplayString @ 0x14058F380 (InbvDisplayString.c)
 *     KiCommitGroupSubNodeAssignments @ 0x1405BB2C4 (KiCommitGroupSubNodeAssignments.c)
 *     UcInitialize @ 0x140694538 (UcInitialize.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x1406A9010 (ZwQueryLicenseValue.c)
 *     ZwSetSystemTime @ 0x1406A9BD0 (ZwSetSystemTime.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     strncmp @ 0x1406BFB20 (strncmp.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IopInitializeBootLogging @ 0x140712428 (IopInitializeBootLogging.c)
 *     AlpcpInitSystem @ 0x1407422BC (AlpcpInitSystem.c)
 *     RtlInitFunctionalityCache @ 0x14077CF38 (RtlInitFunctionalityCache.c)
 *     EtwTimeProfileReset @ 0x1407A95AC (EtwTimeProfileReset.c)
 *     ExInitializeLeapSecondData @ 0x1407B5C30 (ExInitializeLeapSecondData.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1407B5E1C (ExInitializeUtcTimeZoneBias.c)
 *     ExIsMultiSessionSku @ 0x1407B7B38 (ExIsMultiSessionSku.c)
 *     ExInitLicenseCallback @ 0x1407B8114 (ExInitLicenseCallback.c)
 *     ExpGetOriginalImageVersionRegistryValue @ 0x1407C5908 (ExpGetOriginalImageVersionRegistryValue.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x1409B1FC0 (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x1409B2024 (ExReleaseTimeRefreshLockExclusive.c)
 *     ExpRefreshTimeZoneInformation @ 0x1409DC59C (ExpRefreshTimeZoneInformation.c)
 *     ExpWriteTimeZoneBias @ 0x1409DCE5C (ExpWriteTimeZoneBias.c)
 *     RtlFindMessage @ 0x140A02480 (RtlFindMessage.c)
 *     ExInitializePagedLookasideList @ 0x140A94D10 (ExInitializePagedLookasideList.c)
 *     HalInitSystem @ 0x140B4B6C0 (HalInitSystem.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     KdInitSystem @ 0x140B75E30 (KdInitSystem.c)
 *     BgDisplayBackgroundUpdate @ 0x140BB05EC (BgDisplayBackgroundUpdate.c)
 *     BgDisplayProgressIndicator @ 0x140BB0628 (BgDisplayProgressIndicator.c)
 *     BgGetDisplayContext @ 0x140BB06F4 (BgGetDisplayContext.c)
 *     MmInitSystem @ 0x140BDE2E8 (MmInitSystem.c)
 *     BootApplicationPersistentDataProcess @ 0x140BDE52C (BootApplicationPersistentDataProcess.c)
 *     PsInitSystem @ 0x140BDE7F8 (PsInitSystem.c)
 *     VmInitSystem @ 0x140BDE898 (VmInitSystem.c)
 *     CreateMiniNtBootKey @ 0x140C0A220 (CreateMiniNtBootKey.c)
 *     CreateSystemRootLink @ 0x140C0A3F8 (CreateSystemRootLink.c)
 *     ExpComputeCyclesPerYield @ 0x140C0A900 (ExpComputeCyclesPerYield.c)
 *     GetBootSystemTime @ 0x140C0AA8C (GetBootSystemTime.c)
 *     MfgInitSystem @ 0x140C0BCB0 (MfgInitSystem.c)
 *     HalAllProcessorsStarted @ 0x140C0D6B0 (HalAllProcessorsStarted.c)
 *     HalReportResourceUsage @ 0x140C0D6E0 (HalReportResourceUsage.c)
 *     CcInitializeCacheManager @ 0x140C15A88 (CcInitializeCacheManager.c)
 *     DbgkInitialize @ 0x140C16074 (DbgkInitialize.c)
 *     FsRtlInitSystem @ 0x140C18D7C (FsRtlInitSystem.c)
 *     InbvDriverInitialize @ 0x140C1A1F0 (InbvDriverInitialize.c)
 *     IoCreateObjectTypes @ 0x140C1A624 (IoCreateObjectTypes.c)
 *     PpInitSystem @ 0x140C22754 (PpInitSystem.c)
 *     KeStartAllProcessors @ 0x140C26D58 (KeStartAllProcessors.c)
 *     KiPerformGroupConfiguration @ 0x140C28DE0 (KiPerformGroupConfiguration.c)
 *     PfInitializeSuperfetch @ 0x140C2C91C (PfInitializeSuperfetch.c)
 *     PsInitializeBootCpuPartitions @ 0x140C3489C (PsInitializeBootCpuPartitions.c)
 *     SeCodeIntegrityInitializePolicy @ 0x140C39B04 (SeCodeIntegrityInitializePolicy.c)
 *     SeInitSystem @ 0x140C39C80 (SeInitSystem.c)
 *     VerifierInitSystem @ 0x140C3B1B8 (VerifierInitSystem.c)
 *     ExInitializeTimeRefresh @ 0x140C4058C (ExInitializeTimeRefresh.c)
 *     ExInitSystem @ 0x140C40704 (ExInitSystem.c)
 *     ExpWatchProductTypeInitialization @ 0x140C416CC (ExpWatchProductTypeInitialization.c)
 *     CmInitSystem1 @ 0x140C44EC0 (CmInitSystem1.c)
 *     BcdInitializeBcdSyncMutant @ 0x140C5C860 (BcdInitializeBcdSyncMutant.c)
 *     KeInitializeClock @ 0x140C60350 (KeInitializeClock.c)
 *     EmInitSystem @ 0x140C607D0 (EmInitSystem.c)
 *     KeInitSystem @ 0x140C60CE0 (KeInitSystem.c)
 *     ObInitSystem @ 0x140C612B4 (ObInitSystem.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 *     SmInitSystem @ 0x140C6694C (SmInitSystem.c)
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
  ULONG_PTR v23; // rax
  char v24; // al
  __int64 v25; // rax
  __int64 v26; // rbx
  ULONG_PTR v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  int Message; // eax
  NTSTRSAFE_PSTR v32; // rbx
  int v33; // r15d
  NTSTATUS v34; // eax
  size_t v35; // r14
  char *v36; // rbx
  NTSTATUS v37; // eax
  NTSTATUS v38; // eax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  NTSTATUS v42; // eax
  ULONG_PTR v43; // r10
  _OWORD *v44; // rax
  char *v45; // rcx
  __int64 v46; // rdx
  __int128 v47; // xmm1
  __int64 v48; // r8
  __int64 v49; // r9
  int Flink_high; // eax
  char *v51; // rax
  char *v52; // rax
  __int16 v53; // bx
  LARGE_INTEGER v54; // rax
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  char *v56; // rax
  char *v57; // rax
  char *v58; // rax
  char *v59; // rax
  char *v60; // rax
  char *v61; // rax
  char *v62; // rax
  char *v63; // rax
  char *v64; // rax
  char *v65; // rax
  __int64 v66; // rcx
  const char *v67; // rbx
  unsigned int v68; // r9d
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rbx
  _QWORD *v72; // rcx
  NTSTATUS v73; // eax
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // r8
  __int64 v78; // r9
  int inited; // eax
  int v80; // eax
  int SystemRootLink; // eax
  __int64 v82; // r8
  int v83; // eax
  __int128 *DisplayContext; // rax
  ULONG_PTR v85; // rbx
  int v86; // eax
  int v87; // eax
  int v88; // eax
  int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  int v93; // ebx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v102; // r9
  char *v103; // rax
  const char *v104; // rbx
  int v105; // eax
  int v106; // ecx
  unsigned int v107; // r9d
  __int64 v108; // rdx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // r9
  __int16 v114; // ax
  bool v115; // zf
  int v116; // eax
  ULONG dwFlags[2]; // [rsp+20h] [rbp-E0h]
  int pszFormat; // [rsp+28h] [rbp-D8h]
  char v120; // [rsp+40h] [rbp-C0h] BYREF
  char v121; // [rsp+41h] [rbp-BFh]
  LARGE_INTEGER v122; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 *v123; // [rsp+50h] [rbp-B0h] BYREF
  int v124; // [rsp+58h] [rbp-A8h]
  const char *v125; // [rsp+60h] [rbp-A0h] BYREF
  int v126; // [rsp+68h] [rbp-98h]
  int v127; // [rsp+6Ch] [rbp-94h] BYREF
  char *EndPtr; // [rsp+70h] [rbp-90h] BYREF
  LARGE_INTEGER v129; // [rsp+78h] [rbp-88h] BYREF
  int v130; // [rsp+80h] [rbp-80h] BYREF
  size_t pcbRemaining; // [rsp+88h] [rbp-78h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+90h] [rbp-70h] BYREF
  __int64 v133; // [rsp+98h] [rbp-68h] BYREF
  __int128 v134; // [rsp+A0h] [rbp-60h] BYREF
  STRING v135; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v137[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 (__fastcall *v138)(__int64, int, int); // [rsp+D8h] [rbp-28h]
  __int64 (__fastcall *v139)(__int64); // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v140)(__int64); // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall *v141)(int, int, int, __int64, __int64); // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v142)(int, __int64, __int64); // [rsp+F8h] [rbp-8h]
  char (__fastcall *v143)(unsigned int *); // [rsp+100h] [rbp+0h]
  __int64 (__fastcall *v144)(_QWORD *, int, __int64, int); // [rsp+108h] [rbp+8h]
  __int64 (__fastcall *v145)(ULONG_PTR); // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v146)(int, int *); // [rsp+118h] [rbp+18h]
  __int128 v147; // [rsp+120h] [rbp+20h]
  __int128 v148; // [rsp+130h] [rbp+30h]
  __int64 v149; // [rsp+140h] [rbp+40h]
  char pszDest[24]; // [rsp+150h] [rbp+50h] BYREF

  v122.QuadPart = 0LL;
  v129.QuadPart = 0LL;
  v133 = 0LL;
  v125 = 0LL;
  v123 = 0LL;
  v135 = 0LL;
  LOBYTE(v124) = 0;
  v134 = 0LL;
  v130 = 0;
  v126 = 0;
  v127 = 0;
  DestinationString = 0LL;
  v137[1] = 0;
  memset_0(v137, 0, 0x74uLL);
  Blink = PsGetCurrentServerSiloGlobals()[76].Blink;
  Pool2 = (char *)ExAllocatePool2(0x40uLL, 0x200uLL, 0x74696E49uLL);
  if ( !Pool2 )
    KeBugCheck(0x31u);
  CurrentThread = KeGetCurrentThread();
  v121 = 0;
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
          if ( !qword_140FCBC08[v22] )
          {
            v23 = ExAllocatePool2(0x40uLL, 0x100uLL, 0x800uLL);
            if ( !v23 )
              KeBugCheck(0x31u);
            KeRootProcNumaNodeLps[v22] = 2048LL;
            qword_140FCBC08[v22] = v23;
          }
          if ( v21 < 0x20 )
            *(_QWORD *)(qword_140FCBC08[v22] + 8LL * v21) = strtoui64(v16, &EndPtr, 16);
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
  word_140E66770 = 0;
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
  byte_140E65D3C = 0;
  if ( byte_140E65DA8 )
  {
    if ( byte_140E65DB1 && (int)BgDisplayProgressIndicator(1) >= 0 )
      byte_140E65DA9 = 1;
    if ( byte_140E65DA8 && byte_140E65DB1 && (int)BgDisplayBackgroundUpdate(1) >= 0 )
      byte_140E65D68 = 1;
  }
  qword_140E65D48 = (__int64)DisplayFilter;
  InbvDriverInitialize(1LL, BugCheckParameter3, 7LL);
  DisplayBootBitmap(0LL, v28, v29, v30);
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
  Message = RtlFindMessage(0x140000000LL, 0xBu, 0, 0x4000007Eu, (unsigned __int16 **)&v125);
  v32 = Pool2;
  ppszDestEnd = Pool2;
  v33 = Message;
  pcbRemaining = 256LL;
  if ( CmCSDVersionString.Length )
  {
    v34 = RtlStringCbPrintfExA(Pool2, 0xFFuLL, &ppszDestEnd, &pcbRemaining, 0, ": %wZ");
    if ( v34 < 0 )
      KeBugCheckEx(0x32u, v34, 7uLL, 0LL, 0LL);
    v32 = ppszDestEnd;
    v35 = pcbRemaining;
  }
  else
  {
    v35 = 255LL;
    pcbRemaining = 255LL;
  }
  *v32 = 0;
  v36 = v32 + 1;
  ppszDestEnd = v36;
  v37 = RtlStringCbPrintfA(pszDest, 0x18uLL, "%u.%u", 10, 0);
  if ( v37 < 0 )
    KeBugCheckEx(0x32u, v37, 7uLL, 1uLL, 0LL);
  if ( v33 < 0 )
  {
    v42 = RtlStringCbCopyA(v36, v35, "MICROSOFT (R) WINDOWS (TM)\n");
    if ( v42 < 0 )
      KeBugCheckEx(0x32u, v42, 7uLL, 3uLL, v43);
  }
  else
  {
    pszFormat = (int)Pool2;
    dwFlags[0] = (unsigned __int16)NtBuildNumber;
    v38 = RtlStringCbPrintfA(v36, v35, v125 + 4, pszDest, *(_QWORD *)dwFlags);
    if ( v38 < 0 )
      KeBugCheckEx(0x32u, v38, 7uLL, 2uLL, 0LL);
  }
  InbvDisplayString((__int64)v36, v39, v40, v41);
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
      v121 = 1;
    }
    Blink[27].Blink = (struct _LIST_ENTRY *)(600000000LL * Flink_high);
    *(_DWORD *)(MmWriteableSharedUserData + 604) = 0;
    ExpWriteTimeZoneBias(&Blink[27].Blink);
  }
  GetBootSystemTime(*(__int64 **)(BugCheckParameter3 + 240), (ULONGLONG *)&v122.QuadPart, v48, v49);
  if ( v7 )
  {
    v51 = strstr(v7, "YEAR");
    if ( v51 )
    {
      v52 = strstr(v51, "=");
      if ( v52 )
      {
        v53 = atol(v52 + 1);
        RtlpTimeToTimeFields((__int64 *)&v122, &v134);
        LOWORD(v134) = v53;
        RtlpTimeFieldsToTime((__int64)&v134, (__int64 *)&v122);
      }
    }
  }
  if ( ExpRealTimeIsUniversal )
    v54 = v122;
  else
    v54.QuadPart = v122.QuadPart - (unsigned __int64)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink;
  v129 = v54;
  KeSetSystemTime((__int64)&v122, (__int64)&v133, 4);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  PoNotifySystemTimeSet(
    (__int64 *)&v122,
    &v133,
    0,
    (int)&v129,
    HIDWORD(CurrentServerSiloGlobals[76].Blink[27].Flink),
    pszFormat,
    ExpSystemIsInCmosMode);
  RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
  if ( (int)ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v127) < 0 || v126 != 4 || v127 != 4 )
    KeRegisteredProcessors = 1;
  if ( v7 )
  {
    v56 = strstr(v7, " BOOTPROC=");
    if ( v56 )
    {
      v57 = strstr(v56, "=");
      if ( v57 )
        KeBootprocSpecified = atol(v57 + 1);
    }
    v58 = strstr(v7, " NUMPROC=");
    if ( v58 )
    {
      v59 = strstr(v58, "=");
      if ( v59 )
        KeNumprocSpecified = atol(v59 + 1);
    }
    v60 = strstr(v7, " HYPERVISORNUMPROC=");
    if ( v60 )
    {
      v61 = strstr(v60, "=");
      if ( v61 )
        KeHypervisorNumprocSpecified = atol(v61 + 1);
    }
    if ( !KeRootProcNumaNodeLpsSpecified )
    {
      v62 = strstr(v7, " HYPERVISORROOTPROCPERNODE=");
      if ( v62 )
      {
        v63 = strstr(v62, "=");
        if ( v63 )
          KeRootProcPerNodeSpecified = atol(v63 + 1);
      }
      v64 = strstr(v7, " HYPERVISORROOTPROCPERCORE=");
      if ( v64 )
      {
        v65 = strstr(v64, "=");
        if ( v65 )
          KeRootProcPerCoreSpecified = atol(v65 + 1);
      }
    }
    if ( strstr(v7, " MAXPROC") )
      KeMaxprocSpecified = 1;
  }
  qword_1410077C8 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeStartAllProcessors(v66);
  qword_1410077D0 = KeQueryPerformanceCounter(0LL).QuadPart;
  EtwTimeProfileReset();
  KeSetAffinityProcess(KeGetCurrentThread()->ApcState.Process, 0, &KeActiveProcessors);
  MakeGdtReadOnly();
  v67 = (int)RtlFindMessage(0x140000000LL, 0xBu, 0, 0x40000089u, &v123) < 0
      ? "MultiProcessor Kernel\r\n"
      : (const char *)(v123 + 2);
  if ( !(unsigned __int8)HalAllProcessorsStarted() )
LABEL_220:
    KeBugCheck(0x61u);
  RtlInitAnsiString(&v135, v67);
  if ( v135.Length >= 2u )
    v135.Length -= 2;
  v68 = 1073741981;
  if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    v68 = 1073741960;
  v69 = RtlFindMessage(0x140000000LL, 0xBu, 0, v68, (unsigned __int16 **)&v125);
  v70 = 0LL;
  v71 = *(unsigned int *)MmPhysicalMemoryBlock;
  if ( (_DWORD)v71 )
  {
    v72 = (char *)MmPhysicalMemoryBlock + 24;
    do
    {
      v70 += *v72;
      v72 += 2;
      --v71;
    }
    while ( v71 );
  }
  if ( v69 < 0 )
    v73 = RtlStringCbPrintfA(
            Pool2,
            0x100uLL,
            "%u System Processor [%u MB Memory] %Z\n",
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v70 + 255) >> 8,
            &v135);
  else
    v73 = RtlStringCbPrintfA(
            Pool2,
            0x100uLL,
            v125 + 4,
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v70 + 255) >> 8,
            &v135);
  if ( v73 < 0 )
    KeBugCheckEx(0x32u, v73, 7uLL, 4uLL, 0LL);
  InbvDisplayString((__int64)Pool2, v74, v75, v76);
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
  if ( !KdInitSystem(InitializationPhase, 0LL, v77, v78) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 3uLL, 0LL);
  inited = TmInitSystem(
             &TmResourceManagerObjectType,
             &TmEnlistmentObjectType,
             &TmTransactionManagerObjectType,
             &TmTransactionObjectType);
  if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  v80 = DbgkInitialize();
  if ( v80 < 0 )
    KeBugCheckEx(0x32u, v80, 0LL, 0LL, 0LL);
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
  qword_1410077E8 = KeQueryPerformanceCounter(0LL).QuadPart;
  MmInitSystem(1LL, BugCheckParameter3, v82);
  qword_1410077F0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned __int8)CcInitializeCacheManager(1LL) )
    KeBugCheck(0x66u);
  if ( !(unsigned __int8)CmInitSystem1(BugCheckParameter3) )
    KeBugCheck(0x67u);
  PsInitializeBootCpuPartitions();
  v83 = ExInitializeLeapSecondData();
  if ( v83 < 0 )
    KeBugCheckEx(0x32u, v83, 0xCuLL, 0LL, 0LL);
  v120 = 0;
  if ( (int)ExIsMultiSessionSku(&v120) >= 0 && v120 )
    *(_DWORD *)(MmWriteableSharedUserData + 752) |= 0x100u;
  if ( RtlpMultiUsersInSessionSupported )
    *(_DWORD *)(MmWriteableSharedUserData + 752) |= 0x200u;
  if ( CmStateSeparationEnabled )
    *(_DWORD *)(MmWriteableSharedUserData + 752) |= 0x400u;
  qword_1410077B8 = KeQueryPerformanceCounter(0LL).QuadPart;
  memset_0(v137, 0, 0x78uLL);
  v138 = MmMapLockedRestartPages;
  v139 = MmUnmapLockedRestartPages;
  v140 = KeRemoveEnclavePage;
  v141 = KdPullRemoteFileEx;
  v142 = CmSaveKeyToBuffer;
  v143 = KeIsBugCheckActive;
  v144 = CmOpenKeyForBugCheckRecovery;
  v145 = MiPageToNode;
  v146 = MmGetNextNode;
  v137[0] = 120;
  if ( VslVsmEnabled )
  {
    VslpIumKsrInitContext = (__int64)VslpKsrEnterIumSecureMode;
    qword_141007738 = (__int64)VslpRegisterKsrCallback;
  }
  DisplayContext = BgGetDisplayContext();
  v85 = (int)KsrInitSystem(BugCheckParameter3, v137, DisplayContext);
  qword_1410077C0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)(v85 + 0x80000000) >= 0 && (_DWORD)v85 != -1073741637 )
    KeBugCheckEx(0x32u, v85, 0LL, 1uLL, 0LL);
  ExKsrInterface = v147;
  qword_140EFEAA0 = v149;
  xmmword_140EFEA90 = v148;
  v86 = EmInitSystem(0LL, BugCheckParameter3);
  if ( v86 < 0 )
    KeBugCheckEx(0x32u, v86, 8uLL, 0LL, 0LL);
  v87 = MfgInitSystem(BugCheckParameter3);
  if ( v87 < 0 )
    KeBugCheckEx(0x32u, v87, 9uLL, 0LL, 0LL);
  PfInitializeSuperfetch();
  v88 = SmInitSystem(0LL);
  if ( v88 < 0 )
    KeBugCheckEx(0x32u, v88, 0xBuLL, 0LL, 0LL);
  v89 = VmInitSystem(1);
  if ( v89 < 0 )
    KeBugCheckEx(0x32u, v89, 0xAuLL, 0LL, 0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter3 + 240) + 2656LL) & 2) == 0 || strstr(v7, "FORCETIMESYNC") )
    ZwUpdateWnfStateData((__int64)&WNF_BOOT_INVALID_TIME_SOURCE, 0LL);
  if ( (HvlpFlags & 0x2000000) != 0 )
    ZwUpdateWnfStateData((__int64)&WNF_HVL_CPU_MGMT_PARTITION, 0LL);
  FsRtlSendModernAppTermination(&v130, 1u, 1);
  ExInitializeTimeRefresh(v91, v90, v92);
  ExAcquireTimeRefreshLockExclusive();
  ExInitializeUtcTimeZoneBias(&v129);
  v93 = HIDWORD(Blink[27].Flink);
  ExpRefreshTimeZoneInformation(0);
  ExReleaseTimeRefreshLockExclusive();
  if ( v121 )
  {
    v122.QuadPart = (LONGLONG)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink + v129.QuadPart;
    KeSetSystemTime((__int64)&v122, (__int64)&v133, 4);
  }
  else if ( v93 != HIDWORD(Blink[27].Flink) )
  {
    ZwSetSystemTime(0LL, 0LL);
  }
  if ( !(unsigned __int8)FsRtlInitSystem(v95, v94, v96) )
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
  KdInitialize(1LL, BugCheckParameter3, &KdpContext, v102);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x90u);
  if ( v7 )
  {
    v103 = strstr(v7, "SAFEBOOT:");
    if ( v103 )
    {
      v104 = v103 + 9;
      if ( !strncmp(v103 + 9, "MINIMAL", 7uLL) )
      {
        LODWORD(InitSafeBootMode) = 1;
      }
      else
      {
        if ( strncmp(v104, "NETWORK", 7uLL) )
        {
          if ( !strncmp(v104, "DSREPAIR", 8uLL) )
          {
            v104 += 8;
            LODWORD(InitSafeBootMode) = 3;
          }
          else
          {
            LODWORD(InitSafeBootMode) = 0;
          }
          goto LABEL_192;
        }
        LODWORD(InitSafeBootMode) = 2;
      }
      v104 += 7;
LABEL_192:
      if ( *v104 )
      {
        v105 = strncmp(v104, "(ALTERNATESHELL)", 0x10uLL);
        v106 = (unsigned __int8)v124;
        if ( !v105 )
          v106 = 1;
        v124 = v106;
      }
      if ( (_DWORD)InitSafeBootMode )
      {
        v123 = 0LL;
        v107 = 0;
        switch ( (_DWORD)InitSafeBootMode )
        {
          case 1:
            v107 = 168;
            break;
          case 2:
            v107 = 169;
            break;
          case 3:
            v107 = 170;
            break;
        }
        if ( (int)RtlFindMessage(0x140000000LL, 0xBu, 0, v107, &v123) >= 0 )
          InbvDisplayString((__int64)(v123 + 2), v108, v109, v110);
      }
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 240) + 132LL) & 0x800) != 0 )
  {
    if ( (int)RtlFindMessage(0x140000000LL, 0xBu, 0, 0xB7u, (unsigned __int16 **)&v125) >= 0 )
      InbvDisplayString((__int64)(v125 + 4), v111, v112, v113);
    IopInitializeBootLogging(BugCheckParameter3);
  }
  ExpWatchProductTypeInitialization();
  *(_DWORD *)(MmWriteableSharedUserData + 736) = -1;
  BootApplicationPersistentDataProcess(0);
  ExpMicrocodeInitialization(2LL);
  if ( ExpFreeListCount > (unsigned int)KeMaximumProcessors )
    ExpFreeListCount = KeMaximumProcessors;
  LODWORD(v123) = 0;
  ExpOriginalImageVersion = 0;
  if ( (int)ExpGetOriginalImageVersionRegistryValue(&v123) >= 0 )
    ExpOriginalImageVersion = (int)v123;
  v114 = ExpComputeCyclesPerYield();
  v115 = InitIsWinPEMode == 0;
  *(_WORD *)(MmWriteableSharedUserData + 726) = v114;
  if ( !v115 )
    CreateMiniNtBootKey();
  SymCryptEntropyAccumulatorGlobalInitFromRegistry();
  v116 = SeCodeIntegrityInitializePolicy(BugCheckParameter3);
  if ( v116 < 0 )
    KeBugCheckEx(0x32u, v116, 0x69436553uLL, 0LL, 0LL);
  KdpTimeSlipPending = 0;
  qword_140EFA6F8 = (__int64)&ExBootDeviceList;
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
  KeWaitForSingleObject(&stru_140E2FEA8, Executive, 0, 0, 0LL);
  return v124;
}
