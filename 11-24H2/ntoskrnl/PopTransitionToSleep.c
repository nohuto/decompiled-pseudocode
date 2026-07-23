/*
 * XREFs of PopTransitionToSleep @ 0x140B67570
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     PopDiagTraceEventNoPayload @ 0x1404874D4 (PopDiagTraceEventNoPayload.c)
 *     MmEmptyAllWorkingSets @ 0x14067A064 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x14067A0E8 (MmTrimFilePagesFromWorkingSets.c)
 *     MmFlushAllPagesEx @ 0x14067B574 (MmFlushAllPagesEx.c)
 *     PopEnlargeHiberFile @ 0x140750744 (PopEnlargeHiberFile.c)
 *     MmDuplicateMemory @ 0x140B64A68 (MmDuplicateMemory.c)
 *     PopInvokeSystemStateHandler @ 0x140B6766C (PopInvokeSystemStateHandler.c)
 */

LONG __fastcall PopTransitionToSleep(struct _KEVENT *a1)
{
  unsigned int Lock; // esi
  NTSTATUS v3; // eax
  LONG v4; // ebx
  int v6; // eax
  bool v7; // cl
  char v8; // r14
  char v9; // r15
  unsigned int v10; // r12d
  int v11; // eax
  __int128 v12; // [rsp+30h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h]
  __int64 v14; // [rsp+50h] [rbp-10h]
  bool v15; // [rsp+90h] [rbp+30h] BYREF

  Lock = a1[3].Header.Lock;
  v14 = 0LL;
  v15 = 0;
  v12 = 0LL;
  v13 = 0LL;
  qword_140F0BC60 = (__int64)KeGetCurrentThread();
  if ( Lock == 3 || Lock == 6 )
  {
    if ( (PopSimulateHiberBugcheck & 0x20) != 0 )
    {
      KeSetEvent(a1, 0, 1u);
      KeWaitForSingleObject(&a1[1], Executive, 0, 0, 0LL);
      v4 = 0;
      goto LABEL_5;
    }
    v6 = PopEnlargeHiberFile(&v15);
    v7 = v15;
    LODWORD(v14) = 16;
    *(_QWORD *)&v12 = xHalPciEarlyRestore;
    if ( v6 < 0 )
      v7 = 1;
    *((_QWORD *)&v13 + 1) = 0LL;
    v8 = 0;
    *((_QWORD *)&v12 + 1) = PopEndMirroring;
    v9 = 0;
    *(_QWORD *)&v13 = PopMirrorPhysicalMemory;
    v10 = 60;
    if ( v7 )
    {
      MmEmptyAllWorkingSets();
      v9 = 1;
      v11 = v14 | 1;
    }
    else if ( (dword_140F0B98C & 0x20) != 0 && PopEnableMinimalHiberFile || PopForceMinimalHiberFile )
    {
      MmEmptyAllWorkingSets();
      v9 = 1;
      v11 = v14 | 4;
    }
    else
    {
      if ( Lock == 6 )
      {
        MmTrimFilePagesFromWorkingSets();
        v11 = v14 | 1;
LABEL_20:
        LODWORD(v14) = v11;
        byte_140F0D31C = v8;
        byte_140F0D31D = v9;
        dword_140F0D318 = v11;
        PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHALLPAGES);
        if ( v8 )
          MmFlushAllPagesEx(v9, v10);
        PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHALLPAGES_END);
        PopHibernatePowerStateHandlerType = Lock;
        PopSleeperHandoff = a1;
        v3 = MmDuplicateMemory((__int64)&v12);
        PopSleeperHandoff = 0LL;
        PopHibernatePowerStateHandlerType = 7;
        goto LABEL_4;
      }
      v11 = 20;
      v10 = 8;
    }
    v8 = 1;
    goto LABEL_20;
  }
  KeSetEvent(a1, 0, 1u);
  KeWaitForSingleObject(&a1[1], Executive, 0, 0, 0LL);
  v3 = PopInvokeSystemStateHandler(Lock);
LABEL_4:
  v4 = v3;
LABEL_5:
  qword_140F0C0C8 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140F06C90;
  a1[3].Header.SignalState = v4;
  return KeSetEvent(a1 + 2, 0, 0);
}
