/*
 * XREFs of TtmpAcquireSessionFromTerminalHandle @ 0x14076B504
 * Callers:
 *     TtmpDispatchAssignDevice @ 0x14076B630 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x14076B6D8 (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x14076B818 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x14076B908 (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x14076BB14 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x14076BBD0 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x14076BC7C (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x14076BD30 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmpDispatchSetInputWakeCapability @ 0x14076BDEC (TtmpDispatchSetInputWakeCapability.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionLock @ 0x1406F53C8 (TtmpAcquireSessionLock.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     TtmiLogError @ 0x14099E04C (TtmiLogError.c)
 */

__int64 __fastcall TtmpAcquireSessionFromTerminalHandle(void *a1, char a2, char a3, _QWORD *a4, _QWORD *a5)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rdi
  KPROCESSOR_MODE PreviousMode; // r9
  struct _OBJECT_TYPE *v11; // r8
  NTSTATUS v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v17; // rbx
  __int64 v18; // rcx

  CurrentThread = KeGetCurrentThread();
  v7 = a5;
  *a4 = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  v11 = TtmpTerminalObjectType;
  *v7 = 0LL;
  a5 = 0LL;
  v12 = ObReferenceObjectByHandle(a1, 2u, v11, PreviousMode, (PVOID *)&a5, 0LL);
  v13 = v12;
  if ( v12 < 0 )
  {
    *v7 = 0LL;
    TtmiLogError("TtmiReferenceTerminalByHandle", 1008LL, (unsigned int)v12, (unsigned int)v12);
    v14 = v13;
    v15 = 88LL;
LABEL_3:
    TtmiLogError("TtmpAcquireSessionFromTerminalHandle", v15, v14, v13);
    return v13;
  }
  v17 = (__int64)a5;
  *v7 = a5;
  if ( *(_DWORD *)(v17 + 28) )
  {
    if ( !a3 )
    {
      v14 = 0xFFFFFFFFLL;
      v13 = -1073741788;
      v15 = 98LL;
      goto LABEL_3;
    }
  }
  else if ( !a2 )
  {
    v14 = 0xFFFFFFFFLL;
    v13 = -1073741788;
    v15 = 93LL;
    goto LABEL_3;
  }
  TtmpAcquireSessionLock();
  v18 = *(_QWORD *)(v17 + 16);
  if ( (*(_DWORD *)(v18 + 4) & 4) != 0 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
    v14 = 0xFFFFFFFFLL;
    v13 = -1073740715;
    v15 = 105LL;
    goto LABEL_3;
  }
  *a4 = v18;
  return 0LL;
}
