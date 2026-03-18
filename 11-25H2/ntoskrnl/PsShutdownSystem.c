/*
 * XREFs of PsShutdownSystem @ 0x140768C94
 * Callers:
 *     PopGracefulShutdown @ 0x140B4BB18 (PopGracefulShutdown.c)
 * Callees:
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14041D30C (ExfAcquireReleasePushLockExclusive.c)
 *     ObFastReplaceObject @ 0x14044FAEC (ObFastReplaceObject.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     PsTerminateServerSilo @ 0x140762A00 (PsTerminateServerSilo.c)
 *     PspWaitForUsermodeExit @ 0x14076941C (PspWaitForUsermodeExit.c)
 *     MiUnmapViewOfSection @ 0x1408B4494 (MiUnmapViewOfSection.c)
 *     PspGetNextSilo @ 0x1408DC664 (PspGetNextSilo.c)
 *     PsEnumProcesses @ 0x1408DECE4 (PsEnumProcesses.c)
 *     PsGetNextProcess @ 0x1408DF760 (PsGetNextProcess.c)
 *     PsTerminateProcess @ 0x14091F3D4 (PsTerminateProcess.c)
 *     EtwUnregister @ 0x140A01CC0 (EtwUnregister.c)
 */

__int64 PsShutdownSystem()
{
  unsigned int v0; // r12d
  _DWORD **ServerSiloGlobals; // r15
  __int64 v3; // rdx
  __int64 i; // rcx
  __int64 NextSilo; // rax
  __int64 v6; // rbx
  unsigned int v7; // esi
  __int64 v8; // rdi
  _DWORD *NextProcess; // rbx
  int v10; // eax
  int v11; // ecx
  NTSTATUS v12; // r14d
  PVOID *v13; // rbx
  __int64 v14; // rbp
  _DWORD *v15; // rcx
  __int64 **v16; // rbx
  __int64 v17; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  void *v23; // r14
  void *UserWaitTime; // rcx
  REGHANDLE v25; // rcx
  signed __int32 v26[8]; // [rsp+0h] [rbp-88h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-48h] BYREF
  PVOID Object[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v29; // [rsp+58h] [rbp-30h]

  Timeout.QuadPart = -1000000000LL;
  *(_OWORD *)Object = 0LL;
  v29 = 0LL;
  v0 = 1;
  ServerSiloGlobals = (_DWORD **)PsGetServerSiloGlobals(0LL);
  if ( _InterlockedCompareExchange64(&PspShutdownThread, (signed __int64)KeGetCurrentThread(), 0LL) )
    return 0LL;
  if ( PsIsCurrentThreadInServerSilo() )
    NT_ASSERT("PsIsCurrentThreadInServerSilo() == 0");
  for ( i = 0LL; ; i = v6 )
  {
    LOBYTE(v3) = 1;
    NextSilo = PspGetNextSilo(i, v3);
    v6 = NextSilo;
    if ( !NextSilo )
      break;
    PsTerminateServerSilo(NextSilo);
  }
  PsEnumProcesses(PspFreezeProcessWorker, 0LL);
  v7 = 0;
  do
  {
    while ( 1 )
    {
      v8 = 0LL;
      NextProcess = (_DWORD *)PsGetNextProcess(0LL);
      if ( NextProcess )
      {
        do
        {
          v10 = NextProcess[383];
          if ( (v10 & 0x1000) == 0
            && NextProcess != PsIdleProcess
            && NextProcess != ServerSiloGlobals[106]
            && (v10 & 0x40000000) == 0 )
          {
            v11 = PsTerminateProcess(NextProcess, 3221226219LL);
            if ( (NextProcess[125] & 4) == 0 && v11 != 290 && (unsigned int)v8 < 3 )
            {
              PsReferenceSiloContext(NextProcess);
              Object[v8] = NextProcess;
              v8 = (unsigned int)(v8 + 1);
            }
          }
          NextProcess = (_DWORD *)PsGetNextProcess(NextProcess);
        }
        while ( NextProcess );
        if ( (_DWORD)v8 )
        {
          v12 = KeWaitForMultipleObjects(v8, Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
          v13 = Object;
          v14 = (unsigned int)v8;
          do
          {
            ObfDereferenceObject(*v13++);
            --v14;
          }
          while ( v14 );
          if ( v12 == 258 )
            break;
        }
      }
      v7 = 0;
      if ( !(_DWORD)v8 )
        goto LABEL_26;
    }
    ++v7;
  }
  while ( v7 <= 0xA || PsContinueWaiting );
  v0 = 0;
LABEL_26:
  if ( PopShutdownCleanly )
  {
    v15 = ServerSiloGlobals[106];
    if ( v15 )
    {
      PsTerminateProcess(v15, 3221226219LL);
      PspWaitForUsermodeExit(ServerSiloGlobals[106]);
    }
  }
  v16 = (__int64 **)PspSystemDlls;
  v17 = 6LL;
  do
  {
    if ( *v16 )
    {
      if ( (*v16)[4] )
        MiUnmapViewOfSection(PsInitialSystemProcess);
      CurrentThread = KeGetCurrentThread();
      v19 = **v16;
      v23 = (void *)ObFastReplaceObject((volatile __int64 *)v19, 0LL);
      if ( v23 )
      {
        --CurrentThread->KernelApcDisable;
        _InterlockedOr(v26, 0);
        if ( (*(_QWORD *)(v19 + 8) & 1) != 0 )
          ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v19 + 8));
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v20, v21, v22);
        ObfDereferenceObject(v23);
      }
    }
    ++v16;
    --v17;
  }
  while ( v17 );
  ZwClose(*((HANDLE *)PspSystemPartition + 16));
  *((_QWORD *)PspSystemPartition + 16) = 0LL;
  UserWaitTime = (void *)PsInitialSystemProcess[1].UserWaitTime;
  if ( (unsigned __int64)UserWaitTime >= 2 )
  {
    ObfDereferenceObject(UserWaitTime);
    PsInitialSystemProcess[1].UserWaitTime = 1LL;
  }
  v25 = qword_140E08500;
  qword_140E08500 = 0LL;
  dword_140E084E0 = 0;
  EtwUnregister(v25);
  return v0;
}
