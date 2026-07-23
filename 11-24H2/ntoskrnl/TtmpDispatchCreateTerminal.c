/*
 * XREFs of TtmpDispatchCreateTerminal @ 0x14076B818
 * Callers:
 *     TtmDispatchApi @ 0x14099D9B8 (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x14076B504 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCreateTerminal @ 0x14076F708 (TtmiCreateTerminal.c)
 *     TtmiLogError @ 0x14099E04C (TtmiLogError.c)
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
