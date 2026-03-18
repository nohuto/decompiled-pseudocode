/*
 * XREFs of TtmpDispatchAssignDevice @ 0x14076B410
 * Callers:
 *     TtmDispatchApi @ 0x140903408 (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     TtmiAssignDevice @ 0x1407687DC (TtmiAssignDevice.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x14076B2E4 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x140903A9C (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchAssignDevice(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  Object = 0LL;
  v2 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 1, 1, &v6, &Object);
  v3 = v2;
  if ( v2 >= 0 )
    v3 = TtmiAssignDevice(v6, (__int64)Object, *(_DWORD *)(a1 + 16));
  else
    TtmiLogError("TtmpDispatchAssignDevice", 779LL, (unsigned int)v2, (unsigned int)v2);
  if ( v6 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v3;
}
