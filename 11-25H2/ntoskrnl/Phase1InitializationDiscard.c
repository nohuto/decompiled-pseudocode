/*
 * XREFs of Phase1InitializationDiscard @ 0x140BFB048
 * Callers:
 *     Phase1Initialization @ 0x1406F0AF0 (Phase1Initialization.c)
 * Callees:
 *     KeSetAffinityProcess @ 0x140269780 (KeSetAffinityProcess.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KeSetPriorityThread @ 0x1403778B0 (KeSetPriorityThread.c)
 *     KeSetSystemTime @ 0x140417A68 (KeSetSystemTime.c)
 *     RtlpTimeToTimeFields @ 0x14042E040 (RtlpTimeToTimeFields.c)
 *     RtlpTimeFieldsToTime @ 0x14042E5F8 (RtlpTimeFieldsToTime.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyA @ 0x140458D18 (RtlStringCbCopyA.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140460B30 (ExInitializeNPagedLookasideListInternal.c)
 *     RtlInitAnsiString @ 0x14046B2E0 (RtlInitAnsiString.c)
 *     FsRtlSendModernAppTermination @ 0x140495500 (FsRtlSendModernAppTermination.c)
 *     PoNotifySystemTimeSet @ 0x1404CA36C (PoNotifySystemTimeSet.c)
 *     KeBugCheck @ 0x1404F9260 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _strupr @ 0x1404FAA90 (_strupr.c)
 *     strtoul @ 0x1404FAF68 (strtoul.c)
 *     _strtoui64 @ 0x1404FB200 (_strtoui64.c)
 *     strstr @ 0x1404FB230 (strstr.c)
 *     atol @ 0x1404FB480 (atol.c)
 *     DisplayBootBitmap @ 0x14053747C (DisplayBootBitmap.c)
 *     MakeGdtReadOnly @ 0x140537698 (MakeGdtReadOnly.c)
 *     RtlStringCbPrintfA @ 0x140537888 (RtlStringCbPrintfA.c)
 *     RtlStringCbPrintfExA @ 0x1405378D4 (RtlStringCbPrintfExA.c)
 *     HvlDebuggerSupportInitialize @ 0x14057EC70 (HvlDebuggerSupportInitialize.c)
 *     InbvDisplayString @ 0x14058BBA0 (InbvDisplayString.c)
 *     KiCommitGroupSubNodeAssignments @ 0x1405B7434 (KiCommitGroupSubNodeAssignments.c)
 *     UcInitialize @ 0x1406890D8 (UcInitialize.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x14069DD40 (ZwQueryLicenseValue.c)
 *     ZwSetSystemTime @ 0x14069E900 (ZwSetSystemTime.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     strncmp @ 0x1406B4820 (strncmp.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IopInitializeBootLogging @ 0x140706328 (IopInitializeBootLogging.c)
 *     AlpcpInitSystem @ 0x14073629C (AlpcpInitSystem.c)
 *     RtlInitFunctionalityCache @ 0x14076DC08 (RtlInitFunctionalityCache.c)
 *     EtwTimeProfileReset @ 0x14079A1DC (EtwTimeProfileReset.c)
 *     ExInitializeLeapSecondData @ 0x1407A6790 (ExInitializeLeapSecondData.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1407A697C (ExInitializeUtcTimeZoneBias.c)
 *     ExIsMultiSessionSku @ 0x1407A8688 (ExIsMultiSessionSku.c)
 *     ExInitLicenseCallback @ 0x1407A8C64 (ExInitLicenseCallback.c)
 *     ExpGetOriginalImageVersionRegistryValue @ 0x1407B6138 (ExpGetOriginalImageVersionRegistryValue.c)
 *     ExpRefreshTimeZoneInformation @ 0x140993940 (ExpRefreshTimeZoneInformation.c)
 *     ExpWriteTimeZoneBias @ 0x1409942B0 (ExpWriteTimeZoneBias.c)
 *     RtlFindMessage @ 0x1409AE2A0 (RtlFindMessage.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x1409CCD20 (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x1409CCD84 (ExReleaseTimeRefreshLockExclusive.c)
 *     ExInitializePagedLookasideList @ 0x140A90BD0 (ExInitializePagedLookasideList.c)
 *     HalInitSystem @ 0x140B3B6C0 (HalInitSystem.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     KdInitSystem @ 0x140B65E30 (KdInitSystem.c)
 *     BgDisplayBackgroundUpdate @ 0x140BA05EC (BgDisplayBackgroundUpdate.c)
 *     BgDisplayProgressIndicator @ 0x140BA0628 (BgDisplayProgressIndicator.c)
 *     BgGetDisplayContext @ 0x140BA06F4 (BgGetDisplayContext.c)
 *     MmInitSystem @ 0x140BCD2E8 (MmInitSystem.c)
 *     BootApplicationPersistentDataProcess @ 0x140BCD52C (BootApplicationPersistentDataProcess.c)
 *     PsInitSystem @ 0x140BCD7F8 (PsInitSystem.c)
 *     VmInitSystem @ 0x140BCD898 (VmInitSystem.c)
 *     CreateMiniNtBootKey @ 0x140BF9220 (CreateMiniNtBootKey.c)
 *     CreateSystemRootLink @ 0x140BF93F8 (CreateSystemRootLink.c)
 *     ExpComputeCyclesPerYield @ 0x140BF9900 (ExpComputeCyclesPerYield.c)
 *     GetBootSystemTime @ 0x140BF9A8C (GetBootSystemTime.c)
 *     MfgInitSystem @ 0x140BFACB0 (MfgInitSystem.c)
 *     HalAllProcessorsStarted @ 0x140BFC6B0 (HalAllProcessorsStarted.c)
 *     HalReportResourceUsage @ 0x140BFC6E0 (HalReportResourceUsage.c)
 *     CcInitializeCacheManager @ 0x140C049F8 (CcInitializeCacheManager.c)
 *     DbgkInitialize @ 0x140C04FD4 (DbgkInitialize.c)
 *     FsRtlInitSystem @ 0x140C07CDC (FsRtlInitSystem.c)
 *     InbvDriverInitialize @ 0x140C09150 (InbvDriverInitialize.c)
 *     IoCreateObjectTypes @ 0x140C09584 (IoCreateObjectTypes.c)
 *     PpInitSystem @ 0x140C11678 (PpInitSystem.c)
 *     KeStartAllProcessors @ 0x140C15CC8 (KeStartAllProcessors.c)
 *     KiPerformGroupConfiguration @ 0x140C17CD0 (KiPerformGroupConfiguration.c)
 *     PfInitializeSuperfetch @ 0x140C1B81C (PfInitializeSuperfetch.c)
 *     PsInitializeBootCpuPartitions @ 0x140C235D0 (PsInitializeBootCpuPartitions.c)
 *     SeCodeIntegrityInitializePolicy @ 0x140C28834 (SeCodeIntegrityInitializePolicy.c)
 *     SeInitSystem @ 0x140C289B0 (SeInitSystem.c)
 *     VerifierInitSystem @ 0x140C29ED8 (VerifierInitSystem.c)
 *     ExInitializeTimeRefresh @ 0x140C2F2B0 (ExInitializeTimeRefresh.c)
 *     ExInitSystem @ 0x140C2F428 (ExInitSystem.c)
 *     ExpWatchProductTypeInitialization @ 0x140C303BC (ExpWatchProductTypeInitialization.c)
 *     CmInitSystem1 @ 0x140C33C44 (CmInitSystem1.c)
 *     BcdInitializeBcdSyncMutant @ 0x140C4B4E0 (BcdInitializeBcdSyncMutant.c)
 *     KeInitializeClock @ 0x140C4ECE8 (KeInitializeClock.c)
 *     EmInitSystem @ 0x140C4F21C (EmInitSystem.c)
 *     KeInitSystem @ 0x140C4FA10 (KeInitSystem.c)
 *     ObInitSystem @ 0x140C4FF98 (ObInitSystem.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 *     SmInitSystem @ 0x140C54CC4 (SmInitSystem.c)
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
  NTSTATUS Message; // eax
  NTSTRSAFE_PSTR v30; // rbx
  int v31; // r15d
  NTSTATUS v32; // eax
  size_t v33; // r14
  char *v34; // rbx
  NTSTATUS v35; // eax
  NTSTATUS v36; // eax
  NTSTATUS v37; // eax
  ULONG_PTR v38; // r10
  _OWORD *v39; // rax
  char *v40; // rcx
  __int64 v41; // rdx
  __int128 v42; // xmm1
  int Flink_high; // eax
  char *v44; // rax
  char *v45; // rax
  __int16 v46; // bx
  LARGE_INTEGER v47; // rax
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  char *v49; // rax
  char *v50; // rax
  char *v51; // rax
  char *v52; // rax
  char *v53; // rax
  char *v54; // rax
  char *v55; // rax
  char *v56; // rax
  char *v57; // rax
  char *v58; // rax
  const CHAR *v59; // rbx
  ULONG v60; // r9d
  NTSTATUS v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rbx
  _QWORD *v64; // rcx
  NTSTATUS v65; // eax
  __int64 v66; // r8
  __int64 v67; // r9
  int inited; // eax
  int v69; // eax
  int SystemRootLink; // eax
  __int64 v71; // r8
  int v72; // eax
  __int128 *DisplayContext; // rax
  ULONG_PTR v74; // rbx
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  int v79; // ebx
  __int64 v85; // r9
  char *v86; // rax
  const char *v87; // rbx
  int v88; // eax
  int v89; // ecx
  ULONG v90; // r9d
  __int16 v91; // ax
  bool v92; // zf
  int v93; // eax
  PMESSAGE_RESOURCE_ENTRY *MessageEntry; // [rsp+20h] [rbp-E0h]
  int pszFormat; // [rsp+28h] [rbp-D8h]
  char v97; // [rsp+40h] [rbp-C0h] BYREF
  char v98; // [rsp+41h] [rbp-BFh]
  LARGE_INTEGER v99; // [rsp+48h] [rbp-B8h] BYREF
  PMESSAGE_RESOURCE_ENTRY v100; // [rsp+50h] [rbp-B0h] BYREF
  int v101; // [rsp+58h] [rbp-A8h]
  PMESSAGE_RESOURCE_ENTRY v102; // [rsp+60h] [rbp-A0h] BYREF
  ULONG ResultDataSize; // [rsp+68h] [rbp-98h] BYREF
  ULONG Type; // [rsp+6Ch] [rbp-94h] BYREF
  char *EndPtr; // [rsp+70h] [rbp-90h] BYREF
  LARGE_INTEGER CurrentSystemTime; // [rsp+78h] [rbp-88h] BYREF
  int Buffer; // [rsp+80h] [rbp-80h] BYREF
  size_t pcbRemaining; // [rsp+88h] [rbp-78h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+90h] [rbp-70h] BYREF
  __int64 v110; // [rsp+98h] [rbp-68h] BYREF
  __int128 v111; // [rsp+A0h] [rbp-60h] BYREF
  STRING v112; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v114[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 (__fastcall *v115)(__int64, int, int); // [rsp+D8h] [rbp-28h]
  __int64 (__fastcall *v116)(__int64); // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v117)(__int64); // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall *v118)(int, int, int, __int64, __int64); // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v119)(int, __int64, __int64); // [rsp+F8h] [rbp-8h]
  char (__fastcall *v120)(unsigned int *); // [rsp+100h] [rbp+0h]
  __int64 (__fastcall *v121)(_QWORD *, int, int, int); // [rsp+108h] [rbp+8h]
  __int64 (__fastcall *v122)(ULONG_PTR); // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v123)(int, int *); // [rsp+118h] [rbp+18h]
  __int128 v124; // [rsp+120h] [rbp+20h]
  __int128 v125; // [rsp+130h] [rbp+30h]
  __int64 v126; // [rsp+140h] [rbp+40h]
  char pszDest[24]; // [rsp+150h] [rbp+50h] BYREF

  v99.QuadPart = 0LL;
  CurrentSystemTime.QuadPart = 0LL;
  v110 = 0LL;
  v102 = 0LL;
  v100 = 0LL;
  v112 = 0LL;
  LOBYTE(v101) = 0;
  v111 = 0LL;
  Buffer = 0;
  ResultDataSize = 0;
  Type = 0;
  DestinationString = 0LL;
  v114[1] = 0;
  memset_0(v114, 0, 0x74uLL);
  Blink = PsGetCurrentServerSiloGlobals()[76].Blink;
  Pool2 = (char *)ExAllocatePool2(0x40uLL, 0x200uLL, 0x74696E49uLL);
  if ( !Pool2 )
    KeBugCheck(0x31u);
  CurrentThread = KeGetCurrentThread();
  v98 = 0;
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
          if ( !qword_140FCBC48[v22] )
          {
            v23 = ExAllocatePool2(0x40uLL, 0x100uLL, 0x800uLL);
            if ( !v23 )
              KeBugCheck(0x31u);
            KeRootProcNumaNodeLps[v22] = 2048LL;
            qword_140FCBC48[v22] = v23;
          }
          if ( v21 < 0x20 )
            *(_QWORD *)(qword_140FCBC48[v22] + 8LL * v21) = strtoui64(v16, &EndPtr, 16);
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
  word_140E66488 = 0;
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
  byte_140E65AF8 = 0;
  if ( byte_140E65B48 )
  {
    if ( byte_140E65B52 && (int)BgDisplayProgressIndicator(1) >= 0 )
      byte_140E65B51 = 1;
    if ( byte_140E65B48 && byte_140E65B52 && (int)BgDisplayBackgroundUpdate(1) >= 0 )
      byte_140E65B21 = 1;
  }
  qword_140E65AF0 = (__int64)DisplayFilter;
  InbvDriverInitialize(1LL, BugCheckParameter3, 7LL);
  DisplayBootBitmap(0LL, v28);
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
  Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x4000007Eu, &v102);
  v30 = Pool2;
  ppszDestEnd = Pool2;
  v31 = Message;
  pcbRemaining = 256LL;
  if ( CmCSDVersionString.Length )
  {
    v32 = RtlStringCbPrintfExA(Pool2, 0xFFuLL, &ppszDestEnd, &pcbRemaining, 0, ": %wZ");
    if ( v32 < 0 )
      KeBugCheckEx(0x32u, v32, 7uLL, 0LL, 0LL);
    v30 = ppszDestEnd;
    v33 = pcbRemaining;
  }
  else
  {
    v33 = 255LL;
    pcbRemaining = 255LL;
  }
  *v30 = 0;
  v34 = v30 + 1;
  ppszDestEnd = v34;
  v35 = RtlStringCbPrintfA(pszDest, 0x18uLL, "%u.%u", 10, 0);
  if ( v35 < 0 )
    KeBugCheckEx(0x32u, v35, 7uLL, 1uLL, 0LL);
  if ( v31 < 0 )
  {
    v37 = RtlStringCbCopyA(v34, v33, "MICROSOFT (R) WINDOWS (TM)\n");
    if ( v37 < 0 )
      KeBugCheckEx(0x32u, v37, 7uLL, 3uLL, v38);
  }
  else
  {
    pszFormat = (int)Pool2;
    LODWORD(MessageEntry) = (unsigned __int16)NtBuildNumber;
    v36 = RtlStringCbPrintfA(v34, v33, (NTSTRSAFE_PCSTR)v102->Text, pszDest, MessageEntry);
    if ( v36 < 0 )
      KeBugCheckEx(0x32u, v36, 7uLL, 2uLL, 0LL);
  }
  InbvDisplayString((__int64)v34);
  v39 = Pool2 + 256;
  v40 = Pool2;
  v41 = 2LL;
  do
  {
    *v39 = *(_OWORD *)v40;
    v39[1] = *((_OWORD *)v40 + 1);
    v39[2] = *((_OWORD *)v40 + 2);
    v39[3] = *((_OWORD *)v40 + 3);
    v39[4] = *((_OWORD *)v40 + 4);
    v39[5] = *((_OWORD *)v40 + 5);
    v39[6] = *((_OWORD *)v40 + 6);
    v39 += 8;
    v42 = *((_OWORD *)v40 + 7);
    v40 += 128;
    *(v39 - 1) = v42;
    --v41;
  }
  while ( v41 );
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
      v98 = 1;
    }
    Blink[27].Blink = (struct _LIST_ENTRY *)(600000000LL * Flink_high);
    *(_DWORD *)(MmWriteableSharedUserData + 604) = 0;
    ExpWriteTimeZoneBias(&Blink[27].Blink);
  }
  GetBootSystemTime(*(__int64 **)(BugCheckParameter3 + 240), (ULONGLONG *)&v99.QuadPart);
  if ( v7 )
  {
    v44 = strstr(v7, "YEAR");
    if ( v44 )
    {
      v45 = strstr(v44, "=");
      if ( v45 )
      {
        v46 = atol(v45 + 1);
        RtlpTimeToTimeFields((__int64 *)&v99, &v111);
        LOWORD(v111) = v46;
        RtlpTimeFieldsToTime((__int64)&v111, (__int64 *)&v99);
      }
    }
  }
  if ( ExpRealTimeIsUniversal )
    v47 = v99;
  else
    v47.QuadPart = v99.QuadPart - (unsigned __int64)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink;
  CurrentSystemTime = v47;
  KeSetSystemTime((__int64)&v99, (__int64)&v110, 4);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  PoNotifySystemTimeSet(
    (__int64 *)&v99,
    &v110,
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
    v49 = strstr(v7, " BOOTPROC=");
    if ( v49 )
    {
      v50 = strstr(v49, "=");
      if ( v50 )
        KeBootprocSpecified = atol(v50 + 1);
    }
    v51 = strstr(v7, " NUMPROC=");
    if ( v51 )
    {
      v52 = strstr(v51, "=");
      if ( v52 )
        KeNumprocSpecified = atol(v52 + 1);
    }
    v53 = strstr(v7, " HYPERVISORNUMPROC=");
    if ( v53 )
    {
      v54 = strstr(v53, "=");
      if ( v54 )
        KeHypervisorNumprocSpecified = atol(v54 + 1);
    }
    if ( !KeRootProcNumaNodeLpsSpecified )
    {
      v55 = strstr(v7, " HYPERVISORROOTPROCPERNODE=");
      if ( v55 )
      {
        v56 = strstr(v55, "=");
        if ( v56 )
          KeRootProcPerNodeSpecified = atol(v56 + 1);
      }
      v57 = strstr(v7, " HYPERVISORROOTPROCPERCORE=");
      if ( v57 )
      {
        v58 = strstr(v57, "=");
        if ( v58 )
          KeRootProcPerCoreSpecified = atol(v58 + 1);
      }
    }
    if ( strstr(v7, " MAXPROC") )
      KeMaxprocSpecified = 1;
  }
  qword_1410077C8 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeStartAllProcessors();
  qword_1410077D0 = KeQueryPerformanceCounter(0LL).QuadPart;
  EtwTimeProfileReset();
  KeSetAffinityProcess(KeGetCurrentThread()->ApcState.Process, 0, &KeActiveProcessors);
  MakeGdtReadOnly();
  v59 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000089u, &v100) < 0
      ? "MultiProcessor Kernel\r\n"
      : (const CHAR *)v100->Text;
  if ( !(unsigned __int8)HalAllProcessorsStarted() )
LABEL_220:
    KeBugCheck(0x61u);
  RtlInitAnsiString(&v112, v59);
  if ( v112.Length >= 2u )
    v112.Length -= 2;
  v60 = 1073741981;
  if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    v60 = 1073741960;
  v61 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v60, &v102);
  v62 = 0LL;
  v63 = *(unsigned int *)MmPhysicalMemoryBlock;
  if ( (_DWORD)v63 )
  {
    v64 = (char *)MmPhysicalMemoryBlock + 24;
    do
    {
      v62 += *v64;
      v64 += 2;
      --v63;
    }
    while ( v63 );
  }
  if ( v61 < 0 )
    v65 = RtlStringCbPrintfA(
            Pool2,
            0x100uLL,
            "%u System Processor [%u MB Memory] %Z\n",
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v62 + 255) >> 8,
            &v112);
  else
    v65 = RtlStringCbPrintfA(
            Pool2,
            0x100uLL,
            (NTSTRSAFE_PCSTR)v102->Text,
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v62 + 255) >> 8,
            &v112);
  if ( v65 < 0 )
    KeBugCheckEx(0x32u, v65, 7uLL, 4uLL, 0LL);
  InbvDisplayString((__int64)Pool2);
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
  if ( !KdInitSystem(InitializationPhase, 0LL, v66, v67) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 3uLL, 0LL);
  inited = TmInitSystem(
             &TmResourceManagerObjectType,
             &TmEnlistmentObjectType,
             &TmTransactionManagerObjectType,
             &TmTransactionObjectType);
  if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  v69 = DbgkInitialize();
  if ( v69 < 0 )
    KeBugCheckEx(0x32u, v69, 0LL, 0LL, 0LL);
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
  MmInitSystem(1LL, BugCheckParameter3, v71);
  qword_1410077F0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned __int8)CcInitializeCacheManager(1LL) )
    KeBugCheck(0x66u);
  if ( !(unsigned __int8)CmInitSystem1(BugCheckParameter3) )
    KeBugCheck(0x67u);
  PsInitializeBootCpuPartitions();
  v72 = ExInitializeLeapSecondData();
  if ( v72 < 0 )
    KeBugCheckEx(0x32u, v72, 0xCuLL, 0LL, 0LL);
  v97 = 0;
  if ( (int)ExIsMultiSessionSku(&v97) >= 0 && v97 )
    *(_DWORD *)(MmWriteableSharedUserData + 752) |= 0x100u;
  if ( RtlpMultiUsersInSessionSupported )
    *(_DWORD *)(MmWriteableSharedUserData + 752) |= 0x200u;
  if ( CmStateSeparationEnabled )
    *(_DWORD *)(MmWriteableSharedUserData + 752) |= 0x400u;
  qword_1410077B8 = KeQueryPerformanceCounter(0LL).QuadPart;
  memset_0(v114, 0, 0x78uLL);
  v115 = MmMapLockedRestartPages;
  v116 = MmUnmapLockedRestartPages;
  v117 = KeRemoveEnclavePage;
  v118 = KdPullRemoteFileEx;
  v119 = CmSaveKeyToBuffer;
  v120 = KeIsBugCheckActive;
  v121 = CmOpenKeyForBugCheckRecovery;
  v122 = MiPageToNode;
  v123 = MmGetNextNode;
  v114[0] = 120;
  if ( VslVsmEnabled )
  {
    VslpIumKsrInitContext = (__int64)VslpKsrEnterIumSecureMode;
    qword_141007738 = (__int64)VslpRegisterKsrCallback;
  }
  DisplayContext = BgGetDisplayContext();
  v74 = (int)KsrInitSystem(BugCheckParameter3, v114, DisplayContext);
  qword_1410077C0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)(v74 + 0x80000000) >= 0 && (_DWORD)v74 != -1073741637 )
    KeBugCheckEx(0x32u, v74, 0LL, 1uLL, 0LL);
  ExKsrInterface = v124;
  qword_140EFE760 = v126;
  xmmword_140EFE750 = v125;
  v75 = EmInitSystem(0LL, BugCheckParameter3);
  if ( v75 < 0 )
    KeBugCheckEx(0x32u, v75, 8uLL, 0LL, 0LL);
  v76 = MfgInitSystem(BugCheckParameter3);
  if ( v76 < 0 )
    KeBugCheckEx(0x32u, v76, 9uLL, 0LL, 0LL);
  PfInitializeSuperfetch();
  v77 = SmInitSystem(0LL);
  if ( v77 < 0 )
    KeBugCheckEx(0x32u, v77, 0xBuLL, 0LL, 0LL);
  v78 = VmInitSystem(1);
  if ( v78 < 0 )
    KeBugCheckEx(0x32u, v78, 0xAuLL, 0LL, 0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter3 + 240) + 2656LL) & 2) == 0 || strstr(v7, "FORCETIMESYNC") )
    ZwUpdateWnfStateData(&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( (HvlpFlags & 0x2000000) != 0 )
    ZwUpdateWnfStateData(&WNF_HVL_CPU_MGMT_PARTITION, 0LL, 0, 0LL, 0LL, 0, 0);
  FsRtlSendModernAppTermination(&Buffer, 1u, 1);
  ExInitializeTimeRefresh();
  ExAcquireTimeRefreshLockExclusive();
  ExInitializeUtcTimeZoneBias(&CurrentSystemTime);
  v79 = HIDWORD(Blink[27].Flink);
  ExpRefreshTimeZoneInformation(0);
  ExReleaseTimeRefreshLockExclusive();
  if ( v98 )
  {
    v99.QuadPart = (LONGLONG)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink + CurrentSystemTime.QuadPart;
    KeSetSystemTime((__int64)&v99, (__int64)&v110, 4);
  }
  else if ( v79 != HIDWORD(Blink[27].Flink) )
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
  KdInitialize(1LL, BugCheckParameter3, &KdpContext, v85);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x90u);
  if ( v7 )
  {
    v86 = strstr(v7, "SAFEBOOT:");
    if ( v86 )
    {
      v87 = v86 + 9;
      if ( !strncmp(v86 + 9, "MINIMAL", 7uLL) )
      {
        InitSafeBootMode = 1;
      }
      else
      {
        if ( strncmp(v87, "NETWORK", 7uLL) )
        {
          if ( !strncmp(v87, "DSREPAIR", 8uLL) )
          {
            v87 += 8;
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
      v87 += 7;
LABEL_192:
      if ( *v87 )
      {
        v88 = strncmp(v87, "(ALTERNATESHELL)", 0x10uLL);
        v89 = (unsigned __int8)v101;
        if ( !v88 )
          v89 = 1;
        v101 = v89;
      }
      if ( InitSafeBootMode )
      {
        v100 = 0LL;
        v90 = 0;
        switch ( InitSafeBootMode )
        {
          case 1:
            v90 = 168;
            break;
          case 2:
            v90 = 169;
            break;
          case 3:
            v90 = 170;
            break;
        }
        if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v90, &v100) >= 0 )
          InbvDisplayString((__int64)v100->Text);
      }
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 240) + 132LL) & 0x800) != 0 )
  {
    if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0xB7u, &v102) >= 0 )
      InbvDisplayString((__int64)v102->Text);
    IopInitializeBootLogging(BugCheckParameter3, (__int64)(Pool2 + 256));
  }
  ExpWatchProductTypeInitialization();
  *(_DWORD *)(MmWriteableSharedUserData + 736) = -1;
  BootApplicationPersistentDataProcess(0);
  ExpMicrocodeInitialization(2LL);
  if ( ExpFreeListCount > (unsigned int)KeMaximumProcessors )
    ExpFreeListCount = KeMaximumProcessors;
  LODWORD(v100) = 0;
  ExpOriginalImageVersion = 0;
  if ( (int)ExpGetOriginalImageVersionRegistryValue(&v100) >= 0 )
    ExpOriginalImageVersion = (int)v100;
  v91 = ExpComputeCyclesPerYield();
  v92 = InitIsWinPEMode == 0;
  *(_WORD *)(MmWriteableSharedUserData + 726) = v91;
  if ( !v92 )
    CreateMiniNtBootKey();
  SymCryptEntropyAccumulatorGlobalInitFromRegistry();
  v93 = SeCodeIntegrityInitializePolicy(BugCheckParameter3);
  if ( v93 < 0 )
    KeBugCheckEx(0x32u, v93, 0x69436553uLL, 0LL, 0LL);
  KdpTimeSlipPending = 0;
  qword_140EFA3C8 = (__int64)&ExBootDeviceList;
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
  KeWaitForSingleObject(&stru_140E2FC68, Executive, 0, 0, 0LL);
  return v101;
}
