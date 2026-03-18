/*
 * XREFs of ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x14021BA68
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x140192624 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DpReadDeviceSpace @ 0x140042CA0 (DpReadDeviceSpace.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x14021B130 (-CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHA.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x14021C1B0 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::CreateVmBusChannel(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGADAPTER *a2)
{
  struct _KEVENT *v3; // rcx
  struct _KEVENT *v5; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rsi
  struct _DEVICE_OBJECT *v10; // rdx
  struct _GUID v11; // xmm0
  int v12; // eax
  void *v13; // rcx
  NTSTATUS v14; // eax
  void (*v15)(struct VMBCHANNEL__ *, unsigned int); // [rsp+38h] [rbp-81h]
  ULONG v16; // [rsp+50h] [rbp-69h] BYREF
  struct _UNICODE_STRING v17; // [rsp+58h] [rbp-61h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+68h] [rbp-51h] BYREF
  _DWORD v19[2]; // [rsp+70h] [rbp-49h] BYREF
  __int64 (__fastcall *v20)(struct VMBCHANNEL__ *); // [rsp+78h] [rbp-41h]
  void (__fastcall *v21)(struct VMBCHANNEL__ *); // [rsp+80h] [rbp-39h]
  void (__fastcall *v22)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-31h]
  void (__fastcall *v23)(struct VMBCHANNEL__ *); // [rsp+90h] [rbp-29h]
  void (__fastcall *v24)(struct VMBCHANNEL__ *); // [rsp+98h] [rbp-21h]
  struct _GUID v25; // [rsp+A0h] [rbp-19h] BYREF
  struct _GUID v26; // [rsp+B0h] [rbp-9h] BYREF
  struct _GUID v27; // [rsp+C0h] [rbp+7h] BYREF
  _OWORD v28[2]; // [rsp+D0h] [rbp+17h] BYREF
  int v29; // [rsp+F0h] [rbp+37h]

  *((_QWORD *)this + 9) = a2;
  v3 = (struct _KEVENT *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    KeClearEvent(v3);
  }
  else
  {
    v5 = (struct _KEVENT *)operator new(0x18uLL, 0x4B677844u, 64LL);
    *((_QWORD *)this + 7) = v5;
    if ( !v5 )
      return 3221225495LL;
    KeInitializeEvent(v5, NotificationEvent, 0);
  }
  v7 = *((_QWORD *)a2 + 27);
  v29 = *(_DWORD *)L"t";
  *(_QWORD *)&v17.Length = 2359330LL;
  v17.Buffer = (wchar_t *)v28;
  v20 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelOpened;
  v21 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelClosed;
  v22 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelSuspend;
  v23 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelStarted;
  v24 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelPostStarted;
  v28[0] = *(_OWORD *)L"DXGK_AdapterGuest";
  v28[1] = *(_OWORD *)L"pterGuest";
  v19[0] = 1;
  v19[1] = 48;
  v27 = 0LL;
  v16 = 0;
  v8 = DpReadDeviceSpace(v7, 0LL, &v27, 0xC0u, 0x10u, &v16);
  v9 = v8;
  if ( v8 >= 0 && v16 == 16 )
  {
    v10 = (struct _DEVICE_OBJECT *)*((_QWORD *)a2 + 27);
    v11 = v27;
    *(_QWORD *)((char *)a2 + 4772) = *(_QWORD *)&v27.Data1;
    v25 = v11;
    v26 = (struct _GUID)DxgkPerVirtualGpuVmBusChannelType;
    v12 = CreateClientVmBusChannel(
            (__int64)a2,
            v10,
            &v26,
            &v25,
            &v17,
            (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v19,
            (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))CompositionSurfaceObject::SetPaired,
            v15,
            (struct VMBCHANNEL__ **)this);
    v9 = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry1(2LL, v12);
      WdLogGlobalForLineNumber = 13456;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to create the guest VM bus channel. Status: 0x%I64x",
        v9,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v13 = (void *)*((_QWORD *)this + 7);
      Timeout.QuadPart = -80000000LL;
      v14 = KeWaitForSingleObject(v13, Executive, 0, 0, &Timeout);
      v9 = v14;
      if ( v14 )
      {
        WdLogSingleEntry1(2LL, v14);
        WdLogGlobalForLineNumber = 13450;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed waiting for VM bus channel to start: 0x%I64x",
          v9,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v9) = -1073741823;
      }
    }
    *((_QWORD *)this + 1) = *(_QWORD *)this;
  }
  else
  {
    WdLogSingleEntry1(2LL, v8);
    WdLogGlobalForLineNumber = 13422;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to create VM bus channel instance ID: 0x%I64x",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (int)v9 >= 0 )
    *((_BYTE *)this + 68) = 1;
  else
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel(this);
  return (unsigned int)v9;
}
