/*
 * XREFs of ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140409620
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14032FBB8 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14000E300 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14000F358 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140036128 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003E5F0 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x140040510 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x140042164 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004F834 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x140051A2C (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z @ 0x14006228C (-IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z.c)
 *     Feature_4078915896__private_IsEnabledDeviceUsageNoInline @ 0x14006B7A8 (Feature_4078915896__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?VmBusSendFlushDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGDEVICE@@W4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1401865F4 (-VmBusSendFlushDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGDEVICE@@W4DXGDEVICE_FLUSHSCHEDULER.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14028EBBC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x14028FFE0 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x140290CEC (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x140293650 (DxgkAcquireSessionModeChangeLock.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x140298418 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402CCEDC (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1402FFD84 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     DxgkDestroyClientAllocation @ 0x140337B58 (DxgkDestroyClientAllocation.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x140346DD8 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x140376424 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403800D0 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x140381DCC (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x140382824 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403CADBC (-DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@P.c)
 *     ?AcquireWin32kDwmStateAndPDevLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1403CC780 (-AcquireWin32kDwmStateAndPDevLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1403D6D48 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x14040C2D8 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1404229E8 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x140422DBC (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall DxgkDestroyAllocationInternal(
        struct DXGPROCESS *a1,
        struct DXGDEVICE *a2,
        char *a3,
        struct DXGALLOCATION **a4,
        unsigned int a5,
        const unsigned int **a6,
        unsigned int a7,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a8,
        char *a9,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a10,
        unsigned __int8 a11)
{
  unsigned int *v11; // rdi
  struct DXGPROCESS *v13; // r10
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v14; // ebx
  unsigned int v15; // r15d
  unsigned __int64 v16; // rdx
  const unsigned int *v17; // r9
  unsigned int v18; // r15d
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // r9
  __int64 v23; // rdi
  unsigned __int8 v24; // r12
  const char *v25; // rdx
  __int64 v26; // rcx
  struct DXGRESOURCE *v27; // rdi
  const struct DXGALLOCATION *v28; // rdi
  unsigned int v29; // edx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // r13
  __int64 v33; // r9
  const char *v34; // rdx
  unsigned int v35; // edi
  struct DXGPROCESS *v36; // r14
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rbx
  void (*v39)(void); // rax
  __int64 v40; // rcx
  unsigned int v41; // r13d
  __int64 v42; // r15
  struct DXGALLOCATION **v43; // rdi
  struct DXGALLOCATION *v44; // rdi
  unsigned int v45; // edx
  int v46; // ecx
  ADAPTER_DISPLAY *v47; // rcx
  unsigned int v48; // r15d
  unsigned __int8 v49; // cl
  unsigned __int8 v50; // r12
  DXGADAPTER *v51; // rdi
  char *v52; // rcx
  __int64 v53; // rcx
  unsigned int v54; // r12d
  struct DXGALLOCATION **v55; // r15
  struct DXGALLOCATION *v56; // rdi
  unsigned int v57; // edx
  unsigned int v58; // edx
  int v59; // ecx
  ADAPTER_DISPLAY *v60; // rcx
  bool IsDisplayedPrimary; // al
  unsigned int v62; // r8d
  int v63; // eax
  __int64 v64; // r15
  __int64 v65; // r15
  int CddDeviceAndContextForCurrentSession; // eax
  DXGADAPTER *v67; // rax
  volatile signed __int32 *v68; // rdi
  unsigned int v69; // edi
  __int64 v70; // rdx
  struct DXGALLOCATION *v71; // rdi
  struct DXGDEVICE *VidPnSourceOwner; // rax
  DXGADAPTER **v73; // r9
  unsigned int v74; // edx
  DXGADAPTER *v75; // r8
  char v76; // r8
  __int64 v77; // rcx
  struct DXGDEVICE *v78; // rbx
  DXGADAPTER *v79; // rdi
  char *v80; // rcx
  struct DXGPROCESS *v81; // r14
  DXGGLOBAL *v82; // rax
  unsigned int v83; // edi
  struct DXGPROCESS *v84; // r14
  DXGGLOBAL *v85; // rax
  struct DXGSESSIONDATA *v86; // rbx
  int v87; // eax
  __int64 v88; // rdi
  __int64 v89; // rcx
  const char *v90; // rdx
  DXGDODPRESENT *v91; // rcx
  struct DXGDEVICE *v92; // r15
  unsigned int i; // ebx
  struct DXGRESOURCE *v94; // r9
  unsigned __int8 v95; // al
  DXGADAPTER *v96; // rdi
  char *v97; // rcx
  struct DXGDEVICE *v98; // r15
  char v99; // bl
  __int64 v100; // rax
  DXGADAPTER *v101; // rbx
  char *v102; // rcx
  DXGGLOBAL *v103; // rax
  unsigned __int8 v104; // [rsp+50h] [rbp-3F8h] BYREF
  bool v105; // [rsp+51h] [rbp-3F7h] BYREF
  char v106; // [rsp+52h] [rbp-3F6h]
  bool v107; // [rsp+53h] [rbp-3F5h]
  unsigned __int8 v108; // [rsp+54h] [rbp-3F4h]
  unsigned __int8 v109; // [rsp+55h] [rbp-3F3h]
  unsigned __int8 v110; // [rsp+56h] [rbp-3F2h]
  unsigned __int8 v111; // [rsp+57h] [rbp-3F1h] BYREF
  unsigned int v112; // [rsp+58h] [rbp-3F0h]
  struct DXGDEVICE *v113; // [rsp+60h] [rbp-3E8h] BYREF
  struct DXGRESOURCE *v114; // [rsp+68h] [rbp-3E0h] BYREF
  __int64 v115; // [rsp+70h] [rbp-3D8h]
  struct DXGALLOCATION *v116; // [rsp+78h] [rbp-3D0h]
  struct DXGALLOCATION **v117; // [rsp+80h] [rbp-3C8h]
  DXGADAPTER *v118; // [rsp+88h] [rbp-3C0h]
  struct DXGRESOURCE *v119; // [rsp+90h] [rbp-3B8h]
  unsigned int v120; // [rsp+98h] [rbp-3B0h]
  struct DXGPROCESS *v121[2]; // [rsp+A0h] [rbp-3A8h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v122; // [rsp+B0h] [rbp-398h]
  _BYTE v123[16]; // [rsp+B8h] [rbp-390h] BYREF
  struct DXGDEVICE *v124; // [rsp+C8h] [rbp-380h]
  __int64 v125; // [rsp+D0h] [rbp-378h]
  _BYTE v126[16]; // [rsp+D8h] [rbp-370h] BYREF
  _BYTE v127[16]; // [rsp+E8h] [rbp-360h] BYREF
  __int128 v128; // [rsp+F8h] [rbp-350h] BYREF
  __int64 v129; // [rsp+110h] [rbp-338h] BYREF
  struct DXGPROCESS *v130; // [rsp+118h] [rbp-330h]
  __int128 v131; // [rsp+120h] [rbp-328h]
  __int128 v132; // [rsp+130h] [rbp-318h]
  __int128 v133; // [rsp+140h] [rbp-308h]
  __int128 v134; // [rsp+150h] [rbp-2F8h]
  __int128 v135; // [rsp+160h] [rbp-2E8h]
  __int128 v136; // [rsp+170h] [rbp-2D8h]
  __int128 v137; // [rsp+180h] [rbp-2C8h]
  __int128 v138; // [rsp+190h] [rbp-2B8h]
  __int128 v139; // [rsp+1A0h] [rbp-2A8h]
  __int128 v140; // [rsp+1B0h] [rbp-298h]
  __int128 v141; // [rsp+1C0h] [rbp-288h]
  __int128 v142; // [rsp+1D0h] [rbp-278h]
  __int128 v143; // [rsp+1E0h] [rbp-268h]
  __int128 v144; // [rsp+1F0h] [rbp-258h]
  __int128 v145; // [rsp+200h] [rbp-248h]
  __int128 v146; // [rsp+210h] [rbp-238h]
  __int128 v147; // [rsp+220h] [rbp-228h]
  __int128 v148; // [rsp+230h] [rbp-218h]
  __int128 v149; // [rsp+240h] [rbp-208h]
  __int128 v150; // [rsp+250h] [rbp-1F8h]
  __int128 v151; // [rsp+260h] [rbp-1E8h]
  __int128 v152; // [rsp+270h] [rbp-1D8h]
  __int128 v153; // [rsp+280h] [rbp-1C8h]
  __int128 v154; // [rsp+290h] [rbp-1B8h]
  __int128 v155; // [rsp+2A0h] [rbp-1A8h]
  unsigned int v156; // [rsp+2B0h] [rbp-198h]
  PERESOURCE *v157; // [rsp+2C0h] [rbp-188h] BYREF
  char v158[16]; // [rsp+2C8h] [rbp-180h] BYREF
  __int64 v159; // [rsp+2D8h] [rbp-170h]
  _BYTE v160[88]; // [rsp+308h] [rbp-140h] BYREF
  _BYTE v161[160]; // [rsp+360h] [rbp-E8h] BYREF

  v117 = a4;
  v11 = (unsigned int *)a3;
  v13 = a1;
  v121[0] = a1;
  v14.0 = a8.0;
  v122 = a10;
  if ( a11 )
  {
    v15 = 0;
    v120 = 0;
    while ( v15 < a7 )
    {
      v16 = 4LL * v15;
      v17 = (const unsigned int *)&a9[v16];
      if ( (unsigned __int64)&a9[v16] >= MmUserProbeAddress )
        v17 = (const unsigned int *)MmUserProbeAddress;
      RtlCopyVolatileMemory(&v11[v16 / 4], v17, 4uLL);
      v120 = ++v15;
    }
    *a6 = v11;
    v18 = a7;
    v13 = v121[0];
    a4 = v117;
  }
  else
  {
    v18 = a7;
    if ( a7 )
    {
      v19 = a7;
      do
      {
        *v11 = *(unsigned int *)((char *)v11 + a9 - a3);
        ++v11;
        --v19;
      }
      while ( v19 );
    }
  }
  v114 = 0LL;
  v20 = ValidateDestroyAllocation(v13, a2, a5, *a6, v18, a4, &v114);
  if ( v20 == 255 )
    return 0LL;
  if ( v20 < 0 )
  {
    WdLogSingleEntry2(3LL, a2, -1073741811LL);
    WdLogGlobalForLineNumber = 9886;
    return 3221225485LL;
  }
  v23 = *((_QWORD *)a2 + 237);
  v115 = v23;
  v24 = 0;
  v104 = 0;
  if ( (a8.Value & 0x80000000) != 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v161, (__int64)a2, 2, v21, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v161, v25);
    v26 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
    if ( (*(int *)(v26 + 2736) >= 0x2000 || *(_BYTE *)(v26 + 3036)) && *((_DWORD *)a2 + 116) == 1 )
    {
      v27 = v114;
      if ( v114 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v126, (struct DXGRESOURCE *)((char *)v114 + 80), 0);
        if ( (unsigned int)Feature_4078915896__private_IsEnabledDeviceUsageNoInline() )
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v126);
        v28 = (const struct DXGALLOCATION *)*((_QWORD *)v27 + 3);
        v24 = 1;
        v104 = 1;
        if ( v28 )
        {
          do
          {
            v29 = *(_DWORD *)(*((_QWORD *)v28 + 6) + 4LL);
            if ( (v29 & 1) == 0
              || *((_QWORD *)a2 + 237) != *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL)
              || v28 == DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)a2, (v29 >> 6) & 0xF) )
            {
              v24 = 0;
            }
            v28 = (const struct DXGALLOCATION *)*((_QWORD *)v28 + 8);
          }
          while ( v28 );
          v104 = v24;
        }
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v126);
      }
      v23 = v115;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
  }
  if ( v23 )
    v30 = *(_QWORD *)(v23 + 3120);
  else
    v30 = 0LL;
  v129 = v30;
  v130 = v121[0];
  if ( v30 )
    v31 = *(_DWORD *)(v30 + 96);
  else
    v31 = 0;
  v156 = 8 * v31;
  v131 = 0LL;
  v132 = 0LL;
  v133 = 0LL;
  v134 = 0LL;
  v135 = 0LL;
  v136 = 0LL;
  v137 = 0LL;
  v138 = 0LL;
  v139 = 0LL;
  v140 = 0LL;
  v141 = 0LL;
  v142 = 0LL;
  v143 = 0LL;
  v144 = 0LL;
  v145 = 0LL;
  v146 = 0LL;
  v147 = 0LL;
  v148 = 0LL;
  v149 = 0LL;
  v150 = 0LL;
  v151 = 0LL;
  v152 = 0LL;
  v153 = 0LL;
  v154 = 0LL;
  v155 = 0LL;
  v32 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  v118 = (DXGADAPTER *)v32;
  _InterlockedIncrement64((volatile signed __int64 *)(v32 + 24));
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v32 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v32 + 152));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v157, (__int64)a2, 2, v33, 0);
  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)&v157, v34);
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 200LL) == 4 )
  {
    WdLogSingleEntry1(4LL, a2);
    WdLogGlobalForLineNumber = 9957;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v157);
    _InterlockedDecrement((volatile signed __int32 *)(v32 + 152));
    ExReleasePushLockSharedEx(v32 + 136, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v32);
    v35 = v156;
    if ( (v156 & 4) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 270;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"(FALSE == m_u.s.bStateSaved)",
        270LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v36 = v130;
    if ( (v35 & 2) != 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v130 + 11) + 200LL))(*(_QWORD *)(v129 + 16), v35 >> 3);
      v35 &= ~2u;
    }
    if ( (v35 & 1) == 0 )
      return 0LL;
    goto LABEL_43;
  }
  if ( *((_DWORD *)a2 + 152) == 4 )
  {
    WdLogSingleEntry1(4LL, a2);
    WdLogGlobalForLineNumber = 9962;
    DxgkDestroyClientAllocation(v40, a2, v18, v117, (struct DXGALLOCATION **)v114);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v157);
    _InterlockedDecrement((volatile signed __int32 *)(v32 + 152));
    ExReleasePushLockSharedEx(v32 + 136, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v32);
    v35 = v156;
    if ( (v156 & 4) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 270;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"(FALSE == m_u.s.bStateSaved)",
        270LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v36 = v130;
    if ( (v35 & 2) != 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v130 + 11) + 200LL))(*(_QWORD *)(v129 + 16), v35 >> 3);
      v35 &= ~2u;
    }
    if ( (v35 & 1) == 0 )
      return 0LL;
LABEL_43:
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
    v39 = *(void (**)(void))(*((_QWORD *)v36 + 11) + 184LL);
LABEL_214:
    v39();
    v156 = v35 & 0xFFFFFFFE;
    *((_QWORD *)SessionData + 2409) = 0LL;
    ExReleasePushLockExclusiveEx((char *)SessionData + 19264, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 216LL) + 64LL) + 40LL)
                 + 28LL) < 0x5015u )
    v14.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(a8.Value & 0xFFFFFFFE);
  v109 = 0;
  v110 = 0;
  v106 = 0;
  v108 = 0;
  v107 = 0;
  v112 = 0;
  v116 = 0LL;
  v41 = -1;
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v105);
  v124 = 0LL;
  v113 = 0LL;
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v123, v121[0]);
  v42 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  v125 = v42;
  v43 = (struct DXGALLOCATION **)v114;
  v119 = v114;
  if ( v114 )
  {
    if ( *((struct DXGDEVICE **)v114 + 1) != a2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9993;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pResource->m_pDevice == pDevice",
        9993LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v127, (struct DXGFASTMUTEX *const)(v43 + 10), 0);
    if ( (unsigned int)Feature_4078915896__private_IsEnabledDeviceUsageNoInline() )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v127);
    v44 = v43[3];
    if ( v44 )
    {
      while ( 1 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v44 + 6) + 4LL) & 1)
           + ((*(_DWORD *)(*((_QWORD *)v44 + 6) + 4LL) >> 1) & 1)
           + ((*(_DWORD *)(*((_QWORD *)v44 + 6) + 4LL) >> 13) & 1u) > 1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 10008;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"(pCurrentAlloc->m_pAllocation->m_Primary ? 1 : 0) + (pCurrentAlloc->m_pAllocation->m_CddPrimary ? 1 : 0) + ("
             "pCurrentAlloc->m_pAllocation->m_DirectFlip ? 1 : 0) <= 1",
            10008LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v45 = *(_DWORD *)(*((_QWORD *)v44 + 6) + 4LL);
        if ( (v45 & 1) != 0 )
        {
          if ( (v46 = *((_DWORD *)a2 + ((v45 >> 6) & 0xF) + 310), (_BYTE)v46)
            && (*((_DWORD *)a2 + 116) != 1 || (v46 & 0x100) != 0)
            || v42
            && (v47 = *(ADAPTER_DISPLAY **)(v42 + 3120)) != 0LL
            && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v47, (v45 >> 6) & 0xF) )
          {
            if ( !v24 )
            {
              v106 = 1;
              v116 = v44;
              v41 = (*(_DWORD *)(*((_QWORD *)v44 + 6) + 4LL) >> 6) & 0xF;
              v112 = 1 << ((*(_DWORD *)(*((_QWORD *)v44 + 6) + 4LL) >> 6) & 0xF);
              v107 = 0;
              goto LABEL_74;
            }
          }
        }
        if ( (*(_DWORD *)(*((_QWORD *)v44 + 6) + 4LL) & 2) != 0 )
          break;
        v44 = (struct DXGALLOCATION *)*((_QWORD *)v44 + 8);
        if ( !v44 )
          goto LABEL_74;
      }
      v108 = 1;
    }
LABEL_74:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v127);
LABEL_75:
    v48 = v112;
LABEL_76:
    v43 = (struct DXGALLOCATION **)v119;
    goto LABEL_77;
  }
  if ( a7 )
  {
    v54 = 0;
    v55 = v117;
    while ( 1 )
    {
      v56 = *v55;
      if ( !*v55 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 10038;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pCurrentAlloc != NULL", 10038LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *((struct DXGDEVICE **)v56 + 1) != a2 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 10039;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pCurrentAlloc->m_pDevice == pDevice",
          10039LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *(_DWORD *)(v125 + 420) == 1297040209 )
      {
        v57 = *(_DWORD *)(*((_QWORD *)v56 + 6) + 4LL);
        if ( (v57 & 8) != 0 )
          break;
      }
      v58 = *(_DWORD *)(*((_QWORD *)v56 + 6) + 4LL);
      if ( (v58 & 1) != 0 )
      {
        if ( (v59 = *((_DWORD *)a2 + (((unsigned __int64)v58 >> 6) & 0xF) + 310), (_BYTE)v59)
          && (*((_DWORD *)a2 + 116) != 1 || (v59 & 0x100) != 0)
          || (v60 = *(ADAPTER_DISPLAY **)(v125 + 3120)) != 0LL
          && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v60, (v58 >> 6) & 0xF) )
        {
          v106 = 1;
          v107 = v116 != 0LL;
          v116 = v56;
          v41 = (*(_DWORD *)(*((_QWORD *)v56 + 6) + 4LL) >> 6) & 0xF;
          v112 |= 1 << ((*(_DWORD *)(*((_QWORD *)v56 + 6) + 4LL) >> 6) & 0xF);
        }
      }
      ++v54;
      ++v55;
      if ( v54 >= a7 )
        goto LABEL_75;
    }
    v109 = 1;
    IsDisplayedPrimary = DXGDEVICE::IsDisplayedPrimary((struct _KTHREAD **)a2, (v57 >> 6) & 0xF, v56);
    v48 = v112;
    if ( IsDisplayedPrimary )
    {
      v110 = 1;
      v106 = 1;
      v107 = v116 != 0LL;
      v116 = v56;
      v41 = (*(_DWORD *)(*((_QWORD *)v56 + 6) + 4LL) >> 6) & 0xF;
      v48 = (1 << ((*(_DWORD *)(*((_QWORD *)v56 + 6) + 4LL) >> 6) & 0xF)) | v112;
      v112 = v48;
    }
    goto LABEL_76;
  }
  v48 = 0;
LABEL_77:
  v49 = 0;
  if ( (*((_DWORD *)v121[0] + 102) & 0x100) == 0 )
    v49 = v106;
  v50 = v49;
  WdLogSingleEntry5(8LL, v49, v109, v110, v108, v41);
  WdLogGlobalForLineNumber = 10088;
  if ( !v50 )
  {
    v65 = v115;
    if ( v104 )
      ADAPTER_DISPLAY::DisableTransitionalPrimaryAllocations(
        *(ADAPTER_DISPLAY **)(v115 + 3120),
        (ADAPTER_RENDER **)a2,
        v43[3],
        (struct COREDEVICEACCESS *)&v157);
    goto LABEL_163;
  }
  if ( !v115 || !*(_QWORD *)(v115 + 3120) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10093;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(pDisplayAdapter != NULL) && (pDisplayAdapter->IsDisplayAdapter())",
      10093LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)&v157);
  v51 = v118;
  v52 = (char *)v118 + 136;
  _InterlockedDecrement((volatile signed __int32 *)v118 + 38);
  ExReleasePushLockSharedEx(v52, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTER::ReleaseReference(v51);
  v53 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( *(int *)(v53 + 3004) > 2200 )
  {
    v62 = v41;
    if ( ((v48 - 1) & v48) != 0 )
      v62 = -3;
    DXGDEVICE::FlushScheduler(a2, 5, v62, 1);
  }
  else if ( *(_BYTE *)(v53 + 209) )
  {
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushDevice((struct DXG_VMBUS_CHANNEL_BASE *)(v53 + 4664), (__int64)a2, 5);
  }
  else
  {
    *(_OWORD *)v121 = 0LL;
    DXGPUSHLOCK::AcquireExclusive((struct DXGDEVICE *)((char *)a2 + 272));
    LODWORD(v121[0]) = 3;
    if ( (*(int (__fastcall **)(_QWORD, struct DXGPROCESS **, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 736LL)
                                                                                          + 8LL)
                                                                              + 136LL))(
           *((_QWORD *)a2 + 100),
           v121,
           4294967293LL,
           0LL) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5929;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NT_SUCCESS(FlushStatus)", 5929LL, 0LL, 0LL, 0LL, 0LL);
    }
    *((_QWORD *)a2 + 35) = 0LL;
    ExReleasePushLockExclusiveEx((char *)a2 + 272, 0LL);
    KeLeaveCriticalRegion();
  }
  v14.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(v14.Value | 1);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kDwmStateAndPDevLocks((MANAGEDPRIMARIESTRACKER *)&v129);
  v63 = DxgkAcquireSessionModeChangeLock(1);
  v64 = v63;
  v105 = v63 >= 0;
  if ( v63 >= 0 )
  {
    v65 = v115;
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v115 + 412),
                                             &v113,
                                             0LL,
                                             0LL,
                                             0);
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      WdLogSingleEntry1(4LL, CddDeviceAndContextForCurrentSession);
      WdLogGlobalForLineNumber = 10171;
    }
    if ( v113 )
    {
      if ( *((_QWORD *)v113 + 2) == *((_QWORD *)a2 + 2) )
      {
        *((_BYTE *)v113 + 1953) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v123);
      }
      else
      {
        v113 = 0LL;
      }
    }
    v67 = v118;
    _InterlockedIncrement64((volatile signed __int64 *)v118 + 3);
    v68 = (volatile signed __int32 *)((char *)v67 + 136);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v68, 0LL);
    _InterlockedIncrement(v68 + 4);
    if ( v160[72] )
      COREACCESS::AcquireExclusive((__int64)v160, 2u, 0);
    COREACCESS::AcquireExclusive((__int64)v158, 2u, 0);
    if ( *((_DWORD *)a2 + 152) == 4 )
    {
      WdLogSingleEntry1(4LL, a2);
      WdLogGlobalForLineNumber = 10206;
      v78 = v113;
      if ( v113 )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v123);
        *((_BYTE *)v78 + 1953) = 0;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v78 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v113 + 2), v113);
      }
      DxgkDestroyClientAllocation(v77, a2, a7, v117, (struct DXGALLOCATION **)v114);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v123);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v105);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v157);
      v79 = v118;
      v80 = (char *)v118 + 136;
      _InterlockedDecrement((volatile signed __int32 *)v118 + 38);
      ExReleasePushLockSharedEx(v80, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(v79);
      v35 = v156;
      if ( (v156 & 4) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 270;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"(FALSE == m_u.s.bStateSaved)",
          270LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v81 = v130;
      if ( (v35 & 2) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v130 + 11) + 200LL))(*(_QWORD *)(v129 + 16), v35 >> 3);
        v35 &= ~2u;
      }
      if ( (v35 & 1) == 0 )
        return 0LL;
      v82 = DXGGLOBAL::GetGlobal();
      SessionData = DXGGLOBAL::GetSessionData(v82);
      v39 = *(void (**)(void))(*((_QWORD *)v81 + 11) + 184LL);
      goto LABEL_214;
    }
    v69 = v112;
    MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)&v129, a2, v112);
    v70 = *((_QWORD *)a2 + 2);
    if ( *((_QWORD *)a2 + 237) != *(_QWORD *)(v70 + 16) )
      goto LABEL_144;
    if ( ((v69 - 1) & v69) != 0 )
    {
      ADAPTER_DISPLAY::DisableAllPrimaries(*(PERESOURCE ***)(v65 + 3120), (DXGADAPTER **)v70);
      v43 = (struct DXGALLOCATION **)v114;
      v124 = v113;
      goto LABEL_163;
    }
    if ( v107 )
    {
      if ( v41 == -1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 10266;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"VidpnSourceInvolved != D3DDDI_ID_UNINITIALIZED",
          10266LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      ADAPTER_DISPLAY::DisablePrimaryOnDevice(*(ADAPTER_DISPLAY **)(v65 + 3120), a2, v41, 0);
      v43 = (struct DXGALLOCATION **)v114;
      v124 = v113;
      goto LABEL_163;
    }
    v71 = v116;
    VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                         *(ADAPTER_DISPLAY **)(v65 + 3120),
                         (*(_DWORD *)(*((_QWORD *)v116 + 6) + 4LL) >> 6) & 0xF);
    if ( !VidPnSourceOwner || VidPnSourceOwner == a2 )
    {
      v73 = *(DXGADAPTER ***)(v65 + 3120);
      v74 = (*(_DWORD *)(*((_QWORD *)v71 + 6) + 4LL) >> 6) & 0xF;
      v75 = v73[2];
      if ( *((_QWORD *)v75 + 391) )
      {
        if ( *((int *)v75 + 684) >= 8960 || *((_BYTE *)v75 + 3052) && DXGADAPTER::UsingSetTimingsFromVidPn(v73[2]) )
        {
          v76 = 1;
          goto LABEL_138;
        }
        if ( *((_DWORD *)v75 + 751) == 2200 )
        {
          v76 = 0;
LABEL_138:
          ADAPTER_DISPLAY::DisableMPOPlanes((ADAPTER_DISPLAY *)v73, v74, v76);
        }
      }
    }
    if ( (*(_DWORD *)(*((_QWORD *)v71 + 6) + 4LL) & 1) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 10293;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"PrimaryAllocation->m_pAllocation->m_Primary",
        10293LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( ((*(_DWORD *)(*((_QWORD *)v71 + 6) + 4LL) >> 6) & 0xF) != v41 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 10294;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"PrimaryAllocation->m_pAllocation->m_VidPnSourceId == VidpnSourceInvolved",
        10294LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    ADAPTER_DISPLAY::DisablePrimaryAllocation(*(PERESOURCE ***)(v65 + 3120), a2, v71);
LABEL_144:
    v43 = (struct DXGALLOCATION **)v114;
    v124 = v113;
LABEL_163:
    if ( v108 || v109 )
    {
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v159 + 184)
        && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v159 + 168)) )
      {
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)&v157);
      }
      if ( v110 )
      {
        v87 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v65 + 3120), v41, 0, 0x10u, 0);
        if ( v87 < 0 )
        {
          v88 = v87;
          WdLogSingleEntry2(2LL, v41, v87);
          WdLogGlobalForLineNumber = 10327;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"SetVidPnSourceVisibility(0x%I64x) failed with status 0x%I64x",
            v41,
            v88,
            0LL,
            0LL,
            0LL);
        }
      }
      v89 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
      if ( *(_BYTE *)(v89 + 209) )
      {
        DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushDevice((struct DXG_VMBUS_CHANNEL_BASE *)(v89 + 4664), (__int64)a2, 6);
      }
      else
      {
        v128 = 0LL;
        DXGPUSHLOCK::AcquireExclusive((struct DXGDEVICE *)((char *)a2 + 272));
        LODWORD(v128) = 5;
        if ( (*(int (__fastcall **)(_QWORD, __int128 *, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2)
                                                                                                + 736LL)
                                                                                    + 8LL)
                                                                        + 136LL))(
               *((_QWORD *)a2 + 100),
               &v128,
               4294967293LL,
               0LL) < 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 5929;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"NT_SUCCESS(FlushStatus)",
            5929LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *((_QWORD *)a2 + 35) = 0LL;
        ExReleasePushLockExclusiveEx((char *)a2 + 272, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v159 + 184)
        && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v159 + 168)) )
      {
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)&v157, v90);
      }
      if ( v65 )
      {
        if ( !*(_QWORD *)(v65 + 3128) )
        {
          v91 = *(DXGDODPRESENT **)(*(_QWORD *)(v65 + 3120) + 464LL);
          if ( v91 )
            DXGDODPRESENT::Flush(v91);
        }
      }
      v43 = (struct DXGALLOCATION **)v114;
      v92 = v113;
    }
    else
    {
      v92 = v124;
    }
    DXGDEVICE::DestroyAllocationInternal(a2, a7, v117, (struct DXGRESOURCE *)v43, &v157, v14);
    if ( v108 )
    {
      for ( i = 0; i < *((_DWORD *)a2 + 476); ++i )
      {
        v94 = (struct DXGRESOURCE *)*((_QWORD *)a2 + i + 83);
        if ( v94 && *((_BYTE *)a2 + i + 648) )
        {
          DXGDEVICE::DestroyAllocationInternal(
            a2,
            0,
            0LL,
            v94,
            &v157,
            (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
          *((_BYTE *)a2 + i + 648) = 0;
        }
      }
    }
    v95 = 0;
    v104 = 0;
    v111 = 0;
    if ( !v50 )
      goto LABEL_205;
    if ( v92 )
    {
      ADAPTER_DISPLAY::EnsureGdiOutput(
        *(ADAPTER_DISPLAY **)(v115 + 3120),
        v92,
        (struct COREDEVICEACCESS *)&v157,
        &v104,
        &v111,
        v122);
      v95 = v104;
    }
    MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)&v129, v95);
    if ( v92 )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)&v157);
      v96 = v118;
      v97 = (char *)v118 + 136;
      _InterlockedDecrement((volatile signed __int32 *)v118 + 38);
      ExReleasePushLockSharedEx(v97, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(v96);
      v98 = v113;
      v99 = 0;
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v123);
      *((_BYTE *)v98 + 1953) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v113 + 2), v113);
      if ( v105 )
      {
        v105 = 0;
        DxgkReleaseSessionModeChangeLock();
      }
      v35 = v156;
      if ( (v156 & 2) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v130 + 11) + 200LL))(*(_QWORD *)(v129 + 16), v156 >> 3);
        v35 &= ~2u;
        v156 = v35;
      }
      if ( v104 )
      {
        if ( v111 )
        {
          v100 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 88LL);
          if ( v100 )
            (*(void (**)(void))(v100 + 216))();
        }
      }
    }
    else
    {
LABEL_205:
      v35 = v156;
      v99 = 1;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v123);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v105);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v157);
    if ( v99 )
    {
      v101 = v118;
      v102 = (char *)v118 + 136;
      _InterlockedDecrement((volatile signed __int32 *)v118 + 38);
      ExReleasePushLockSharedEx(v102, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(v101);
      v35 = v156;
    }
    if ( (v35 & 4) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 270;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"(FALSE == m_u.s.bStateSaved)",
        270LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (v35 & 2) != 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v130 + 11) + 200LL))(*(_QWORD *)(v129 + 16), v35 >> 3);
      v35 &= ~2u;
    }
    if ( (v35 & 1) == 0 )
      return 0LL;
    v103 = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(v103);
    v39 = *(void (**)(void))(*((_QWORD *)v130 + 11) + 184LL);
    goto LABEL_214;
  }
  WdLogSingleEntry1(2LL, v63);
  WdLogGlobalForLineNumber = 10155;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
    v64,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v123);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v105);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v157);
  v83 = v156;
  if ( (v156 & 4) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 270;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"(FALSE == m_u.s.bStateSaved)", 270LL, 0LL, 0LL, 0LL, 0LL);
  }
  v84 = v130;
  if ( (v83 & 2) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v130 + 11) + 200LL))(*(_QWORD *)(v129 + 16), v83 >> 3);
    v83 &= ~2u;
  }
  if ( (v83 & 1) != 0 )
  {
    v85 = DXGGLOBAL::GetGlobal();
    v86 = DXGGLOBAL::GetSessionData(v85);
    (*(void (**)(void))(*((_QWORD *)v84 + 11) + 184LL))();
    v156 = v83 & 0xFFFFFFFE;
    *((_QWORD *)v86 + 2409) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v86 + 19264, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v64;
}
