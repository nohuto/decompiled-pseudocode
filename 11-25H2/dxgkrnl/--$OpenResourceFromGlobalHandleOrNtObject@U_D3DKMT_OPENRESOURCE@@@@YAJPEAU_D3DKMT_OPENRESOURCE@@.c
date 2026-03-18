/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x14035C5F8
 * Callers:
 *     DxgkOpenResource @ 0x14035B240 (DxgkOpenResource.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x14001415C (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140015280 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1400172A0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x14001BA6C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
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
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x140047804 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402A0560 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x140333A6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x14035D984 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x14035DD88 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??1ENSURE_SHARED_RESOURCE_DEREFERENCE@?1???$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z@QEAA@XZ @ 0x14035F6D8 (--1ENSURE_SHARED_RESOURCE_DEREFERENCE@-1---$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403600FC (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
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
  __int64 v17; // r9
  char v18; // r8
  unsigned __int64 v19; // rax
  signed int v20; // r14d
  unsigned __int64 v21; // rax
  __int64 v22; // r9
  unsigned int v23; // eax
  unsigned int v24; // eax
  void *v25; // rdx
  struct DXGDEVICE *v26; // r15
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // r14d
  unsigned int v30; // eax
  unsigned int v31; // ecx
  int StandardAllocation; // r14d
  char v33; // bl
  _QWORD *v34; // rbx
  void *v35; // rcx
  void *v36; // rcx
  unsigned int i; // r12d
  char *v38; // rcx
  size_t v39; // r8
  char *v40; // rcx
  size_t v41; // r8
  __int64 v43; // r15
  ULONG64 v44; // rbx
  void *v45; // rcx
  void *v46; // rcx
  void *v47; // rcx
  unsigned int v48; // ebx
  char *v49; // rcx
  size_t v50; // r8
  __int64 v51; // r14
  unsigned int v52; // eax
  __int64 v53; // r8
  unsigned int v54; // ecx
  int v55; // ecx
  int v56; // eax
  struct DXGPROCESS *v57; // rbx
  unsigned int v58; // r9d
  __int64 v59; // rax
  __int64 v60; // r8
  int v61; // edx
  struct DXGRESOURCE *v62; // r12
  unsigned int v63; // r8d
  __int64 v64; // rax
  __int64 v65; // r9
  int v66; // edx
  int v67; // edx
  int v68; // edx
  __int64 v69; // r8
  void *v70; // r12
  int v71; // ecx
  int v72; // eax
  _DWORD *v73; // rcx
  void *v74; // rbx
  char v75; // [rsp+50h] [rbp-3D8h]
  char v76; // [rsp+51h] [rbp-3D7h]
  struct DXGDEVICE *v77; // [rsp+58h] [rbp-3D0h] BYREF
  unsigned int v78; // [rsp+60h] [rbp-3C8h]
  struct DXGDEVICE *v79; // [rsp+68h] [rbp-3C0h] BYREF
  void *v80; // [rsp+70h] [rbp-3B8h]
  void *Src; // [rsp+78h] [rbp-3B0h]
  DXGSHAREDRESOURCE *v82[2]; // [rsp+80h] [rbp-3A8h] BYREF
  void *v83; // [rsp+90h] [rbp-398h]
  struct DXGPROCESS *v84; // [rsp+98h] [rbp-390h]
  __int64 v85; // [rsp+A0h] [rbp-388h]
  _BYTE v86[16]; // [rsp+A8h] [rbp-380h] BYREF
  char v87[8]; // [rsp+B8h] [rbp-370h] BYREF
  __int64 v88; // [rsp+C0h] [rbp-368h]
  char v89; // [rsp+C8h] [rbp-360h]
  void *v90; // [rsp+D0h] [rbp-358h]
  __int64 v91; // [rsp+D8h] [rbp-350h] BYREF
  _QWORD *v92; // [rsp+E0h] [rbp-348h]
  _BYTE v93[16]; // [rsp+E8h] [rbp-340h] BYREF
  struct _EX_RUNDOWN_REF *v94; // [rsp+F8h] [rbp-330h] BYREF
  _BYTE v95[24]; // [rsp+100h] [rbp-328h] BYREF
  _BYTE v96[24]; // [rsp+118h] [rbp-310h] BYREF
  _BYTE v97[80]; // [rsp+130h] [rbp-2F8h] BYREF
  _QWORD v98[54]; // [rsp+180h] [rbp-2A8h] BYREF
  _DWORD v99[4]; // [rsp+330h] [rbp-F8h] BYREF
  __int64 v100; // [rsp+340h] [rbp-E8h]
  __int64 v101[20]; // [rsp+350h] [rbp-D8h] BYREF

  v78 = a2;
  v92 = (_QWORD *)a1;
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v76 = CurrentThreadPreviousMode;
  Current = DXGPROCESS::GetCurrent(v5);
  v84 = Current;
  v83 = 0LL;
  v80 = 0LL;
  Src = 0LL;
  v75 = 0;
  if ( !Current )
  {
    v48 = -1073741811;
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
    return v48;
  }
  memset(v97, 0, 0x48uLL);
  v7 = (unsigned int *)v97;
  if ( CurrentThreadPreviousMode == 1 )
  {
    v8 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v8 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v97, v8, 0x48uLL);
  }
  else
  {
    v7 = (unsigned int *)a1;
  }
  v82[1] = (DXGSHAREDRESOURCE *)v7;
  v85 = *((_QWORD *)v7 + 7);
  v77 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v79, *v7, Current, &v77);
  v9 = v77;
  if ( !v77 )
  {
    v48 = -1073741811;
    WdLogSingleEntry2(2LL, *v7, -1073741811LL);
    WdLogGlobalForLineNumber = 11158;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
    v48 = -1073741811;
    WdLogSingleEntry2(3LL, v77, -1073741811LL);
    WdLogGlobalForLineNumber = 11168;
    goto LABEL_82;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v86,
    v77);
  v88 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL);
  v89 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v87);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v101, (__int64)v9, 2, v10, 0);
  v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v101, 0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry2(3LL, v9, v11);
    WdLogGlobalForLineNumber = 11184;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v101);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v87);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v86);
    v48 = v12;
    goto LABEL_82;
  }
  if ( !a2 )
  {
    v48 = -1073741811;
    WdLogSingleEntry2(2LL, v9, -1073741811LL);
    WdLogGlobalForLineNumber = 11250;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: No NT Object or global handle specified. Returning 0x%I64x",
      (__int64)v9,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_81:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v101);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v87);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v86);
LABEL_82:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v79);
    return v48;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v93);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v93);
  if ( (*((_DWORD *)Current + 102) & 0x100) == 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, a2, 2);
    goto LABEL_12;
  }
  v51 = *((_QWORD *)Current + 74);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v51 + 248));
  v52 = (a2 >> 6) & 0xFFFFFF;
  if ( v52 >= *(_DWORD *)(v51 + 296) )
    goto LABEL_109;
  v53 = *(_QWORD *)(v51 + 280);
  v54 = *(_DWORD *)(v53 + 16LL * v52 + 8);
  if ( a2 >> 30 != ((v54 >> 5) & 3) )
    goto LABEL_109;
  if ( (v54 & 0x2000) != 0 )
    goto LABEL_109;
  v55 = v54 & 0x1F;
  if ( !v55 )
    goto LABEL_109;
  if ( v55 != 2 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_109:
    ObjectA = 0LL;
    goto LABEL_110;
  }
  ObjectA = *(_QWORD *)(v53 + 16LL * v52);
LABEL_110:
  _InterlockedAdd((volatile signed __int32 *)(v51 + 264), 0xFFFFFFFF);
  ExReleasePushLockSharedEx(v51 + 248, 0LL);
  KeLeaveCriticalRegion();
  v9 = v77;
LABEL_12:
  if ( !ObjectA )
  {
    v48 = -1073741811;
    WdLogSingleEntry3(3LL, v9, v78, -1073741811LL);
    WdLogGlobalForLineNumber = 11228;
LABEL_80:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v93);
    goto LABEL_81;
  }
  _m_prefetchw((const void *)(ObjectA + 68));
  v15 = *(_DWORD *)(ObjectA + 68);
  do
  {
    if ( !v15 )
    {
      v48 = -1073741811;
      WdLogSingleEntry3(3LL, v77, v78, -1073741811LL);
      WdLogGlobalForLineNumber = 11240;
      goto LABEL_80;
    }
    v16 = v15;
    v15 = _InterlockedCompareExchange((volatile signed __int32 *)(ObjectA + 68), v15 + 1, v15);
  }
  while ( v16 != v15 );
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v93);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v93);
  v82[0] = (DXGSHAREDRESOURCE *)ObjectA;
  if ( (*(_DWORD *)(ObjectA + 12) & 0x10) == 0 )
  {
    DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v95, v84);
    if ( v18 )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v101);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v87);
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v95, 1u);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v87);
      v56 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v101, 0LL);
      v20 = v56;
      if ( v56 < 0 )
      {
        WdLogSingleEntry2(3LL, v77, v56);
        WdLogGlobalForLineNumber = 11301;
        goto LABEL_115;
      }
    }
    v19 = 80LL * v7[2];
    v20 = v19 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v19 <= 0xFFFFFFFF )
    {
      v21 = 80LL * v7[2];
      if ( !is_mul_ok(v7[2], 0x50uLL) )
        v21 = -1LL;
      v90 = (void *)operator new[](v21, 0x4B677844u, 256LL, v17);
      if ( !v90 )
      {
        StandardAllocation = -1073741801;
        WdLogSingleEntry3(3LL, v77, v7[2], -1073741801LL);
        WdLogGlobalForLineNumber = 11326;
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v95);
        if ( v82[0] && _InterlockedExchangeAdd((volatile signed __int32 *)v82[0] + 17, 0xFFFFFFFF) == 1 )
          DXGSHAREDRESOURCE::Destroy(v82[0], 0LL, 0);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v101);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v87);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v86);
        if ( v79 )
          goto LABEL_69;
        return (unsigned int)StandardAllocation;
      }
      v23 = v7[16];
      if ( v23 )
      {
        v80 = (void *)operator new[](v23, 0x4B677844u, 258LL, v22);
        if ( !v80 )
        {
          StandardAllocation = -1073741801;
          v26 = v77;
          WdLogSingleEntry3(3LL, v77, v7[16], -1073741801LL);
          WdLogGlobalForLineNumber = 11340;
          goto LABEL_119;
        }
      }
      if ( v7[12] )
      {
        v83 = (void *)operator new[](v7[12], 0x4B677844u, 258LL, v22);
        if ( !v83 )
        {
          StandardAllocation = -1073741801;
          v26 = v77;
          WdLogSingleEntry3(3LL, v77, v7[12], -1073741801LL);
          WdLogGlobalForLineNumber = 11356;
          goto LABEL_119;
        }
      }
      v24 = v7[8];
      if ( !v24 )
      {
        v25 = Src;
        goto LABEL_27;
      }
      v25 = (void *)operator new[](v24, 0x4B677844u, 258LL, v22);
      Src = v25;
      if ( !v25 )
      {
        StandardAllocation = -1073741801;
        v26 = v77;
        WdLogSingleEntry3(3LL, v77, v7[8], -1073741801LL);
        WdLogGlobalForLineNumber = 11372;
        goto LABEL_119;
      }
LABEL_27:
      v26 = v77;
      if ( (*((_BYTE *)v77 + 1901) & 1) != 0
        || *(_QWORD *)(ObjectA + 80) == *((_QWORD *)v77 + 2)
        && ((v27 = *((_QWORD *)v77 + 235)) == 0
         || *(_QWORD *)(v27 + 3128)
         || (v28 = *(_QWORD *)(ObjectA + 96)) == 0
         || v28 == v27) )
      {
        v33 = v76;
        if ( v76 == 1 )
        {
          *((_QWORD *)v7 + 7) = v80;
          *((_QWORD *)v7 + 5) = v83;
          *((_QWORD *)v7 + 3) = v25;
          *((_QWORD *)v7 + 2) = v90;
        }
        StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(v26, 0, (__int64)v101, 0, 0LL, 0LL, 0LL);
        if ( StandardAllocation < 0 )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 11553;
        }
        else
        {
          v75 = 1;
LABEL_46:
          if ( v33 == 1 )
          {
            v34 = v92;
            v35 = (char *)v92 + 68;
            if ( (unsigned __int64)v92 + 68 >= MmUserProbeAddress )
              v35 = (void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v35, v7 + 17, 4uLL);
            v36 = v34 + 8;
            if ( (unsigned __int64)(v34 + 8) >= MmUserProbeAddress )
              v36 = (void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v36, v7 + 16, 4uLL);
            for ( i = 0; i < v7[2]; ++i )
            {
              v91 = 0LL;
              v43 = 80LL * i;
              v91 = v85 + *(_DWORD *)(v43 + *((_QWORD *)v7 + 2) + 8) - v7[14];
              v44 = v43 + v34[2];
              v45 = (void *)v44;
              if ( v44 >= MmUserProbeAddress )
                v45 = (void *)MmUserProbeAddress;
              RtlCopyVolatileMemory(v45, (const void *)(v43 + *((_QWORD *)v7 + 2)), 4uLL);
              v46 = (void *)(v44 + 16);
              if ( v44 + 16 >= MmUserProbeAddress )
                v46 = (void *)MmUserProbeAddress;
              RtlCopyVolatileMemory(v46, (const void *)(v43 + *((_QWORD *)v7 + 2) + 16LL), 4uLL);
              v47 = (void *)(v44 + 8);
              if ( v44 + 8 >= MmUserProbeAddress )
                v47 = (void *)MmUserProbeAddress;
              RtlCopyVolatileMemory(v47, &v91, 8uLL);
              v26 = v77;
              v34 = v92;
            }
            if ( v7[8] )
            {
              v38 = (char *)v34[3];
              v39 = v7[8];
              if ( &v38[v39] <= v38 || (unsigned __int64)&v38[v39] > MmUserProbeAddress )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v38, Src, v39);
              v26 = v77;
            }
            if ( v7[12] )
            {
              v49 = (char *)v34[5];
              v50 = v7[12];
              if ( &v49[v50] <= v49 || (unsigned __int64)&v49[v50] > MmUserProbeAddress )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v49, v83, v50);
              v26 = v77;
            }
            if ( v7[16] )
            {
              v40 = (char *)v34[7];
              v41 = v7[16];
              if ( &v40[v41] <= v40 || (unsigned __int64)&v40[v41] > MmUserProbeAddress )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v40, v80, v41);
              v26 = v77;
            }
          }
        }
      }
      else
      {
        v29 = *(_DWORD *)(ObjectA + 12);
        if ( (v29 & 0x20) != 0 )
        {
          if ( *(_DWORD *)(ObjectA + 132) != v7[2] )
          {
            WdLogSingleEntry4(3LL, v77, v7[2], *(unsigned int *)(ObjectA + 132), -1073741811LL);
            WdLogGlobalForLineNumber = 11408;
            goto LABEL_118;
          }
          v30 = v7[8];
          v31 = *(_DWORD *)(ObjectA + 112);
          v78 = v31;
          if ( v30 != v31 )
          {
            WdLogSingleEntry4(3LL, v77, v30, v31, -1073741811LL);
            WdLogGlobalForLineNumber = 11419;
            goto LABEL_118;
          }
          v67 = *(_DWORD *)(ObjectA + 216);
          if ( !v67 && *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v77 + 2) + 16LL) + 2280LL) < 0x5000u )
          {
            WdLogSingleEntry2(3LL, v77, -1073741811LL);
            WdLogGlobalForLineNumber = 11433;
LABEL_118:
            StandardAllocation = -1073741811;
LABEL_119:
            if ( v75 )
            {
              v57 = v84;
              DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v96, v84);
              v58 = v7[17];
              v59 = (v58 >> 6) & 0xFFFFFF;
              if ( (unsigned int)v59 < *((_DWORD *)v57 + 74)
                && (v60 = *((_QWORD *)v57 + 35),
                    v61 = *(_DWORD *)(v60 + 16 * v59 + 8),
                    ((v58 >> 25) & 0x60) == (*(_BYTE *)(v60 + 16 * v59 + 8) & 0x60))
                && (v61 & 0x2000) == 0
                && (v61 & 0x1F) != 0 )
              {
                if ( (*(_BYTE *)(v60 + 16LL * ((v58 >> 6) & 0xFFFFFF) + 8) & 0x1F) != 4 )
                {
                  WdLogSingleEntry0(2LL);
                  WdLogGlobalForLineNumber = 318;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    0xFFFFFFFFLL,
                    L"Handle type mismatch",
                    318LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  goto LABEL_126;
                }
                v62 = *(struct DXGRESOURCE **)(v60 + 16LL * ((v58 >> 6) & 0xFFFFFF));
              }
              else
              {
LABEL_126:
                v62 = 0LL;
              }
              if ( v62 )
              {
                v63 = v7[17];
                v64 = (v63 >> 6) & 0xFFFFFF;
                if ( (unsigned int)v64 < *((_DWORD *)v57 + 74) )
                {
                  v65 = *((_QWORD *)v57 + 35);
                  v66 = *(_DWORD *)(v65 + 16 * v64 + 8);
                  if ( ((v63 >> 25) & 0x60) == (*(_BYTE *)(v65 + 16 * v64 + 8) & 0x60)
                    && (v66 & 0x2000) == 0
                    && (v66 & 0x1F) != 0 )
                  {
                    *(_DWORD *)(v65 + 16LL * ((v63 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                  }
                }
              }
              DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v96);
              DXGDEVICE::DestroyAllocationInternal(
                v26,
                0,
                0LL,
                v62,
                0LL,
                (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
            }
LABEL_65:
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v80);
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v83);
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v90);
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Src);
            DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v95);
            if ( v82[0] && _InterlockedExchangeAdd((volatile signed __int32 *)v82[0] + 17, 0xFFFFFFFF) == 1 )
              DXGSHAREDRESOURCE::Destroy(v82[0], 0LL, 0);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v101);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v87);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v86);
            if ( v79 )
            {
LABEL_69:
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v79 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v79 + 2), v79);
            }
            return (unsigned int)StandardAllocation;
          }
          v100 = 0LL;
          v99[2] = v67;
          v99[0] = *(_DWORD *)(ObjectA + 208);
          v99[1] = *(_DWORD *)(ObjectA + 212);
          v99[3] = 7;
          memset(v98, 0, 424);
          v68 = (4 * (v29 & 0x40 | (32 * (v29 & 0x80)))) | 0x41;
          HIDWORD(v98[0]) = *v7;
          LODWORD(v98[2]) = 4;
          v98[3] = v99;
          v98[39] = *(_QWORD *)(ObjectA + 104);
          LODWORD(v98[40]) = v78;
          v69 = *(_QWORD *)(ObjectA + 192);
          if ( (v29 & 0x200) != 0 )
            v98[42] = *(_QWORD *)(ObjectA + 192);
          else
            v98[41] = *(_QWORD *)(ObjectA + 192);
          v98[43] = *(_QWORD *)(ObjectA + 224);
          LODWORD(v98[6]) = *(_DWORD *)(ObjectA + 232);
          v70 = v83;
          v98[44] = v83;
          LODWORD(v98[45]) = v7[12];
          v98[46] = v80;
          LODWORD(v98[47]) = v7[16];
          LODWORD(v98[0]) = v68 ^ (v68 ^ (v29 << 7)) & 0x400 | 0x200;
          v98[52] = *(_QWORD *)(ObjectA + 184);
          if ( (v29 & 0x200) != 0 )
          {
            v98[42] = v69;
            goto LABEL_146;
          }
          if ( (v29 & 0x400) != 0 )
          {
            v98[41] = v69;
LABEL_146:
            v72 = *(_DWORD *)(ObjectA + 204);
            v71 = v68 ^ (v68 ^ (v29 << 7)) & 0x400 | 0x200;
            LODWORD(v98[0]) = v71 ^ ((unsigned __int8)v71 ^ (unsigned __int8)(v29 >> 7)) & 0x10;
            LODWORD(v98[49]) = v72;
          }
          StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                                 v77,
                                 (struct _D3DKM_CREATESTANDARDALLOCATION *)v98,
                                 (struct COREDEVICEACCESS *)v101);
          if ( StandardAllocation >= 0 )
          {
            v75 = 1;
            *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe((__int64)v84, (DXGRESOURCEREFERENCE *)&v94, v98[1])
                      + 128LL) = ObjectA;
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v94);
            memmove(Src, *(const void **)(ObjectA + 104), v7[8]);
            v7[17] = v98[1];
            v73 = v90;
            *(_DWORD *)v90 = HIDWORD(v98[6]);
            v73[4] = v7[16];
            v74 = v80;
            *((_QWORD *)v73 + 1) = v80;
            *((_QWORD *)v7 + 2) = v73;
            *((_QWORD *)v7 + 3) = Src;
            *((_QWORD *)v7 + 5) = v70;
            *((_QWORD *)v7 + 7) = v74;
            v33 = v76;
            goto LABEL_46;
          }
        }
        else
        {
          StandardAllocation = -1073741811;
          WdLogSingleEntry3(3LL, v77, 0LL, -1073741811LL);
          WdLogGlobalForLineNumber = 11530;
        }
      }
      if ( StandardAllocation < 0 )
        goto LABEL_119;
      goto LABEL_65;
    }
    WdLogSingleEntry2(3LL, v77, v20);
    WdLogGlobalForLineNumber = 11315;
LABEL_115:
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v95);
    `DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(v82);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v101);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v87);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v86);
    v48 = v20;
    goto LABEL_82;
  }
  WdLogSingleEntry2(4LL, ObjectA, -1073741823LL);
  WdLogGlobalForLineNumber = 11276;
  DXGSHAREDRESOURCE::ReleaseReference((DXGSHAREDRESOURCE *)ObjectA, 0LL, 0);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v101);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v87);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v86);
  if ( v79 && _InterlockedExchangeAdd64((volatile signed __int64 *)v79 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v79 + 2), v79);
  return 3221225473LL;
}
