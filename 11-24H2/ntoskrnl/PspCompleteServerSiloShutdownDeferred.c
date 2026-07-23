/*
 * XREFs of PspCompleteServerSiloShutdownDeferred @ 0x140772820
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PsGetServerSiloState @ 0x1403C377C (PsGetServerSiloState.c)
 *     PspSendJobNotification @ 0x14048E6FC (PspSendJobNotification.c)
 *     PspAcquirePushLockShared @ 0x1404F2D1C (PspAcquirePushLockShared.c)
 *     PspReleasePushLockShared @ 0x1404F51E0 (PspReleasePushLockShared.c)
 *     PspGetServerSiloStatePointer @ 0x1404F8AA0 (PspGetServerSiloStatePointer.c)
 *     PspDeleteExternalServerSiloState @ 0x140772B48 (PspDeleteExternalServerSiloState.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1407738D8 (PspTerminateSiloSubsystemProcesses.c)
 *     PspGetNextMonitor @ 0x14077971C (PspGetNextMonitor.c)
 *     PspInvokeTerminateCallback @ 0x1407797A8 (PspInvokeTerminateCallback.c)
 *     EtwTraceJobServerSiloStateChange @ 0x1407A9718 (EtwTraceJobServerSiloStateChange.c)
 *     PspUnlockJob @ 0x14085EB90 (PspUnlockJob.c)
 *     PspLockJobShared @ 0x14085EE04 (PspLockJobShared.c)
 */

LONG_PTR __fastcall PspCompleteServerSiloShutdownDeferred(_QWORD *Object)
{
  void *ServerSiloGlobals; // rsi
  __int64 v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  _DWORD *ServerSiloStatePointer; // r14
  __int64 i; // rcx
  __int64 NextMonitor; // rax
  __int64 v9; // rdi
  void *v10; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  int v12; // esi

  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)Object);
  if ( (unsigned int)PsGetServerSiloState(v3) != 3 )
    NT_ASSERT("PsGetServerSiloState(Silo) == SERVERSILO_TERMINATING");
  PspTerminateSiloSubsystemProcesses();
  v4 = (void *)*((_QWORD *)ServerSiloGlobals + 106);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *((_QWORD *)ServerSiloGlobals + 106) = 0LL;
  }
  v5 = (void *)*((_QWORD *)ServerSiloGlobals + 107);
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *((_QWORD *)ServerSiloGlobals + 107) = 0LL;
  }
  ServerSiloStatePointer = (_DWORD *)PspGetServerSiloStatePointer((__int64)Object);
  PspAcquirePushLockShared();
  if ( *ServerSiloStatePointer != 3 )
    __fastfail(5u);
  for ( i = 0LL; ; i = v9 )
  {
    NextMonitor = PspGetNextMonitor(i);
    v9 = NextMonitor;
    if ( !NextMonitor )
      break;
    if ( *(_QWORD *)(NextMonitor + 32) )
      PspInvokeTerminateCallback(Object, NextMonitor);
  }
  *ServerSiloStatePointer = 4;
  EtwTraceJobServerSiloStateChange(Object);
  PspReleasePushLockShared();
  PspDeleteExternalServerSiloState(Object);
  v10 = (void *)*((_QWORD *)ServerSiloGlobals + 105);
  if ( v10 )
  {
    ObfDereferenceObject(v10);
    *((_QWORD *)ServerSiloGlobals + 105) = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v12 = *((_DWORD *)ServerSiloGlobals + 319);
  PspLockJobShared(Object, CurrentThread);
  if ( Object[69] && (Object[138] & 0x2000) != 0 )
    PspSendJobNotification((__int64)Object, 13LL, v12, 0);
  PspUnlockJob(Object, CurrentThread);
  return ObfDereferenceObject(Object);
}
