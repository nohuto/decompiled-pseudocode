/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1403506F4
 * Callers:
 *     DxgkOpenResourceFromNtHandleInternal @ 0x140395150 (DxgkOpenResourceFromNtHandleInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x140010F54 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140012080 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002DDD0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x14003A164 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1400415B0 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140047050 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402CCEDC (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x140352CD4 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ??1ENSURE_SHARED_RESOURCE_DEREFERENCE@?1???$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z@QEAA@XZ @ 0x140353E90 (--1ENSURE_SHARED_RESOURCE_DEREFERENCE@-1---$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x140354F2C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x140356384 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 */

__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
        ULONG64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  char CurrentThreadPreviousMode; // r13
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rbx
  void *v9; // r15
  unsigned int *v10; // rsi
  const void *v11; // rdx
  struct DXGDEVICE *v12; // r14
  __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // r13d
  __int64 v16; // r13
  int v17; // eax
  char v18; // r8
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // eax
  void *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // ebx
  int StandardAllocation; // r15d
  char *v29; // rcx
  size_t v30; // r8
  char *v31; // rcx
  size_t v32; // r8
  void *v34; // r13
  _QWORD *v35; // rbx
  void *v36; // rcx
  void *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r14
  ULONG64 v40; // rbx
  void *v41; // rcx
  void *v42; // rcx
  void *v43; // rcx
  unsigned int v44; // ebx
  struct DXGPROCESS *v45; // r13
  unsigned int v46; // r8d
  __int64 v47; // rax
  __int64 v48; // r9
  int v49; // edx
  struct DXGRESOURCE *v50; // rbx
  unsigned int v51; // r8d
  __int64 v52; // rax
  __int64 v53; // r9
  int v54; // edx
  char *v55; // rcx
  size_t v56; // r8
  __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // ecx
  int v60; // edx
  __int64 v61; // r8
  int v62; // ecx
  int v63; // eax
  void *v64; // rbx
  _DWORD *v65; // rcx
  int v66; // eax
  char v67; // [rsp+50h] [rbp-3F8h]
  char v68; // [rsp+51h] [rbp-3F7h]
  int v70; // [rsp+54h] [rbp-3F4h]
  struct DXGDEVICE *v71; // [rsp+58h] [rbp-3F0h] BYREF
  struct DXGDEVICE *v72; // [rsp+60h] [rbp-3E8h] BYREF
  unsigned int v73; // [rsp+68h] [rbp-3E0h]
  void *v74; // [rsp+70h] [rbp-3D8h]
  unsigned int *v75; // [rsp+78h] [rbp-3D0h]
  void *Src; // [rsp+80h] [rbp-3C8h]
  __int64 v77; // [rsp+88h] [rbp-3C0h] BYREF
  __int64 v78; // [rsp+90h] [rbp-3B8h]
  void *v79; // [rsp+98h] [rbp-3B0h]
  _BYTE v80[16]; // [rsp+A0h] [rbp-3A8h] BYREF
  char v81[8]; // [rsp+B0h] [rbp-398h] BYREF
  __int64 v82; // [rsp+B8h] [rbp-390h]
  char v83; // [rsp+C0h] [rbp-388h]
  void *v84; // [rsp+C8h] [rbp-380h]
  DXGSHAREDRESOURCE *v85; // [rsp+D0h] [rbp-378h] BYREF
  _QWORD *v86; // [rsp+D8h] [rbp-370h]
  struct DXGPROCESS *v87; // [rsp+E0h] [rbp-368h]
  struct _EX_RUNDOWN_REF *v88; // [rsp+E8h] [rbp-360h] BYREF
  _BYTE v89[24]; // [rsp+F0h] [rbp-358h] BYREF
  _BYTE v90[24]; // [rsp+108h] [rbp-340h] BYREF
  _BYTE v91[112]; // [rsp+120h] [rbp-328h] BYREF
  _QWORD v92[54]; // [rsp+190h] [rbp-2B8h] BYREF
  _DWORD v93[4]; // [rsp+340h] [rbp-108h] BYREF
  __int64 v94; // [rsp+350h] [rbp-F8h]
  __int64 v95[20]; // [rsp+360h] [rbp-E8h] BYREF

  v77 = a3;
  v86 = (_QWORD *)a1;
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v68 = CurrentThreadPreviousMode;
  Current = DXGPROCESS::GetCurrent(v7);
  v87 = Current;
  v74 = 0LL;
  v9 = 0LL;
  v79 = 0LL;
  Src = 0LL;
  v67 = 0;
  if ( !Current )
  {
    v44 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 11189;
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
    return v44;
  }
  memset(v91, 0, 0x68uLL);
  v10 = (unsigned int *)v91;
  if ( CurrentThreadPreviousMode == 1 )
  {
    v11 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v11 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v91, v11, 0x68uLL);
  }
  else
  {
    v10 = (unsigned int *)a1;
  }
  v75 = v10;
  v78 = *((_QWORD *)v10 + 9);
  v71 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v72, *v10, (struct _KTHREAD **)Current, &v71);
  v12 = v71;
  if ( !v71 )
  {
    v44 = -1073741811;
    WdLogSingleEntry2(2LL, *v10, -1073741811LL);
    WdLogGlobalForLineNumber = 11224;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      *v10,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_73;
  }
  if ( !v10[16] && !v10[12] )
  {
    v44 = -1073741811;
    WdLogSingleEntry2(3LL, v71, -1073741811LL);
    WdLogGlobalForLineNumber = 11234;
    goto LABEL_73;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v80,
    v71);
  v82 = *(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL);
  v83 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v81);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v95, (__int64)v12, 2, v13, 0);
  v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v95, 0LL);
  v15 = v14;
  if ( v14 < 0 )
  {
    WdLogSingleEntry2(3LL, v12, v14);
    WdLogGlobalForLineNumber = 11250;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v95);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v81);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v80);
    v44 = v15;
    goto LABEL_73;
  }
  if ( !a3 )
  {
    v44 = -1073741811;
    WdLogSingleEntry2(2LL, v12, -1073741811LL);
    WdLogGlobalForLineNumber = 11316;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: No NT Object or global handle specified. Returning 0x%I64x",
      (__int64)v12,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_72:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v95);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v81);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v80);
LABEL_73:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v72);
    return v44;
  }
  v16 = *(_QWORD *)(a3 + 16);
  if ( !v16 )
  {
    v44 = -1073741811;
    WdLogSingleEntry3(3LL, v12, a3, -1073741811LL);
    WdLogGlobalForLineNumber = 11263;
    goto LABEL_72;
  }
  v17 = *(_DWORD *)(v16 + 12);
  if ( (v17 & 0x1000) != 0 && !a4 )
  {
    WdLogSingleEntry1(3LL, a3);
    WdLogGlobalForLineNumber = 11268;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v95);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v81);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v80);
    v44 = -1073741790;
    goto LABEL_73;
  }
  v85 = 0LL;
  if ( (v17 & 0x10) != 0 )
  {
    v44 = -1073741823;
    WdLogSingleEntry2(4LL, v16, -1073741823LL);
    WdLogGlobalForLineNumber = 11342;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v95);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v81);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v80);
    if ( v72 && _InterlockedExchangeAdd64((volatile signed __int64 *)v72 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v72 + 2), v72);
    return v44;
  }
  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v89, Current);
  if ( v18 )
  {
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v95);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v81);
    DXGUSERCRIT::Acquire((DXGUSERCRIT *)v89, 1u);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v81);
    v66 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v95, 0LL);
    v44 = v66;
    if ( v66 < 0 )
    {
      WdLogSingleEntry2(3LL, v12, v66);
      WdLogGlobalForLineNumber = 11367;
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v89);
      `DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v85);
      goto LABEL_72;
    }
  }
  v19 = v10[4];
  v73 = 80 * v19 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( 80 * v19 <= 0xFFFFFFFF )
  {
    v20 = 80 * v19;
    if ( !is_mul_ok(v19, 0x50uLL) )
      v20 = -1LL;
    v84 = (void *)operator new[](v20, 0x4B677844u, 256LL);
    if ( !v84 )
    {
      StandardAllocation = -1073741801;
      WdLogSingleEntry3(3LL, v12, v10[4], -1073741801LL);
      WdLogGlobalForLineNumber = 11392;
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v89);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v95);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v81);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v80);
      if ( !v72 )
        return (unsigned int)StandardAllocation;
LABEL_50:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v72 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v72 + 2), v72);
      return (unsigned int)StandardAllocation;
    }
    v21 = v10[16];
    if ( v21 )
    {
      v9 = (void *)operator new[](v21, 0x4B677844u, 258LL);
      v79 = v9;
      if ( !v9 )
      {
        StandardAllocation = -1073741801;
        WdLogSingleEntry3(3LL, v12, v10[16], -1073741801LL);
        WdLogGlobalForLineNumber = 11406;
        goto LABEL_77;
      }
    }
    if ( v10[12] )
    {
      v74 = (void *)operator new[](v10[12], 0x4B677844u, 258LL);
      if ( !v74 )
      {
        StandardAllocation = -1073741801;
        WdLogSingleEntry3(3LL, v12, v10[12], -1073741801LL);
        WdLogGlobalForLineNumber = 11422;
        goto LABEL_77;
      }
    }
    v22 = v10[8];
    if ( v22 )
    {
      v23 = (void *)operator new[](v22, 0x4B677844u, 258LL);
      Src = v23;
      if ( !v23 )
      {
        StandardAllocation = -1073741801;
        WdLogSingleEntry3(3LL, v12, v10[8], -1073741801LL);
        WdLogGlobalForLineNumber = 11438;
        goto LABEL_77;
      }
    }
    else
    {
      v23 = Src;
    }
    if ( (*((_BYTE *)v12 + 1917) & 1) != 0
      || (v24 = *((_QWORD *)v12 + 2), *(_QWORD *)(v16 + 80) == v24)
      && ((v25 = *((_QWORD *)v12 + 237)) == 0
       || *(_QWORD *)(v25 + 3128)
       || (v26 = *(_QWORD *)(v16 + 96)) == 0
       || v26 == v25) )
    {
      if ( v68 == 1 )
      {
        *((_QWORD *)v10 + 9) = v9;
        *((_QWORD *)v10 + 7) = v74;
        *((_QWORD *)v10 + 5) = v23;
        *((_QWORD *)v10 + 3) = v84;
      }
      StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                             v12,
                             0,
                             (__int64)v95,
                             a4,
                             0LL,
                             0LL,
                             0LL);
      if ( StandardAllocation < 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 11619;
        goto LABEL_45;
      }
      v67 = 1;
      v34 = v79;
      goto LABEL_57;
    }
    v27 = *(_DWORD *)(v16 + 12);
    if ( (v27 & 0x20) == 0 )
    {
      StandardAllocation = -1073741811;
      WdLogSingleEntry3(3LL, v12, v77, -1073741811LL);
      WdLogGlobalForLineNumber = 11596;
      goto LABEL_45;
    }
    if ( *(_DWORD *)(v16 + 132) == v10[4] )
    {
      v57 = v10[8];
      v58 = *(unsigned int *)(v16 + 112);
      v73 = v58;
      if ( (_DWORD)v57 == (_DWORD)v58 )
      {
        v59 = *(_DWORD *)(v16 + 216);
        if ( !v59 && *(_DWORD *)(*(_QWORD *)(v24 + 16) + 2280LL) < 0x5000u )
        {
          WdLogSingleEntry2(3LL, v12, -1073741811LL);
          WdLogGlobalForLineNumber = 11499;
          goto LABEL_130;
        }
        v94 = 0LL;
        v93[2] = v59;
        v93[0] = *(_DWORD *)(v16 + 208);
        v93[1] = *(_DWORD *)(v16 + 212);
        v93[3] = 7;
        memset(v92, 0, 424);
        v60 = (4 * (v27 & 0x40 | (32 * (v27 & 0x80)))) | 0x41;
        HIDWORD(v92[0]) = *v10;
        LODWORD(v92[2]) = 4;
        v92[3] = v93;
        v92[39] = *(_QWORD *)(v16 + 104);
        LODWORD(v92[40]) = v73;
        v61 = *(_QWORD *)(v16 + 192);
        if ( (v27 & 0x200) != 0 )
          v92[42] = *(_QWORD *)(v16 + 192);
        else
          v92[41] = *(_QWORD *)(v16 + 192);
        v92[43] = *(_QWORD *)(v16 + 224);
        LODWORD(v92[6]) = *(_DWORD *)(v16 + 232);
        v92[44] = v74;
        LODWORD(v92[45]) = v10[12];
        v92[46] = v9;
        LODWORD(v92[47]) = v10[16];
        LODWORD(v92[0]) = v60 ^ (v60 ^ (v27 << 7)) & 0x400 | 0x200;
        v92[52] = *(_QWORD *)(v16 + 184);
        if ( (v27 & 0x200) != 0 )
        {
          v92[42] = v61;
        }
        else
        {
          if ( (v27 & 0x400) == 0 )
            goto LABEL_112;
          v92[41] = v61;
        }
        v63 = *(_DWORD *)(v16 + 204);
        v62 = v60 ^ (v60 ^ (v27 << 7)) & 0x400 | 0x200;
        LODWORD(v92[0]) = v62 ^ ((unsigned __int8)v62 ^ (unsigned __int8)(v27 >> 7)) & 0x10;
        LODWORD(v92[49]) = v63;
LABEL_112:
        StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                               v12,
                               (struct _D3DKM_CREATESTANDARDALLOCATION *)v92,
                               (struct COREDEVICEACCESS *)v95);
        if ( StandardAllocation < 0 )
          goto LABEL_45;
        v67 = 1;
        *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe((__int64)v87, (DXGRESOURCEREFERENCE *)&v88, v92[1]) + 128LL) = v16;
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v88);
        v64 = Src;
        memmove(Src, *(const void **)(v16 + 104), v10[8]);
        v10[20] = v92[1];
        v65 = v84;
        *(_DWORD *)v84 = HIDWORD(v92[6]);
        v65[4] = v10[16];
        v34 = v79;
        *((_QWORD *)v65 + 1) = v79;
        *((_QWORD *)v10 + 3) = v65;
        *((_QWORD *)v10 + 5) = v64;
        *((_QWORD *)v10 + 7) = v74;
        *((_QWORD *)v10 + 9) = v34;
LABEL_57:
        if ( v68 == 1 )
        {
          v35 = v86;
          v36 = v86 + 10;
          if ( (unsigned __int64)(v86 + 10) >= MmUserProbeAddress )
            v36 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v36, v10 + 20, 4uLL);
          v37 = v35 + 8;
          if ( (unsigned __int64)(v35 + 8) >= MmUserProbeAddress )
            v37 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v37, v10 + 16, 4uLL);
          v38 = 0LL;
          while ( 1 )
          {
            v70 = v38;
            if ( (unsigned int)v38 >= v10[4] )
              break;
            v77 = 0LL;
            v39 = 80 * v38;
            v77 = v78 + *(_DWORD *)(80 * v38 + *((_QWORD *)v10 + 3) + 8) - v10[18];
            v40 = 80 * v38 + v35[3];
            v41 = (void *)v40;
            if ( v40 >= MmUserProbeAddress )
              v41 = (void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v41, (const void *)(80 * v38 + *((_QWORD *)v10 + 3)), 4uLL);
            v42 = (void *)(v40 + 16);
            if ( v40 + 16 >= MmUserProbeAddress )
              v42 = (void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v42, (const void *)(v39 + *((_QWORD *)v10 + 3) + 16LL), 4uLL);
            v43 = (void *)(v40 + 8);
            if ( v40 + 8 >= MmUserProbeAddress )
              v43 = (void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v43, &v77, 8uLL);
            v38 = (unsigned int)(v70 + 1);
            v12 = v71;
            v35 = v86;
          }
          if ( v10[8] )
          {
            v29 = (char *)v35[5];
            v30 = v10[8];
            if ( &v29[v30] <= v29 || (unsigned __int64)&v29[v30] > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v29, Src, v30);
            v12 = v71;
          }
          if ( v10[12] )
          {
            v55 = (char *)v35[7];
            v56 = v10[12];
            if ( &v55[v56] <= v55 || (unsigned __int64)&v55[v56] > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v55, v74, v56);
            v12 = v71;
          }
          if ( v10[16] )
          {
            v31 = (char *)v35[9];
            v32 = v10[16];
            if ( &v31[v32] <= v31 || (unsigned __int64)&v31[v32] > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v31, v34, v32);
            v12 = v71;
          }
        }
LABEL_45:
        if ( StandardAllocation >= 0 )
          goto LABEL_46;
LABEL_77:
        if ( !v67 )
          goto LABEL_46;
        v45 = v87;
        DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v90, v87);
        v46 = v10[20];
        v47 = (v46 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v47 < *((_DWORD *)v45 + 74) )
        {
          v48 = *((_QWORD *)v45 + 35);
          v49 = *(_DWORD *)(v48 + 16 * v47 + 8);
          if ( ((v46 >> 25) & 0x60) == (*(_BYTE *)(v48 + 16 * v47 + 8) & 0x60)
            && (v49 & 0x2000) == 0
            && (v49 & 0x1F) != 0 )
          {
            if ( (*(_BYTE *)(v48 + 16 * (((unsigned __int64)v46 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 4 )
            {
              v50 = *(struct DXGRESOURCE **)(v48 + 16 * (((unsigned __int64)v46 >> 6) & 0xFFFFFF));
LABEL_85:
              if ( v50 )
              {
                v51 = v10[20];
                v52 = (v51 >> 6) & 0xFFFFFF;
                if ( (unsigned int)v52 < *((_DWORD *)v45 + 74) )
                {
                  v53 = *((_QWORD *)v45 + 35);
                  v54 = *(_DWORD *)(v53 + 16 * v52 + 8);
                  if ( ((v51 >> 25) & 0x60) == (*(_BYTE *)(v53 + 16 * v52 + 8) & 0x60)
                    && (v54 & 0x2000) == 0
                    && (v54 & 0x1F) != 0 )
                  {
                    *(_DWORD *)(v53 + 16 * (((unsigned __int64)v51 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                  }
                }
              }
              DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v90);
              DXGDEVICE::DestroyAllocationInternal(
                v12,
                0,
                0LL,
                v50,
                0LL,
                (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
LABEL_46:
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v79);
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v74);
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v84);
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Src);
              DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v89);
              if ( v85 && _InterlockedExchangeAdd((volatile signed __int32 *)v85 + 17, 0xFFFFFFFF) == 1 )
                DXGSHAREDRESOURCE::Destroy(v85, 0LL, 0);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v95);
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v81);
              DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v80);
              if ( !v72 )
                return (unsigned int)StandardAllocation;
              goto LABEL_50;
            }
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
        v50 = 0LL;
        goto LABEL_85;
      }
      WdLogSingleEntry4(3LL, v12, v57, v58, -1073741811LL);
      WdLogGlobalForLineNumber = 11485;
    }
    else
    {
      WdLogSingleEntry4(3LL, v12, v10[4], *(unsigned int *)(v16 + 132), -1073741811LL);
      WdLogGlobalForLineNumber = 11474;
    }
LABEL_130:
    StandardAllocation = -1073741811;
    goto LABEL_77;
  }
  WdLogSingleEntry2(3LL, v12, 80 * v19 > 0xFFFFFFFF ? (int)0xC0000095 : 0);
  WdLogGlobalForLineNumber = 11381;
  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v89);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v95);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v81);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v80);
  if ( v72 && _InterlockedExchangeAdd64((volatile signed __int64 *)v72 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v72 + 2), v72);
  return v73;
}
