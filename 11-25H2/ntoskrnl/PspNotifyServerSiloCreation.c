/*
 * XREFs of PspNotifyServerSiloCreation @ 0x140769A58
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407632B0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PspAcquirePushLockShared @ 0x1404F2B18 (PspAcquirePushLockShared.c)
 *     PspReleasePushLockShared @ 0x1404F54D4 (PspReleasePushLockShared.c)
 *     PspGetServerSiloStatePointer @ 0x1404F8B40 (PspGetServerSiloStatePointer.c)
 *     PspGetNextMonitor @ 0x14076996C (PspGetNextMonitor.c)
 *     PspInvokeCreateCallback @ 0x140769994 (PspInvokeCreateCallback.c)
 *     EtwTraceJobServerSiloStateChange @ 0x14079A208 (EtwTraceJobServerSiloStateChange.c)
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
