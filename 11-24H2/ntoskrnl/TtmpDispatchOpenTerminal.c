/*
 * XREFs of TtmpDispatchOpenTerminal @ 0x14076BA78
 * Callers:
 *     TtmDispatchApi @ 0x14099D9B8 (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     TtmiAcquireCurrentSession @ 0x140769FD0 (TtmiAcquireCurrentSession.c)
 *     TtmiOpenDefaultTerminal @ 0x14076FBE0 (TtmiOpenDefaultTerminal.c)
 *     TtmiLogError @ 0x14099E04C (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchOpenTerminal(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // r8
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0LL;
  v4 = TtmiAcquireCurrentSession((__int64)&v10);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v8 = a2;
    v7 = v10;
    LOBYTE(v5) = KeGetCurrentThread()->PreviousMode;
    v6 = TtmiOpenDefaultTerminal(v10, *(unsigned int *)(a1 + 8), v5, v8);
  }
  else
  {
    TtmiLogError("TtmpDispatchOpenTerminal", 154LL, (unsigned int)v4, (unsigned int)v4);
    v7 = v10;
  }
  if ( v7 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  return v6;
}
