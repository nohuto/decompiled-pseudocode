/*
 * XREFs of ?VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14001F9D4
 * Callers:
 *     ?VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUDXG_SIGNAL_GUEST_CPU_EVENT@@E@Z @ 0x14001F6C0 (-VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUDXG_SIGNAL_GUEST_CPU_EVENT@@E@Z.c)
 *     ?VmBusSendPropagatePresentHistoryToken@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXIPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@E@Z @ 0x14001F870 (-VmBusSendPropagatePresentHistoryToken@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXIPEAVDXGPRESENTHISTORYTOKEN.c)
 *     ?VmBusSendHostMonitorPower@DXG_HOST_GLOBAL_VMBUS@@SAJPEAXU_LUID@@IE@Z @ 0x14007B498 (-VmBusSendHostMonitorPower@DXG_HOST_GLOBAL_VMBUS@@SAJPEAXU_LUID@@IE@Z.c)
 *     ?VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z @ 0x14007B57C (-VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z.c)
 *     DxgkSignalEventCB @ 0x14007B7C0 (DxgkSignalEventCB.c)
 *     ?VmBusSendDuplicateHandle@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEBU_DXGSHAREDALLOCOBJECT@@IPEAXKPEAUDXGKVMB_GUEST_TRANSACTION@@@Z @ 0x1402240E4 (-VmBusSendDuplicateHandle@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEBU_DXGSHAREDALLOCOBJECT@@IPEAXKPEAUDXGKV.c)
 *     ?VmBusSendLogEvent@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXJW4DXGKVMB_EVENT_SCENARIO@@I_K1@Z @ 0x140225F00 (-VmBusSendLogEvent@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXJW4DXGKVMB_EVENT_SCENARIO@@I_K1@Z.c)
 *     ?VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z @ 0x14022891C (-VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x14001F970 (-CheckDebugBreak@DXGGLOBAL@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x14004CC40 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXG_VMBUS_CHANNEL_BASE::VmBusSendAsyncMessage(
        DXG_VMBUS_CHANNEL_BASE *this,
        unsigned __int8 *a2,
        struct DXGKVMB_COMMAND_BASE *a3,
        unsigned int a4)
{
  int v8; // r8d
  signed __int64 v9; // rcx
  bool v10; // zf
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdi
  DXGGLOBAL *Global; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  char v18; // al
  void *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // [rsp+50h] [rbp-20h] BYREF
  __int64 v23; // [rsp+58h] [rbp-18h]
  char v24; // [rsp+60h] [rbp-10h]
  __int64 v25; // [rsp+90h] [rbp+20h] BYREF

  if ( !*((_BYTE *)this + 68) )
    return 3221226166LL;
  v22 = -1;
  v23 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2218;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 2218);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry(&v22, 2218LL);
  if ( a4 - 24 <= 0x1FFE7 )
  {
    v9 = _InterlockedIncrement64(&qword_14015DC70);
    v10 = bTracingEnabled == 0;
    *(_QWORD *)a3 = v9;
    if ( v10 )
    {
LABEL_6:
      v11 = *((_QWORD *)this + 1);
      v25 = 0LL;
      v12 = ((__int64 (__fastcall *)(__int64, unsigned __int8 *, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, __int64 *))qword_14015D3E0)(
              v11,
              a2,
              a4,
              0LL,
              0,
              0LL,
              0LL,
              &v25);
      v13 = v12;
      if ( v12 < 0 )
      {
        WdLogSingleEntry1(2LL, v12);
        WdLogGlobalForLineNumber = 15519;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"VmbChannelSendSynchronousRequest failed: %I64n",
          v13,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::CheckDebugBreak(Global);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
      if ( v24 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v22);
      }
      return (unsigned int)v13;
    }
    v18 = *((_BYTE *)a3 + 12);
    if ( v18 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
        goto LABEL_6;
      v19 = &EventVmBusSendCommandGlobalAsync;
    }
    else if ( v18 == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
        goto LABEL_6;
      v19 = &EventVmBusSendCommandHostToVmAsync;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
        goto LABEL_6;
      v19 = &EventVmBusSendCommandAsync;
    }
    McTemplateK0pxq_EtwWriteTransfer(
      (unsigned int)&DxgkControlGuid_Context,
      (_DWORD)v19,
      v8,
      *((_QWORD *)this + 1),
      v9,
      *((_DWORD *)a3 + 4));
    goto LABEL_6;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v22);
  return 3221225473LL;
}
