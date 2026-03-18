/*
 * XREFs of ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x14020F730
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z @ 0x140207288 (-GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z.c)
 *     ?ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ @ 0x140208300 (-ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ.c)
 *     ??0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x14020F604 (--0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_PARAV::CreateVirtualGpu(
        DXGVIRTUALGPUMANAGER_PARAV *this,
        struct _DXGKARG_CREATEVIRTUALGPU *a2,
        char a3,
        char a4,
        unsigned __int8 a5,
        void *a6)
{
  char v8; // r12
  int TargetPartitionId; // ebx
  struct DXGPROCESS *Current; // rsi
  ULONG PartitionId; // edx
  NTSTATUS v12; // eax
  __int64 v13; // r9
  __int64 v14; // rdi
  _DWORD *v15; // r15
  NTSTATUS v17; // eax
  __int64 v18; // r9
  _QWORD *v19; // rdi
  DXGK_VIRTUAL_GPU_PARAV *v20; // rax
  DXGK_VIRTUAL_GPU_PARAV *v21; // rax
  DXGK_VIRTUAL_GPU_PARAV *v22; // rbx
  ULONG v23; // r12d
  char *v24; // rsi
  char *v25; // r14
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned int v32; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v33; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  struct _LUID Luid; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h]
  struct DXGADAPTER *v37; // [rsp+78h] [rbp-88h]
  _BYTE v38[32]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-60h] BYREF
  int v40; // [rsp+A8h] [rbp-58h]
  const wchar_t *v41; // [rsp+B0h] [rbp-50h]
  unsigned int *v42; // [rsp+B8h] [rbp-48h]
  int v43; // [rsp+C0h] [rbp-40h]
  unsigned int *v44; // [rsp+C8h] [rbp-38h]
  int v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  int v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  __int128 v49; // [rsp+F0h] [rbp-10h]
  __int128 v50; // [rsp+100h] [rbp+0h]
  _BYTE v51[144]; // [rsp+110h] [rbp+10h] BYREF

  Handle = a6;
  v8 = 0;
  v37 = *(struct DXGADAPTER **)(*((_QWORD *)this + 4) + 16LL);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v51, v37, 0LL);
  TargetPartitionId = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v51, 0LL);
  if ( TargetPartitionId < 0 )
    goto LABEL_25;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 907;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pProcess != nullptr", 907LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v38, (struct _KTHREAD **)this + 5);
  PartitionId = a2->PartitionId;
  v33 = 0xFFFF;
  TargetPartitionId = DXGVIRTUALGPUMANAGER::GetTargetPartitionId(this, PartitionId, &v33);
  if ( TargetPartitionId < 0 )
  {
LABEL_24:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
LABEL_25:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v51);
    return (unsigned int)TargetPartitionId;
  }
  Luid = 0LL;
  v12 = ZwAllocateLocallyUniqueId(&Luid);
  v14 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry1(2LL, v12);
    WdLogGlobalForLineNumber = 922;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to allocate LUID for virtual GPU, Status: 0x%I64x",
      v14,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_9:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v51);
    return (unsigned int)v14;
  }
  *((_DWORD *)Current + 102) |= 0x40u;
  v15 = (_DWORD *)operator new(0x10uLL, 0x4B677844u, 256LL, v13);
  if ( !v15 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 943;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Not enough memory to allocate the DXGSHAREDVGPUOBJECT for handle tracking.",
      943LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v14) = -1073741801;
    goto LABEL_9;
  }
  Object = 0LL;
  v17 = ObReferenceObjectByHandle(Handle, 0x20000u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
  v19 = Object;
  TargetPartitionId = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry1(3LL, v17);
    WdLogGlobalForLineNumber = 952;
    goto LABEL_22;
  }
  v8 = 1;
  if ( *((_QWORD *)Object + 4) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 961;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The device file handle to bind to the new vGPU has already been bound to some other object.",
      961LL,
      0LL,
      0LL,
      0LL,
      0LL);
    TargetPartitionId = -1073741816;
    goto LABEL_22;
  }
  v20 = (DXGK_VIRTUAL_GPU_PARAV *)operator new(0x188uLL, 0x4B677844u, 64LL, v18);
  if ( !v20
    || (v21 = DXGK_VIRTUAL_GPU_PARAV::DXGK_VIRTUAL_GPU_PARAV(v20, *((struct ADAPTER_RENDER **)this + 4)),
        (v22 = v21) == 0LL) )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 969;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Not enough memory to allocate the DXGK_VIRTUAL_GPU_PARAV for vGPU tracking.",
      969LL,
      0LL,
      0LL,
      0LL,
      0LL);
    TargetPartitionId = -1073741801;
LABEL_22:
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
    if ( v8 )
      ObfDereferenceObject(v19);
    goto LABEL_24;
  }
  v23 = v33;
  *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v33) = v21;
  *((_BYTE *)v21 + 153) = a3;
  *((_BYTE *)v21 + 154) = a4;
  *((_BYTE *)v21 + 155) = a5;
  *((_QWORD *)v21 + 11) = Current;
  v24 = (char *)this + 72;
  *((_BYTE *)v21 + 152) = 1;
  *((_DWORD *)v21 + 6) = v23;
  *(_OWORD *)((char *)v21 + 36) = DXGK_VRD_UMED_CLASID;
  *(struct _LUID *)((char *)v21 + 28) = Luid;
  *(_QWORD *)v15 = v37;
  v15[2] = v23;
  ++*((_DWORD *)this + 4);
  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALGPUMANAGER_PARAV *)((char *)this + 72));
  v25 = (char *)this + 104;
  v26 = (_QWORD *)((char *)v22 + 120);
  v27 = *(_QWORD *)v25;
  if ( *(char **)(*(_QWORD *)v25 + 8LL) != v25 )
    __fastfail(3u);
  *v26 = v27;
  *((_QWORD *)v22 + 16) = v25;
  *(_QWORD *)(v27 + 8) = v26;
  *(_QWORD *)v25 = v26;
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v24 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v24, 0LL);
  KeLeaveCriticalRegion();
  v32 = 0x2000;
  v39 = 0LL;
  v41 = L"GuestIoSpaceSizeInMb";
  v40 = 288;
  v42 = &v32;
  v43 = 67108868;
  v44 = &v32;
  v45 = 4;
  v46 = 0LL;
  v47 = 0;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Paravirtualization", &v39, 0LL, 0LL) >= 0 )
    *((_QWORD *)DXGGLOBAL::GetGlobal() + 212) = (unsigned __int64)v32 << 20;
  a2->PartitionId = v23;
  v19[4] = v15;
  *((_QWORD *)v22 + 20) = v19;
  ObfDereferenceObject(v19);
  DXGK_VIRTUAL_GPU::ReportState(v22, v28, v29);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v51);
  return 0LL;
}
