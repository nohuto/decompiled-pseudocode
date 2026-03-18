/*
 * XREFs of ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140340CE0
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1403403A8 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14001D9E0 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14001E938 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034400 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400362B0 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x14003E4E0 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003EC00 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1400426D4 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004FDB4 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x140051FDC (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z @ 0x1400619D0 (-IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1401883A4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVCOREDEVICEACCESS@@@Z @ 0x140223840 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x140283874 (DxgkReleaseSessionModeChangeLock.c)
 *     ?AcquireWin32kDwmStateAndPDevLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x140286A00 (-AcquireWin32kDwmStateAndPDevLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x140287094 (DxgkAcquireSessionModeChangeLock.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028FF40 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1402D83A4 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1402D8760 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1402DC858 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140310950 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x140312620 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1403137F8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?ForcePlanesOff@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x140316348 (-ForcePlanesOff@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x140349230 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     DxgkDestroyClientAllocation @ 0x140349ACC (DxgkDestroyClientAllocation.c)
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x14037A398 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x14038A344 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x140396F58 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x14039A4CC (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?ReleasePDevAndDwmStateLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x14039D070 (-ReleasePDevAndDwmStateLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1403CFA34 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403D3178 (-DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@P.c)
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x140411038 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x140425B64 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x140425F38 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
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
  const struct DXGALLOCATION *v26; // rdi
  unsigned int v27; // edx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  int v35; // edi
  unsigned int v36; // r13d
  __int64 v37; // r15
  struct DXGRESOURCE *v38; // rax
  struct DXGALLOCATION *v39; // rdi
  unsigned int v40; // edx
  unsigned int v41; // edx
  ADAPTER_DISPLAY *v42; // rcx
  __int64 v43; // rax
  unsigned int v44; // r15d
  unsigned __int8 v45; // cl
  unsigned __int8 v46; // r12
  __int64 v47; // r9
  unsigned int v48; // r12d
  struct DXGALLOCATION **v49; // r15
  struct DXGALLOCATION *v50; // rdi
  unsigned int v51; // edx
  unsigned int v52; // edx
  unsigned int v53; // edx
  __int64 v54; // r8
  ADAPTER_DISPLAY *v55; // rcx
  __int64 v56; // r8
  int v57; // eax
  __int64 v58; // rdi
  int CddDeviceAndContextForCurrentSession; // eax
  unsigned int v60; // edi
  struct ADAPTER_RENDER *v61; // rdx
  __int64 v62; // r15
  struct DXGALLOCATION *v63; // rdi
  struct DXGDEVICE *VidPnSourceOwner; // rax
  __int64 v65; // rcx
  struct DXGDEVICE *v66; // rbx
  int v67; // eax
  __int64 v68; // rdi
  const char *v69; // rdx
  DXGDODPRESENT *v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  struct DXGRESOURCE *v73; // r15
  DXG_GUEST_VIRTUALGPU_VMBUS *v74; // r13
  int v75; // r12d
  int v76; // edi
  struct DXGPROCESS *Current; // rax
  unsigned int v78; // eax
  struct DXGALLOCATION **v79; // r10
  struct DXGALLOCATION **v80; // rcx
  __int64 v81; // rdx
  struct DXGPROCESS *v82; // rdi
  struct DXGRESOURCE *v83; // r15
  struct DXGPROCESS *v84; // r9
  struct DXGPROCESS *v85; // r9
  unsigned __int8 v86; // al
  struct DXGDEVICE *v87; // rbx
  __int64 v88; // rax
  char *v89; // rcx
  unsigned int v90; // edi
  struct DXGPROCESS *v91; // r14
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rbx
  unsigned __int8 v94; // [rsp+50h] [rbp-3C8h] BYREF
  bool v95; // [rsp+51h] [rbp-3C7h] BYREF
  char v96; // [rsp+52h] [rbp-3C6h]
  bool v97; // [rsp+53h] [rbp-3C5h]
  unsigned __int8 v98; // [rsp+54h] [rbp-3C4h]
  unsigned __int8 v99; // [rsp+55h] [rbp-3C3h]
  unsigned __int8 v100; // [rsp+56h] [rbp-3C2h]
  unsigned int v101; // [rsp+58h] [rbp-3C0h]
  unsigned __int8 v102[4]; // [rsp+5Ch] [rbp-3BCh] BYREF
  __int64 v103; // [rsp+60h] [rbp-3B8h]
  struct DXGPROCESS *v104; // [rsp+68h] [rbp-3B0h] BYREF
  struct DXGALLOCATION **v105; // [rsp+70h] [rbp-3A8h]
  struct DXGRESOURCE *v106; // [rsp+78h] [rbp-3A0h] BYREF
  struct DXGDEVICE *v107; // [rsp+80h] [rbp-398h] BYREF
  struct DXGALLOCATION *v108; // [rsp+88h] [rbp-390h]
  __int64 v109; // [rsp+90h] [rbp-388h]
  unsigned __int64 v110; // [rsp+98h] [rbp-380h] BYREF
  DXGADAPTER *v111; // [rsp+A0h] [rbp-378h]
  char v112; // [rsp+A8h] [rbp-370h]
  unsigned int v113; // [rsp+B0h] [rbp-368h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v114; // [rsp+B8h] [rbp-360h]
  _BYTE v115[16]; // [rsp+C0h] [rbp-358h] BYREF
  struct DXGRESOURCE *v116; // [rsp+D0h] [rbp-348h]
  PERESOURCE *v117; // [rsp+E0h] [rbp-338h] BYREF
  _BYTE v118[16]; // [rsp+E8h] [rbp-330h] BYREF
  DXGADAPTER *v119; // [rsp+F8h] [rbp-320h]
  char v120; // [rsp+100h] [rbp-318h]
  __int64 v121; // [rsp+108h] [rbp-310h]
  _BYTE v122[72]; // [rsp+128h] [rbp-2F0h] BYREF
  char v123; // [rsp+170h] [rbp-2A8h]
  __int64 v124; // [rsp+180h] [rbp-298h] BYREF
  struct DXGPROCESS *v125; // [rsp+188h] [rbp-290h]
  __int128 v126; // [rsp+190h] [rbp-288h]
  __int128 v127; // [rsp+1A0h] [rbp-278h]
  __int128 v128; // [rsp+1B0h] [rbp-268h]
  __int128 v129; // [rsp+1C0h] [rbp-258h]
  __int128 v130; // [rsp+1D0h] [rbp-248h]
  __int128 v131; // [rsp+1E0h] [rbp-238h]
  __int128 v132; // [rsp+1F0h] [rbp-228h]
  __int128 v133; // [rsp+200h] [rbp-218h]
  __int128 v134; // [rsp+210h] [rbp-208h]
  __int128 v135; // [rsp+220h] [rbp-1F8h]
  __int128 v136; // [rsp+230h] [rbp-1E8h]
  __int128 v137; // [rsp+240h] [rbp-1D8h]
  __int128 v138; // [rsp+250h] [rbp-1C8h]
  __int128 v139; // [rsp+260h] [rbp-1B8h]
  __int128 v140; // [rsp+270h] [rbp-1A8h]
  __int128 v141; // [rsp+280h] [rbp-198h]
  __int128 v142; // [rsp+290h] [rbp-188h]
  __int128 v143; // [rsp+2A0h] [rbp-178h]
  __int128 v144; // [rsp+2B0h] [rbp-168h]
  __int128 v145; // [rsp+2C0h] [rbp-158h]
  __int128 v146; // [rsp+2D0h] [rbp-148h]
  __int128 v147; // [rsp+2E0h] [rbp-138h]
  __int128 v148; // [rsp+2F0h] [rbp-128h]
  __int128 v149; // [rsp+300h] [rbp-118h]
  __int128 v150; // [rsp+310h] [rbp-108h]
  unsigned int v151; // [rsp+320h] [rbp-F8h]
  _BYTE v152[160]; // [rsp+330h] [rbp-E8h] BYREF

  v105 = a4;
  v11 = (unsigned int *)a3;
  v13 = a1;
  v104 = a1;
  v14.0 = a8.0;
  v114 = a10;
  if ( a11 )
  {
    v15 = 0;
    v113 = 0;
    while ( v15 < a7 )
    {
      v16 = 4LL * v15;
      v17 = (const unsigned int *)&a9[v16];
      if ( (unsigned __int64)&a9[v16] >= MmUserProbeAddress )
        v17 = (const unsigned int *)MmUserProbeAddress;
      RtlCopyVolatileMemory(&v11[v16 / 4], v17, 4uLL);
      v113 = ++v15;
    }
    *a6 = v11;
    v18 = a7;
    v13 = v104;
    a4 = v105;
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
  v106 = 0LL;
  v20 = ValidateDestroyAllocation(v13, a2, a5, *a6, v18, a4, &v106);
  if ( v20 == 255 )
    return 0LL;
  if ( v20 < 0 )
  {
    WdLogSingleEntry2(3LL, a2, -1073741811LL);
    WdLogGlobalForLineNumber = 9832;
    return 3221225485LL;
  }
  v23 = *((_QWORD *)a2 + 235);
  v103 = v23;
  v24 = 0;
  v94 = 0;
  if ( (a8.Value & 0x80000000) != 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v152, (__int64)a2, 2, v21, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v152, v25);
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) && *((_DWORD *)a2 + 116) == 1 )
    {
      if ( v106 )
      {
        v26 = (const struct DXGALLOCATION *)*((_QWORD *)v106 + 3);
        v24 = 1;
        v94 = 1;
        if ( v26 )
        {
          do
          {
            v27 = *(_DWORD *)(*((_QWORD *)v26 + 6) + 4LL);
            if ( (v27 & 1) == 0
              || *((_QWORD *)a2 + 235) != *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL)
              || v26 == DXGDEVICE::GetDisplayedPrimary(a2, (v27 >> 6) & 0xF) )
            {
              v24 = 0;
            }
            v26 = (const struct DXGALLOCATION *)*((_QWORD *)v26 + 8);
          }
          while ( v26 );
          v94 = v24;
        }
      }
      v23 = v103;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v152);
  }
  if ( v23 )
    v28 = *(_QWORD *)(v23 + 3120);
  else
    v28 = 0LL;
  v124 = v28;
  v125 = v104;
  if ( v28 )
    v29 = *(_DWORD *)(v28 + 96);
  else
    v29 = 0;
  v151 = 8 * v29;
  v126 = 0LL;
  v127 = 0LL;
  v128 = 0LL;
  v129 = 0LL;
  v130 = 0LL;
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
  v30 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  v111 = (DXGADAPTER *)v30;
  _InterlockedIncrement64((volatile signed __int64 *)(v30 + 24));
  v110 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v30 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v30 + 152));
  v112 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v117, (__int64)a2, 2, v31, 0);
  if ( v123 )
    COREACCESS::AcquireShared((COREACCESS *)v122, 0LL);
  if ( v120 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v118, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7603;
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v119 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v119 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventBlockThread, v33, 72);
      KeWaitForSingleObject((char *)v119 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v119, 0LL);
  }
  v121 = 0LL;
  v120 = 1;
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 200LL) != 4 )
  {
    if ( *((_DWORD *)a2 + 152) == 4 )
    {
      WdLogSingleEntry1(4LL, a2);
      WdLogGlobalForLineNumber = 9902;
      DxgkDestroyClientAllocation(v34, a2, v18, v105, v106);
      goto LABEL_46;
    }
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 216LL) + 64LL) + 40LL)
                   + 28LL) < 0x5015u )
      v14.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(a8.Value & 0xFFFFFFFE);
    v99 = 0;
    v100 = 0;
    v96 = 0;
    v98 = 0;
    v97 = 0;
    v35 = 0;
    v101 = 0;
    v108 = 0LL;
    v36 = -1;
    DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v95);
    v107 = 0LL;
    DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v115, v104);
    v37 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
    v109 = v37;
    v38 = v106;
    v116 = v106;
    if ( v106 )
    {
      if ( *((struct DXGDEVICE **)v106 + 1) != a2 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9933;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pResource->m_pDevice == pDevice",
          9933LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v38 = v116;
      }
      v39 = (struct DXGALLOCATION *)*((_QWORD *)v38 + 3);
      if ( v39 )
      {
        while ( 1 )
        {
          if ( (*(_DWORD *)(*((_QWORD *)v39 + 6) + 4LL) & 1)
             + ((*(_DWORD *)(*((_QWORD *)v39 + 6) + 4LL) >> 1) & 1)
             + ((*(_DWORD *)(*((_QWORD *)v39 + 6) + 4LL) >> 13) & 1u) > 1 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 9942;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"(pCurrentAlloc->m_pAllocation->m_Primary ? 1 : 0) + (pCurrentAlloc->m_pAllocation->m_CddPrimary ? 1 : 0) +"
               " (pCurrentAlloc->m_pAllocation->m_DirectFlip ? 1 : 0) <= 1",
              9942LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v40 = *(_DWORD *)(*((_QWORD *)v39 + 6) + 4LL);
          if ( (v40 & 1) != 0
            && (DXGDEVICE::IsVidPnSourcePrimaryValid(a2, (v40 >> 6) & 0xF)
             || v37
             && (v42 = *(ADAPTER_DISPLAY **)(v37 + 3120)) != 0LL
             && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v42, v41))
            && !v24 )
          {
            v96 = 1;
            v108 = v39;
            v43 = *((_QWORD *)v39 + 6);
            v36 = (*(_DWORD *)(v43 + 4) >> 6) & 0xF;
            v35 = 1 << ((*(_DWORD *)(v43 + 4) >> 6) & 0xF);
            v101 = v35;
            v97 = 0;
            goto LABEL_67;
          }
          if ( (*(_DWORD *)(*((_QWORD *)v39 + 6) + 4LL) & 2) != 0 )
            break;
          v39 = (struct DXGALLOCATION *)*((_QWORD *)v39 + 8);
          if ( !v39 )
          {
            v35 = 0;
            goto LABEL_67;
          }
        }
        v98 = 1;
      }
      v35 = 0;
LABEL_67:
      v44 = a7;
    }
    else
    {
      v44 = a7;
      if ( a7 )
      {
        v48 = 0;
        v49 = v105;
        while ( 1 )
        {
          v50 = *v49;
          if ( !*v49 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 9972;
            DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pCurrentAlloc != NULL", 9972LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( *((struct DXGDEVICE **)v50 + 1) != a2 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 9973;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"pCurrentAlloc->m_pDevice == pDevice",
              9973LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( *(_DWORD *)(v109 + 420) == 1297040209 )
          {
            v51 = *(_DWORD *)(*((_QWORD *)v50 + 6) + 4LL);
            if ( (v51 & 8) != 0 )
              break;
          }
          v52 = *(_DWORD *)(*((_QWORD *)v50 + 6) + 4LL);
          if ( (v52 & 1) != 0
            && (DXGDEVICE::IsVidPnSourcePrimaryValid(a2, (v52 >> 6) & 0xF)
             || (v55 = *(ADAPTER_DISPLAY **)(v54 + 3120)) != 0LL && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v55, v53)) )
          {
            v96 = 1;
            v97 = v108 != 0LL;
            v108 = v50;
            v36 = (*(_DWORD *)(*((_QWORD *)v50 + 6) + 4LL) >> 6) & 0xF;
            v35 = (1 << ((*(_DWORD *)(*((_QWORD *)v50 + 6) + 4LL) >> 6) & 0xF)) | v101;
            v101 = v35;
          }
          else
          {
            v35 = v101;
          }
          ++v48;
          ++v49;
          if ( v48 >= a7 )
            goto LABEL_67;
        }
        v99 = 1;
        v44 = a7;
        if ( DXGDEVICE::IsDisplayedPrimary((struct _KTHREAD **)a2, (v51 >> 6) & 0xF, v50) )
        {
          v100 = 1;
          v96 = 1;
          v97 = v108 != 0LL;
          v108 = v50;
          v36 = (*(_DWORD *)(*((_QWORD *)v50 + 6) + 4LL) >> 6) & 0xF;
          v35 = (1 << ((*(_DWORD *)(*((_QWORD *)v50 + 6) + 4LL) >> 6) & 0xF)) | v101;
          v101 = v35;
        }
        else
        {
          v35 = v101;
        }
      }
    }
    v45 = 0;
    if ( (*((_DWORD *)v104 + 102) & 0x100) == 0 )
      v45 = v96;
    v46 = v45;
    v109 = v45;
    WdLogSingleEntry5(8LL, v45, v99, v100, v98, v36);
    WdLogGlobalForLineNumber = 10022;
    if ( !v46 )
    {
      v62 = v103;
      if ( v94 )
        ADAPTER_DISPLAY::DisableTransitionalPrimaryAllocations(
          *(ADAPTER_DISPLAY **)(v103 + 3120),
          a2,
          *((struct DXGALLOCATION **)v116 + 3),
          (struct COREDEVICEACCESS *)&v117);
      goto LABEL_132;
    }
    if ( !v103 || !*(_QWORD *)(v103 + 3120) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 10027;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"(pDisplayAdapter != NULL) && (pDisplayAdapter->IsDisplayAdapter())",
        10027LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)&v117);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v110);
    if ( *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 3004LL) > 2200 )
    {
      LOBYTE(v47) = 1;
      v56 = v36;
      if ( ((v35 - 1) & v35) == 0 )
      {
LABEL_99:
        DXGDEVICE::FlushScheduler(a2, 5LL, v56, v47);
        v14.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(v14.Value | 1);
        MANAGEDPRIMARIESTRACKER::AcquireWin32kDwmStateAndPDevLocks((MANAGEDPRIMARIESTRACKER *)&v124);
        v57 = DxgkAcquireSessionModeChangeLock(1);
        v58 = v57;
        v95 = v57 >= 0;
        if ( v57 < 0 )
        {
          WdLogSingleEntry1(2LL, v57);
          WdLogGlobalForLineNumber = 10089;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
            v58,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v115);
          DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v95);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v117);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v110);
          MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)&v124);
          return (unsigned int)v58;
        }
        CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                 (struct _LUID *)(v103 + 412),
                                                 &v107,
                                                 0LL,
                                                 0LL,
                                                 0);
        if ( CddDeviceAndContextForCurrentSession < 0 )
        {
          WdLogSingleEntry1(4LL, CddDeviceAndContextForCurrentSession);
          WdLogGlobalForLineNumber = 10105;
        }
        if ( v107 )
        {
          if ( *((_QWORD *)v107 + 2) == *((_QWORD *)a2 + 2) )
          {
            *((_BYTE *)v107 + 1937) = 1;
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v115);
          }
          else
          {
            v107 = 0LL;
          }
        }
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v110);
        if ( v123 )
          COREACCESS::AcquireExclusive((__int64)v122, 2u, 0);
        COREACCESS::AcquireExclusive((__int64)v118, 2u, 0);
        if ( *((_DWORD *)a2 + 152) == 4 )
        {
          WdLogSingleEntry1(4LL, a2);
          WdLogGlobalForLineNumber = 10140;
          v66 = v107;
          if ( v107 )
          {
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v115);
            *((_BYTE *)v66 + 1937) = 0;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v66 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v107 + 2), v107);
          }
          DxgkDestroyClientAllocation(v65, a2, v44, v105, v106);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v115);
          DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v95);
          goto LABEL_46;
        }
        v60 = v101;
        MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)&v124, a2, v101);
        v61 = (struct ADAPTER_RENDER *)*((_QWORD *)a2 + 2);
        if ( *((_QWORD *)a2 + 235) == *((_QWORD *)v61 + 2) )
        {
          if ( ((v60 - 1) & v60) != 0 )
          {
            v62 = v103;
            ADAPTER_DISPLAY::DisableAllPrimaries(*(ADAPTER_DISPLAY **)(v103 + 3120), v61);
          }
          else if ( v97 )
          {
            if ( v36 == -1 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 10200;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"VidpnSourceInvolved != D3DDDI_ID_UNINITIALIZED",
                10200LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v62 = v103;
            ADAPTER_DISPLAY::DisablePrimaryOnDevice(*(ADAPTER_DISPLAY **)(v103 + 3120), a2, v36, 0);
          }
          else
          {
            v62 = v103;
            v63 = v108;
            VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                                 *(ADAPTER_DISPLAY **)(v103 + 3120),
                                 (*(_DWORD *)(*((_QWORD *)v108 + 6) + 4LL) >> 6) & 0xF);
            if ( !VidPnSourceOwner || VidPnSourceOwner == a2 )
              ADAPTER_DISPLAY::ForcePlanesOff(*(DXGADAPTER ***)(v62 + 3120));
            if ( (*(_DWORD *)(*((_QWORD *)v63 + 6) + 4LL) & 1) == 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 10227;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"PrimaryAllocation->m_pAllocation->m_Primary",
                10227LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( ((*(_DWORD *)(*((_QWORD *)v63 + 6) + 4LL) >> 6) & 0xF) != v36 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 10228;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"PrimaryAllocation->m_pAllocation->m_VidPnSourceId == VidpnSourceInvolved",
                10228LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            ADAPTER_DISPLAY::DisablePrimaryAllocation(*(PERESOURCE ***)(v62 + 3120), a2, v63);
          }
        }
        else
        {
          v62 = v103;
        }
LABEL_132:
        if ( v98 || v99 )
        {
          if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v119) )
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)&v117);
          if ( v100 )
          {
            v67 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v62 + 3120), v36, 0, 0x10u, 0);
            if ( v67 < 0 )
            {
              v68 = v67;
              WdLogSingleEntry2(2LL, v36, v67);
              WdLogGlobalForLineNumber = 10261;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"SetVidPnSourceVisibility(0x%I64x) failed with status 0x%I64x",
                v36,
                v68,
                0LL,
                0LL,
                0LL);
            }
          }
          DXGDEVICE::FlushScheduler(a2, 6LL, 4294967293LL, 0LL);
          if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v119) )
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)&v117, v69);
          if ( v62 )
          {
            if ( !*(_QWORD *)(v62 + 3128) )
            {
              v70 = *(DXGDODPRESENT **)(*(_QWORD *)(v62 + 3120) + 456LL);
              if ( v70 )
                DXGDODPRESENT::Flush(v70);
            }
          }
        }
        v71 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v71 + 184)
          && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v71 + 168)) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 6596;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"GetRenderAdapter()->IsCoreResourceSharedOwner()",
            6596LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v72 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
        v73 = v106;
        if ( *(_BYTE *)(v72 + 209) )
        {
          v74 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(v72 + 4664);
          if ( v106 )
            v75 = *((_DWORD *)v106 + 5);
          else
            v75 = 0;
          v76 = *((_DWORD *)a2 + 118);
          Current = DXGPROCESS::GetCurrent(v72);
          DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
            v74,
            *((_DWORD *)Current + 122),
            v76,
            v75,
            a7,
            v105,
            v14,
            &v117);
          if ( v73 )
            *((_DWORD *)v73 + 5) = 0;
          v78 = a7;
          v79 = v105;
          if ( a7 )
          {
            v80 = v105;
            v81 = a7;
            do
            {
              *((_BYTE *)*v80++ + 128) &= ~4u;
              --v81;
            }
            while ( v81 );
            v78 = a7;
          }
          v46 = v109;
        }
        else
        {
          v78 = a7;
          v79 = v105;
        }
        if ( v73 )
        {
          DXGDEVICE::TerminateAllocations(
            a2,
            v73,
            1,
            *((struct DXGALLOCATION **)v73 + 3),
            (struct COREDEVICEACCESS *)&v117,
            v14);
        }
        else
        {
          v104 = 0LL;
          DXGDEVICE::RemoveAllocationsAndTransferToList(a2, v79, v78, &v104);
          v82 = v104;
          if ( v104 )
          {
            v83 = (struct DXGRESOURCE *)*((_QWORD *)v104 + 5);
            if ( v83 )
            {
              do
              {
                v84 = v82;
                v82 = (struct DXGPROCESS *)*((_QWORD *)v82 + 8);
                *((_QWORD *)v84 + 8) = 0LL;
                DXGDEVICE::TerminateAllocations(a2, v83, 0, v84, (struct COREDEVICEACCESS *)&v117, v14);
              }
              while ( v82 );
            }
            else
            {
              do
              {
                v85 = v82;
                v82 = (struct DXGPROCESS *)*((_QWORD *)v82 + 8);
                *((_QWORD *)v85 + 8) = 0LL;
                DXGDEVICE::TerminateAllocations(a2, 0LL, 0, v85, (struct COREDEVICEACCESS *)&v117, v14);
              }
              while ( v82 );
            }
            v104 = v82;
          }
        }
        if ( v98 )
          DXGDEVICE::CloseInternalCddPrimaryHandle(a2, (struct COREDEVICEACCESS *)&v117);
        v86 = 0;
        v94 = 0;
        v102[0] = 0;
        if ( v46 )
        {
          v87 = v107;
          if ( v107 )
          {
            ADAPTER_DISPLAY::EnsureGdiOutput(
              *(ADAPTER_DISPLAY **)(v103 + 3120),
              v107,
              (struct COREDEVICEACCESS *)&v117,
              &v94,
              v102,
              v114);
            v86 = v94;
          }
          MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)&v124, v86);
          if ( v87 )
          {
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)&v117);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v110);
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v115);
            *((_BYTE *)v87 + 1937) = 0;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v87 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v107 + 2), v107);
            if ( v95 )
            {
              v95 = 0;
              DxgkReleaseSessionModeChangeLock();
            }
            MANAGEDPRIMARIESTRACKER::ReleasePDevAndDwmStateLocks((MANAGEDPRIMARIESTRACKER *)&v124);
            if ( v94 )
            {
              if ( v102[0] )
              {
                v88 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 88LL);
                if ( v88 )
                  (*(void (**)(void))(v88 + 216))();
              }
            }
          }
        }
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v115);
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v95);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v117);
        if ( v112 )
        {
          v112 = 0;
          v89 = (char *)v111 + 136;
          _InterlockedDecrement((volatile signed __int32 *)v111 + 38);
          ExReleasePushLockSharedEx(v89, 0LL);
          KeLeaveCriticalRegion();
          DXGADAPTER::ReleaseReference(v111);
        }
        v90 = v151;
        if ( (v151 & 4) != 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 270;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"(FALSE == m_u.s.bStateSaved)",
            270LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v91 = v125;
        if ( (v90 & 2) != 0 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v125 + 11) + 200LL))(*(_QWORD *)(v124 + 16), v90 >> 3);
          v90 &= ~2u;
        }
        if ( (v90 & 1) != 0 )
        {
          Global = DXGGLOBAL::GetGlobal();
          SessionData = DXGGLOBAL::GetSessionData(Global);
          (*(void (**)(void))(*((_QWORD *)v91 + 11) + 184LL))();
          v151 = v90 & 0xFFFFFFFE;
          Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
          *((_QWORD *)SessionData + 2409) = 0LL;
          ExReleasePushLockExclusiveEx((char *)SessionData + 19264, 0LL);
          KeLeaveCriticalRegion();
        }
        return 0LL;
      }
    }
    else
    {
      LOBYTE(v47) = 0;
    }
    v56 = 4294967293LL;
    goto LABEL_99;
  }
  WdLogSingleEntry1(4LL, a2);
  WdLogGlobalForLineNumber = 9897;
LABEL_46:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v117);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v110);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)&v124);
  return 0LL;
}
