/*
 * XREFs of TtmpDispatchSetDefaultDeviceAssignment @ 0x14076B8F4
 * Callers:
 *     TtmDispatchApi @ 0x140903408 (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x14076B2E4 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogSessionDeviceAssignmentPolicySet @ 0x14076DD3C (TtmiLogSessionDeviceAssignmentPolicySet.c)
 *     TtmiLogError @ 0x140903A9C (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchSetDefaultDeviceAssignment(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  Object = 0LL;
  v2 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 1, 0, &v6, &Object);
  v3 = v6;
  v4 = v2;
  if ( v2 >= 0 )
  {
    *(_DWORD *)(v6 + 4) = *(_DWORD *)(v6 + 4) & 0xFFFFF7FF | ((*(_BYTE *)(a1 + 16) != 0) << 11);
    TtmiLogSessionDeviceAssignmentPolicySet();
    v4 = 0;
  }
  else
  {
    TtmiLogError("TtmpDispatchSetDefaultDeviceAssignment", 702LL, (unsigned int)v2, (unsigned int)v2);
  }
  if ( v3 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v4;
}
