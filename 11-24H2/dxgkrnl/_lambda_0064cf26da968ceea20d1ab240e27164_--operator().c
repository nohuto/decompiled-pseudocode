/*
 * XREFs of _lambda_0064cf26da968ceea20d1ab240e27164_::operator() @ 0x1400788C8
 * Callers:
 *     HOSTVMMONITORMAPPING_TriggerRemoteVsync @ 0x1400357A0 (HOSTVMMONITORMAPPING_TriggerRemoteVsync.c)
 *     ?TriggerRemoteVsync@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IJ_K@Z @ 0x1400374A0 (-TriggerRemoteVsync@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IJ_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusSendSignalGuestEventSinglePacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUDXG_SIGNAL_GUEST_CPU_EVENT@@PEAUDXGKVMB_SINGLEPACKETCONTEXT@@@Z @ 0x1400165C0 (-VmBusSendSignalGuestEventSinglePacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUDXG_SIGNAL_GUEST_CPU_EVENT@.c)
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x140078FB8 (McTemplateK0xqpp_EtwWriteTransfer.c)
 */

char __fastcall lambda_0064cf26da968ceea20d1ab240e27164_::operator()(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rcx
  _DWORD *Pool2; // rax
  __int64 v6; // rax
  struct DXGKVMB_SINGLEPACKETCONTEXT *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ecx
  int v11; // r8d
  volatile __int32 *v12; // r9
  _QWORD v14[2]; // [rsp+50h] [rbp-38h] BYREF
  __int128 v15; // [rsp+60h] [rbp-28h]
  __int64 v16; // [rsp+70h] [rbp-18h]

  v4 = *(_DWORD **)a1;
  if ( *(_DWORD *)(a2 + 16) == *v4 && *(_DWORD *)(a2 + 20) == v4[1] && *(_DWORD *)(a2 + 24) == **(_DWORD **)(a1 + 8) )
  {
    if ( *(_QWORD *)(a2 + 48) )
    {
      if ( !*(_QWORD *)(a2 + 88) )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(64LL, 16LL, 1114077252LL);
        *(_QWORD *)(a2 + 88) = Pool2;
        if ( Pool2 )
        {
          *Pool2 = 1;
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 8LL) = 0LL;
        }
        else
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 684;
          DxgkLogInternalTriageEvent(
            0LL,
            262145LL,
            0xFFFFFFFFLL,
            L"Failed to allocate DXGKVMB_SINGLEPACKETCONTEXT",
            684LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      v6 = *(_QWORD *)(a2 + 88);
      if ( v6 )
      {
        if ( !*(_QWORD *)(v6 + 8) )
        {
          v7 = *(struct DXGKVMB_SINGLEPACKETCONTEXT **)(a2 + 88);
          v16 = 0LL;
          v8 = *(_QWORD *)(a2 + 48);
          v14[0] = 0LL;
          v14[1] = v8;
          v9 = *(_QWORD *)(a2 + 32);
          v15 = 0LL;
          v14[0] = v9;
          *(_WORD *)((char *)&v15 + 1) = 257;
          DXG_HOST_GLOBAL_VMBUS::VmBusSendSignalGuestEventSinglePacket((struct DXG_SIGNAL_GUEST_CPU_EVENT *)v14, v7);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
            McTemplateK0xqpp_EtwWriteTransfer(
              v10,
              (unsigned int)&RemoteMonitorVSyncTrigger,
              v11,
              *(_QWORD *)(a2 + 16),
              *(_DWORD *)(a2 + 24),
              *(_QWORD *)(a2 + 48),
              *(_QWORD *)(a2 + 32));
        }
      }
    }
    else
    {
      v12 = *(volatile __int32 **)(a2 + 56);
      if ( v12 )
      {
        _InterlockedExchange(v12, **(_DWORD **)(a1 + 16));
        _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a2 + 56) + 8LL), **(_QWORD **)(a1 + 24));
      }
    }
  }
  return 1;
}
