/*
 * XREFs of KdInitSystem @ 0x140B75E30
 * Callers:
 *     KdEnableDebuggerWithLock @ 0x1405AFA7C (KdEnableDebuggerWithLock.c)
 *     KeEnterKernelDebugger @ 0x1405B2830 (KeEnterKernelDebugger.c)
 *     KiSystemStartup @ 0x140B4B3A0 (KiSystemStartup.c)
 *     KiSetFeatureBits @ 0x140B59BF4 (KiSetFeatureBits.c)
 *     PopHiberCheckResume @ 0x140B6E970 (PopHiberCheckResume.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KdPollBreakIn @ 0x14029CFB0 (KdPollBreakIn.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     KeInitializeTimer @ 0x140455420 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x140455470 (KeInitializeDpc.c)
 *     KeIsKernelCetEnabled @ 0x1404566A0 (KeIsKernelCetEnabled.c)
 *     RtlInitAnsiString @ 0x1404654C0 (RtlInitAnsiString.c)
 *     DbgLoadImageSymbols @ 0x1404A4130 (DbgLoadImageSymbols.c)
 *     __report_rangecheckfailure @ 0x1404F51BC (__report_rangecheckfailure.c)
 *     MmGetPagedPoolCommitPointer @ 0x1404F8998 (MmGetPagedPoolCommitPointer.c)
 *     _strupr @ 0x1404FD210 (_strupr.c)
 *     strstr @ 0x1404FD9B0 (strstr.c)
 *     atol @ 0x1404FDC00 (atol.c)
 *     KdDisableDebuggerWithLock @ 0x1405AF918 (KdDisableDebuggerWithLock.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     strncmp @ 0x1406BFB20 (strncmp.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     KdRegisterDebuggerDataBlock @ 0x140B76578 (KdRegisterDebuggerDataBlock.c)
 */

char __fastcall KdInitSystem(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // r12
  char v6; // r15
  char v7; // r14
  __int64 v8; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v10; // rcx
  char *v11; // rsi
  char v12; // bp
  char *v13; // rax
  unsigned int v14; // eax
  const char *v15; // rdi
  unsigned __int64 v16; // rax
  char v17; // dl
  const char *i; // rcx
  const char *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // rax
  unsigned int v26; // esi
  __int64 *v27; // rdi
  __int64 v28; // rdx
  char *v29; // r9
  unsigned int v30; // r8d
  char v31; // al
  __int64 v32; // rcx
  unsigned int j; // edi
  ULONG_PTR Pool2; // rax
  signed __int32 v36[8]; // [rsp+0h] [rbp-178h] BYREF
  STRING DestinationString; // [rsp+20h] [rbp-158h] BYREF
  char SourceString[256]; // [rsp+30h] [rbp-148h] BYREF

  v5 = 0;
  v6 = 0;
  if ( a1 == -1 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a2 + 240) + 132LL) & 8) != 0 )
      __debugbreak();
    return 1;
  }
  if ( !a1 )
  {
    if ( (_BYTE)KdDebuggerEnabled )
      goto LABEL_65;
    KdpDebugRoutineSelect = 0;
    KdBreakAfterSymbolLoad = 0;
    if ( !KdPitchDebugger || (v7 = 1, !KdLocalDebugEnabled) )
      v7 = 0;
    if ( KdDebugDevice && *(_DWORD *)(KdDebugDevice + 236) == 3 )
      KdTransportMaxPacketSize = 1152;
    if ( !KdpDebuggerDataListHead )
    {
      *((_QWORD *)&KdpContext + 1) = KdDebugDevice;
      qword_140E011B0 = (__int64)MmGetPagedPoolCommitPointer();
      KdpPowerSpinLock = 0LL;
      qword_140F58EE8 = (__int64)&KdpPowerListHead;
      KdpPowerListHead = (__int64)&KdpPowerListHead;
      qword_140F58EC8 = (__int64)&KdpDebuggerDataListHead;
      KdpDebuggerDataListHead = (__int64)&KdpDebuggerDataListHead;
      KdRegisterDebuggerDataBlock(v8, &KdDebuggerDataBlock);
      WORD1(KdVersionBlock) = NtBuildNumber;
      LOWORD(KdVersionBlock) = (unsigned int)NtBuildNumber >> 28;
      qword_140E0A9C0 = (__int64)&KdpDebuggerDataListHead;
      WORD3(KdVersionBlock) |= 1u;
      *((_QWORD *)&xmmword_140E0A9B0 + 1) = &PsLoadedModuleList;
      *(_WORD *)((char *)&KdVersionBlock + 11) = 13059;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( !CurrentPrcb->Context )
    {
      CurrentPrcb->ContextFlagsInit = 1048587;
      CurrentPrcb->Context = &CurrentPrcb->ProcessorState.ContextFrame;
    }
    if ( a2 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 48LL);
      off_140E01318 = &KdpLoaderDebuggerBlock;
      KdpLoaderDebuggerBlock = a2 + 16;
      v11 = *(char **)(a2 + 216);
      *(_QWORD *)&xmmword_140E0A9B0 = v10;
      if ( v11 )
      {
        strupr(v11);
        KdPrintBufferAllocateSize = 0;
        v12 = 0;
        v13 = strstr(v11, "DBGPRINT_LOG_SIZE=");
        *(_QWORD *)&DestinationString.Length = v13;
        if ( v13 )
        {
          v14 = (atol(v13 + 18) + 4095) & 0xFFFFF000;
          KdPrintBufferAllocateSize = v14;
          if ( v14 <= 0x1000000 )
          {
            if ( v14 <= 0x1000 )
              KdPrintBufferAllocateSize = 0;
          }
          else
          {
            KdPrintBufferAllocateSize = 0x1000000;
          }
        }
        *(_QWORD *)&DestinationString.Length = strstr(v11, "NODEBUG");
        if ( *(_QWORD *)&DestinationString.Length )
        {
          KdPitchDebugger = 1;
          KdPageDebuggerSection = 1;
          KdpBootedNodebug = 1;
        }
        else
        {
          *(_QWORD *)&DestinationString.Length = strstr(v11, "DEBUGPORT=LOCAL");
          if ( *(_QWORD *)&DestinationString.Length )
          {
            KdPitchDebugger = 1;
            v7 = 1;
            KdPageDebuggerSection = 1;
            LOBYTE(KdDebuggerNotPresent) = 1;
            KdLocalDebugEnabled = 1;
            KdpBootedNodebug = 0;
          }
          else
          {
            v15 = v11;
            do
            {
              v16 = (unsigned __int64)strstr(v15, " DEBUG=");
              if ( !v16 )
              {
                v16 = (unsigned __int64)strstr(v15, " DEBUG");
                if ( !v16 )
                  break;
              }
              v17 = *(_BYTE *)(v16 + 6);
              if ( v17 == 61 || (v17 & 0xDF) == 0 )
              {
                KdpBootedNodebug = 0;
                v12 = 1;
                if ( *(_BYTE *)(v16 + 6) == 61 )
                {
                  for ( i = (const char *)(v16 + 7); ; i = v19 + 1 )
                  {
                    LOBYTE(v16) = *i;
                    v19 = i;
                    while ( (_BYTE)v16 )
                    {
                      if ( (unsigned __int8)v16 <= 0x2Cu )
                      {
                        v20 = 0x100100000200LL;
                        if ( _bittest64(&v20, v16) )
                          break;
                      }
                      LOBYTE(v16) = *++v19;
                    }
                    v16 = (unsigned int)((_DWORD)v19 - (_DWORD)i);
                    if ( (_DWORD)v19 == (_DWORD)i )
                      break;
                    switch ( (_DWORD)v16 )
                    {
                      case 0xA:
                        LODWORD(v16) = strncmp(i, "AUTOENABLE", 0xAuLL);
                        if ( !(_DWORD)v16 )
                        {
                          v5 = 1;
                          KdAutoEnableOnEvent = 1;
                          v6 = 0;
                        }
                        break;
                      case 7:
                        LODWORD(v16) = strncmp(i, "DISABLE", 7uLL);
                        if ( !(_DWORD)v16 )
                        {
                          v5 = 1;
                          KdAutoEnableOnEvent = 0;
                          v6 = 1;
                        }
                        break;
                      case 6:
                        LODWORD(v16) = strncmp(i, "NOUMEX", 6uLL);
                        if ( !(_DWORD)v16 )
                          KdIgnoreUmExceptions = 1;
                        break;
                    }
                    if ( *v19 != 44 )
                      break;
                  }
                }
                break;
              }
              v15 = (const char *)(v16 + 6);
            }
            while ( v16 != -6LL );
          }
        }
        if ( strstr(v11, "NOEVENT") )
        {
          KdEventLoggingEnabled = 0;
        }
        else if ( strstr(v11, "EVENT") )
        {
          KdEventLoggingEnabled = 1;
          v12 = 1;
          KdPageDebuggerSection = 0;
        }
        if ( strstr(v11, "DISABLE_NOUMEX_FIX") )
          KdDisableNoUmExBreakFix = 1;
      }
      else
      {
        KdPitchDebugger = 1;
        v12 = 0;
        KdPageDebuggerSection = 1;
      }
    }
    else
    {
      v12 = 1;
      *(_QWORD *)&xmmword_140E0A9B0 = PsNtosImageBase;
    }
    qword_140E01058 = xmmword_140E0A9B0;
    if ( !v7 )
    {
      if ( a2 && *(_DWORD *)(a2 + 12) < 2u || !v12 )
      {
        LOBYTE(KdDebuggerNotPresent) = 1;
        goto LABEL_65;
      }
      if ( (int)KdInitialize(0LL, a2, &KdpContext, a4) < 0 )
      {
        KdPitchDebugger = 0;
        v12 = 0;
        LOBYTE(KdDebuggerNotPresent) = 1;
        KdLocalDebugEnabled = 1;
      }
      else
      {
        KdpDebugRoutineSelect = 1;
      }
    }
    if ( !KdpDebuggerStructuresInitialized )
    {
      BYTE4(KdpContext) = 0;
      LODWORD(KdpContext) = 20;
      KeInitializeDpc(&KdpTimeSlipDpc, KdpTimeSlipDpcRoutine, 0LL);
      KeInitializeTimer(&KdpTimeSlipTimer);
      KdpTimeSlipWorkItem.Parameter = 0LL;
      KdpTimeSlipWorkItem.WorkerRoutine = (void (__fastcall *)(void *))KdpTimeSlipWork;
      KdpTimeSlipWorkItem.List.Flink = 0LL;
      KdpDebuggerStructuresInitialized = 1;
    }
    KdTimerStart = 0LL;
    if ( KdEventLoggingEnabled && KdpBootedNodebug )
    {
      KdPitchDebugger = 1;
      KdEventLoggingPresent = v12;
      LOBYTE(KdDebuggerNotPresent) = 1;
      KdLocalDebugEnabled = 0;
    }
    else
    {
      LOBYTE(KdDebuggerEnabled) = 1;
      *(_BYTE *)(MmWriteableSharedUserData + 724) = 1;
      if ( KdLocalDebugEnabled )
        goto LABEL_65;
    }
    if ( !KdEventLoggingEnabled || (_BYTE)KdDebuggerEnabled )
    {
      KdPitchDebugger = 0;
      if ( !v5 )
      {
        if ( !a2 )
        {
          DbgLoadImageSymbols(0LL, qword_140E01058, 0xFFFFFFFFLL);
          return 1;
        }
        if ( KeIsKernelCetEnabled() && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
        {
          LOBYTE(KeKernelCetWrssEnabledScenarios) = KeKernelCetWrssEnabledScenarios | 2;
          v23 = 1698LL;
          v25 = __readmsr(0x6A2u) | 2;
          v22 = HIDWORD(v25);
          __writemsr(0x6A2u, v25);
        }
        v26 = 0;
        v27 = *(__int64 **)(a2 + 16);
        while ( v27 != (__int64 *)(a2 + 16) && v26 < 3 )
        {
          DestinationString = 0LL;
          LODWORD(v28) = 0;
          v29 = (char *)v27[10];
          v30 = *((unsigned __int16 *)v27 + 36) >> 1;
          if ( v30 >= 0x100 )
            v30 = 255;
          do
          {
            v31 = *v29;
            v29 += 2;
            v32 = (unsigned int)v28;
            v28 = (unsigned int)(v28 + 1);
            SourceString[v32] = v31;
          }
          while ( (unsigned int)v28 < v30 );
          if ( (unsigned int)v28 >= 0x100uLL )
            _report_rangecheckfailure();
          SourceString[v28] = 0;
          RtlInitAnsiString(&DestinationString, SourceString);
          DbgLoadImageSymbols((__int64)&DestinationString, v27[6], 0xFFFFFFFFLL);
          v27 = (__int64 *)*v27;
          ++v26;
        }
        KdBreakAfterSymbolLoad = KdPollBreakIn(v23, v22, v24);
LABEL_66:
        v21 = *(_QWORD *)(a2 + 240);
        if ( v21 )
          memset((void *)(v21 + 2464), 0, 0x20uLL);
        return 1;
      }
      KdDisableDebuggerWithLock();
      KdBlockEnable = v6;
    }
LABEL_65:
    if ( !a2 )
      return 1;
    goto LABEL_66;
  }
  KeQueryPerformanceCounter(&KdPerformanceCounterRate);
  if ( !KdPitchDebugger )
  {
    for ( j = 0; j < (unsigned int)KeNumberProcessors_0; ++j )
    {
      Pool2 = ExAllocatePool2(0x40uLL, 0x1000uLL, 0x6F49644BuLL);
      if ( Pool2 )
      {
        _InterlockedOr(v36, 0);
        KdLogBuffer[j] = Pool2;
      }
    }
  }
  KdpLoaderDebuggerBlock = 0LL;
  return 1;
}
