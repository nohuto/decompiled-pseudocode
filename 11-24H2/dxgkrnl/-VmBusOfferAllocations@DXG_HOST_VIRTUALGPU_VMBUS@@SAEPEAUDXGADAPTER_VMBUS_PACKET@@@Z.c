/*
 * XREFs of ?VmBusOfferAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140224F10
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140050D90 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     DxgkOfferAllocations @ 0x14029B100 (DxgkOfferAllocations.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusOfferAllocations(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  _BYTE v7[24]; // [rsp+50h] [rbp+17h] BYREF
  __int128 v8; // [rsp+68h] [rbp+2Fh] BYREF
  __int128 v9; // [rsp+78h] [rbp+3Fh]
  __int64 v10; // [rsp+88h] [rbp+4Fh]
  int v11; // [rsp+A0h] [rbp+67h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v7,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
    if ( v4 )
    {
      v11 = -1073741811;
      v8 = 0LL;
      v10 = 0LL;
      v9 = 0LL;
      v5 = *(unsigned int *)(v4 + 28);
      if ( (_DWORD)v5
        && (v6 = ((unsigned __int64)*((unsigned int *)a1 + 36) - 44) % v5,
            ((unsigned __int64)*((unsigned int *)a1 + 36) - 44) / v5 >= 4) )
      {
        LODWORD(v8) = *(_DWORD *)(v4 + 24);
        LODWORD(v10) = *(_DWORD *)(v4 + 36);
        *((_QWORD *)&v9 + 1) = *(_QWORD *)(v4 + 28);
        if ( *(_BYTE *)(v4 + 40) )
          *((_QWORD *)&v8 + 1) = v4 + 44;
        else
          *(_QWORD *)&v9 = v4 + 44;
        v11 = DxgkOfferAllocations(&v8, v6);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1604;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Invalid packet size", 1604LL, 0LL, 0LL, 0LL, 0LL);
      }
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v11, 4u);
      v2 = 1;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7);
    return v2;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1594;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      1594LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7);
    return 0;
  }
}
