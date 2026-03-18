/*
 * XREFs of TtmpDispatchCreateTerminal @ 0x14076B5F8
 * Callers:
 *     TtmDispatchApi @ 0x140903408 (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x14076B2E4 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCreateTerminal @ 0x14076F4E8 (TtmiCreateTerminal.c)
 *     TtmiLogError @ 0x140903A9C (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchCreateTerminal(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // r8d
  unsigned int v6; // ebx
  __int64 v7; // rdi
  int v8; // edx
  int Terminal; // eax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  Object = 0LL;
  v4 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 16), 1, 0, &v11, &Object);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v8 = *(_DWORD *)(a1 + 8);
    v7 = v11;
    LOBYTE(v5) = KeGetCurrentThread()->PreviousMode;
    Terminal = TtmiCreateTerminal(v11, v8, v5, a2, (PVOID)(a2 + 8), 0LL);
    v6 = Terminal;
    if ( Terminal >= 0 )
      v6 = 0;
    else
      TtmiLogError("TtmpDispatchCreateTerminal", 239LL, (unsigned int)Terminal, (unsigned int)Terminal);
  }
  else
  {
    TtmiLogError("TtmpDispatchCreateTerminal", 227LL, (unsigned int)v4, (unsigned int)v4);
    v7 = v11;
  }
  if ( v7 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v6;
}
