/*
 * XREFs of ?VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403E9940
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_SUBMITCOMMAND@@@@YAPEAUDXGKVMB_COMMAND_SUBMITCOMMAND@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140058F24 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_SUBMITCOMMAND@@@@YAPEAUDXGKVMB_COMMAND_SUBMITCOMMAND@@PEA.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x140217C90 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x140290740 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitCommand(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  const wchar_t *v9; // r9
  unsigned __int64 v10; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v12; // r8
  int v13; // eax
  _BYTE v14[32]; // [rsp+50h] [rbp-28h] BYREF
  int v15; // [rsp+80h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v14);
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 5275;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      5275LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
    return 0;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_SUBMITCOMMAND>((__int64)a1);
  v5 = v4;
  if ( v4 )
  {
    v6 = 4LL * *(unsigned int *)(v4 + 392);
    if ( v6 > 0xFFFFFFFF )
    {
      WdLogSingleEntry0(2LL);
      v8 = 5284LL;
      v9 = L"Invalid history buffer array";
      WdLogGlobalForLineNumber = 5284;
    }
    else
    {
      v7 = *((unsigned int *)a1 + 36);
      if ( v7 - 408 >= (unsigned __int64)(unsigned int)v6 )
      {
        v10 = v7 - (unsigned int)v6 - 408;
        if ( v10 >= *(unsigned int *)(v5 + 320) )
        {
          *(_QWORD *)(v5 + 400) = v5 + 408;
          *(_QWORD *)(v5 + 312) = (unsigned int)v6 + v5 + 408;
          Current = DXGPROCESS::GetCurrent(v10);
          v13 = DxgkSubmitCommandInternal((const struct _D3DKMT_SUBMITCOMMAND *)(v5 + 24), Current, v12);
          v15 = v13;
          if ( v13 >= 0 )
            goto LABEL_15;
          goto LABEL_14;
        }
        WdLogSingleEntry1(2LL, v7);
        WdLogGlobalForLineNumber = 5296;
      }
      else
      {
        WdLogSingleEntry1(2LL, v7);
        WdLogGlobalForLineNumber = 5290;
      }
      v8 = *((unsigned int *)a1 + 36);
      v9 = L"Invalid packet size 0x%I64x";
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v9, v8, 0LL, 0LL, 0LL, 0LL);
    v13 = -1073741811;
    v15 = -1073741811;
LABEL_14:
    HandleAsyncCommandError(a1, v13, *(_DWORD *)(v5 + 52), 1);
LABEL_15:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v15, 4u);
    v2 = 1;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
  return v2;
}
