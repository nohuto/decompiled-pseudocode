/*
 * XREFs of AMLIInitialize @ 0x1400C4F80
 * Callers:
 *     ACPIInitializeAMLI @ 0x1400C4A38 (ACPIInitializeAMLI.c)
 * Callees:
 *     HeapAlloc @ 0x140008CA0 (HeapAlloc.c)
 *     CreateNameSpaceObject @ 0x140009050 (CreateNameSpaceObject.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     InitMutex @ 0x14004E58C (InitMutex.c)
 *     InitializeNativeNamespace @ 0x1400547F0 (InitializeNativeNamespace.c)
 *     AMLIDebugger @ 0x1400564EC (AMLIDebugger.c)
 *     AMLIAddNamespaceOverride @ 0x14006C0C4 (AMLIAddNamespaceOverride.c)
 *     SetLogSize @ 0x14006E6BC (SetLogSize.c)
 *     NewGlobalHeap @ 0x14006E9E8 (NewGlobalHeap.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     memset @ 0x140070F40 (memset.c)
 *     OSReadRegValue @ 0x1400B6898 (OSReadRegValue.c)
 *     AMLIGetEmOverride @ 0x1400C55F0 (AMLIGetEmOverride.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1400C8494 (InitIllegalIOAddressListFromHAL.c)
 */

__int64 __fastcall AMLIInitialize(__int64 a1, int a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // r14
  unsigned int v6; // ebx
  int v8; // edi
  unsigned int NameSpaceObject; // ebx
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // edi
  __int64 *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rbx
  void *v16; // rax
  __int64 v17; // rbx
  void *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  int v23; // [rsp+80h] [rbp+40h] BYREF
  int v24; // [rsp+90h] [rbp+50h]
  unsigned int v25; // [rsp+98h] [rbp+58h] BYREF

  v25 = a4;
  v5 = E820Info;
  v6 = AMLIMaxCTObjs;
  v8 = gAMLIInitFlags;
  v23 = 0;
  v24 = 0;
  dword_140089138 = 0;
  pszDest[0] = 0;
  gAmliMethodCounter = 0LL;
  AMLIGetEmOverride();
  if ( gpnsNameSpaceRoot )
  {
    NameSpaceObject = -1072431085;
    LogError(-1072431085);
    AcpiDiagTraceAmlError(0LL, -1072431085);
    v10 = 66;
LABEL_3:
    PrintDebugMessage(v10, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
    LODWORD(gdwGlobalHeapBlkSize) = a2;
    MemoryInfo = v5;
    LODWORD(gdwCtxtBlkSize) = 2048;
    gdwfAMLIInit = v8;
    if ( (v8 & 8) != 0 )
      gdwfAMLI |= 4u;
    v11 = 1024;
    if ( v6 <= 0x400 )
    {
      v11 = v6;
      if ( v6 <= 0x10 )
        v11 = 16;
    }
    gdwcCTObjsMax = v11;
    _InterlockedOr(&gDebugger, 0x8000u);
    SetLogSize();
    KeInitializeSpinLock(&gdwGHeapSpinLock);
    KeInitializeSpinLock(&gdwGContextSpinLock);
    if ( (gdwfAMLIInit & 8) != 0
      || (gdwfAMLIInit & 0x10) == 0
      && (int)EmClientQueryRuleState(&GUID_EM_RULE_AMLI_MULTITHREADED_EXECUTION, &v23) >= 0
      && v23 == 2 )
    {
      gdwfAMLI |= 4u;
    }
    ExInitializeNPagedLookasideList(
      &AMLIContextLookAsideList,
      0LL,
      0LL,
      0x200u,
      (unsigned int)gdwCtxtBlkSize,
      0x436C6D41u,
      gdwcCTObjsMax);
    NameSpaceObject = NewGlobalHeap(&gpheapGlobal);
    if ( !NameSpaceObject )
    {
      a5 = 0LL;
      *(_QWORD *)(gpheapGlobal + 16) = gpheapGlobal;
      NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, (__int64)"\\", 0LL, 0LL, 0LL, 0);
      if ( !NameSpaceObject )
      {
        v12 = 0;
        v13 = (__int64 *)apszDefinedRootObjs;
        while ( 1 )
        {
          NameSpaceObject = CreateNameSpaceObject(
                              gpheapGlobal,
                              *v13,
                              0LL,
                              0LL,
                              &AmliGlobalPreDefinedRootObjects[v12],
                              0);
          if ( NameSpaceObject )
            break;
          ++v12;
          ++v13;
          if ( v12 >= 5 )
          {
            NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, (__int64)"_REV", 0LL, 0LL, &a5, 0);
            if ( !NameSpaceObject )
            {
              v14 = a5;
              *(_WORD *)(a5 + 66) = 1;
              *(_QWORD *)(v14 + 80) = (gOverrideFlags & 2) != 0 ? 1LL : (gOverrideFlags & 0x10 | 0x20uLL) >> 4;
              NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, (__int64)"_OS", 0LL, 0LL, &a5, 0);
              if ( !NameSpaceObject )
              {
                v15 = a5;
                *(_WORD *)(a5 + 66) = 2;
                *(_DWORD *)(v15 + 88) = 21;
                v16 = (void *)HeapAlloc(gpheapGlobal, 1381258056, 0x15u);
                *(_QWORD *)(v15 + 96) = v16;
                if ( !v16 )
                {
                  NameSpaceObject = -1073741670;
                  LogError(-1073741670);
                  AcpiDiagTraceAmlError(0LL, -1073741670);
                  v10 = 68;
                  goto LABEL_3;
                }
                memmove(v16, "Microsoft Windows NT", *(unsigned int *)(v15 + 88));
                NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, (__int64)"_OSI", 0LL, 0LL, &a5, 0);
                if ( !NameSpaceObject )
                {
                  v17 = a5;
                  *(_WORD *)(a5 + 66) = 8;
                  *(_DWORD *)(v17 + 88) = 202;
                  v18 = (void *)HeapAlloc(gpheapGlobal, 1381258056, 0xCAu);
                  *(_QWORD *)(v17 + 96) = v18;
                  if ( !v18 )
                  {
                    NameSpaceObject = -1073741670;
                    LogError(-1073741670);
                    AcpiDiagTraceAmlError(0LL, -1073741670);
                    v10 = 69;
                    goto LABEL_3;
                  }
                  memset(v18, 0, *(unsigned int *)(v17 + 88));
                  *(_BYTE *)(*(_QWORD *)(v17 + 96) + 193LL) |= 1u;
                  v19 = *(_QWORD *)(v17 + 96);
                  *(_WORD *)(v19 + 194) = OSIAML;
                  *(_BYTE *)(v19 + 196) = 104;
                  NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, (__int64)"_GL", 0LL, 0LL, &a5, 0);
                  if ( !NameSpaceObject )
                  {
                    v20 = a5;
                    *(_WORD *)(a5 + 64) = 2;
                    NameSpaceObject = InitMutex(0LL, gpheapGlobal, v20, 0, 1);
                    if ( !NameSpaceObject )
                    {
                      NameSpaceObject = InitializeNativeNamespace();
                      if ( !NameSpaceObject )
                      {
                        AMLIAddNamespaceOverride();
                        KeInitializeSpinLock(&SpinLock);
                        NewIrql = 0;
                        qword_140088F88 = (__int64)DispatchCtxtQueue;
                        qword_140088F78 = 0LL;
                        qword_140088F90 = (__int64)&gReadyQueue;
                        qword_140088FA8 = (__int64)&qword_140088FA0;
                        qword_140088FA0 = (__int64)&qword_140088FA0;
                        qword_140088F60 = (__int64)&qword_140088F58;
                        qword_140088F58 = (__int64)&qword_140088F58;
                        KeInitializeSpinLock(&gmutCtxtList);
                        byte_140088E10 = 0;
                        KeInitializeSpinLock(&gmutOwnerList);
                        byte_140088F38 = 0;
                        KeInitializeSpinLock(&gmutHeap);
                        byte_140088F48 = 0;
                        KeInitializeSpinLock(&gmutSleep);
                        byte_140088F20 = 0;
                        v24 = 9;
                        ExAllocateTimerInternal2((PEX_RUNDOWN_REF)SleepQueueDpc);
                        SleepTimer = v21;
                        qword_140088F10 = (__int64)&SleepQueue;
                        SleepQueue = (__int64)&SleepQueue;
                        qword_140089AA8 = (__int64)&RunningContextListHead;
                        RunningContextListHead = (__int64)&RunningContextListHead;
                        InitIllegalIOAddressListFromHAL();
                        v25 = 4;
                        AmliWatchdogEnabled = 1;
                        if ( (unsigned int)OSReadRegValue("AmliWatchdogTimeout", 0LL, &AmliWatchdogTimeout, &v25)
                          || v25 != 4 )
                        {
                          AmliWatchdogTimeout = 30;
                        }
                        if ( AmliWatchdogTimeout )
                        {
                          if ( (unsigned int)AmliWatchdogTimeout < 0xF )
                            AmliWatchdogTimeout = 15;
                        }
                        else
                        {
                          AmliWatchdogEnabled = 0;
                        }
                        if ( (unsigned int)OSReadRegValue("AmliWatchdogAction", 0LL, &AmliWatchdogAction, &v25)
                          || v25 != 4 )
                        {
                          AmliWatchdogAction = 0;
                        }
                        _InterlockedExchange(&dword_140089BC0, 0);
                        AcpiRecordBlackboxWorkItem.WorkerRoutine = (void (__fastcall *)(void *))AcpiRecordBlackboxInformationWorker;
                        NameSpaceObject = 0;
                        AcpiRecordBlackboxWorkItem.Parameter = 0LL;
                        AcpiRecordBlackboxWorkItem.List.Flink = 0LL;
                        goto LABEL_45;
                      }
                    }
                  }
                }
              }
            }
            break;
          }
        }
      }
    }
    if ( NameSpaceObject == 32772 )
      NameSpaceObject = 259;
  }
LABEL_45:
  if ( (gdwfAMLIInit & 1) != 0 )
  {
    PrintDebugMessage(0x43u, 0LL, 0LL, 0LL, 0LL);
    AMLIDebugger();
  }
  return NameSpaceObject;
}
