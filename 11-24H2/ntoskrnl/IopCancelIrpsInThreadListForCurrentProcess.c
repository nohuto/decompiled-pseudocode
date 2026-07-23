/*
 * XREFs of IopCancelIrpsInThreadListForCurrentProcess @ 0x1408EEB98
 * Callers:
 *     IopCheckHandleForRevocation @ 0x140594270 (IopCheckHandleForRevocation.c)
 *     IopCancelIoFile @ 0x140A2974C (IopCancelIoFile.c)
 * Callees:
 *     IopCancelApcRequired @ 0x1402309F4 (IopCancelApcRequired.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsGetNextProcessThread @ 0x1408EEC70 (PsGetNextProcessThread.c)
 *     IopCancelIrpsInThreadList @ 0x1408EED94 (IopCancelIrpsInThreadList.c)
 */

__int64 __fastcall IopCancelIrpsInThreadListForCurrentProcess(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  _KPROCESS *Process; // rsi
  __int64 i; // rdx
  __int64 NextProcessThread; // rax
  __int64 v8; // rbx
  _BYTE v10[88]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v11; // [rsp+78h] [rbp-40h]
  __int64 v12; // [rsp+80h] [rbp-38h]
  struct _KEVENT Event; // [rsp+88h] [rbp-30h] BYREF
  char v14; // [rsp+A0h] [rbp-18h]

  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  memset_0(v10, 0, 0x88uLL);
  v11 = a1;
  v12 = a2;
  v14 = 0;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  for ( i = 0LL; ; i = v8 )
  {
    NextProcessThread = PsGetNextProcessThread(Process, i);
    v8 = NextProcessThread;
    if ( !NextProcessThread )
      break;
    if ( (unsigned int)IopCancelApcRequired(NextProcessThread, a1, a2) )
      v4 |= IopCancelIrpsInThreadList(v8, v10);
  }
  return v4;
}
