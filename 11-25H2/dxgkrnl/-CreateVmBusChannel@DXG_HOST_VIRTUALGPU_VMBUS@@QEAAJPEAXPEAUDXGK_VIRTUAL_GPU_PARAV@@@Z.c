/*
 * XREFs of ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x140215920
 * Callers:
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x140210570 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZIPEAPEAU5@@Z @ 0x140214E88 (-CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CH.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x140215BBC (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::CreateVmBusChannel(
        struct VMBCHANNEL__ **this,
        __int64 a2,
        struct DXGK_VIRTUAL_GPU_PARAV *a3)
{
  __int64 v6; // rax
  struct _DEVICE_OBJECT *v7; // r8
  int v8; // eax
  __int64 v9; // rdi
  struct _UNICODE_STRING v11; // [rsp+60h] [rbp-59h] BYREF
  unsigned __int64 v12; // [rsp+70h] [rbp-49h]
  __int64 v13; // [rsp+78h] [rbp-41h]
  _DWORD v14[2]; // [rsp+80h] [rbp-39h] BYREF
  __int64 (__fastcall *v15)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-31h]
  void (__fastcall *v16)(struct VMBCHANNEL__ *); // [rsp+90h] [rbp-29h]
  void (__fastcall *v17)(struct VMBCHANNEL__ *); // [rsp+98h] [rbp-21h]
  void (__fastcall *v18)(struct VMBCHANNEL__ *); // [rsp+A0h] [rbp-19h]
  void (__fastcall *v19)(struct VMBCHANNEL__ *); // [rsp+A8h] [rbp-11h]
  struct _GUID v20; // [rsp+B0h] [rbp-9h] BYREF
  struct _GUID v21; // [rsp+C0h] [rbp+7h] BYREF
  _OWORD v22[2]; // [rsp+D0h] [rbp+17h] BYREF

  if ( *this )
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXG_GUEST_VIRTUALGPU_VMBUS *)this);
  v13 = 0LL;
  v11.Buffer = (wchar_t *)v22;
  v12 = *(_QWORD *)((char *)a3 + 28);
  v15 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelOpened;
  v16 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelClosed;
  v17 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelSuspend;
  v18 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelStarted;
  v19 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelPostStarted;
  v6 = *((_QWORD *)a3 + 2);
  v22[0] = *(_OWORD *)L"DXGK_VirtualGpu";
  *(_QWORD *)&v11.Length = 2097182LL;
  v22[1] = *(_OWORD *)L"tualGpu";
  v14[0] = 1;
  v14[1] = 48;
  v7 = *(struct _DEVICE_OBJECT **)(v6 + 216);
  v20 = (struct _GUID)v12;
  v21 = (struct _GUID)DxgkPerVirtualGpuVmBusChannelType;
  v8 = CreateServerVmBusChannel(
         a2,
         a3,
         v7,
         &v21,
         &v20,
         &v11,
         (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v14,
         (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelProcessPacket,
         (void (*)(struct VMBCHANNEL__ *, unsigned int))CompositionSurfaceObject::SetPaired,
         0,
         this);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry1(2LL, v8);
    WdLogGlobalForLineNumber = 761;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to create VGPU VM bus channel: 0x%I64x",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    this[1] = *this;
    *((_BYTE *)this + 68) = 1;
  }
  return (unsigned int)v9;
}
