/*
 * XREFs of ?VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021AA90
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140013C98 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051B28 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x140338218 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateContextVirtual(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // di
  __int64 v4; // rax
  _DWORD *v5; // rbx
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // r14d
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // [rsp+28h] [rbp-19h]
  _BYTE v12[24]; // [rsp+58h] [rbp+17h] BYREF
  _D3DKMT_CREATECONTEXTVIRTUAL v13; // [rsp+70h] [rbp+2Fh] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v12,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1131;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      1131LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_3:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
    return 0;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  v5 = (_DWORD *)v4;
  if ( !v4 )
    goto LABEL_3;
  v6 = *(unsigned int *)(v4 + 48);
  v7 = *((unsigned int *)a1 + 36);
  if ( v7 - 55 >= v6 )
  {
    v13.pPrivateDriverData = 0LL;
    v8 = v6 + 55;
    v13.PrivateDriverDataSize = 0;
    *(_QWORD *)&v13.hContext = 0LL;
    v13.Flags.Value = *(_DWORD *)(v4 + 40);
    v13.hDevice = *(_DWORD *)(v4 + 28);
    v13.ClientHint = *(_DWORD *)(v4 + 44);
    v13.NodeOrdinal = *(_DWORD *)(v4 + 32);
    v13.EngineAffinity = *(_DWORD *)(v4 + 36);
    if ( *(_DWORD *)(v4 + 48) )
    {
      v13.pPrivateDriverData = (void *)(v4 + 52);
      v13.PrivateDriverDataSize = *(_DWORD *)(v4 + 48);
    }
    *(_DWORD *)(v4 + 24) = 0;
    v9 = DxgkCreateContextVirtualImpl(&v13, 0);
    if ( v9 < 0 )
    {
      v10 = v9;
      WdLogSingleEntry1(2LL, v9);
      WdLogGlobalForLineNumber = 1164;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to create context: 0x%I64x",
        v10,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v5[6] = v13.hContext;
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v5, v8);
      v2 = 1;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, v7);
    v11 = *((unsigned int *)a1 + 36);
    WdLogGlobalForLineNumber = 1137;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid packet size: 0x%I64x", v11, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
  return v2;
}
