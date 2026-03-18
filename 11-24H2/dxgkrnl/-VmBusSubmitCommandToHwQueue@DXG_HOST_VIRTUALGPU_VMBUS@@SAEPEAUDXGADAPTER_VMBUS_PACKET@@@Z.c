/*
 * XREFs of ?VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402C57F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_GETDEVICESTATE_VB@@@@YAPEAUDXGKVMB_COMMAND_GETDEVICESTATE_VB@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1400516B8 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_GETDEVICESTATE_VB@@@@YAPEAUDXGKVMB_COMMAND_GETDEVICESTATE.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x14021E260 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1402C5A10 (DxgkSubmitCommandToHwQueueInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitCommandToHwQueue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned int v5; // eax
  __int64 v6; // rax
  const wchar_t *v7; // r9
  int v8; // eax
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  _BYTE v12[32]; // [rsp+50h] [rbp-28h] BYREF
  int v13; // [rsp+80h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v12,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v3 = CastToVmBusCommand<DXGKVMB_COMMAND_GETDEVICESTATE_VB>((__int64)a1);
    v4 = v3;
    if ( !v3 )
    {
LABEL_11:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
      return v2;
    }
    v5 = *(_DWORD *)(v3 + 64);
    if ( v5 <= 0x10 )
    {
      v9 = *((unsigned int *)a1 + 36);
      v10 = 4 * v5;
      if ( v9 - 80 < v10 )
      {
        WdLogSingleEntry1(2LL, v9);
        WdLogGlobalForLineNumber = 5347;
      }
      else
      {
        if ( (unsigned int)v9 - v10 - 80 >= *(unsigned int *)(v4 + 52) )
        {
          *(_QWORD *)(v4 + 72) = v4 + 80;
          *(_QWORD *)(v4 + 56) = v10 + v4 + 80;
          v8 = DxgkSubmitCommandToHwQueueInternal((struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *)(v4 + 24));
          v13 = v8;
          if ( v8 >= 0 )
            goto LABEL_10;
          goto LABEL_6;
        }
        WdLogSingleEntry1(2LL, v9);
        WdLogGlobalForLineNumber = 5354;
      }
      v6 = *((unsigned int *)a1 + 36);
      v7 = L"Invalid packet size 0x%I64x";
    }
    else
    {
      WdLogSingleEntry0(2LL);
      v6 = 5339LL;
      v7 = L"Invalid Written Primaries array";
      WdLogGlobalForLineNumber = 5339;
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v7, v6, 0LL, 0LL, 0LL, 0LL);
    v8 = -1073741811;
    v13 = -1073741811;
LABEL_6:
    HandleAsyncCommandError(a1, v8, *(_DWORD *)(v4 + 24), 2);
LABEL_10:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v13, 4u);
    v2 = 1;
    goto LABEL_11;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 5330;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"The adapter is already closed by the guest",
    5330LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
  return 0;
}
