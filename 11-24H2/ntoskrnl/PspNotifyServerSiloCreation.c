/*
 * XREFs of PspNotifyServerSiloCreation @ 0x140779808
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140772EA0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PspAcquirePushLockShared @ 0x1404F2D1C (PspAcquirePushLockShared.c)
 *     PspReleasePushLockShared @ 0x1404F51E0 (PspReleasePushLockShared.c)
 *     PspGetServerSiloStatePointer @ 0x1404F8AA0 (PspGetServerSiloStatePointer.c)
 *     PspGetNextMonitor @ 0x14077971C (PspGetNextMonitor.c)
 *     PspInvokeCreateCallback @ 0x140779744 (PspInvokeCreateCallback.c)
 *     EtwTraceJobServerSiloStateChange @ 0x1407A9718 (EtwTraceJobServerSiloStateChange.c)
 */

__int64 __fastcall PspNotifyServerSiloCreation(__int64 a1)
{
  unsigned int v1; // ebx
  char v3; // si
  _DWORD *ServerSiloStatePointer; // r14
  __int64 *NextMonitor; // rdi

  v1 = 0;
  v3 = 0;
  ServerSiloStatePointer = (_DWORD *)PspGetServerSiloStatePointer(a1);
  PspAcquirePushLockShared();
  if ( *ServerSiloStatePointer )
    __fastfail(5u);
  NextMonitor = PspGetNextMonitor(0LL);
  if ( !NextMonitor )
    goto LABEL_10;
  do
  {
    if ( NextMonitor[3] && (int)PspInvokeCreateCallback(a1, (__int64)NextMonitor) < 0 )
      v3 = 1;
    NextMonitor = PspGetNextMonitor((__int64 **)NextMonitor);
  }
  while ( NextMonitor );
  if ( v3 )
  {
    v1 = -1073741248;
  }
  else
  {
LABEL_10:
    *ServerSiloStatePointer = 1;
    EtwTraceJobServerSiloStateChange(a1);
  }
  PspReleasePushLockShared();
  return v1;
}
