/*
 * XREFs of ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1402151C0
 * Callers:
 *     ?EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ @ 0x140217918 (-EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x140214B24 (-CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHA.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ @ 0x140215B18 (-DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x140295218 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::CreateVmBusChannel(
        struct VMBCHANNEL__ **this,
        struct _DEVICE_OBJECT *a2,
        __int64 a3,
        __int64 a4)
{
  struct _DEVICE_OBJECT *v4; // rbx
  struct _KEVENT *v6; // rcx
  struct VMBCHANNEL__ *v7; // rax
  int v9; // eax
  __int64 v10; // rdi
  struct VMBCHANNEL__ *v11; // rcx
  NTSTATUS v12; // eax
  struct DXGGLOBAL *Global; // rax
  void (*v14)(struct VMBCHANNEL__ *, unsigned int); // [rsp+40h] [rbp-61h]
  char v15[8]; // [rsp+58h] [rbp-49h] BYREF
  struct _UNICODE_STRING v16; // [rsp+60h] [rbp-41h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+70h] [rbp-31h] BYREF
  _DWORD v18[2]; // [rsp+78h] [rbp-29h] BYREF
  __int64 (__fastcall *v19)(struct VMBCHANNEL__ *); // [rsp+80h] [rbp-21h]
  void (__fastcall *v20)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-19h]
  void (__fastcall *v21)(struct VMBCHANNEL__ *); // [rsp+90h] [rbp-11h]
  void (__fastcall *v22)(struct VMBCHANNEL__ *); // [rsp+98h] [rbp-9h]
  void (__fastcall *v23)(struct VMBCHANNEL__ *); // [rsp+A0h] [rbp-1h]
  struct _GUID v24; // [rsp+A8h] [rbp+7h] BYREF
  struct _GUID v25; // [rsp+B8h] [rbp+17h] BYREF
  _OWORD v26[2]; // [rsp+C8h] [rbp+27h] BYREF
  wchar_t v27; // [rsp+E8h] [rbp+47h]

  v4 = g_pDeviceObject;
  v6 = (struct _KEVENT *)this[7];
  if ( v6 )
  {
    KeClearEvent(v6);
  }
  else
  {
    v7 = (struct VMBCHANNEL__ *)operator new(0x18uLL, 0x4B677844u, 64LL, a4);
    this[7] = v7;
    if ( !v7 )
      return 3221225495LL;
    KeInitializeEvent((PRKEVENT)v7, NotificationEvent, 0);
  }
  v27 = aDxgkGlobalgues[16];
  v16.Buffer = (wchar_t *)v26;
  v19 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelOpened;
  *(_QWORD *)&v16.Length = 2228256LL;
  v20 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelClosed;
  v18[0] = 1;
  v21 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelSuspend;
  v22 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelStarted;
  v23 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelPostStarted;
  v26[0] = *(_OWORD *)L"DXGK_GlobalGuest";
  v18[1] = 48;
  v26[1] = *(_OWORD *)L"balGuest";
  v24 = (struct _GUID)DxgkPerVmVmBusChanelInstanceId;
  v25 = (struct _GUID)DxgkPerVmVmBusChannelType;
  v9 = CreateClientVmBusChannel(
         (__int64)this,
         v4,
         &v25,
         &v24,
         &v16,
         (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v18,
         (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))DXG_GUEST_GLOBAL_VMBUS::VmBusChannelProcessPacket,
         v14,
         this);
  v10 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(2LL, v9);
    WdLogGlobalForLineNumber = 13474;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to create the guest VM bus channel. Status: 0x%I64x",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_12:
    DXG_GUEST_GLOBAL_VMBUS::DestroyVmBusChannel((DXG_GUEST_GLOBAL_VMBUS *)this);
    return (unsigned int)v10;
  }
  v11 = this[7];
  Timeout.QuadPart = -80000000LL;
  v12 = KeWaitForSingleObject(v11, Executive, 0, 0, &Timeout);
  v10 = v12;
  if ( v12 )
  {
    WdLogSingleEntry1(2LL, v12);
    WdLogGlobalForLineNumber = 13468;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed waiting for VM bus channel to start: 0x%I64x",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v10) = -1073741823;
  }
  if ( (int)v10 < 0 )
    goto LABEL_12;
  this[1] = *this;
  *((_BYTE *)this + 68) = 1;
  v15[0] = 1;
  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::IterateAdaptersWithCallback(Global, GlobalVmBusStatChangeCallback, v15, 1LL);
  return (unsigned int)v10;
}
