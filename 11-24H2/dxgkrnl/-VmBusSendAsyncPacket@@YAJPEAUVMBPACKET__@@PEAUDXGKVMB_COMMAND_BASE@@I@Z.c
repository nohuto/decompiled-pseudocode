/*
 * XREFs of ?VmBusSendAsyncPacket@@YAJPEAUVMBPACKET__@@PEAUDXGKVMB_COMMAND_BASE@@I@Z @ 0x140015FD8
 * Callers:
 *     ?VmBusSendSignalGuestEventSinglePacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUDXG_SIGNAL_GUEST_CPU_EVENT@@PEAUDXGKVMB_SINGLEPACKETCONTEXT@@@Z @ 0x1400165C0 (-VmBusSendSignalGuestEventSinglePacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUDXG_SIGNAL_GUEST_CPU_EVENT@.c)
 *     ?VmBusSendWnfNotification@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_SENDWNFNOTIFICATION@@I@Z @ 0x1403BF7BC (-VmBusSendWnfNotification@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_SENDWNFNOTIFICATION@@I.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x14004C6F0 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VmBusSendAsyncPacket(struct VMBPACKET__ *a1, struct DXGKVMB_COMMAND_BASE *a2, __int64 a3)
{
  unsigned int v3; // esi
  int v6; // r8d
  signed __int64 v7; // rcx
  bool v8; // zf
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  char v15; // al
  void *v16; // rdx
  int v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h]
  char v19; // [rsp+40h] [rbp-10h]

  v17 = -1;
  v3 = a3;
  v18 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2219;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2219);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2219);
  if ( v3 - 24 <= 0x1FFE7 )
  {
    v7 = _InterlockedIncrement64(&qword_140160C58);
    v8 = bTracingEnabled == 0;
    *(_QWORD *)a2 = v7;
    if ( v8 )
    {
LABEL_5:
      v9 = ((__int64 (__fastcall *)(struct VMBPACKET__ *, struct DXGKVMB_COMMAND_BASE *, _QWORD, _QWORD, int))qword_140160470)(
             a1,
             a2,
             v3,
             0LL,
             1);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
      if ( v19 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v17);
      }
      return v9;
    }
    v15 = *((_BYTE *)a2 + 12);
    if ( v15 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
        goto LABEL_5;
      v16 = &EventVmBusSendPacketGlobalAsync;
    }
    else if ( v15 == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
        goto LABEL_5;
      v16 = &EventVmBusSendPacketHostToVmAsync;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
        goto LABEL_5;
      v16 = &EventVmBusSendPacketAsync;
    }
    McTemplateK0pxq_EtwWriteTransfer(
      (unsigned int)&DxgkControlGuid_Context,
      (_DWORD)v16,
      v6,
      (_DWORD)a1,
      v7,
      *((_DWORD *)a2 + 4));
    goto LABEL_5;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v17);
  return 3221225473LL;
}
