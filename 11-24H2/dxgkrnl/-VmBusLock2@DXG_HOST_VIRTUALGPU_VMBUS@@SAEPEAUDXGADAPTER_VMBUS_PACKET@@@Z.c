/*
 * XREFs of ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140365980
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_LOCK2@@@@YAPEAUDXGKVMB_COMMAND_LOCK2@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140059C3C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_LOCK2@@@@YAPEAUDXGKVMB_COMMAND_LOCK2@@PEAUDXGADAPTER_VMBU.c)
 *     DxgkLock2 @ 0x1402A3430 (DxgkLock2.c)
 *     DxgkLock @ 0x140365AD0 (DxgkLock.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusLock2(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v4; // rax
  __int64 v5; // rdi
  struct DXGDEVICE *v6; // rcx
  int v7; // ecx
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  struct VMBPACKETCOMPLETION__ *v11; // rcx
  _DWORD v12[2]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v13; // [rsp+60h] [rbp-1h]
  _BYTE v14[24]; // [rsp+68h] [rbp+7h] BYREF
  __int128 v15; // [rsp+80h] [rbp+1Fh] BYREF
  __int128 v16; // [rsp+90h] [rbp+2Fh]
  __int128 v17; // [rsp+A0h] [rbp+3Fh]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v14,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_LOCK2>((__int64)a1);
    v5 = v4;
    if ( v4 )
    {
      v12[1] = 0;
      v6 = (struct DXGDEVICE *)(v4 + 24);
      if ( *(_BYTE *)(v4 + 48) )
      {
        v9 = *(_DWORD *)(v4 + 28);
        v15 = 0LL;
        DWORD1(v15) = v9;
        LODWORD(v15) = *(_DWORD *)v6;
        v10 = *(_DWORD *)(v5 + 52);
        v17 = 0LL;
        LODWORD(v17) = v10;
        DWORD2(v15) = *(_DWORD *)(v5 + 56);
        v16 = 0LL;
        v7 = DxgkLock(&v15);
        v8 = *((_QWORD *)&v16 + 1);
      }
      else
      {
        v7 = DxgkLock2(v6);
        v8 = *(_QWORD *)(v5 + 40);
      }
      v12[0] = v7;
      v11 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
      v13 = v8;
      VmBusCompletePacket(v11, v12, 0x10u);
      v2 = 1;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
    return v2;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2053;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      2053LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
    return 0;
  }
}
