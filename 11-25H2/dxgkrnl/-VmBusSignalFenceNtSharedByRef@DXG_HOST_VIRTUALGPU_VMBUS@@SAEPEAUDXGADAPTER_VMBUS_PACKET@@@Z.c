/*
 * XREFs of ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140347810
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051B58 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x140217C90 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x140347AF0 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x140348180 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1403482BC (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSignalFenceNtSharedByRef(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdx
  char v2; // bl
  __int64 v5; // rsi
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // r8
  int v9; // ecx
  DXGSYNCOBJECT **v10; // r14
  __int64 v11; // [rsp+20h] [rbp-68h]
  _BYTE v12[24]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v13[24]; // [rsp+68h] [rbp-20h] BYREF
  int v14; // [rsp+90h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 10);
  v2 = 0;
  if ( *(_BYTE *)(v1 + 155) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4145;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Presentation is disabled", 4145LL, 0LL, 0LL, 0LL, 0LL);
    return 0;
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, (struct _KTHREAD **)(v1 + 248), 0);
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v12);
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4149;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      4149LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
    return 0;
  }
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( v5 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
      (DXGHANDLETABLELOCKSHARED *)v13,
      *((struct DXGPROCESS **)a1 + 12));
    v6 = *((_QWORD *)a1 + 12);
    v7 = (*(_DWORD *)(v5 + 24) >> 6) & 0xFFFFFF;
    if ( v7 < *(_DWORD *)(v6 + 296) )
    {
      v8 = *(_QWORD *)(v6 + 280);
      if ( ((*(_DWORD *)(v5 + 24) >> 25) & 0x60) == (*(_BYTE *)(v8 + 16LL * v7 + 8) & 0x60)
        && (*(_DWORD *)(v8 + 16LL * v7 + 8) & 0x2000) == 0 )
      {
        v9 = *(_DWORD *)(v8 + 16LL * v7 + 8) & 0x1F;
        if ( v9 )
        {
          if ( v9 == 13 )
          {
            v10 = *(DXGSYNCOBJECT ***)(v8 + 16LL * v7);
            if ( v10 && (*(_DWORD *)v10 == 11 || *(_DWORD *)v10 == 8) )
            {
              DXGSHAREDVMOBJECT::AddReference((DXGSHAREDVMOBJECT *)v10);
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
              v14 = DxgkSignalSynchronizationObjectFromGpuByReference(v10[1]);
              DXGSHAREDVMOBJECT::ReleaseReference((DXGSHAREDVMOBJECT *)v10);
              goto LABEL_14;
            }
          }
          else
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
    }
    WdLogSingleEntry1(2LL, *(unsigned int *)(v5 + 24));
    v11 = *(unsigned int *)(v5 + 24);
    WdLogGlobalForLineNumber = 4164;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid shared object handle: 0x%I64x",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
    v14 = -1073741811;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
LABEL_14:
    if ( v14 < 0 )
      HandleAsyncCommandError(a1, v14, *(_DWORD *)(v5 + 28), 1);
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v14, 4u);
    v2 = 1;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
  return v2;
}
