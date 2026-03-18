/*
 * XREFs of ?VmBusSendSignalGuestEventSinglePacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUDXG_SIGNAL_GUEST_CPU_EVENT@@PEAUDXGKVMB_SINGLEPACKETCONTEXT@@@Z @ 0x1400165C0
 * Callers:
 *     _lambda_0064cf26da968ceea20d1ab240e27164_::operator() @ 0x1400788C8 (_lambda_0064cf26da968ceea20d1ab240e27164_--operator().c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140013690 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?VmBusSendAsyncPacket@@YAJPEAUVMBPACKET__@@PEAUDXGKVMB_COMMAND_BASE@@I@Z @ 0x140015FD8 (-VmBusSendAsyncPacket@@YAJPEAUVMBPACKET__@@PEAUDXGKVMB_COMMAND_BASE@@I@Z.c)
 *     ?ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ @ 0x140057A88 (-ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendSignalGuestEventSinglePacket(
        struct DXG_SIGNAL_GUEST_CPU_EVENT *a1,
        struct DXGKVMB_SINGLEPACKETCONTEXT *this)
{
  struct VMBPACKET__ *v4; // rsi
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int128 v10; // [rsp+60h] [rbp-9h] BYREF
  __int64 v11; // [rsp+70h] [rbp+7h]
  __int64 v12; // [rsp+78h] [rbp+Fh]
  __int128 v13; // [rsp+80h] [rbp+17h]

  v4 = (struct VMBPACKET__ *)((__int64 (__fastcall *)(_QWORD))qword_140160448)(**(_QWORD **)a1);
  if ( v4 )
  {
    v5 = *((_QWORD *)a1 + 1);
    v13 = 0LL;
    v11 = 0LL;
    v12 = v5;
    BYTE8(v13) = *((_BYTE *)a1 + 16);
    LOBYTE(v5) = *((_BYTE *)a1 + 18);
    v10 = 0LL;
    BYTE9(v13) = v5;
    BYTE12(v10) = 2;
    HIDWORD(v10) = WORD6(v10) & 0x1FF;
    *(_QWORD *)&v13 = 0LL;
    ((void (__fastcall *)(struct VMBPACKET__ *, struct DXGKVMB_SINGLEPACKETCONTEXT *))qword_140160490)(v4, this);
    ((void (__fastcall *)(struct VMBPACKET__ *, void (__fastcall *)(struct VMBPACKET__ *, int, void *, unsigned int)))qword_140160488)(
      v4,
      SinglePacketCompletionRoutine);
    _InterlockedIncrement((volatile signed __int32 *)this);
    *((_QWORD *)this + 1) = v4;
    v6 = VmBusSendAsyncPacket(v4, (struct DXGKVMB_COMMAND_BASE *)&v10, 48LL);
    if ( v6 < 0 )
    {
      v9 = v6;
      WdLogSingleEntry1(2LL, v6);
      WdLogGlobalForLineNumber = 7029;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"VmBusSendAsyncPacket failed. 0x%I64x",
        v9,
        0LL,
        0LL,
        0LL,
        0LL);
      ((void (__fastcall *)(struct VMBPACKET__ *))qword_140160450)(v4);
      *((_QWORD *)this + 1) = 0LL;
      DXGKVMB_SINGLEPACKETCONTEXT::ReleaseReference(this);
    }
    if ( !*((_BYTE *)a1 + 17) )
      DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference(a1);
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 7017;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        7017LL,
        v7,
        v8,
        0LL,
        1,
        -1,
        L"Failed to allocate VMBPACKET",
        105,
        0,
        0,
        0,
        0);
  }
}
