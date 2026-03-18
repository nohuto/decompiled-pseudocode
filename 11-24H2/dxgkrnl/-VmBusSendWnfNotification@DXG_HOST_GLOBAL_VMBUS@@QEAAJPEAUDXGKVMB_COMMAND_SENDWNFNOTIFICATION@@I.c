/*
 * XREFs of ?VmBusSendWnfNotification@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_SENDWNFNOTIFICATION@@I@Z @ 0x1403BF7BC
 * Callers:
 *     ?SendWnfNotificationToVmProcessWorkItem@DXGGLOBAL@@SAXPEAX@Z @ 0x1403BF600 (-SendWnfNotificationToVmProcessWorkItem@DXGGLOBAL@@SAXPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?VmBusSendAsyncPacket@@YAJPEAUVMBPACKET__@@PEAUDXGKVMB_COMMAND_BASE@@I@Z @ 0x140015FD8 (-VmBusSendAsyncPacket@@YAJPEAUVMBPACKET__@@PEAUDXGKVMB_COMMAND_BASE@@I@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendWnfNotification(
        DXG_HOST_GLOBAL_VMBUS *this,
        struct DXGKVMB_COMMAND_SENDWNFNOTIFICATION *a2,
        unsigned int a3)
{
  __int64 v6; // rbp
  struct VMBPACKET__ *v8; // r14
  int v9; // eax

  LODWORD(v6) = 0;
  DXGPUSHLOCK::AcquireShared((DXG_HOST_GLOBAL_VMBUS *)((char *)this + 16));
  if ( *((_BYTE *)this + 68) && !*((_BYTE *)this + 70) )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 19);
    if ( *((int *)this + 19) < 16 )
    {
      v8 = (struct VMBPACKET__ *)((__int64 (__fastcall *)(_QWORD))qword_140160448)(*(_QWORD *)this);
      if ( v8 )
      {
        ((void (__fastcall *)(struct VMBPACKET__ *, DXG_HOST_GLOBAL_VMBUS *))qword_140160490)(v8, this);
        ((void (__fastcall *)(struct VMBPACKET__ *, void (__fastcall *)(struct VMBPACKET__ *, __int64, void *)))qword_140160488)(
          v8,
          WnfPacketCompletionRoutine);
        v9 = VmBusSendAsyncPacket(v8, a2, a3);
        v6 = v9;
        if ( v9 >= 0 )
          goto LABEL_2;
        WdLogSingleEntry1(2LL, v9);
        WdLogGlobalForLineNumber = 6745;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"VmBusSendAsyncPacket failed. 0x%I64x",
          v6,
          0LL,
          0LL,
          0LL,
          0LL);
        ((void (__fastcall *)(struct VMBPACKET__ *))qword_140160450)(v8);
      }
      else
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 6735;
        DxgkLogInternalTriageEvent(
          0LL,
          262145LL,
          0xFFFFFFFFLL,
          L"Failed to allocate VMBPACKET",
          6735LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v6) = -1073741801;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 19);
  }
LABEL_2:
  _InterlockedDecrement((volatile signed __int32 *)this + 8);
  ExReleasePushLockSharedEx((char *)this + 16, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
