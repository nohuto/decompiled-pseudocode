/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x140351948
 * Callers:
 *     DxgkOpenResource @ 0x140350590 (DxgkOpenResource.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x140007CCC (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x14000C48C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x140010F54 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140012080 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
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
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x140047224 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402CCEDC (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x140352CD4 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1403530D4 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??1ENSURE_SHARED_RESOURCE_DEREFERENCE@?1???$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z@QEAA@XZ @ 0x140353E90 (--1ENSURE_SHARED_RESOURCE_DEREFERENCE@-1---$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x140354F2C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 */

__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>(ULONG64 a1, unsigned int a2)
{
  char CurrentThreadPreviousMode; // r15
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rbx
  unsigned int *v7; // rsi
  const void *v8; // rdx
  struct DXGDEVICE *v9; // r14
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // r15d
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rbx
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  char v17; // r8
  unsigned __int64 v18; // rax
  signed int v19; // r14d
  unsigned __int64 v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // eax
  void *v23; // rdx
  struct DXGDEVICE *v24; // r15
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // r14d
  unsigned int v28; // eax
  unsigned int v29; // ecx
  int StandardAllocation; // r14d
  char v31; // bl
  _QWORD *v32; // rbx
  void *v33; // rcx
  void *v34; // rcx
  unsigned int i; // r12d
  char *v36; // rcx
  size_t v37; // r8
  char *v38; // rcx
  size_t v39; // r8
  __int64 v41; // r15
  ULONG64 v42; // rbx
  void *v43; // rcx
  void *v44; // rcx
  void *v45; // rcx
  unsigned int v46; // ebx
  char *v47; // rcx
  size_t v48; // r8
  __int64 v49; // r14
  unsigned int v50; // eax
  __int64 v51; // r8
  unsigned int v52; // ecx
  int v53; // ecx
  int v54; // eax
  struct DXGPROCESS *v55; // rbx
  unsigned int v56; // r9d
  __int64 v57; // rax
  __int64 v58; // r8
  int v59; // edx
  struct DXGRESOURCE *v60; // r12
  unsigned int v61; // r8d
  __int64 v62; // rax
  __int64 v63; // r9
  int v64; // edx
  int v65; // edx
  int v66; // edx
  __int64 v67; // r8
  void *v68; // r12
  int v69; // ecx
  int v70; // eax
  _DWORD *v71; // rcx
  void *v72; // rbx
  char v73; // [rsp+50h] [rbp-3D8h]
  char v74; // [rsp+51h] [rbp-3D7h]
  struct DXGDEVICE *v75; // [rsp+58h] [rbp-3D0h] BYREF
  unsigned int v76; // [rsp+60h] [rbp-3C8h]
  struct DXGDEVICE *v77; // [rsp+68h] [rbp-3C0h] BYREF
  void *v78; // [rsp+70h] [rbp-3B8h]
  void *Src; // [rsp+78h] [rbp-3B0h]
  DXGSHAREDRESOURCE *v80[2]; // [rsp+80h] [rbp-3A8h] BYREF
  void *v81; // [rsp+90h] [rbp-398h]
  struct DXGPROCESS *v82; // [rsp+98h] [rbp-390h]
  __int64 v83; // [rsp+A0h] [rbp-388h]
  _BYTE v84[16]; // [rsp+A8h] [rbp-380h] BYREF
  char v85[8]; // [rsp+B8h] [rbp-370h] BYREF
  __int64 v86; // [rsp+C0h] [rbp-368h]
  char v87; // [rsp+C8h] [rbp-360h]
  void *v88; // [rsp+D0h] [rbp-358h]
  __int64 v89; // [rsp+D8h] [rbp-350h] BYREF
  _QWORD *v90; // [rsp+E0h] [rbp-348h]
  _BYTE v91[16]; // [rsp+E8h] [rbp-340h] BYREF
  struct _EX_RUNDOWN_REF *v92; // [rsp+F8h] [rbp-330h] BYREF
  _BYTE v93[24]; // [rsp+100h] [rbp-328h] BYREF
  _BYTE v94[24]; // [rsp+118h] [rbp-310h] BYREF
  _BYTE v95[80]; // [rsp+130h] [rbp-2F8h] BYREF
  _QWORD v96[54]; // [rsp+180h] [rbp-2A8h] BYREF
  _DWORD v97[4]; // [rsp+330h] [rbp-F8h] BYREF
  __int64 v98; // [rsp+340h] [rbp-E8h]
  __int64 v99[20]; // [rsp+350h] [rbp-D8h] BYREF

  v76 = a2;
  v90 = (_QWORD *)a1;
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v74 = CurrentThreadPreviousMode;
  Current = DXGPROCESS::GetCurrent(v5);
  v82 = Current;
  v81 = 0LL;
  v78 = 0LL;
  Src = 0LL;
  v73 = 0;
  if ( !Current )
  {
    v46 = -1073741811;
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
    return v46;
  }
  memset(v95, 0, 0x48uLL);
  v7 = (unsigned int *)v95;
  if ( CurrentThreadPreviousMode == 1 )
  {
    v8 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v8 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v95, v8, 0x48uLL);
  }
  else
  {
    v7 = (unsigned int *)a1;
  }
  v80[1] = (DXGSHAREDRESOURCE *)v7;
  v83 = *((_QWORD *)v7 + 7);
  v75 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v77, *v7, (struct _KTHREAD **)Current, &v75);
  v9 = v75;
  if ( !v75 )
  {
    v46 = -1073741811;
    WdLogSingleEntry2(2LL, *v7, -1073741811LL);
    WdLogGlobalForLineNumber = 11224;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      *v7,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_82;
  }
  if ( !v7[16] && !v7[12] )
  {
    v46 = -1073741811;
    WdLogSingleEntry2(3LL, v75, -1073741811LL);
    WdLogGlobalForLineNumber = 11234;
    goto LABEL_82;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v84,
    v75);
  v86 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL);
  v87 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v85);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v99, (__int64)v9, 2, v10, 0);
  v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v99, 0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry2(3LL, v9, v11);
    WdLogGlobalForLineNumber = 11250;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v99);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v85);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v84);
    v46 = v12;
    goto LABEL_82;
  }
  if ( !a2 )
  {
    v46 = -1073741811;
    WdLogSingleEntry2(2LL, v9, -1073741811LL);
    WdLogGlobalForLineNumber = 11316;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: No NT Object or global handle specified. Returning 0x%I64x",
      (__int64)v9,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_81:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v99);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v85);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v84);
LABEL_82:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v77);
    return v46;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v91);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v91);
  if ( (*((_DWORD *)Current + 102) & 0x100) == 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, a2, 2);
    goto LABEL_12;
  }
  v49 = *((_QWORD *)Current + 74);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v49 + 248));
  v50 = (a2 >> 6) & 0xFFFFFF;
  if ( v50 >= *(_DWORD *)(v49 + 296) )
    goto LABEL_109;
  v51 = *(_QWORD *)(v49 + 280);
  v52 = *(_DWORD *)(v51 + 16LL * v50 + 8);
  if ( a2 >> 30 != ((v52 >> 5) & 3) )
    goto LABEL_109;
  if ( (v52 & 0x2000) != 0 )
    goto LABEL_109;
  v53 = v52 & 0x1F;
  if ( !v53 )
    goto LABEL_109;
  if ( v53 != 2 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_109:
    ObjectA = 0LL;
    goto LABEL_110;
  }
  ObjectA = *(_QWORD *)(v51 + 16LL * v50);
LABEL_110:
  _InterlockedAdd((volatile signed __int32 *)(v49 + 264), 0xFFFFFFFF);
  ExReleasePushLockSharedEx(v49 + 248, 0LL);
  KeLeaveCriticalRegion();
  v9 = v75;
LABEL_12:
  if ( !ObjectA )
  {
    v46 = -1073741811;
    WdLogSingleEntry3(3LL, v9, v76, -1073741811LL);
    WdLogGlobalForLineNumber = 11294;
LABEL_80:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v91);
    goto LABEL_81;
  }
  _m_prefetchw((const void *)(ObjectA + 68));
  v15 = *(_DWORD *)(ObjectA + 68);
  do
  {
    if ( !v15 )
    {
      v46 = -1073741811;
      WdLogSingleEntry3(3LL, v75, v76, -1073741811LL);
      WdLogGlobalForLineNumber = 11306;
      goto LABEL_80;
    }
    v16 = v15;
    v15 = _InterlockedCompareExchange((volatile signed __int32 *)(ObjectA + 68), v15 + 1, v15);
  }
  while ( v16 != v15 );
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v91);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v91);
  v80[0] = (DXGSHAREDRESOURCE *)ObjectA;
  if ( (*(_DWORD *)(ObjectA + 12) & 0x10) == 0 )
  {
    DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v93, v82);
    if ( v17 )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v99);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v85);
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v93, 1u);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v85);
      v54 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v99, 0LL);
      v19 = v54;
      if ( v54 < 0 )
      {
        WdLogSingleEntry2(3LL, v75, v54);
        WdLogGlobalForLineNumber = 11367;
        goto LABEL_115;
      }
    }
    v18 = 80LL * v7[2];
    v19 = v18 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v18 <= 0xFFFFFFFF )
    {
      v20 = 80LL * v7[2];
      if ( !is_mul_ok(v7[2], 0x50uLL) )
        v20 = -1LL;
      v88 = (void *)operator new[](v20, 0x4B677844u, 256LL);
      if ( !v88 )
      {
        StandardAllocation = -1073741801;
        WdLogSingleEntry3(3LL, v75, v7[2], -1073741801LL);
        WdLogGlobalForLineNumber = 11392;
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v93);
        if ( v80[0] && _InterlockedExchangeAdd((volatile signed __int32 *)v80[0] + 17, 0xFFFFFFFF) == 1 )
          DXGSHAREDRESOURCE::Destroy(v80[0], 0LL, 0);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v99);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v85);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v84);
        if ( v77 )
          goto LABEL_69;
        return (unsigned int)StandardAllocation;
      }
      v21 = v7[16];
      if ( v21 )
      {
        v78 = (void *)operator new[](v21, 0x4B677844u, 258LL);
        if ( !v78 )
        {
          StandardAllocation = -1073741801;
          v24 = v75;
          WdLogSingleEntry3(3LL, v75, v7[16], -1073741801LL);
          WdLogGlobalForLineNumber = 11406;
          goto LABEL_119;
        }
      }
      if ( v7[12] )
      {
        v81 = (void *)operator new[](v7[12], 0x4B677844u, 258LL);
        if ( !v81 )
        {
          StandardAllocation = -1073741801;
          v24 = v75;
          WdLogSingleEntry3(3LL, v75, v7[12], -1073741801LL);
          WdLogGlobalForLineNumber = 11422;
          goto LABEL_119;
        }
      }
      v22 = v7[8];
      if ( !v22 )
      {
        v23 = Src;
        goto LABEL_27;
      }
      v23 = (void *)operator new[](v22, 0x4B677844u, 258LL);
      Src = v23;
      if ( !v23 )
      {
        StandardAllocation = -1073741801;
        v24 = v75;
        WdLogSingleEntry3(3LL, v75, v7[8], -1073741801LL);
        WdLogGlobalForLineNumber = 11438;
        goto LABEL_119;
      }
LABEL_27:
      v24 = v75;
      if ( (*((_BYTE *)v75 + 1917) & 1) != 0
        || *(_QWORD *)(ObjectA + 80) == *((_QWORD *)v75 + 2)
        && ((v25 = *((_QWORD *)v75 + 237)) == 0
         || *(_QWORD *)(v25 + 3128)
         || (v26 = *(_QWORD *)(ObjectA + 96)) == 0
         || v26 == v25) )
      {
        v31 = v74;
        if ( v74 == 1 )
        {
          *((_QWORD *)v7 + 7) = v78;
          *((_QWORD *)v7 + 5) = v81;
          *((_QWORD *)v7 + 3) = v23;
          *((_QWORD *)v7 + 2) = v88;
        }
        StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(v24, 0, (__int64)v99, 0, 0LL, 0LL, 0LL);
        if ( StandardAllocation < 0 )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 11619;
        }
        else
        {
          v73 = 1;
LABEL_46:
          if ( v31 == 1 )
          {
            v32 = v90;
            v33 = (char *)v90 + 68;
            if ( (unsigned __int64)v90 + 68 >= MmUserProbeAddress )
              v33 = (void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v33, v7 + 17, 4uLL);
            v34 = v32 + 8;
            if ( (unsigned __int64)(v32 + 8) >= MmUserProbeAddress )
              v34 = (void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v34, v7 + 16, 4uLL);
            for ( i = 0; i < v7[2]; ++i )
            {
              v89 = 0LL;
              v41 = 80LL * i;
              v89 = v83 + *(_DWORD *)(v41 + *((_QWORD *)v7 + 2) + 8) - v7[14];
              v42 = v41 + v32[2];
              v43 = (void *)v42;
              if ( v42 >= MmUserProbeAddress )
                v43 = (void *)MmUserProbeAddress;
              RtlCopyVolatileMemory(v43, (const void *)(v41 + *((_QWORD *)v7 + 2)), 4uLL);
              v44 = (void *)(v42 + 16);
              if ( v42 + 16 >= MmUserProbeAddress )
                v44 = (void *)MmUserProbeAddress;
              RtlCopyVolatileMemory(v44, (const void *)(v41 + *((_QWORD *)v7 + 2) + 16LL), 4uLL);
              v45 = (void *)(v42 + 8);
              if ( v42 + 8 >= MmUserProbeAddress )
                v45 = (void *)MmUserProbeAddress;
              RtlCopyVolatileMemory(v45, &v89, 8uLL);
              v24 = v75;
              v32 = v90;
            }
            if ( v7[8] )
            {
              v36 = (char *)v32[3];
              v37 = v7[8];
              if ( &v36[v37] <= v36 || (unsigned __int64)&v36[v37] > MmUserProbeAddress )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v36, Src, v37);
              v24 = v75;
            }
            if ( v7[12] )
            {
              v47 = (char *)v32[5];
              v48 = v7[12];
              if ( &v47[v48] <= v47 || (unsigned __int64)&v47[v48] > MmUserProbeAddress )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v47, v81, v48);
              v24 = v75;
            }
            if ( v7[16] )
            {
              v38 = (char *)v32[7];
              v39 = v7[16];
              if ( &v38[v39] <= v38 || (unsigned __int64)&v38[v39] > MmUserProbeAddress )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v38, v78, v39);
              v24 = v75;
            }
          }
        }
      }
      else
      {
        v27 = *(_DWORD *)(ObjectA + 12);
        if ( (v27 & 0x20) != 0 )
        {
          if ( *(_DWORD *)(ObjectA + 132) != v7[2] )
          {
            WdLogSingleEntry4(3LL, v75, v7[2], *(unsigned int *)(ObjectA + 132), -1073741811LL);
            WdLogGlobalForLineNumber = 11474;
            goto LABEL_118;
          }
          v28 = v7[8];
          v29 = *(_DWORD *)(ObjectA + 112);
          v76 = v29;
          if ( v28 != v29 )
          {
            WdLogSingleEntry4(3LL, v75, v28, v29, -1073741811LL);
            WdLogGlobalForLineNumber = 11485;
            goto LABEL_118;
          }
          v65 = *(_DWORD *)(ObjectA + 216);
          if ( !v65 && *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v75 + 2) + 16LL) + 2280LL) < 0x5000u )
          {
            WdLogSingleEntry2(3LL, v75, -1073741811LL);
            WdLogGlobalForLineNumber = 11499;
LABEL_118:
            StandardAllocation = -1073741811;
LABEL_119:
            if ( v73 )
            {
              v55 = v82;
              DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v94, v82);
              v56 = v7[17];
              v57 = (v56 >> 6) & 0xFFFFFF;
              if ( (unsigned int)v57 < *((_DWORD *)v55 + 74)
                && (v58 = *((_QWORD *)v55 + 35),
                    v59 = *(_DWORD *)(v58 + 16 * v57 + 8),
                    ((v56 >> 25) & 0x60) == (*(_BYTE *)(v58 + 16 * v57 + 8) & 0x60))
                && (v59 & 0x2000) == 0
                && (v59 & 0x1F) != 0 )
              {
                if ( (*(_BYTE *)(v58 + 16LL * ((v56 >> 6) & 0xFFFFFF) + 8) & 0x1F) != 4 )
                {
                  WdLogSingleEntry0(2LL);
                  WdLogGlobalForLineNumber = 318;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000LL,
                    0xFFFFFFFFLL,
                    L"Handle type mismatch",
                    318LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  goto LABEL_126;
                }
                v60 = *(struct DXGRESOURCE **)(v58 + 16LL * ((v56 >> 6) & 0xFFFFFF));
              }
              else
              {
LABEL_126:
                v60 = 0LL;
              }
              if ( v60 )
              {
                v61 = v7[17];
                v62 = (v61 >> 6) & 0xFFFFFF;
                if ( (unsigned int)v62 < *((_DWORD *)v55 + 74) )
                {
                  v63 = *((_QWORD *)v55 + 35);
                  v64 = *(_DWORD *)(v63 + 16 * v62 + 8);
                  if ( ((v61 >> 25) & 0x60) == (*(_BYTE *)(v63 + 16 * v62 + 8) & 0x60)
                    && (v64 & 0x2000) == 0
                    && (v64 & 0x1F) != 0 )
                  {
                    *(_DWORD *)(v63 + 16LL * ((v61 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                  }
                }
              }
              DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v94);
              DXGDEVICE::DestroyAllocationInternal(
                v24,
                0,
                0LL,
                v60,
                0LL,
                (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
            }
LABEL_65:
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v78);
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v81);
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v88);
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Src);
            DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v93);
            if ( v80[0] && _InterlockedExchangeAdd((volatile signed __int32 *)v80[0] + 17, 0xFFFFFFFF) == 1 )
              DXGSHAREDRESOURCE::Destroy(v80[0], 0LL, 0);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v99);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v85);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v84);
            if ( v77 )
            {
LABEL_69:
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v77 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v77 + 2), v77);
            }
            return (unsigned int)StandardAllocation;
          }
          v98 = 0LL;
          v97[2] = v65;
          v97[0] = *(_DWORD *)(ObjectA + 208);
          v97[1] = *(_DWORD *)(ObjectA + 212);
          v97[3] = 7;
          memset(v96, 0, 424);
          v66 = (4 * (v27 & 0x40 | (32 * (v27 & 0x80)))) | 0x41;
          HIDWORD(v96[0]) = *v7;
          LODWORD(v96[2]) = 4;
          v96[3] = v97;
          v96[39] = *(_QWORD *)(ObjectA + 104);
          LODWORD(v96[40]) = v76;
          v67 = *(_QWORD *)(ObjectA + 192);
          if ( (v27 & 0x200) != 0 )
            v96[42] = *(_QWORD *)(ObjectA + 192);
          else
            v96[41] = *(_QWORD *)(ObjectA + 192);
          v96[43] = *(_QWORD *)(ObjectA + 224);
          LODWORD(v96[6]) = *(_DWORD *)(ObjectA + 232);
          v68 = v81;
          v96[44] = v81;
          LODWORD(v96[45]) = v7[12];
          v96[46] = v78;
          LODWORD(v96[47]) = v7[16];
          LODWORD(v96[0]) = v66 ^ (v66 ^ (v27 << 7)) & 0x400 | 0x200;
          v96[52] = *(_QWORD *)(ObjectA + 184);
          if ( (v27 & 0x200) != 0 )
          {
            v96[42] = v67;
            goto LABEL_146;
          }
          if ( (v27 & 0x400) != 0 )
          {
            v96[41] = v67;
LABEL_146:
            v70 = *(_DWORD *)(ObjectA + 204);
            v69 = v66 ^ (v66 ^ (v27 << 7)) & 0x400 | 0x200;
            LODWORD(v96[0]) = v69 ^ ((unsigned __int8)v69 ^ (unsigned __int8)(v27 >> 7)) & 0x10;
            LODWORD(v96[49]) = v70;
          }
          StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                                 v75,
                                 (struct _D3DKM_CREATESTANDARDALLOCATION *)v96,
                                 (struct COREDEVICEACCESS *)v99);
          if ( StandardAllocation >= 0 )
          {
            v73 = 1;
            *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe((__int64)v82, (DXGRESOURCEREFERENCE *)&v92, v96[1])
                      + 128LL) = ObjectA;
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v92);
            memmove(Src, *(const void **)(ObjectA + 104), v7[8]);
            v7[17] = v96[1];
            v71 = v88;
            *(_DWORD *)v88 = HIDWORD(v96[6]);
            v71[4] = v7[16];
            v72 = v78;
            *((_QWORD *)v71 + 1) = v78;
            *((_QWORD *)v7 + 2) = v71;
            *((_QWORD *)v7 + 3) = Src;
            *((_QWORD *)v7 + 5) = v68;
            *((_QWORD *)v7 + 7) = v72;
            v31 = v74;
            goto LABEL_46;
          }
        }
        else
        {
          StandardAllocation = -1073741811;
          WdLogSingleEntry3(3LL, v75, 0LL, -1073741811LL);
          WdLogGlobalForLineNumber = 11596;
        }
      }
      if ( StandardAllocation < 0 )
        goto LABEL_119;
      goto LABEL_65;
    }
    WdLogSingleEntry2(3LL, v75, v19);
    WdLogGlobalForLineNumber = 11381;
LABEL_115:
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v93);
    `DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(v80);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v99);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v85);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v84);
    v46 = v19;
    goto LABEL_82;
  }
  WdLogSingleEntry2(4LL, ObjectA, -1073741823LL);
  WdLogGlobalForLineNumber = 11342;
  DXGSHAREDRESOURCE::ReleaseReference((DXGSHAREDRESOURCE *)ObjectA, 0LL, 0);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v99);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v85);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v84);
  if ( v77 && _InterlockedExchangeAdd64((volatile signed __int64 *)v77 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v77 + 2), v77);
  return 3221225473LL;
}
