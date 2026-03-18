/*
 * XREFs of ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403A7F70
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1400515A8 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?SetVirtualGpu@DXGDEVICE@@QEAAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x140062F20 (-SetVirtualGpu@DXGDEVICE@@QEAAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x14039AA10 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1403A4C78 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateDevice(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  char v7; // di
  __int64 v8; // r15
  char v9; // al
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // r14
  int v13; // eax
  DXGDEVICE *v14; // rbx
  struct VMBPACKETCOMPLETION__ *v15; // rcx
  __int64 v16; // rbx
  struct DXGADAPTER **v17; // rdx
  int v18; // eax
  struct VMBPACKETCOMPLETION__ *v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // [rsp+40h] [rbp-C0h]
  D3DKMT_HANDLE hDevice; // [rsp+60h] [rbp-A0h] BYREF
  struct DXG_SET_GUEST_DATA *v23; // [rsp+68h] [rbp-98h] BYREF
  DXGDEVICE *v24; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v25[24]; // [rsp+78h] [rbp-88h] BYREF
  _D3DKMT_CREATEDEVICE v26; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v27[144]; // [rsp+D0h] [rbp-30h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v25,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1031;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      1031LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_3:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
    return 0;
  }
  v3 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v3 )
    goto LABEL_3;
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 104LL) + 160LL;
  v5 = operator new(0x10uLL, 0x4B677844u, 64LL);
  if ( !v5 )
  {
    v23 = 0LL;
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1043;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to allocate DXG_SET_GUEST_DATA",
      1043LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_22;
  }
  v6 = *(_QWORD *)(v3 + 32);
  *(_QWORD *)v5 = v4;
  v7 = 1;
  *(_QWORD *)(v5 + 8) = v6;
  v8 = *((_QWORD *)a1 + 11);
  v23 = (struct DXG_SET_GUEST_DATA *)v5;
  v9 = *(_BYTE *)(v8 + 408);
  if ( *(_BYTE *)(v3 + 28) )
  {
    if ( (v9 & 1) == 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1051;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"CDD device must be created in CSRSS process context",
        1051LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_20:
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v23);
LABEL_22:
      v7 = 0;
      goto LABEL_23;
    }
    v10 = v8 + 216;
    v11 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL) + 3128LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    v12 = v11 + 48;
    *(_QWORD *)(v10 + 8) = KeGetCurrentThread();
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11 + 48, 0LL);
    *(_QWORD *)(v11 + 56) = KeGetCurrentThread();
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v27,
      *(struct DXGADAPTER *const *)(*((_QWORD *)a1 + 10) + 16LL),
      0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v27, 0LL) >= 0
      && (*(_DWORD *)(*((_QWORD *)a1 + 12) + 408LL) & 0x800) == 0 )
    {
      v21 = *((_QWORD *)a1 + 10);
      v24 = 0LL;
      v13 = ADAPTER_RENDER::CreateDevice((DXGADAPTER **)v11, &v24, 0, 2, 0LL, 0, 0, 1, v21, &v23, 0);
      if ( v13 >= 0 )
      {
        v14 = v24;
        DXGDEVICE::SetVirtualGpu(v24, *((struct DXGK_VIRTUAL_GPU_PARAV **)a1 + 10));
        v15 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
        hDevice = *((_DWORD *)v14 + 117);
        VmBusCompletePacket(v15, &hDevice, 4u);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
        *(_QWORD *)(v12 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v12, 0LL);
        KeLeaveCriticalRegion();
        *(_QWORD *)(v10 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v10, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_23;
      }
      v16 = v13;
      WdLogSingleEntry1(2LL, v13);
      WdLogGlobalForLineNumber = 1090;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to create CDD device: 0x%I64x",
        v16,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
    *(_QWORD *)(v12 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v12, 0LL);
    KeLeaveCriticalRegion();
    *(_QWORD *)(v10 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_20;
  }
  if ( (v9 & 1) != 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1096;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"CSRSS process context can only create CDD devices",
      1096LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_20;
  }
  memset(&v26, 0, sizeof(v26));
  v17 = (struct DXGADAPTER **)*((_QWORD *)a1 + 10);
  v26.Flags = *(D3DKMT_CREATEDEVICEFLAGS *)(v3 + 24);
  v18 = DxgkCreateDeviceImpl(&v26, v17, &v23, 0);
  if ( v18 < 0 )
  {
    v20 = v18;
    WdLogSingleEntry1(2LL, v18);
    WdLogGlobalForLineNumber = 1112;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to create device: 0x%I64x",
      v20,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_20;
  }
  v19 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
  hDevice = v26.hDevice;
  VmBusCompletePacket(v19, &hDevice, 4u);
LABEL_23:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
  return v7;
}
