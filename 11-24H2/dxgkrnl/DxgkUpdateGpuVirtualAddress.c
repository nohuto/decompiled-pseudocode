/*
 * XREFs of DxgkUpdateGpuVirtualAddress @ 0x1402F7A50
 * Callers:
 *     ?VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140231660 (-VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14000E830 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140012E50 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140023750 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002BEF0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x14002D4AC (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DD50 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DE40 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002FE40 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x140031454 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x140034E08 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x14003893C (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402F8D90 (--0DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1402F8DA0 (-GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x1402F8E44 (-GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1402F9470 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1402F94BC (-GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@@Z @ 0x140403CB0 (-VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT.c)
 */

__int64 __fastcall DxgkUpdateGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_UPDATEGPUVIRTUALADDRESS *v3; // rdi
  char CurrentThreadPreviousMode; // si
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r13
  _D3DKMT_UPDATEGPUVIRTUALADDRESS *v7; // r15
  struct DXGDEVICE *v8; // r14
  DXGCONTEXT *v9; // rsi
  struct DXGDEVICE *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  int v13; // eax
  unsigned int updated; // edi
  __int64 v15; // r14
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  void *v18; // rcx
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *Operations; // rdx
  ULONG64 v20; // r8
  char *v21; // r8
  int v22; // r9d
  UINT v23; // ecx
  UINT NumOperations; // r10d
  __int64 v25; // rax
  bool v26; // cf
  unsigned __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rcx
  DXGALLOCATIONREFERENCE *v30; // rax
  __int64 v31; // r14
  DXGALLOCATIONREFERENCE *v32; // r13
  unsigned __int64 v33; // rax
  char *v34; // rax
  unsigned int v35; // r8d
  int v36; // r10d
  UINT v37; // edx
  char *v38; // r11
  DXGALLOCATIONREFERENCE *v39; // rcx
  struct DXGDEVICE *v40; // rax
  unsigned int v41; // r9d
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  __int64 v43; // r8
  unsigned __int64 v44; // rax
  int v45; // edx
  int v46; // edx
  __int64 v47; // rcx
  __int64 v48; // r8
  struct DXGGLOBAL *Global; // rax
  unsigned int v51; // ecx
  struct _KTHREAD *v52; // r8
  int v53; // edx
  DXGPUSHLOCK *v54; // rax
  struct DXGDEVICE *v55; // rdx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // r8
  void *v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rcx
  __int64 v64; // r8
  NTSTATUS v65; // eax
  int v66; // eax
  struct DXGDEVICE *v67; // [rsp+50h] [rbp-218h] BYREF
  void *v68; // [rsp+58h] [rbp-210h]
  int v69; // [rsp+60h] [rbp-208h] BYREF
  __int64 v70; // [rsp+68h] [rbp-200h]
  char v71; // [rsp+70h] [rbp-1F8h]
  char v72; // [rsp+78h] [rbp-1F0h]
  unsigned int v73; // [rsp+7Ch] [rbp-1ECh]
  DXGDEVICESYNCOBJECT *v74; // [rsp+80h] [rbp-1E8h]
  unsigned int v75; // [rsp+88h] [rbp-1E0h]
  DXGPUSHLOCK *v76; // [rsp+90h] [rbp-1D8h]
  DXGALLOCATIONREFERENCE *v77; // [rsp+98h] [rbp-1D0h]
  struct VIDMM_COMPANION_CONTEXT *VidMmCompanionContext; // [rsp+A0h] [rbp-1C8h]
  struct DXGDEVICE *v79; // [rsp+A8h] [rbp-1C0h] BYREF
  char v80; // [rsp+B0h] [rbp-1B8h]
  PVOID Object; // [rsp+B8h] [rbp-1B0h] BYREF
  char v82[8]; // [rsp+C0h] [rbp-1A8h] BYREF
  char v83; // [rsp+C8h] [rbp-1A0h]
  _BYTE v84[16]; // [rsp+D0h] [rbp-198h] BYREF
  __int64 v85; // [rsp+E0h] [rbp-188h]
  _BYTE v86[16]; // [rsp+E8h] [rbp-180h] BYREF
  struct _KTHREAD **v87; // [rsp+F8h] [rbp-170h]
  struct DXGDEVICE *v88; // [rsp+100h] [rbp-168h] BYREF
  struct DXGDEVICE *v89; // [rsp+108h] [rbp-160h]
  struct DXGDEVICE *v90; // [rsp+110h] [rbp-158h]
  DXGCONTEXT *v91; // [rsp+118h] [rbp-150h] BYREF
  _BYTE v92[24]; // [rsp+120h] [rbp-148h] BYREF
  struct _EX_RUNDOWN_REF *v93; // [rsp+138h] [rbp-130h] BYREF
  char *v94; // [rsp+140h] [rbp-128h]
  signed __int64 v95; // [rsp+148h] [rbp-120h]
  _D3DKMT_UPDATEGPUVIRTUALADDRESS v96; // [rsp+150h] [rbp-118h] BYREF
  _BYTE v97[160]; // [rsp+190h] [rbp-D8h] BYREF

  v3 = (_D3DKMT_UPDATEGPUVIRTUALADDRESS *)a1;
  v69 = -1;
  v70 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v71 = 1;
    v69 = 2106;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2106);
  }
  else
  {
    v71 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v69, 2106);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v72 = CurrentThreadPreviousMode;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5);
  v87 = Current;
  if ( !Current )
  {
    updated = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 13578;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_64;
  }
  memset(&v96, 0, sizeof(v96));
  v7 = &v96;
  Object = &v96;
  if ( CurrentThreadPreviousMode == 1 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_UPDATEGPUVIRTUALADDRESS *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v96, v3, 0x38uLL);
  }
  else
  {
    v7 = v3;
    Object = v3;
  }
  if ( !v7->NumOperations )
  {
    updated = -1073741811;
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 13605;
    goto LABEL_64;
  }
  v88 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v67, v7->hDevice, Current, &v88);
  v8 = v88;
  v89 = v88;
  if ( !v88 )
  {
    updated = -1073741811;
    WdLogSingleEntry2(2LL, v7->hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 13613;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v7->hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_69;
  }
  v91 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v84, v7->hContext, Current, &v91, 0, 1);
  v9 = v91;
  if ( !v91 )
  {
    updated = -1073741811;
    WdLogSingleEntry3(3LL, Current, v7->hContext, -1073741811LL);
    WdLogGlobalForLineNumber = 13622;
    goto LABEL_68;
  }
  v10 = (struct DXGDEVICE *)*((_QWORD *)v91 + 2);
  if ( v10 != v8 )
  {
    updated = -1073741811;
    WdLogSingleEntry3(2LL, v10, v8, -1073741811LL);
    WdLogGlobalForLineNumber = 13629;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Context device 0x%p does not match user provided device 0x%p, returning 0x%I64x",
      *((_QWORD *)v9 + 2),
      (__int64)v8,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_68;
  }
  v11 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL);
  if ( *(_BYTE *)(v11 + 209) )
  {
    updated = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateGpuVirtualAddress(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(v11 + 4664),
                (struct DXGPROCESS *)Current,
                *((_DWORD *)v8 + 118),
                *((_DWORD *)v91 + 7),
                v7);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v84);
    if ( v67 )
    {
LABEL_62:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v67 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v67 + 2), v67);
    }
LABEL_64:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69);
    if ( v71 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v47, (__int64)&EventProfilerExit, v48, v69);
    return updated;
  }
  v79 = v8;
  v80 = 0;
  DXGDEVICEACCESSLOCKSHARED::Acquire((DXGDEVICEACCESSLOCKSHARED *)&v79);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v92, (struct _KTHREAD **)v9 + 55);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v97, (__int64)v8, 0, v12, 0);
  v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v97, 0LL);
  updated = v13;
  if ( v13 < 0 )
  {
    WdLogSingleEntry1(3LL, v13);
    WdLogGlobalForLineNumber = 13656;
    goto LABEL_67;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 2468LL) & 0x40) == 0 )
  {
    updated = -1073741811;
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 13662;
LABEL_58:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v97);
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v92);
    if ( v79 && v80 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v79 + 17));
      KeLeaveCriticalRegion();
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v84);
    if ( !v67 )
      goto LABEL_64;
    goto LABEL_62;
  }
  if ( !DXGCONTEXT::GetVidSchCompanionContext(v9) )
  {
    updated = -1073741811;
    WdLogSingleEntry3(3LL, Current, v7->hContext, -1073741811LL);
    WdLogGlobalForLineNumber = 13670;
    goto LABEL_67;
  }
  VidMmCompanionContext = DXGCONTEXT::GetVidMmCompanionContext(v9);
  if ( !VidMmCompanionContext )
  {
    updated = -1073741811;
    WdLogSingleEntry3(3LL, Current, v7->hContext, -1073741811LL);
    WdLogGlobalForLineNumber = 13678;
    goto LABEL_58;
  }
  updated = -1073741811;
  LODWORD(v15) = -1073741811;
  v85 = 3221225485LL;
  v75 = -1073741811;
  v77 = 0LL;
  v73 = 0;
  v16 = (unsigned __int64)v7->NumOperations << 6;
  if ( v16 > 0xFFFFFFFF )
  {
    WdLogSingleEntry1(3LL, v7->NumOperations);
    WdLogGlobalForLineNumber = 13695;
LABEL_67:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v97);
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v92);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v79);
LABEL_68:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v84);
LABEL_69:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v67);
    goto LABEL_64;
  }
  v17 = (unsigned __int64)v7->NumOperations << 6;
  if ( !is_mul_ok(v7->NumOperations, 0x40uLL) )
    v17 = -1LL;
  v18 = (void *)operator new[](v17, 0x4B677844u, 256LL);
  v68 = v18;
  if ( !v18 )
  {
    LODWORD(v15) = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 13701;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate memory for D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_95;
  }
  if ( v72 == 1 )
  {
    Operations = v7->Operations;
    v20 = (ULONG64)Operations + (unsigned int)v16;
    if ( v20 < (unsigned __int64)Operations || v20 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v18, Operations, (unsigned int)v16);
  }
  else
  {
    memmove(v18, v7->Operations, (unsigned int)v16);
  }
  v21 = (char *)v68;
  v7->Operations = (D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)v68;
  v22 = 0;
  v23 = 0;
  NumOperations = v7->NumOperations;
  while ( v23 < NumOperations )
  {
    v44 = (unsigned __int64)v23 << 6;
    v45 = *(_DWORD *)&v21[v44];
    if ( v45 && v45 != 3 )
    {
      if ( (unsigned int)(v45 - 1) > 1 )
      {
        WdLogSingleEntry1(3LL, -1073741811LL);
        WdLogGlobalForLineNumber = 13751;
        goto LABEL_109;
      }
    }
    else
    {
      v46 = *(_DWORD *)&v21[v44 + 24];
      if ( !v46 )
      {
        WdLogSingleEntry1(3LL, -1073741811LL);
        WdLogGlobalForLineNumber = 13738;
        goto LABEL_109;
      }
      if ( v22 != v46 )
      {
        ++v73;
        v22 = v46;
      }
    }
    ++v23;
  }
  v25 = 8LL * v73;
  if ( !is_mul_ok(v73, 8uLL) )
    v25 = -1LL;
  v26 = __CFADD__(v25, 8LL);
  v27 = v25 + 8;
  if ( v26 )
    v27 = -1LL;
  v28 = (_QWORD *)operator new[](v27, 0x4B677844u, 256LL);
  if ( v28 )
  {
    v29 = v73;
    *v28 = v73;
    v30 = (DXGALLOCATIONREFERENCE *)(v28 + 1);
    v77 = v30;
    if ( v29 )
    {
      v31 = (unsigned int)v29;
      v32 = v30;
      do
      {
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(v32);
        v32 = (DXGALLOCATIONREFERENCE *)((char *)v32 + 8);
        --v31;
      }
      while ( v31 );
      LODWORD(v15) = v85;
      v30 = v77;
    }
  }
  else
  {
    v30 = 0LL;
    v77 = 0LL;
  }
  if ( !v30 )
  {
    LODWORD(v15) = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 13760;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate DXGALLOCATIONREFERENCE array, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_109:
    v60 = 0LL;
    goto LABEL_93;
  }
  v33 = 8LL * v73;
  if ( !is_mul_ok(v73, 8uLL) )
    v33 = -1LL;
  v34 = (char *)operator new[](v33, 0x4B677844u, 256LL);
  v68 = v34;
  if ( !v34 )
  {
    LODWORD(v15) = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 13768;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate VIDMM_MULTI_ALLOC* array, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_92;
  }
  v35 = 0;
  v36 = -1;
  v37 = 0;
  LODWORD(v85) = 0;
  v38 = v34 - 8;
  v39 = v77;
  v95 = v77 - (DXGALLOCATIONREFERENCE *)v34;
  while ( v37 < v7->NumOperations )
  {
    v40 = (struct DXGDEVICE *)&v7->Operations[(unsigned __int64)v37];
    v90 = v40;
    if ( !*(_DWORD *)v40 || *(_DWORD *)v40 == 3 )
    {
      v41 = *((_DWORD *)v40 + 6);
      if ( v35 != v41 )
      {
        v75 = *((_DWORD *)v40 + 6);
        LODWORD(v74) = v36 + 1;
        v94 = v38 + 8;
        v76 = (DXGALLOCATIONREFERENCE *)((char *)v39 + 8 * v36 + 8);
        AllocationSafe = DXGPROCESS::GetAllocationSafe((__int64)v87, (DXGALLOCATIONREFERENCE *)&v93, v41);
        DXGALLOCATIONREFERENCE::MoveAssign(v76, AllocationSafe);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v93);
        v38 = v94;
        v43 = *(_QWORD *)&v94[v95];
        if ( !v43 )
        {
          WdLogSingleEntry2(3LL, v75, -1073741811LL);
          WdLogGlobalForLineNumber = 13799;
          goto LABEL_92;
        }
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v43 + 8) + 16LL) + 16LL) != *(_QWORD *)(*((_QWORD *)v89 + 2) + 16LL) )
        {
          WdLogSingleEntry3(2LL, v89, v43, -1073741811LL);
          WdLogGlobalForLineNumber = 13807;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
            (__int64)v89,
            *(_QWORD *)v76,
            -1073741811LL,
            0LL,
            0LL);
LABEL_92:
          v60 = v68;
LABEL_93:
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v60);
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7->Operations);
          if ( v77 )
            DXGALLOCATIONREFERENCE::`vector deleting destructor'(v77);
LABEL_95:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v97);
          DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v92);
          if ( v79 && v80 )
          {
            ExReleaseResourceLite(*((PERESOURCE *)v79 + 17));
            KeLeaveCriticalRegion();
          }
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v84);
          if ( v67 && _InterlockedExchangeAdd64((volatile signed __int64 *)v67 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v67 + 2), v67);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69);
          if ( v71 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v61, (__int64)&EventProfilerExit, v62, v69);
          }
          return (unsigned int)v15;
        }
        *(_QWORD *)v94 = *(_QWORD *)(v43 + 24);
        v40 = v90;
        v39 = v77;
        v37 = v85;
        v35 = v75;
        v36 = (int)v74;
      }
      *((_DWORD *)v40 + 6) = v36;
    }
    LODWORD(v85) = ++v37;
  }
  v76 = (DXGPUSHLOCK *)(v87 + 31);
  while ( 1 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v82, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v82);
    LODWORD(v74) = v7->hFenceObject;
    DXGPUSHLOCK::AcquireShared(v76);
    v51 = ((unsigned int)v74 >> 6) & 0xFFFFFF;
    if ( v51 < *((_DWORD *)v87 + 74) )
    {
      v52 = v87[35];
      v53 = *((_DWORD *)v52 + 4 * v51 + 2);
      if ( (((unsigned int)v74 >> 25) & 0x60) == (v53 & 0x60) && (v53 & 0x2000) == 0 && (v53 & 0x1F) != 0 )
      {
        if ( (*((_BYTE *)v52 + 16 * (((unsigned __int64)(unsigned int)v74 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 0xB )
        {
          v74 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)v52 + 2 * (((unsigned __int64)(unsigned int)v74 >> 6) & 0xFFFFFF));
          goto LABEL_77;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v74 = 0LL;
LABEL_77:
    v54 = v76;
    _InterlockedAdd((volatile signed __int32 *)v76 + 4, 0xFFFFFFFF);
    ExReleasePushLockSharedEx(v54, 0LL);
    KeLeaveCriticalRegion();
    if ( !v74 )
    {
      WdLogSingleEntry2(3LL, v7->hFenceObject, -1073741811LL);
      WdLogGlobalForLineNumber = 13842;
      if ( v83 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v82);
      goto LABEL_92;
    }
    v55 = (struct DXGDEVICE *)*((_QWORD *)v74 + 2);
    v90 = v88;
    if ( v55 != v88 )
    {
      WdLogSingleEntry3(2LL, v55, v88, -1073741811LL);
      WdLogGlobalForLineNumber = 13849;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Monitored fence device 0x%p does not match user provided device 0x%p, returning 0x%I64x",
        *((_QWORD *)v74 + 2),
        (__int64)v90,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_150;
    }
    DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v86, *((struct DXGSYNCOBJECT **)v74 + 4));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v86);
    VidSchSyncObject = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(v74);
    Object = 0LL;
    v57 = (*(__int64 (__fastcall **)(_QWORD, _D3DKMT_UPDATEGPUVIRTUALADDRESS *, struct VIDMM_COMPANION_CONTEXT *, _QWORD, void *, struct _VIDSCH_SYNC_OBJECT *, PVOID *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v89 + 2) + 760LL) + 8LL) + 960LL))(
            *(_QWORD *)(*((_QWORD *)v89 + 2) + 768LL),
            v7,
            VidMmCompanionContext,
            v73,
            v68,
            VidSchSyncObject,
            &Object);
    LODWORD(v15) = v57;
    if ( v57 != -1071775486 )
      break;
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v97);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v86);
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v82);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v63, (__int64)&EventBlockThread, v64, 68);
    v65 = KeWaitForSingleObject(Object, UserRequest, 0, 1u, 0LL);
    v15 = v65;
    if ( !v65 )
      KeReleaseSemaphore((PRKSEMAPHORE)Object, 0, 1, 0);
    if ( PsIsThreadTerminating(KeGetCurrentThread()) )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 13896;
      LODWORD(v15) = -1073741130;
LABEL_148:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v86);
LABEL_150:
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v82);
      goto LABEL_92;
    }
    if ( (_DWORD)v15 )
    {
      WdLogSingleEntry1(3LL, v15);
      WdLogGlobalForLineNumber = 13903;
      goto LABEL_148;
    }
    v66 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v97, 0LL);
    LODWORD(v15) = v66;
    if ( v66 < 0 )
    {
      WdLogSingleEntry1(3LL, v66);
      WdLogGlobalForLineNumber = 13913;
      goto LABEL_148;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v86);
    if ( v83 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v82);
  }
  if ( v57 < 0 )
  {
    WdLogSingleEntry1(3LL, v57);
    WdLogGlobalForLineNumber = 13920;
    goto LABEL_148;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v86);
  if ( v83 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v82);
  DXGALLOCATIONREFERENCE::`vector deleting destructor'(v77);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v97);
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v92);
  if ( v79 && v80 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)v79 + 17));
    KeLeaveCriticalRegion();
  }
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v84);
  if ( v67 && _InterlockedExchangeAdd64((volatile signed __int64 *)v67 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v67 + 2), v67);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69);
  if ( v71 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v58, (__int64)&EventProfilerExit, v59, v69);
  return 0LL;
}
