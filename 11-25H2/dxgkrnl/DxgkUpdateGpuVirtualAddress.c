/*
 * XREFs of DxgkUpdateGpuVirtualAddress @ 0x14032B360
 * Callers:
 *     ?VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022AD70 (-VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140016050 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14001DE10 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140022F40 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002B770 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x14002CDC8 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D5E0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D6D0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002F800 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x140031534 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034400 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x140034ED4 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x140038CAC (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x140307940 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@@Z @ 0x14032AE48 (-VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14032C6A0 (--0DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x14032C6B0 (-GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x14032C754 (-GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ.c)
 *     ?GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x14032CE90 (-GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 */

__int64 __fastcall DxgkUpdateGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_UPDATEGPUVIRTUALADDRESS *v3; // rdi
  char CurrentThreadPreviousMode; // si
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r13
  _D3DKMT_UPDATEGPUVIRTUALADDRESS *v7; // r15
  struct DXGDEVICE *v8; // r14
  DXGCONTEXT *v9; // rsi
  struct DXGDEVICE *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  int v13; // eax
  unsigned int updated; // edi
  __int64 v15; // r9
  __int64 v16; // r14
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  void *v19; // rcx
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *Operations; // rdx
  ULONG64 v21; // r8
  char *v22; // r8
  __int64 v23; // r9
  UINT v24; // ecx
  UINT NumOperations; // r10d
  __int64 v26; // rax
  bool v27; // cf
  unsigned __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rcx
  DXGALLOCATIONREFERENCE *v31; // rax
  __int64 v32; // r14
  DXGALLOCATIONREFERENCE *v33; // r13
  unsigned __int64 v34; // rax
  char *v35; // rax
  unsigned int v36; // r8d
  int v37; // r10d
  UINT v38; // edx
  char *v39; // r11
  DXGALLOCATIONREFERENCE *v40; // rcx
  struct DXGDEVICE *v41; // rax
  unsigned int v42; // r9d
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v44; // r8
  unsigned __int64 v45; // rax
  int v46; // edx
  unsigned int v47; // edx
  __int64 v48; // rcx
  __int64 v49; // r8
  struct DXGGLOBAL *Global; // rax
  unsigned int v52; // ecx
  __int64 v53; // r8
  int v54; // edx
  DXGPUSHLOCK *v55; // rax
  struct DXGDEVICE *v56; // rdx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // r8
  void *v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rcx
  __int64 v65; // r8
  NTSTATUS v66; // eax
  int v67; // eax
  struct DXGDEVICE *v68; // [rsp+50h] [rbp-218h] BYREF
  void *v69; // [rsp+58h] [rbp-210h]
  int v70; // [rsp+60h] [rbp-208h] BYREF
  __int64 v71; // [rsp+68h] [rbp-200h]
  char v72; // [rsp+70h] [rbp-1F8h]
  char v73; // [rsp+78h] [rbp-1F0h]
  unsigned int v74; // [rsp+7Ch] [rbp-1ECh]
  DXGDEVICESYNCOBJECT *v75; // [rsp+80h] [rbp-1E8h]
  unsigned int v76; // [rsp+88h] [rbp-1E0h]
  DXGPUSHLOCK *v77; // [rsp+90h] [rbp-1D8h]
  DXGALLOCATIONREFERENCE *v78; // [rsp+98h] [rbp-1D0h]
  struct VIDMM_COMPANION_CONTEXT *VidMmCompanionContext; // [rsp+A0h] [rbp-1C8h]
  struct DXGDEVICE *v80; // [rsp+A8h] [rbp-1C0h] BYREF
  char v81; // [rsp+B0h] [rbp-1B8h]
  PVOID Object; // [rsp+B8h] [rbp-1B0h] BYREF
  char v83[8]; // [rsp+C0h] [rbp-1A8h] BYREF
  char v84; // [rsp+C8h] [rbp-1A0h]
  _BYTE v85[16]; // [rsp+D0h] [rbp-198h] BYREF
  __int64 v86; // [rsp+E0h] [rbp-188h]
  _BYTE v87[16]; // [rsp+E8h] [rbp-180h] BYREF
  struct DXGPROCESS *v88; // [rsp+F8h] [rbp-170h]
  struct DXGDEVICE *v89; // [rsp+100h] [rbp-168h] BYREF
  struct DXGDEVICE *v90; // [rsp+108h] [rbp-160h]
  struct DXGDEVICE *v91; // [rsp+110h] [rbp-158h]
  DXGCONTEXT *v92; // [rsp+118h] [rbp-150h] BYREF
  _BYTE v93[24]; // [rsp+120h] [rbp-148h] BYREF
  struct _EX_RUNDOWN_REF *v94; // [rsp+138h] [rbp-130h] BYREF
  char *v95; // [rsp+140h] [rbp-128h]
  signed __int64 v96; // [rsp+148h] [rbp-120h]
  _D3DKMT_UPDATEGPUVIRTUALADDRESS v97; // [rsp+150h] [rbp-118h] BYREF
  _BYTE v98[160]; // [rsp+190h] [rbp-D8h] BYREF

  v3 = (_D3DKMT_UPDATEGPUVIRTUALADDRESS *)a1;
  v70 = -1;
  v71 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v72 = 1;
    v70 = 2106;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2106);
  }
  else
  {
    v72 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v70, 2106);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v73 = CurrentThreadPreviousMode;
  Current = DXGPROCESS::GetCurrent(v5);
  v88 = Current;
  if ( !Current )
  {
    updated = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 13512;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_64;
  }
  memset(&v97, 0, sizeof(v97));
  v7 = &v97;
  Object = &v97;
  if ( CurrentThreadPreviousMode == 1 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_UPDATEGPUVIRTUALADDRESS *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v97, v3, 0x38uLL);
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
    WdLogGlobalForLineNumber = 13539;
    goto LABEL_64;
  }
  v89 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v68, v7->hDevice, Current, &v89);
  v8 = v89;
  v90 = v89;
  if ( !v89 )
  {
    updated = -1073741811;
    WdLogSingleEntry2(2LL, v7->hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 13547;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v7->hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_69;
  }
  v92 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v85, v7->hContext, Current, &v92, 0, 1);
  v9 = v92;
  if ( !v92 )
  {
    updated = -1073741811;
    WdLogSingleEntry3(3LL, Current, v7->hContext, -1073741811LL);
    WdLogGlobalForLineNumber = 13556;
    goto LABEL_68;
  }
  v10 = (struct DXGDEVICE *)*((_QWORD *)v92 + 2);
  if ( v10 != v8 )
  {
    updated = -1073741811;
    WdLogSingleEntry3(2LL, v10, v8, -1073741811LL);
    WdLogGlobalForLineNumber = 13563;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
                Current,
                *((_DWORD *)v8 + 118),
                *((_DWORD *)v92 + 7),
                v7);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v85);
    if ( v68 )
    {
LABEL_62:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v68 + 2), v68);
    }
LABEL_64:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v70);
    if ( v72 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v48, (__int64)&EventProfilerExit, v49, v70);
    return updated;
  }
  v80 = v8;
  v81 = 0;
  DXGDEVICEACCESSLOCKSHARED::Acquire((DXGDEVICEACCESSLOCKSHARED *)&v80);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v93, (struct _KTHREAD **)v9 + 55);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v98, (__int64)v8, 0, v12, 0);
  v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v98, 0LL);
  updated = v13;
  if ( v13 < 0 )
  {
    WdLogSingleEntry1(3LL, v13);
    WdLogGlobalForLineNumber = 13590;
    goto LABEL_67;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 2468LL) & 0x40) == 0 )
  {
    updated = -1073741811;
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 13596;
LABEL_58:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v98);
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v93);
    if ( v80 && v81 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v80 + 17));
      KeLeaveCriticalRegion();
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v85);
    if ( !v68 )
      goto LABEL_64;
    goto LABEL_62;
  }
  if ( !DXGCONTEXT::GetVidSchCompanionContext(v9) )
  {
    updated = -1073741811;
    WdLogSingleEntry3(3LL, Current, v7->hContext, -1073741811LL);
    WdLogGlobalForLineNumber = 13604;
    goto LABEL_67;
  }
  VidMmCompanionContext = DXGCONTEXT::GetVidMmCompanionContext(v9);
  if ( !VidMmCompanionContext )
  {
    updated = -1073741811;
    WdLogSingleEntry3(3LL, Current, v7->hContext, -1073741811LL);
    WdLogGlobalForLineNumber = 13612;
    goto LABEL_58;
  }
  updated = -1073741811;
  LODWORD(v16) = -1073741811;
  v86 = 3221225485LL;
  v76 = -1073741811;
  v78 = 0LL;
  v74 = 0;
  v17 = (unsigned __int64)v7->NumOperations << 6;
  if ( v17 > 0xFFFFFFFF )
  {
    WdLogSingleEntry1(3LL, v7->NumOperations);
    WdLogGlobalForLineNumber = 13629;
LABEL_67:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v98);
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v93);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v80);
LABEL_68:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v85);
LABEL_69:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v68);
    goto LABEL_64;
  }
  v18 = (unsigned __int64)v7->NumOperations << 6;
  if ( !is_mul_ok(v7->NumOperations, 0x40uLL) )
    v18 = -1LL;
  v19 = (void *)operator new[](v18, 0x4B677844u, 256LL, v15);
  v69 = v19;
  if ( !v19 )
  {
    LODWORD(v16) = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 13635;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate memory for D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_95;
  }
  if ( v73 == 1 )
  {
    Operations = v7->Operations;
    v21 = (ULONG64)Operations + (unsigned int)v17;
    if ( v21 < (unsigned __int64)Operations || v21 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v19, Operations, (unsigned int)v17);
  }
  else
  {
    memmove(v19, v7->Operations, (unsigned int)v17);
  }
  v22 = (char *)v69;
  v7->Operations = (D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)v69;
  v23 = 0LL;
  v24 = 0;
  NumOperations = v7->NumOperations;
  while ( v24 < NumOperations )
  {
    v45 = (unsigned __int64)v24 << 6;
    v46 = *(_DWORD *)&v22[v45];
    if ( v46 && v46 != 3 )
    {
      if ( (unsigned int)(v46 - 1) > 1 )
      {
        WdLogSingleEntry1(3LL, -1073741811LL);
        WdLogGlobalForLineNumber = 13685;
        goto LABEL_109;
      }
    }
    else
    {
      v47 = *(_DWORD *)&v22[v45 + 24];
      if ( !v47 )
      {
        WdLogSingleEntry1(3LL, -1073741811LL);
        WdLogGlobalForLineNumber = 13672;
        goto LABEL_109;
      }
      if ( (_DWORD)v23 != v47 )
      {
        ++v74;
        v23 = v47;
      }
    }
    ++v24;
  }
  v26 = 8LL * v74;
  if ( !is_mul_ok(v74, 8uLL) )
    v26 = -1LL;
  v27 = __CFADD__(v26, 8LL);
  v28 = v26 + 8;
  if ( v27 )
    v28 = -1LL;
  v29 = (_QWORD *)operator new[](v28, 0x4B677844u, 256LL, v23);
  if ( v29 )
  {
    v30 = v74;
    *v29 = v74;
    v31 = (DXGALLOCATIONREFERENCE *)(v29 + 1);
    v78 = v31;
    if ( v30 )
    {
      v32 = (unsigned int)v30;
      v33 = v31;
      do
      {
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(v33);
        v33 = (DXGALLOCATIONREFERENCE *)((char *)v33 + 8);
        --v32;
      }
      while ( v32 );
      LODWORD(v16) = v86;
      v31 = v78;
    }
  }
  else
  {
    v31 = 0LL;
    v78 = 0LL;
  }
  if ( !v31 )
  {
    LODWORD(v16) = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 13694;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate DXGALLOCATIONREFERENCE array, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_109:
    v61 = 0LL;
    goto LABEL_93;
  }
  v34 = 8LL * v74;
  if ( !is_mul_ok(v74, 8uLL) )
    v34 = -1LL;
  v35 = (char *)operator new[](v34, 0x4B677844u, 256LL, v74);
  v69 = v35;
  if ( !v35 )
  {
    LODWORD(v16) = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 13702;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate VIDMM_MULTI_ALLOC* array, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_92;
  }
  v36 = 0;
  v37 = -1;
  v38 = 0;
  LODWORD(v86) = 0;
  v39 = v35 - 8;
  v40 = v78;
  v96 = v78 - (DXGALLOCATIONREFERENCE *)v35;
  while ( v38 < v7->NumOperations )
  {
    v41 = (struct DXGDEVICE *)&v7->Operations[(unsigned __int64)v38];
    v91 = v41;
    if ( !*(_DWORD *)v41 || *(_DWORD *)v41 == 3 )
    {
      v42 = *((_DWORD *)v41 + 6);
      if ( v36 != v42 )
      {
        v76 = *((_DWORD *)v41 + 6);
        LODWORD(v75) = v37 + 1;
        v95 = v39 + 8;
        v77 = (DXGALLOCATIONREFERENCE *)((char *)v40 + 8 * v37 + 8);
        AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                      (__int64)v88,
                                                      (DXGALLOCATIONREFERENCE *)&v94,
                                                      v42);
        DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)v77, AllocationSafe);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v94);
        v39 = v95;
        v44 = *(_QWORD *)&v95[v96];
        if ( !v44 )
        {
          WdLogSingleEntry2(3LL, v76, -1073741811LL);
          WdLogGlobalForLineNumber = 13733;
          goto LABEL_92;
        }
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v44 + 8) + 16LL) + 16LL) != *(_QWORD *)(*((_QWORD *)v90 + 2) + 16LL) )
        {
          WdLogSingleEntry3(2LL, v90, v44, -1073741811LL);
          WdLogGlobalForLineNumber = 13741;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
            (__int64)v90,
            *(_QWORD *)v77,
            -1073741811LL,
            0LL,
            0LL);
LABEL_92:
          v61 = v69;
LABEL_93:
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v61);
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7->Operations);
          if ( v78 )
            DXGALLOCATIONREFERENCE::`vector deleting destructor'(v78);
LABEL_95:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v98);
          DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v93);
          if ( v80 && v81 )
          {
            ExReleaseResourceLite(*((PERESOURCE *)v80 + 17));
            KeLeaveCriticalRegion();
          }
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v85);
          if ( v68 && _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v68 + 2), v68);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v70);
          if ( v72 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v62, (__int64)&EventProfilerExit, v63, v70);
          }
          return (unsigned int)v16;
        }
        *(_QWORD *)v95 = *(_QWORD *)(v44 + 24);
        v41 = v91;
        v40 = v78;
        v38 = v86;
        v36 = v76;
        v37 = (int)v75;
      }
      *((_DWORD *)v41 + 6) = v37;
    }
    LODWORD(v86) = ++v38;
  }
  v77 = (struct DXGPROCESS *)((char *)v88 + 248);
  while ( 1 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v83, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v83);
    LODWORD(v75) = v7->hFenceObject;
    DXGPUSHLOCK::AcquireShared(v77);
    v52 = ((unsigned int)v75 >> 6) & 0xFFFFFF;
    if ( v52 < *((_DWORD *)v88 + 74) )
    {
      v53 = *((_QWORD *)v88 + 35);
      v54 = *(_DWORD *)(v53 + 16LL * v52 + 8);
      if ( (((unsigned int)v75 >> 25) & 0x60) == (v54 & 0x60) && (v54 & 0x2000) == 0 && (v54 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(v53 + 16 * (((unsigned __int64)(unsigned int)v75 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 0xB )
        {
          v75 = *(DXGDEVICESYNCOBJECT **)(v53 + 16 * (((unsigned __int64)(unsigned int)v75 >> 6) & 0xFFFFFF));
          goto LABEL_77;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v75 = 0LL;
LABEL_77:
    v55 = v77;
    _InterlockedAdd((volatile signed __int32 *)v77 + 4, 0xFFFFFFFF);
    ExReleasePushLockSharedEx(v55, 0LL);
    KeLeaveCriticalRegion();
    if ( !v75 )
    {
      WdLogSingleEntry2(3LL, v7->hFenceObject, -1073741811LL);
      WdLogGlobalForLineNumber = 13776;
      if ( v84 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v83);
      goto LABEL_92;
    }
    v56 = (struct DXGDEVICE *)*((_QWORD *)v75 + 2);
    v91 = v89;
    if ( v56 != v89 )
    {
      WdLogSingleEntry3(2LL, v56, v89, -1073741811LL);
      WdLogGlobalForLineNumber = 13783;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Monitored fence device 0x%p does not match user provided device 0x%p, returning 0x%I64x",
        *((_QWORD *)v75 + 2),
        (__int64)v91,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_150;
    }
    DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v87, *((struct DXGSYNCOBJECT **)v75 + 4));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v87);
    VidSchSyncObject = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(v75);
    Object = 0LL;
    v58 = (*(__int64 (__fastcall **)(_QWORD, _D3DKMT_UPDATEGPUVIRTUALADDRESS *, struct VIDMM_COMPANION_CONTEXT *, _QWORD, void *, struct _VIDSCH_SYNC_OBJECT *, PVOID *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v90 + 2) + 760LL) + 8LL) + 960LL))(
            *(_QWORD *)(*((_QWORD *)v90 + 2) + 768LL),
            v7,
            VidMmCompanionContext,
            v74,
            v69,
            VidSchSyncObject,
            &Object);
    LODWORD(v16) = v58;
    if ( v58 != -1071775486 )
      break;
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v98);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v87);
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v83);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v64, (__int64)&EventBlockThread, v65, 68);
    v66 = KeWaitForSingleObject(Object, UserRequest, 0, 1u, 0LL);
    v16 = v66;
    if ( !v66 )
      KeReleaseSemaphore((PRKSEMAPHORE)Object, 0, 1, 0);
    if ( PsIsThreadTerminating(KeGetCurrentThread()) )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 13830;
      LODWORD(v16) = -1073741130;
LABEL_148:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v87);
LABEL_150:
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v83);
      goto LABEL_92;
    }
    if ( (_DWORD)v16 )
    {
      WdLogSingleEntry1(3LL, v16);
      WdLogGlobalForLineNumber = 13837;
      goto LABEL_148;
    }
    v67 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v98, 0LL);
    LODWORD(v16) = v67;
    if ( v67 < 0 )
    {
      WdLogSingleEntry1(3LL, v67);
      WdLogGlobalForLineNumber = 13847;
      goto LABEL_148;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v87);
    if ( v84 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v83);
  }
  if ( v58 < 0 )
  {
    WdLogSingleEntry1(3LL, v58);
    WdLogGlobalForLineNumber = 13854;
    goto LABEL_148;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v87);
  if ( v84 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v83);
  DXGALLOCATIONREFERENCE::`vector deleting destructor'(v78);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v98);
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v93);
  if ( v80 && v81 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)v80 + 17));
    KeLeaveCriticalRegion();
  }
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v85);
  if ( v68 && _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v68 + 2), v68);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v70);
  if ( v72 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v59, (__int64)&EventProfilerExit, v60, v70);
  return 0LL;
}
