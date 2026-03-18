/*
 * XREFs of ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x14021545C
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1401902D4 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DpReadDeviceSpace @ 0x140042EE0 (DpReadDeviceSpace.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x140214B24 (-CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHA.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x140215BBC (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::CreateVmBusChannel(
        struct VMBCHANNEL__ **this,
        struct DXGADAPTER *a2,
        __int64 a3,
        __int64 a4)
{
  struct _KEVENT *v5; // rcx
  struct VMBCHANNEL__ *v7; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rsi
  struct _DEVICE_OBJECT *v12; // rdx
  struct _GUID v13; // xmm0
  int v14; // eax
  struct VMBCHANNEL__ *v15; // rcx
  NTSTATUS v16; // eax
  void (*v17)(struct VMBCHANNEL__ *, unsigned int); // [rsp+38h] [rbp-81h]
  ULONG v18; // [rsp+50h] [rbp-69h] BYREF
  struct _UNICODE_STRING v19; // [rsp+58h] [rbp-61h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+68h] [rbp-51h] BYREF
  _DWORD v21[2]; // [rsp+70h] [rbp-49h] BYREF
  __int64 (__fastcall *v22)(struct VMBCHANNEL__ *); // [rsp+78h] [rbp-41h]
  void (__fastcall *v23)(struct VMBCHANNEL__ *); // [rsp+80h] [rbp-39h]
  void (__fastcall *v24)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-31h]
  void (__fastcall *v25)(struct VMBCHANNEL__ *); // [rsp+90h] [rbp-29h]
  void (__fastcall *v26)(struct VMBCHANNEL__ *); // [rsp+98h] [rbp-21h]
  struct _GUID v27; // [rsp+A0h] [rbp-19h] BYREF
  struct _GUID v28; // [rsp+B0h] [rbp-9h] BYREF
  struct _GUID v29; // [rsp+C0h] [rbp+7h] BYREF
  _OWORD v30[2]; // [rsp+D0h] [rbp+17h] BYREF
  int v31; // [rsp+F0h] [rbp+37h]

  this[9] = a2;
  v5 = (struct _KEVENT *)this[7];
  if ( v5 )
  {
    KeClearEvent(v5);
  }
  else
  {
    v7 = (struct VMBCHANNEL__ *)operator new(0x18uLL, 0x4B677844u, 64LL, a4);
    this[7] = v7;
    if ( !v7 )
      return 3221225495LL;
    KeInitializeEvent((PRKEVENT)v7, NotificationEvent, 0);
  }
  v9 = *((_QWORD *)a2 + 27);
  v31 = *(_DWORD *)L"t";
  *(_QWORD *)&v19.Length = 2359330LL;
  v19.Buffer = (wchar_t *)v30;
  v22 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelOpened;
  v23 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelClosed;
  v24 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelSuspend;
  v25 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelStarted;
  v26 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelPostStarted;
  v30[0] = *(_OWORD *)L"DXGK_AdapterGuest";
  v30[1] = *(_OWORD *)L"pterGuest";
  v21[0] = 1;
  v21[1] = 48;
  v29 = 0LL;
  v18 = 0;
  v10 = DpReadDeviceSpace(v9, 0LL, &v29, 0xC0u, 0x10u, &v18);
  v11 = v10;
  if ( v10 >= 0 && v18 == 16 )
  {
    v12 = (struct _DEVICE_OBJECT *)*((_QWORD *)a2 + 27);
    v13 = v29;
    *(_QWORD *)((char *)a2 + 4772) = *(_QWORD *)&v29.Data1;
    v27 = v13;
    v28 = (struct _GUID)DxgkPerVirtualGpuVmBusChannelType;
    v14 = CreateClientVmBusChannel(
            (__int64)a2,
            v12,
            &v28,
            &v27,
            &v19,
            (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v21,
            (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))CompositionSurfaceObject::SetPaired,
            v17,
            this);
    v11 = v14;
    if ( v14 < 0 )
    {
      WdLogSingleEntry1(2LL, v14);
      WdLogGlobalForLineNumber = 13268;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to create the guest VM bus channel. Status: 0x%I64x",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v15 = this[7];
      Timeout.QuadPart = -80000000LL;
      v16 = KeWaitForSingleObject(v15, Executive, 0, 0, &Timeout);
      v11 = v16;
      if ( v16 )
      {
        WdLogSingleEntry1(2LL, v16);
        WdLogGlobalForLineNumber = 13262;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed waiting for VM bus channel to start: 0x%I64x",
          v11,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v11) = -1073741823;
      }
    }
    this[1] = *this;
  }
  else
  {
    WdLogSingleEntry1(2LL, v10);
    WdLogGlobalForLineNumber = 13234;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to create VM bus channel instance ID: 0x%I64x",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (int)v11 >= 0 )
    *((_BYTE *)this + 68) = 1;
  else
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXG_GUEST_VIRTUALGPU_VMBUS *)this);
  return (unsigned int)v11;
}
