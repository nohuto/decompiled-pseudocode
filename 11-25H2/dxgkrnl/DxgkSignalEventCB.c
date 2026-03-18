/*
 * XREFs of DxgkSignalEventCB @ 0x14007B7C0
 * Callers:
 *     ?CallDxgkSignalEventCbAtDispatch@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z @ 0x14006EF80 (-CallDxgkSignalEventCbAtDispatch@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z.c)
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1401C66C4 (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14001F9D4 (-VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?DxgkSignalEventCBPaged@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z @ 0x14018A620 (-DxgkSignalEventCBPaged@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z.c)
 */

__int64 __fastcall DxgkSignalEventCB(struct _DXGKARGCB_SIGNALEVENT *a1)
{
  struct _DXGKARGCB_SIGNALEVENT::$3484840290AF70A1F2DEBFE8F287B9A7::$345C9315266921A5615E194C0B7E8CDB Flags; // eax
  __int64 v3; // rdi
  __int64 v4; // rax
  const wchar_t *v5; // r9
  HANDLE hEvent; // rax
  DXG_VMBUS_CHANNEL_BASE *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  const wchar_t *v11; // r9
  _QWORD *hDxgkProcess; // rdx
  struct DXGGLOBAL *Global; // rax
  DXG_VMBUS_CHANNEL_BASE *v14; // r10
  unsigned __int64 v15; // rdx
  HANDLE v16; // rax
  int v17; // eax
  unsigned __int8 v18[16]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v19; // [rsp+68h] [rbp-9h]
  __int64 v20; // [rsp+70h] [rbp-1h]
  __int128 v21; // [rsp+78h] [rbp+7h]
  unsigned __int8 v22[16]; // [rsp+88h] [rbp+17h] BYREF
  unsigned __int64 v23; // [rsp+98h] [rbp+27h]
  HANDLE v24; // [rsp+A0h] [rbp+2Fh]
  __int128 v25; // [rsp+A8h] [rbp+37h]

  Flags = (struct _DXGKARGCB_SIGNALEVENT::$3484840290AF70A1F2DEBFE8F287B9A7::$345C9315266921A5615E194C0B7E8CDB)a1->Flags;
  LODWORD(v3) = 0;
  if ( *(unsigned int *)&Flags >= 2 )
  {
    WdLogSingleEntry0(2LL);
    v4 = 16871LL;
    v5 = L"Reserved flags are set";
LABEL_3:
    WdLogGlobalForLineNumber = v4;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v5, v4, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( (*(_BYTE *)&Flags & 1) != 0 )
  {
    hEvent = a1->hEvent;
    v8 = *(DXG_VMBUS_CHANNEL_BASE **)hEvent;
    if ( !*(_QWORD *)hEvent )
    {
      KeSetEvent(*((PRKEVENT *)hEvent + 1), 0, 0);
      return (unsigned int)v3;
    }
    v9 = *((_QWORD *)hEvent + 1);
    *(_OWORD *)v18 = 0LL;
    v18[12] = 2;
    *(_DWORD *)&v18[12] = *(_WORD *)&v18[12] & 0x1FF;
    v19 = 0LL;
    v20 = v9;
    v21 = 0uLL;
    v10 = DXG_VMBUS_CHANNEL_BASE::VmBusSendAsyncMessage(v8, v18, (struct DXGKVMB_COMMAND_BASE *)v18, 0x30u);
    v3 = v10;
    if ( v10 >= 0 )
      return (unsigned int)v3;
    WdLogSingleEntry1(2LL, v10);
    v11 = L"Failed to send SIGNALGUESTEVENT command: 0x%I64x";
    WdLogGlobalForLineNumber = 16889;
LABEL_9:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v11, v3, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v3;
  }
  hDxgkProcess = a1->hDxgkProcess;
  if ( *((_BYTE *)a1->hDxgkProcess + 136) )
  {
    *(_QWORD *)v18 = a1->hEvent;
    *(_QWORD *)&v18[8] = hDxgkProcess[5];
    v19 = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    return (*((__int64 (__fastcall **)(unsigned __int8 *))Global + 3))(v18);
  }
  else
  {
    v14 = (DXG_VMBUS_CHANNEL_BASE *)hDxgkProcess[16];
    if ( v14 )
    {
      v15 = hDxgkProcess[11];
      *(_OWORD *)v22 = 0LL;
      v22[12] = 2;
      *(_DWORD *)&v22[12] = *(_WORD *)&v22[12] & 0x1FF;
      v16 = a1->hEvent;
      v23 = v15 != 0 ? 3uLL : 0;
      v25 = v15;
      v24 = v16;
      v17 = DXG_VMBUS_CHANNEL_BASE::VmBusSendAsyncMessage(v14, v22, (struct DXGKVMB_COMMAND_BASE *)v22, 0x30u);
      v3 = v17;
      if ( v17 >= 0 )
        return (unsigned int)v3;
      WdLogSingleEntry1(2LL, v17);
      v11 = L"Failed to send SIGNALGUESTEVENT  command: 0x%I64x";
      WdLogGlobalForLineNumber = 16912;
      goto LABEL_9;
    }
    if ( KeGetCurrentIrql() >= 2u )
    {
      WdLogSingleEntry0(2LL);
      v4 = 16920LL;
      v5 = L"Invalid IRQL for DxgkCbSignalEvent";
      goto LABEL_3;
    }
    return DxgkSignalEventCBPaged(a1);
  }
}
