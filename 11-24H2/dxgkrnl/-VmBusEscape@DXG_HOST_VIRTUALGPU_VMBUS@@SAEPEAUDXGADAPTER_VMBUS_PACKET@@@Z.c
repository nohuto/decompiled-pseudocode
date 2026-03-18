/*
 * XREFs of ?VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140222D90
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051578 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     DxgkEscape @ 0x140419AB0 (DxgkEscape.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusEscape(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // di
  __int64 v3; // rax
  const wchar_t *v4; // r9
  _DWORD *v6; // rax
  int *v7; // rsi
  __int64 v8; // r8
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rbx
  _BYTE v12[24]; // [rsp+58h] [rbp+17h] BYREF
  _DWORD v13[4]; // [rsp+70h] [rbp+2Fh] BYREF
  void *v14; // [rsp+80h] [rbp+3Fh]
  unsigned int v15; // [rsp+88h] [rbp+47h]
  int v16; // [rsp+8Ch] [rbp+4Bh]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v12,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    v3 = 5123LL;
    v4 = L"The adapter is already closed by the guest";
    WdLogGlobalForLineNumber = 5123;
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v4, v3, 0LL, 0LL, 0LL, 0LL);
LABEL_4:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
    return 0;
  }
  v6 = (_DWORD *)CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  if ( !v6 )
    goto LABEL_4;
  v7 = v6 + 8;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 153LL) && (*v7 || (v6[9] & 0x40) == 0) )
  {
    WdLogSingleEntry1(3LL, *v7);
    WdLogGlobalForLineNumber = 5135;
    goto LABEL_4;
  }
  v8 = *((unsigned int *)a1 + 36);
  if ( v8 - 55 < (unsigned __int64)(unsigned int)v6[10] )
  {
    WdLogSingleEntry1(2LL, (unsigned int)v8);
    v3 = *((unsigned int *)a1 + 36);
    v4 = L"Invalid packet size 0x%I64x";
    WdLogGlobalForLineNumber = 5141;
    goto LABEL_3;
  }
  if ( (unsigned int)*v7 < 2 || *v7 == 3 || *v7 == 8 || (unsigned int)(*v7 - 28) < 2 )
  {
    v13[0] = v6[6];
    v13[3] = v6[9];
    v13[1] = v6[7];
    v16 = v6[11];
    v13[2] = *v7;
    v15 = v6[10];
    v14 = v6 + 12;
    v10 = DxgkEscape(v13);
    if ( v10 < 0 )
    {
      v11 = v10;
      WdLogSingleEntry1(2LL, v10);
      WdLogGlobalForLineNumber = 5176;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"DxgkEscapeInternal failed: 0x%I64x",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v14, v15);
      v2 = 1;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, *v7);
    v9 = *v7;
    WdLogGlobalForLineNumber = 5155;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Unsupported escape type 0x%I64x", v9, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
  return v2;
}
