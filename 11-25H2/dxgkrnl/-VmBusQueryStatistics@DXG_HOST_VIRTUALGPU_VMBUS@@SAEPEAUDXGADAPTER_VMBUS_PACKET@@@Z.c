/*
 * XREFs of ?VmBusQueryStatistics@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140220840
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140013C98 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_QUERYSTATISTICS@@@@YAPEAUDXGKVMB_COMMAND_QUERYSTATISTICS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14007AAB8 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_QUERYSTATISTICS@@@@YAPEAUDXGKVMB_COMMAND_QUERYSTATISTICS@.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DxgkQueryStatisticsInternal @ 0x1402894D0 (DxgkQueryStatisticsInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryStatistics(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v4; // rax
  __int64 v5; // rsi
  int StatisticsInternal; // eax
  __int64 v7; // rcx
  _OWORD *v8; // rax
  _OWORD *v9; // rdx
  __int128 v10; // xmm1
  struct VMBPACKETCOMPLETION__ *v11; // rcx
  _BYTE v12[24]; // [rsp+50h] [rbp-338h] BYREF
  _DWORD v13[196]; // [rsp+68h] [rbp-320h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v12,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_QUERYSTATISTICS>((__int64)a1);
    v5 = v4;
    if ( v4 && !*(_QWORD *)(v4 + 40) )
    {
      *(_QWORD *)(v4 + 28) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL) + 412LL);
      memset(&v13[1], 0, 0x30CuLL);
      StatisticsInternal = DxgkQueryStatisticsInternal(v5 + 24, 0LL);
      v7 = 6LL;
      v13[0] = StatisticsInternal;
      v8 = (_OWORD *)(v5 + 48);
      v9 = &v13[2];
      do
      {
        *v9 = *v8;
        v9[1] = v8[1];
        v9[2] = v8[2];
        v9[3] = v8[3];
        v9[4] = v8[4];
        v9[5] = v8[5];
        v9[6] = v8[6];
        v9 += 8;
        v10 = v8[7];
        v8 += 8;
        *(v9 - 1) = v10;
        --v7;
      }
      while ( v7 );
      v11 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
      *(_QWORD *)v9 = *(_QWORD *)v8;
      VmBusCompletePacket(v11, v13, 0x310u);
      v2 = 1;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
    return v2;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 5726;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      5726LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
    return 0;
  }
}
