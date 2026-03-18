/*
 * XREFs of _lambda_70a1cbb42e93de5f2c59c53ec44c5933_::operator() @ 0x1400780D8
 * Callers:
 *     HOSTVMMONITORMAPPING_TriggerRemoteVsync @ 0x140035900 (HOSTVMMONITORMAPPING_TriggerRemoteVsync.c)
 *     ?TriggerRemoteVsync@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IJ_K@Z @ 0x140037818 (-TriggerRemoteVsync@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IJ_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusSendSignalGuestEventSinglePacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUDXG_SIGNAL_GUEST_CPU_EVENT@@PEAUDXGKVMB_SINGLEPACKETCONTEXT@@@Z @ 0x1400225B0 (-VmBusSendSignalGuestEventSinglePacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUDXG_SIGNAL_GUEST_CPU_EVENT@.c)
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x140078940 (McTemplateK0xqpp_EtwWriteTransfer.c)
 */

char __fastcall lambda_70a1cbb42e93de5f2c59c53ec44c5933_::operator()(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rcx
  _DWORD *Pool2; // rax
  __int64 v8; // rax
  struct DXGKVMB_SINGLEPACKETCONTEXT *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // ecx
  int v13; // r8d
  volatile __int32 *v14; // r9
  _QWORD v16[2]; // [rsp+50h] [rbp-38h] BYREF
  __int128 v17; // [rsp+60h] [rbp-28h]
  __int64 v18; // [rsp+70h] [rbp-18h]

  v6 = *(_DWORD **)a1;
  if ( *(_DWORD *)(a2 + 16) == *v6 && *(_DWORD *)(a2 + 20) == v6[1] && *(_DWORD *)(a2 + 24) == **(_DWORD **)(a1 + 8) )
  {
    if ( *(_QWORD *)(a2 + 48) )
    {
      if ( !*(_QWORD *)(a2 + 88) )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(64LL, 16LL, 1114077252LL, a4);
        *(_QWORD *)(a2 + 88) = Pool2;
        if ( Pool2 )
        {
          *Pool2 = 1;
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 8LL) = 0LL;
        }
        else
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 766;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            0xFFFFFFFFLL,
            L"Failed to allocate DXGKVMB_SINGLEPACKETCONTEXT",
            766LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      v8 = *(_QWORD *)(a2 + 88);
      if ( v8 )
      {
        if ( !*(_QWORD *)(v8 + 8) )
        {
          v9 = *(struct DXGKVMB_SINGLEPACKETCONTEXT **)(a2 + 88);
          v18 = 0LL;
          v10 = *(_QWORD *)(a2 + 48);
          v16[0] = 0LL;
          v16[1] = v10;
          v11 = *(_QWORD *)(a2 + 32);
          v17 = 0LL;
          v16[0] = v11;
          *(_WORD *)((char *)&v17 + 1) = 257;
          DXG_HOST_GLOBAL_VMBUS::VmBusSendSignalGuestEventSinglePacket((struct DXG_SIGNAL_GUEST_CPU_EVENT *)v16, v9);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
            McTemplateK0xqpp_EtwWriteTransfer(
              v12,
              (unsigned int)&RemoteMonitorVSyncTrigger,
              v13,
              *(_QWORD *)(a2 + 16),
              *(_DWORD *)(a2 + 24),
              *(_QWORD *)(a2 + 48),
              *(_QWORD *)(a2 + 32));
        }
      }
    }
    else
    {
      v14 = *(volatile __int32 **)(a2 + 56);
      if ( v14 )
      {
        _InterlockedExchange(v14, **(_DWORD **)(a1 + 16));
        _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a2 + 56) + 8LL), **(_QWORD **)(a1 + 24));
      }
    }
  }
  return 1;
}
