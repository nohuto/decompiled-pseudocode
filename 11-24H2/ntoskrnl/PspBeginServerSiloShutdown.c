/*
 * XREFs of PspBeginServerSiloShutdown @ 0x14085A824
 * Callers:
 *     PspTerminateProcessesJobCallback @ 0x14085BEE0 (PspTerminateProcessesJobCallback.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PspAcquirePushLockShared @ 0x1404F2D1C (PspAcquirePushLockShared.c)
 *     PspReleasePushLockShared @ 0x1404F51E0 (PspReleasePushLockShared.c)
 *     PspGetServerSiloStatePointer @ 0x1404F8AA0 (PspGetServerSiloStatePointer.c)
 *     EtwTraceJobServerSiloStateChange @ 0x1407A9718 (EtwTraceJobServerSiloStateChange.c)
 */

char __fastcall PspBeginServerSiloShutdown(__int64 a1, int a2)
{
  _DWORD *ServerSiloGlobals; // rbp
  __int64 v5; // rcx
  volatile signed __int32 *ServerSiloStatePointer; // rdi
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  char v9; // bl

  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  ServerSiloStatePointer = (volatile signed __int32 *)PspGetServerSiloStatePointer(v5);
  PspAcquirePushLockShared();
  v7 = *ServerSiloStatePointer;
  while ( v7 < 3 )
  {
    v8 = v7;
    v7 = _InterlockedCompareExchange(ServerSiloStatePointer, 3, v7);
    if ( v8 == v7 )
    {
      EtwTraceJobServerSiloStateChange(a1, 3);
      v9 = 1;
      goto LABEL_6;
    }
  }
  v9 = 0;
LABEL_6:
  PspReleasePushLockShared();
  if ( v9 )
    ServerSiloGlobals[319] = a2;
  return v9;
}
