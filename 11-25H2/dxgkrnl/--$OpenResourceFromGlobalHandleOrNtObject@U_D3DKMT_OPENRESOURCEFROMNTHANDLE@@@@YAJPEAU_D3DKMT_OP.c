/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x14035B3A4
 * Callers:
 *     DxgkOpenResourceFromNtHandleInternal @ 0x14039EE80 (DxgkOpenResourceFromNtHandleInternal.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x14001415C (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140015280 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002D660 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034400 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x14003BBA4 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1400419B0 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140047630 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402A0560 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x140333A6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x14035D984 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ??1ENSURE_SHARED_RESOURCE_DEREFERENCE@?1???$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z@QEAA@XZ @ 0x14035F6D8 (--1ENSURE_SHARED_RESOURCE_DEREFERENCE@-1---$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403600FC (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x140361554 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
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
  __int64 v18; // r9
  char v19; // r8
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // r9
  unsigned int v23; // eax
  unsigned int v24; // eax
  void *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // ebx
  int StandardAllocation; // r15d
  char *v31; // rcx
  size_t v32; // r8
  char *v33; // rcx
  size_t v34; // r8
  void *v36; // r13
  _QWORD *v37; // rbx
  void *v38; // rcx
  void *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r14
  ULONG64 v42; // rbx
  void *v43; // rcx
  void *v44; // rcx
  void *v45; // rcx
  unsigned int v46; // ebx
  struct DXGPROCESS *v47; // r13
  unsigned int v48; // r8d
  __int64 v49; // rax
  __int64 v50; // r9
  int v51; // edx
  struct DXGRESOURCE *v52; // rbx
  unsigned int v53; // r8d
  __int64 v54; // rax
  __int64 v55; // r9
  int v56; // edx
  char *v57; // rcx
  size_t v58; // r8
  __int64 v59; // rcx
  __int64 v60; // rax
  int v61; // ecx
  int v62; // edx
  __int64 v63; // r8
  int v64; // ecx
  int v65; // eax
  void *v66; // rbx
  _DWORD *v67; // rcx
  int v68; // eax
  char v69; // [rsp+50h] [rbp-3F8h]
  char v70; // [rsp+51h] [rbp-3F7h]
  int v72; // [rsp+54h] [rbp-3F4h]
  struct DXGDEVICE *v73; // [rsp+58h] [rbp-3F0h] BYREF
  struct DXGDEVICE *v74; // [rsp+60h] [rbp-3E8h] BYREF
  unsigned int v75; // [rsp+68h] [rbp-3E0h]
  void *v76; // [rsp+70h] [rbp-3D8h]
  unsigned int *v77; // [rsp+78h] [rbp-3D0h]
  void *Src; // [rsp+80h] [rbp-3C8h]
  __int64 v79; // [rsp+88h] [rbp-3C0h] BYREF
  __int64 v80; // [rsp+90h] [rbp-3B8h]
  void *v81; // [rsp+98h] [rbp-3B0h]
  _BYTE v82[16]; // [rsp+A0h] [rbp-3A8h] BYREF
  char v83[8]; // [rsp+B0h] [rbp-398h] BYREF
  __int64 v84; // [rsp+B8h] [rbp-390h]
  char v85; // [rsp+C0h] [rbp-388h]
  void *v86; // [rsp+C8h] [rbp-380h]
  DXGSHAREDRESOURCE *v87; // [rsp+D0h] [rbp-378h] BYREF
  _QWORD *v88; // [rsp+D8h] [rbp-370h]
  struct DXGPROCESS *v89; // [rsp+E0h] [rbp-368h]
  struct _EX_RUNDOWN_REF *v90; // [rsp+E8h] [rbp-360h] BYREF
  _BYTE v91[24]; // [rsp+F0h] [rbp-358h] BYREF
  _BYTE v92[24]; // [rsp+108h] [rbp-340h] BYREF
  _BYTE v93[112]; // [rsp+120h] [rbp-328h] BYREF
  _QWORD v94[54]; // [rsp+190h] [rbp-2B8h] BYREF
  _DWORD v95[4]; // [rsp+340h] [rbp-108h] BYREF
  __int64 v96; // [rsp+350h] [rbp-F8h]
  __int64 v97[20]; // [rsp+360h] [rbp-E8h] BYREF

  v79 = a3;
  v88 = (_QWORD *)a1;
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v70 = CurrentThreadPreviousMode;
  Current = DXGPROCESS::GetCurrent(v7);
  v89 = Current;
  v76 = 0LL;
  v9 = 0LL;
  v81 = 0LL;
  Src = 0LL;
  v69 = 0;
  if ( !Current )
  {
    v46 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 11123;
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
    return v46;
  }
  memset(v93, 0, 0x68uLL);
  v10 = (unsigned int *)v93;
  if ( CurrentThreadPreviousMode == 1 )
  {
    v11 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v11 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v93, v11, 0x68uLL);
  }
  else
  {
    v10 = (unsigned int *)a1;
  }
  v77 = v10;
  v80 = *((_QWORD *)v10 + 9);
  v73 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v74, *v10, Current, &v73);
  v12 = v73;
  if ( !v73 )
  {
    v46 = -1073741811;
    WdLogSingleEntry2(2LL, *v10, -1073741811LL);
    WdLogGlobalForLineNumber = 11158;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
    v46 = -1073741811;
    WdLogSingleEntry2(3LL, v73, -1073741811LL);
    WdLogGlobalForLineNumber = 11168;
    goto LABEL_73;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v82,
    v73);
  v84 = *(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL);
  v85 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v83);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v97, (__int64)v12, 2, v13, 0);
  v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v97, 0LL);
  v15 = v14;
  if ( v14 < 0 )
  {
    WdLogSingleEntry2(3LL, v12, v14);
    WdLogGlobalForLineNumber = 11184;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v97);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v83);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v82);
    v46 = v15;
    goto LABEL_73;
  }
  if ( !a3 )
  {
    v46 = -1073741811;
    WdLogSingleEntry2(2LL, v12, -1073741811LL);
    WdLogGlobalForLineNumber = 11250;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: No NT Object or global handle specified. Returning 0x%I64x",
      (__int64)v12,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_72:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v97);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v83);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v82);
LABEL_73:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v74);
    return v46;
  }
  v16 = *(_QWORD *)(a3 + 16);
  if ( !v16 )
  {
    v46 = -1073741811;
    WdLogSingleEntry3(3LL, v12, a3, -1073741811LL);
    WdLogGlobalForLineNumber = 11197;
    goto LABEL_72;
  }
  v17 = *(_DWORD *)(v16 + 12);
  if ( (v17 & 0x1000) != 0 && !a4 )
  {
    WdLogSingleEntry1(3LL, a3);
    WdLogGlobalForLineNumber = 11202;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v97);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v83);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v82);
    v46 = -1073741790;
    goto LABEL_73;
  }
  v87 = 0LL;
  if ( (v17 & 0x10) != 0 )
  {
    v46 = -1073741823;
    WdLogSingleEntry2(4LL, v16, -1073741823LL);
    WdLogGlobalForLineNumber = 11276;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v97);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v83);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v82);
    if ( v74 && _InterlockedExchangeAdd64((volatile signed __int64 *)v74 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v74 + 2), v74);
    return v46;
  }
  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v91, Current);
  if ( v19 )
  {
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v97);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v83);
    DXGUSERCRIT::Acquire((DXGUSERCRIT *)v91, 1u);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v83);
    v68 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v97, 0LL);
    v46 = v68;
    if ( v68 < 0 )
    {
      WdLogSingleEntry2(3LL, v12, v68);
      WdLogGlobalForLineNumber = 11301;
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v91);
      `DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v87);
      goto LABEL_72;
    }
  }
  v20 = v10[4];
  v75 = 80 * v20 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( 80 * v20 <= 0xFFFFFFFF )
  {
    v21 = 80 * v20;
    if ( !is_mul_ok(v20, 0x50uLL) )
      v21 = -1LL;
    v86 = (void *)operator new[](v21, 0x4B677844u, 256LL, v18);
    if ( !v86 )
    {
      StandardAllocation = -1073741801;
      WdLogSingleEntry3(3LL, v12, v10[4], -1073741801LL);
      WdLogGlobalForLineNumber = 11326;
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v91);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v97);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v83);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v82);
      if ( !v74 )
        return (unsigned int)StandardAllocation;
LABEL_50:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v74 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v74 + 2), v74);
      return (unsigned int)StandardAllocation;
    }
    v23 = v10[16];
    if ( v23 )
    {
      v9 = (void *)operator new[](v23, 0x4B677844u, 258LL, v22);
      v81 = v9;
      if ( !v9 )
      {
        StandardAllocation = -1073741801;
        WdLogSingleEntry3(3LL, v12, v10[16], -1073741801LL);
        WdLogGlobalForLineNumber = 11340;
        goto LABEL_77;
      }
    }
    if ( v10[12] )
    {
      v76 = (void *)operator new[](v10[12], 0x4B677844u, 258LL, v22);
      if ( !v76 )
      {
        StandardAllocation = -1073741801;
        WdLogSingleEntry3(3LL, v12, v10[12], -1073741801LL);
        WdLogGlobalForLineNumber = 11356;
        goto LABEL_77;
      }
    }
    v24 = v10[8];
    if ( v24 )
    {
      v25 = (void *)operator new[](v24, 0x4B677844u, 258LL, v22);
      Src = v25;
      if ( !v25 )
      {
        StandardAllocation = -1073741801;
        WdLogSingleEntry3(3LL, v12, v10[8], -1073741801LL);
        WdLogGlobalForLineNumber = 11372;
        goto LABEL_77;
      }
    }
    else
    {
      v25 = Src;
    }
    if ( (*((_BYTE *)v12 + 1901) & 1) != 0
      || (v26 = *((_QWORD *)v12 + 2), *(_QWORD *)(v16 + 80) == v26)
      && ((v27 = *((_QWORD *)v12 + 235)) == 0
       || *(_QWORD *)(v27 + 3128)
       || (v28 = *(_QWORD *)(v16 + 96)) == 0
       || v28 == v27) )
    {
      if ( v70 == 1 )
      {
        *((_QWORD *)v10 + 9) = v9;
        *((_QWORD *)v10 + 7) = v76;
        *((_QWORD *)v10 + 5) = v25;
        *((_QWORD *)v10 + 3) = v86;
      }
      StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                             v12,
                             0,
                             (__int64)v97,
                             a4,
                             0LL,
                             0LL,
                             0LL);
      if ( StandardAllocation < 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 11553;
        goto LABEL_45;
      }
      v69 = 1;
      v36 = v81;
      goto LABEL_57;
    }
    v29 = *(_DWORD *)(v16 + 12);
    if ( (v29 & 0x20) == 0 )
    {
      StandardAllocation = -1073741811;
      WdLogSingleEntry3(3LL, v12, v79, -1073741811LL);
      WdLogGlobalForLineNumber = 11530;
      goto LABEL_45;
    }
    if ( *(_DWORD *)(v16 + 132) == v10[4] )
    {
      v59 = v10[8];
      v60 = *(unsigned int *)(v16 + 112);
      v75 = v60;
      if ( (_DWORD)v59 == (_DWORD)v60 )
      {
        v61 = *(_DWORD *)(v16 + 216);
        if ( !v61 && *(_DWORD *)(*(_QWORD *)(v26 + 16) + 2280LL) < 0x5000u )
        {
          WdLogSingleEntry2(3LL, v12, -1073741811LL);
          WdLogGlobalForLineNumber = 11433;
          goto LABEL_130;
        }
        v96 = 0LL;
        v95[2] = v61;
        v95[0] = *(_DWORD *)(v16 + 208);
        v95[1] = *(_DWORD *)(v16 + 212);
        v95[3] = 7;
        memset(v94, 0, 424);
        v62 = (4 * (v29 & 0x40 | (32 * (v29 & 0x80)))) | 0x41;
        HIDWORD(v94[0]) = *v10;
        LODWORD(v94[2]) = 4;
        v94[3] = v95;
        v94[39] = *(_QWORD *)(v16 + 104);
        LODWORD(v94[40]) = v75;
        v63 = *(_QWORD *)(v16 + 192);
        if ( (v29 & 0x200) != 0 )
          v94[42] = *(_QWORD *)(v16 + 192);
        else
          v94[41] = *(_QWORD *)(v16 + 192);
        v94[43] = *(_QWORD *)(v16 + 224);
        LODWORD(v94[6]) = *(_DWORD *)(v16 + 232);
        v94[44] = v76;
        LODWORD(v94[45]) = v10[12];
        v94[46] = v9;
        LODWORD(v94[47]) = v10[16];
        LODWORD(v94[0]) = v62 ^ (v62 ^ (v29 << 7)) & 0x400 | 0x200;
        v94[52] = *(_QWORD *)(v16 + 184);
        if ( (v29 & 0x200) != 0 )
        {
          v94[42] = v63;
        }
        else
        {
          if ( (v29 & 0x400) == 0 )
            goto LABEL_112;
          v94[41] = v63;
        }
        v65 = *(_DWORD *)(v16 + 204);
        v64 = v62 ^ (v62 ^ (v29 << 7)) & 0x400 | 0x200;
        LODWORD(v94[0]) = v64 ^ ((unsigned __int8)v64 ^ (unsigned __int8)(v29 >> 7)) & 0x10;
        LODWORD(v94[49]) = v65;
LABEL_112:
        StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                               v12,
                               (struct _D3DKM_CREATESTANDARDALLOCATION *)v94,
                               (struct COREDEVICEACCESS *)v97);
        if ( StandardAllocation < 0 )
          goto LABEL_45;
        v69 = 1;
        *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe((__int64)v89, (DXGRESOURCEREFERENCE *)&v90, v94[1]) + 128LL) = v16;
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v90);
        v66 = Src;
        memmove(Src, *(const void **)(v16 + 104), v10[8]);
        v10[20] = v94[1];
        v67 = v86;
        *(_DWORD *)v86 = HIDWORD(v94[6]);
        v67[4] = v10[16];
        v36 = v81;
        *((_QWORD *)v67 + 1) = v81;
        *((_QWORD *)v10 + 3) = v67;
        *((_QWORD *)v10 + 5) = v66;
        *((_QWORD *)v10 + 7) = v76;
        *((_QWORD *)v10 + 9) = v36;
LABEL_57:
        if ( v70 == 1 )
        {
          v37 = v88;
          v38 = v88 + 10;
          if ( (unsigned __int64)(v88 + 10) >= MmUserProbeAddress )
            v38 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v38, v10 + 20, 4uLL);
          v39 = v37 + 8;
          if ( (unsigned __int64)(v37 + 8) >= MmUserProbeAddress )
            v39 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v39, v10 + 16, 4uLL);
          v40 = 0LL;
          while ( 1 )
          {
            v72 = v40;
            if ( (unsigned int)v40 >= v10[4] )
              break;
            v79 = 0LL;
            v41 = 80 * v40;
            v79 = v80 + *(_DWORD *)(80 * v40 + *((_QWORD *)v10 + 3) + 8) - v10[18];
            v42 = 80 * v40 + v37[3];
            v43 = (void *)v42;
            if ( v42 >= MmUserProbeAddress )
              v43 = (void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v43, (const void *)(80 * v40 + *((_QWORD *)v10 + 3)), 4uLL);
            v44 = (void *)(v42 + 16);
            if ( v42 + 16 >= MmUserProbeAddress )
              v44 = (void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v44, (const void *)(v41 + *((_QWORD *)v10 + 3) + 16LL), 4uLL);
            v45 = (void *)(v42 + 8);
            if ( v42 + 8 >= MmUserProbeAddress )
              v45 = (void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v45, &v79, 8uLL);
            v40 = (unsigned int)(v72 + 1);
            v12 = v73;
            v37 = v88;
          }
          if ( v10[8] )
          {
            v31 = (char *)v37[5];
            v32 = v10[8];
            if ( &v31[v32] <= v31 || (unsigned __int64)&v31[v32] > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v31, Src, v32);
            v12 = v73;
          }
          if ( v10[12] )
          {
            v57 = (char *)v37[7];
            v58 = v10[12];
            if ( &v57[v58] <= v57 || (unsigned __int64)&v57[v58] > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v57, v76, v58);
            v12 = v73;
          }
          if ( v10[16] )
          {
            v33 = (char *)v37[9];
            v34 = v10[16];
            if ( &v33[v34] <= v33 || (unsigned __int64)&v33[v34] > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v33, v36, v34);
            v12 = v73;
          }
        }
LABEL_45:
        if ( StandardAllocation >= 0 )
          goto LABEL_46;
LABEL_77:
        if ( !v69 )
          goto LABEL_46;
        v47 = v89;
        DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v92, v89);
        v48 = v10[20];
        v49 = (v48 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v49 < *((_DWORD *)v47 + 74) )
        {
          v50 = *((_QWORD *)v47 + 35);
          v51 = *(_DWORD *)(v50 + 16 * v49 + 8);
          if ( ((v48 >> 25) & 0x60) == (*(_BYTE *)(v50 + 16 * v49 + 8) & 0x60)
            && (v51 & 0x2000) == 0
            && (v51 & 0x1F) != 0 )
          {
            if ( (*(_BYTE *)(v50 + 16 * (((unsigned __int64)v48 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 4 )
            {
              v52 = *(struct DXGRESOURCE **)(v50 + 16 * (((unsigned __int64)v48 >> 6) & 0xFFFFFF));
LABEL_85:
              if ( v52 )
              {
                v53 = v10[20];
                v54 = (v53 >> 6) & 0xFFFFFF;
                if ( (unsigned int)v54 < *((_DWORD *)v47 + 74) )
                {
                  v55 = *((_QWORD *)v47 + 35);
                  v56 = *(_DWORD *)(v55 + 16 * v54 + 8);
                  if ( ((v53 >> 25) & 0x60) == (*(_BYTE *)(v55 + 16 * v54 + 8) & 0x60)
                    && (v56 & 0x2000) == 0
                    && (v56 & 0x1F) != 0 )
                  {
                    *(_DWORD *)(v55 + 16 * (((unsigned __int64)v53 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                  }
                }
              }
              DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v92);
              DXGDEVICE::DestroyAllocationInternal(
                v12,
                0,
                0LL,
                v52,
                0LL,
                (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
LABEL_46:
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v81);
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v76);
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v86);
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Src);
              DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v91);
              if ( v87 && _InterlockedExchangeAdd((volatile signed __int32 *)v87 + 17, 0xFFFFFFFF) == 1 )
                DXGSHAREDRESOURCE::Destroy(v87, 0LL, 0);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v97);
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v83);
              DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v82);
              if ( !v74 )
                return (unsigned int)StandardAllocation;
              goto LABEL_50;
            }
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
        v52 = 0LL;
        goto LABEL_85;
      }
      WdLogSingleEntry4(3LL, v12, v59, v60, -1073741811LL);
      WdLogGlobalForLineNumber = 11419;
    }
    else
    {
      WdLogSingleEntry4(3LL, v12, v10[4], *(unsigned int *)(v16 + 132), -1073741811LL);
      WdLogGlobalForLineNumber = 11408;
    }
LABEL_130:
    StandardAllocation = -1073741811;
    goto LABEL_77;
  }
  WdLogSingleEntry2(3LL, v12, 80 * v20 > 0xFFFFFFFF ? (int)0xC0000095 : 0);
  WdLogGlobalForLineNumber = 11315;
  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v91);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v97);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v83);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v82);
  if ( v74 && _InterlockedExchangeAdd64((volatile signed __int64 *)v74 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v74 + 2), v74);
  return v75;
}
