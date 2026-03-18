/*
 * XREFs of ?VmBusLogEvent@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140224990
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4433AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@34444@Z @ 0x140004268 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U-$_tlgWrapBuffer@U_UNICO.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051578 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     McTemplateK0pqqqqxx_EtwWriteTransfer @ 0x1400667D4 (McTemplateK0pqqqqxx_EtwWriteTransfer.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusLogEvent(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 v15; // [rsp+20h] [rbp-69h]
  __int64 v16; // [rsp+20h] [rbp-69h]
  __int64 v17; // [rsp+28h] [rbp-61h]
  __int64 v18; // [rsp+28h] [rbp-61h]
  __int64 v19; // [rsp+30h] [rbp-59h]
  __int64 v20; // [rsp+30h] [rbp-59h]
  __int64 v21; // [rsp+38h] [rbp-51h]
  int v22; // [rsp+80h] [rbp-9h] BYREF
  int v23; // [rsp+84h] [rbp-5h] BYREF
  int v24; // [rsp+88h] [rbp-1h] BYREF
  __int64 v25; // [rsp+90h] [rbp+7h] BYREF
  unsigned __int16 *v26; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v27; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+1Fh] BYREF
  __int64 v29; // [rsp+B0h] [rbp+27h] BYREF
  _BYTE v30[40]; // [rsp+B8h] [rbp+2Fh] BYREF
  int v31; // [rsp+F0h] [rbp+67h] BYREF
  int v32; // [rsp+F8h] [rbp+6Fh] BYREF
  int v33; // [rsp+100h] [rbp+77h] BYREF
  int v34; // [rsp+108h] [rbp+7Fh] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v30,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v2 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
    v3 = v2;
    if ( v2 )
    {
      v4 = *(int *)(v2 + 32);
      v5 = *(unsigned int *)(v3 + 28);
      if ( (int)v4 >= 0 )
      {
        WdLogSingleEntry2(4LL, *(int *)(v3 + 24), v5);
        WdLogGlobalForLineNumber = 6376;
      }
      else
      {
        WdLogSingleEntry3(2LL, v4, *(int *)(v3 + 24), (unsigned int)v5);
        v20 = *(unsigned int *)(v3 + 28);
        v18 = *(int *)(v3 + 24);
        v16 = *(int *)(v3 + 32);
        WdLogGlobalForLineNumber = 6371;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Status: 0x%I64x, Scenario: 0x%I64x, EventId: 0x%I64x",
          v16,
          v18,
          v20,
          0LL,
          0LL);
      }
      if ( bTracingEnabled )
      {
        v7 = *(unsigned int *)(v3 + 32);
        if ( (int)v7 >= 0 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
          {
            v13 = *((_QWORD *)a1 + 10);
            LODWORD(v21) = *(_DWORD *)(v3 + 28);
            LODWORD(v19) = *(_DWORD *)(v3 + 24);
            LODWORD(v17) = *(_DWORD *)(v3 + 32);
            LODWORD(v15) = *(_DWORD *)(v13 + 24);
            McTemplateK0pqqqqxx_EtwWriteTransfer(
              v7,
              &VirtualGpuGuestEvent,
              v6,
              *(_QWORD *)(v13 + 16),
              v15,
              v17,
              v19,
              v21,
              *(_QWORD *)(v3 + 40),
              *(_QWORD *)(v3 + 48));
          }
        }
        else
        {
          v8 = *((_QWORD *)a1 + 10);
          v9 = *(_QWORD *)(v8 + 16);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
          {
            LODWORD(v21) = *(_DWORD *)(v3 + 28);
            LODWORD(v19) = *(_DWORD *)(v3 + 24);
            LODWORD(v17) = *(_DWORD *)(v3 + 32);
            LODWORD(v15) = *(_DWORD *)(v8 + 24);
            McTemplateK0pqqqqxx_EtwWriteTransfer(
              v7,
              &VirtualGpuGuestEventFailure,
              v6,
              *(_QWORD *)(v8 + 16),
              v15,
              v17,
              v19,
              v21,
              *(_QWORD *)(v3 + 40),
              *(_QWORD *)(v3 + 48));
          }
          if ( (unsigned int)dword_14015E650 > 5 && tlgKeywordOn((__int64)&dword_14015E650, 0x400000008000LL) )
          {
            v31 = *(_DWORD *)(v9 + 432);
            v32 = *(_DWORD *)(v9 + 428);
            v33 = *(_DWORD *)(v9 + 424);
            v34 = *(_DWORD *)(v9 + 420);
            v25 = *(_QWORD *)(v9 + 412);
            v26 = *(unsigned __int16 **)(v9 + 1928);
            v27 = *(_QWORD *)(v3 + 48);
            v28 = *(_QWORD *)(v3 + 40);
            v22 = *(_DWORD *)(v3 + 32);
            v23 = *(_DWORD *)(v3 + 28);
            v24 = *(_DWORD *)(v3 + 24);
            v29 = 0x2000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v10,
              (__int64)&unk_14013E717,
              v11,
              v12,
              (__int64)&v29,
              (__int64)&v24,
              (__int64)&v23,
              (__int64)&v22,
              (__int64)&v28,
              (__int64)&v27,
              &v26,
              (__int64)&v25,
              (__int64)&v34,
              (__int64)&v33,
              (__int64)&v32,
              (__int64)&v31);
          }
        }
      }
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 6365;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      6365LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
  return 0;
}
