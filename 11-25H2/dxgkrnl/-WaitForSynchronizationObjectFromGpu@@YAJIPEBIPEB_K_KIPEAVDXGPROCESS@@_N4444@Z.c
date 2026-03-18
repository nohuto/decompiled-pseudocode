/*
 * XREFs of ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1402ABA40
 * Callers:
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_K@Z @ 0x1401F89CC (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@_K@Z.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1402AA8D0 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H_N@Z @ 0x1402AADEC (-DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H_N@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1402AB300 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     McTemplateK0pqPR1XR1_EtwWriteTransfer @ 0x1400145D0 (McTemplateK0pqPR1XR1_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x1400161C0 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     McTemplateK0pqPR1x_EtwWriteTransfer @ 0x14001667C (McTemplateK0pqPR1x_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x14001D750 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14001DE10 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14001F190 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140022F40 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x14002CDC8 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D6D0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002F800 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x140034ED4 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ?GetHeadIterator@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA?AVITERATOR@1@XZ @ 0x140036938 (-GetHeadIterator@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA-AVITERATOR@1@XZ.c)
 *     ?VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAI@Z @ 0x14003B7CC (-VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEA.c)
 *     ?GetRedirectedFlipFenceValue@DXGSYNCOBJECT@@QEBA_KXZ @ 0x140054460 (-GetRedirectedFlipFenceValue@DXGSYNCOBJECT@@QEBA_KXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PEAVDXGPAGINGQUEUE@@PEAE_N4@Z @ 0x140180714 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028DA40 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028FF40 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140290400 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBIPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEB_K_KIPEAVDXGHWQUEUE@@@Z @ 0x1402AE7A0 (-VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1402BA024 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGDEVICESYNCOBJECT@@$03@@QEAAPEAPEAVDXGDEVICESYNCOBJECT@@I@Z @ 0x14037DED8 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGDEVICESYNCOBJECT@@$03@@QEAAPEAPEAVDXGDEVICESYNCO.c)
 */

__int64 __fastcall WaitForSynchronizationObjectFromGpu(
        unsigned int a1,
        unsigned int *a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct DXGPROCESS *a6,
        bool a7,
        bool a8,
        bool a9,
        bool a10,
        bool a11)
{
  unsigned __int64 v11; // rsi
  unsigned int v12; // r15d
  _BYTE *Pool2; // r12
  struct DXGCONTEXT *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // r9
  struct _KEVENT *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v21; // rbx
  char v22; // r14
  unsigned int v23; // edi
  volatile signed __int32 *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rdi
  unsigned int v30; // edi
  __int64 v31; // rdx
  __int64 v32; // r8
  unsigned int v33; // eax
  __int64 v34; // rdx
  int v35; // ecx
  __int64 v36; // rdi
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rdi
  _BYTE *v40; // r9
  unsigned int v41; // r10d
  size_t v42; // r8
  void *v43; // rdx
  void *v45; // rdx
  unsigned int v46; // r14d
  __int64 v47; // r15
  __int64 v48; // rdi
  __int64 v49; // rbx
  __int64 v50; // rcx
  __int64 v51; // r8
  int v52; // r9d
  int v53; // ecx
  char *v54; // r13
  unsigned int *v55; // r12
  __int64 v56; // rcx
  struct DXGDEVICESYNCOBJECT **v57; // r10
  struct DXGCONTEXT *v58; // rbx
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rdi
  int v64; // eax
  struct ADAPTER_RENDER *v65; // rbx
  struct ADAPTER_RENDER *v66; // r8
  struct DXGCONTEXT *v67; // rbx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  DXGADAPTER *v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r14
  struct _KEVENT *v75; // rbx
  unsigned int *v76; // r14
  struct DXGPROCESS *v77; // rsi
  int DxgAdapterSyncObject; // r14d
  PVOID v79; // rcx
  PVOID v80; // rcx
  struct DXGPROCESS *v81; // rdi
  struct DXGCONTEXT *v82; // r8
  struct DXGDEVICESYNCOBJECT **v83; // r10
  _QWORD *v84; // rbx
  int v85; // eax
  __int64 v86; // rcx
  __int64 v87; // r8
  _QWORD **v88; // rdi
  _QWORD *j; // rax
  _QWORD *v90; // r10
  unsigned int v91; // ebx
  unsigned int *v92; // r14
  struct DXGPROCESS *v93; // rsi
  PVOID v94; // rcx
  struct _KEVENT *v95; // rcx
  _QWORD *i; // rax
  _QWORD *v97; // r8
  struct DXGPROCESS *v98; // rbx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // rdx
  unsigned __int64 RedirectedFlipFenceValue; // rax
  struct DXGPROCESS *v103; // rbx
  unsigned int *v104; // rdi
  struct DXGPROCESS *v105; // rbx
  struct DXGPROCESS *v106; // rbx
  __int64 v107; // rcx
  __int64 v108; // r8
  struct DXGCONTEXT *v109; // rbx
  struct DXGPROCESS *v110; // rsi
  unsigned int *v111; // rbx
  struct DXGPROCESS *v112; // rbx
  unsigned int *v113; // rdi
  struct DXGPROCESS *v114; // rbx
  int IsAllocationInPresentQueue; // eax
  unsigned int *v116; // r14
  struct DXGPROCESS *v117; // rsi
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-2A8h]
  char v119; // [rsp+50h] [rbp-278h]
  char v120; // [rsp+51h] [rbp-277h]
  struct DXGGLOBAL *v121; // [rsp+58h] [rbp-270h] BYREF
  char v122; // [rsp+60h] [rbp-268h]
  __int64 v123; // [rsp+68h] [rbp-260h] BYREF
  char v124; // [rsp+70h] [rbp-258h]
  char v125; // [rsp+78h] [rbp-250h]
  struct DXGPROCESS *v126; // [rsp+80h] [rbp-248h]
  __int64 v127; // [rsp+88h] [rbp-240h] BYREF
  int v128; // [rsp+90h] [rbp-238h]
  PVOID v129; // [rsp+98h] [rbp-230h] BYREF
  _BYTE v130[32]; // [rsp+A0h] [rbp-228h] BYREF
  int v131; // [rsp+C0h] [rbp-208h]
  struct DXGCONTEXT *v132; // [rsp+C8h] [rbp-200h] BYREF
  DXGCONTEXT *v133; // [rsp+D0h] [rbp-1F8h] BYREF
  char v134; // [rsp+D8h] [rbp-1F0h]
  struct DXGDEVICESYNCOBJECT **v135; // [rsp+E0h] [rbp-1E8h] BYREF
  unsigned int *v136; // [rsp+E8h] [rbp-1E0h]
  PVOID P; // [rsp+F0h] [rbp-1D8h]
  _BYTE v138[32]; // [rsp+F8h] [rbp-1D0h] BYREF
  int v139; // [rsp+118h] [rbp-1B0h]
  void *Src; // [rsp+120h] [rbp-1A8h]
  char v141[8]; // [rsp+128h] [rbp-1A0h] BYREF
  DXGPUSHLOCK *v142; // [rsp+130h] [rbp-198h]
  int v143; // [rsp+138h] [rbp-190h]
  unsigned __int64 v144; // [rsp+140h] [rbp-188h] BYREF
  struct DXGCONTEXT *v145; // [rsp+148h] [rbp-180h]
  struct DXGPROCESS *v146; // [rsp+150h] [rbp-178h]
  _BYTE *v147; // [rsp+158h] [rbp-170h]
  __int64 v148; // [rsp+160h] [rbp-168h] BYREF
  char v149; // [rsp+168h] [rbp-160h]
  struct DXGADAPTERSYNCOBJECT *v150; // [rsp+170h] [rbp-158h] BYREF
  _BYTE v151[16]; // [rsp+178h] [rbp-150h] BYREF
  __int128 v152; // [rsp+188h] [rbp-140h] BYREF
  size_t v153; // [rsp+198h] [rbp-130h]
  _BYTE *v154; // [rsp+1A0h] [rbp-128h]
  PVOID v155; // [rsp+1A8h] [rbp-120h]
  _BYTE v156[32]; // [rsp+1B0h] [rbp-118h] BYREF
  int v157; // [rsp+1D0h] [rbp-F8h]
  char v158[8]; // [rsp+1E0h] [rbp-E8h] BYREF
  _BYTE v159[16]; // [rsp+1E8h] [rbp-E0h] BYREF
  DXGADAPTER *v160; // [rsp+1F8h] [rbp-D0h]
  char v161; // [rsp+200h] [rbp-C8h]
  __int64 v162; // [rsp+208h] [rbp-C0h]
  _BYTE v163[16]; // [rsp+228h] [rbp-A0h] BYREF
  DXGADAPTER *v164; // [rsp+238h] [rbp-90h]
  char v165; // [rsp+240h] [rbp-88h]
  __int64 v166; // [rsp+248h] [rbp-80h]
  __int64 v167; // [rsp+268h] [rbp-60h]
  char v168; // [rsp+270h] [rbp-58h]

  v136 = a2;
  v11 = a1;
  Src = a3;
  v144 = a4;
  v126 = a6;
  v146 = a6;
  v12 = 0;
  P = 0LL;
  v139 = 0;
  if ( a1 <= 4 )
  {
    Pool2 = v138;
    v147 = v138;
    P = v138;
    if ( !a1 )
    {
LABEL_5:
      v139 = v11;
      goto LABEL_6;
    }
    memset(v138, 0, 8LL * a1);
    Pool2 = P;
LABEL_4:
    v147 = Pool2;
    goto LABEL_5;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / a1 >= 8 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8LL * a1, 1265072196LL, a4);
    P = Pool2;
    goto LABEL_4;
  }
  Pool2 = 0LL;
  v147 = 0LL;
LABEL_6:
  if ( !Pool2 )
    return 3221225495LL;
  v132 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v133, a5, a6, &v132, a8, 1);
  if ( !v132 )
  {
    WdLogSingleEntry3(2LL, a6, a5, -1073741811LL);
    WdLogGlobalForLineNumber = 1863;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%I64x failed with invalid hContext 0x%I64x returning 0x%I64x",
      (__int64)a6,
      a5,
      -1073741811LL,
      0LL,
      0LL);
LABEL_321:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v133);
    if ( P != v138 && P )
    {
      ExFreePoolWithTag(P, 0);
      return 3221225485LL;
    }
    return 3221225485LL;
  }
  v14 = v132;
  v120 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v132 + 2) + 16LL) + 16LL) + 209LL);
  v129 = 0LL;
  v131 = 0;
  v135 = 0LL;
  if ( v120 )
  {
    v135 = (struct DXGDEVICESYNCOBJECT **)PagedPoolZeroedArray<DXGDEVICESYNCOBJECT *,4>::AllocateElements(
                                            &v129,
                                            (unsigned int)v11);
    if ( !v135 )
    {
      if ( v129 != v130 && v129 )
        ExFreePoolWithTag(v129, 0);
      v129 = 0LL;
      v131 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v133);
      if ( P != v138 && P )
        ExFreePoolWithTag(P, 0);
      return 3221225495LL;
    }
  }
  v15 = *((_QWORD *)v14 + 2);
  v127 = v15;
  v128 = 0;
  v123 = v15;
  v124 = 0;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v141, (struct _KTHREAD **)v132 + 55, 1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v158, *((_QWORD *)v14 + 2), 0, v16, a8);
  if ( !a8 )
  {
    if ( !a9 )
    {
      if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)v14 + 2) + 136LL)) && v15 )
      {
        v17 = *(struct _KEVENT **)(v15 + 16);
        if ( !KeReadStateEvent(v17 + 4) )
          KeWaitForSingleObject(&v17[4], Executive, 0, 0, 0LL);
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceSharedLite(*(PERESOURCE *)(v15 + 136), 0) )
        {
          DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v99, (__int64)&EventBlockThread, v100, 40);
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v15 + 136), 1u);
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL));
        }
        v124 = 1;
      }
LABEL_17:
      if ( !a11 || *((_DWORD *)v132 + 36) == 2 )
      {
        DXGPUSHLOCK::AcquireExclusive(v142);
        v143 = 2;
      }
      if ( v168 )
      {
        if ( v165 )
        {
          WdLogSingleEntry5(0LL, 275LL, 4LL, v163, 0LL, 0LL);
          WdLogGlobalForLineNumber = 7603;
        }
        v71 = v164;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v164 + 23) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v164 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v72, (__int64)&EventBlockThread, v73, 72);
            KeWaitForSingleObject((char *)v164 + 48, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(v164, 0LL);
          v71 = v164;
        }
        v166 = 0LL;
        v165 = 1;
        if ( *((_DWORD *)v71 + 50) != 1 )
        {
          v165 = 0;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v164 + 23) )
            DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v164, 0LL);
          v166 = 0LL;
          goto LABEL_167;
        }
      }
      if ( v161 )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v159, 0LL, 0LL);
        WdLogGlobalForLineNumber = 7603;
      }
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v160 + 23) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v160 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventBlockThread, v19, 72);
          KeWaitForSingleObject((char *)v160 + 48, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(v160, 0LL);
      }
      v162 = 0LL;
      v161 = 1;
      if ( *(_DWORD *)(v167 + 608) != 1 )
      {
        COREACCESS::Release((COREACCESS *)v159);
        if ( v168 )
          COREACCESS::Release((COREACCESS *)v163);
LABEL_167:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v158);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v141);
        if ( v15 )
        {
          if ( v124 )
          {
            ExReleaseResourceLite(*(PERESOURCE *)(v15 + 136));
            KeLeaveCriticalRegion();
          }
          if ( v128 )
          {
            ExReleaseResourceLite(*(PERESOURCE *)(v15 + 136));
            KeLeaveCriticalRegion();
          }
        }
        if ( v129 != v130 && v129 )
          ExFreePoolWithTag(v129, 0);
        v129 = 0LL;
        v131 = 0;
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v133);
        if ( P != v138 && P )
          ExFreePoolWithTag(P, 0);
        return 3221226166LL;
      }
      goto LABEL_26;
    }
    v74 = v15 + 16;
    v75 = *(struct _KEVENT **)(v15 + 16);
    if ( *(_DWORD *)(v15 + 464) == 2 )
    {
      if ( KeReadStateEvent(v75 + 5) )
        goto LABEL_184;
      v95 = v75 + 5;
    }
    else
    {
      if ( KeReadStateEvent(v75 + 4) )
      {
LABEL_184:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v15 + 136), 0) )
        {
          DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)v74 + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v107, (__int64)&EventBlockThread, v108, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v15 + 136), 1u);
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)v74 + 16LL));
        }
        v128 = 1;
        goto LABEL_17;
      }
      v95 = v75 + 4;
    }
    KeWaitForSingleObject(v95, Executive, 0, 0, 0LL);
    goto LABEL_184;
  }
LABEL_26:
  Global = DXGGLOBAL::GetGlobal();
  v121 = Global;
  v122 = 0;
  if ( !Global )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2834;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pGlobal != NULL", 2834LL, 0LL, 0LL, 0LL, 0LL);
    Global = 0LL;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 75)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2839;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"!m_pGlobal->IsSyncObjectLockSharedOwner() || bAllowRecursive",
      2839LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v21 = v121;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*((PERESOURCE *)v21 + 75), 1u);
  v122 = 1;
  v22 = 0;
  v119 = 0;
  v145 = v132;
  while ( v12 < (unsigned int)v11 )
  {
    v23 = v136[v12];
    v24 = (volatile signed __int32 *)((char *)v126 + 248);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v24, 0LL) )
    {
      DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)v24, v25, v26);
      ExAcquirePushLockSharedEx(v24, 0LL);
    }
    _InterlockedIncrement(v24 + 4);
    v27 = (v23 >> 6) & 0xFFFFFF;
    if ( v27 < *((_DWORD *)v126 + 74)
      && (v28 = 16LL * v27 + *((_QWORD *)v126 + 35), ((v23 >> 25) & 0x60) == (*(_BYTE *)(v28 + 8) & 0x60))
      && (*(_DWORD *)(v28 + 8) & 0x2000) == 0
      && (*(_DWORD *)(v28 + 8) & 0x1F) == 8 )
    {
      v29 = *(_QWORD *)v28;
    }
    else
    {
      v29 = 0LL;
    }
    _InterlockedDecrement(v24 + 4);
    ExReleasePushLockSharedEx(v24, 0LL);
    KeLeaveCriticalRegion();
    if ( v29 )
    {
      if ( v135 )
        v135[v12] = 0LL;
      if ( *(_DWORD *)(v29 + 404) == 5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1955;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pSyncObject->GetSyncObjectType() != D3DDDI_MONITORED_FENCE",
          1955LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *(_DWORD *)(v29 + 404) == 6 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1956;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pSyncObject->GetSyncObjectType() != D3DDDI_PERIODIC_MONITORED_FENCE",
          1956LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *(_DWORD *)(v29 + 404) == 7 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1957;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pSyncObject->GetSyncObjectType() != D3DDDI_NATIVE_FENCE",
          1957LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v22 = 1;
      v125 = 1;
      if ( v119 )
      {
        v98 = v126;
        WdLogSingleEntry1(2LL, v126);
        WdLogGlobalForLineNumber = 1963;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"0x%p mixes monitored fence and non-monitored fence sync objects in one wait call.",
          (__int64)v98,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( v122 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v121);
        goto LABEL_213;
      }
      v64 = *(_DWORD *)(v29 + 404);
      if ( v64 == 4 )
      {
        v104 = v136;
        v105 = v126;
        WdLogSingleEntry3(2LL, v126, v136[v12], v12);
        WdLogGlobalForLineNumber = 1976;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"0x%p failed, can not wait on CPU Notification object 0x%x at index %d",
          (__int64)v105,
          v104[v12],
          v12,
          0LL,
          0LL);
        goto LABEL_329;
      }
      if ( v64 == 3 && (_DWORD)v11 != 1 )
      {
        v81 = v126;
        WdLogSingleEntry2(2LL, v126, v11);
        WdLogGlobalForLineNumber = 1990;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"0x%p can only wait on one fence object at a time instead of %d",
          (__int64)v81,
          v11,
          0LL,
          0LL,
          0LL);
        if ( v122 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v121);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v158);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v141);
        if ( v123 && v124 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v123 + 136));
          KeLeaveCriticalRegion();
        }
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v127);
        v79 = v129;
        if ( v129 != v130 && v129 )
LABEL_231:
          ExFreePoolWithTag(v79, 0);
LABEL_221:
        v129 = 0LL;
        v131 = 0;
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v133);
        v80 = P;
        if ( P == v138 )
          return 3221225485LL;
LABEL_243:
        if ( v80 )
          ExFreePoolWithTag(v80, 0);
        return 3221225485LL;
      }
      DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v151, (struct DXGSYNCOBJECT *)v29);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v151);
      v65 = *(struct ADAPTER_RENDER **)(*((_QWORD *)v145 + 2) + 16LL);
      v150 = 0LL;
      if ( (*(_DWORD *)(v29 + 408) & 4) != 0 )
      {
        DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
                                 (DXGSYNCOBJECTCA *)v29,
                                 v65,
                                 &v150,
                                 0LL,
                                 0LL,
                                 0,
                                 0);
        if ( DxgAdapterSyncObject < 0 )
          goto LABEL_377;
        v22 = v125;
      }
      else
      {
        if ( v65 )
        {
          v66 = *(struct ADAPTER_RENDER **)(v29 + 440);
          if ( v66 != v65 )
          {
            DxgAdapterSyncObject = -1073741811;
            WdLogSingleEntry4(2LL, v29, v66, v65, -1073741811LL);
            WdLogGlobalForLineNumber = 2529;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Mismatch RenderCore with 0x%I64x (0x%I64x vs 0x%I64x), returning 0x%I64x",
              v29,
              *(_QWORD *)(v29 + 440),
              (__int64)v65,
              -1073741811LL,
              0LL);
LABEL_377:
            v109 = v132;
            v110 = v126;
            WdLogSingleEntry3(
              2LL,
              v126,
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v132 + 2) + 16LL) + 16LL),
              DxgAdapterSyncObject);
            WdLogGlobalForLineNumber = 2011;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"0x%I64x failed, failed to create a sync object on logical adapter 0x%I64x returning 0x%I64x",
              (__int64)v110,
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v109 + 2) + 16LL) + 16LL),
              DxgAdapterSyncObject,
              0LL,
              0LL);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v151);
            DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v121);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v158);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v141);
            DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v123);
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v127);
            if ( v129 != v130 && v129 )
              ExFreePoolWithTag(v129, 0);
            v129 = 0LL;
            v131 = 0;
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v133);
            if ( P != v138 && P )
              ExFreePoolWithTag(P, 0);
            return (unsigned int)DxgAdapterSyncObject;
          }
        }
        v150 = (struct DXGADAPTERSYNCOBJECT *)(v29 + 424);
      }
      if ( !v120 )
      {
        v67 = v145;
        v68 = *(_QWORD *)(*((_QWORD *)v145 + 2) + 16LL);
        v69 = *(_QWORD *)(v68 + 736);
        if ( (*(_DWORD *)(v29 + 408) & 4) != 0 )
        {
          for ( i = *(_QWORD **)(v29 + 424); i != (_QWORD *)(v29 + 424); i = (_QWORD *)*i )
          {
            v97 = i - 14;
            if ( !v68 || v97[2] == v68 )
              goto LABEL_291;
          }
          v97 = 0LL;
LABEL_291:
          v70 = v97[4];
        }
        else
        {
          v70 = *(_QWORD *)(v29 + 456);
        }
        if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(v69 + 8) + 856LL))(v70, v144) )
        {
          v101 = *((_QWORD *)v67 + 2);
          if ( *(_BYTE *)(*(_QWORD *)(v101 + 16) + 1024LL) )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(v101 + 40) + 408LL) & 4) == 0 || (*((_DWORD *)v132 + 98) & 8) == 0 )
            {
              if ( (*(_BYTE *)(v29 + 408) & 1) == 0
                || !*(_BYTE *)(v101 + 1899)
                || (RedirectedFlipFenceValue = DXGSYNCOBJECT::GetRedirectedFlipFenceValue((DXGSYNCOBJECT *)v29),
                    v144 > RedirectedFlipFenceValue) )
              {
                v103 = v126;
                WdLogSingleEntry2(2LL, v126, -1073741811LL);
                WdLogGlobalForLineNumber = 2042;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"0x%I64x submitted an invalid out of order wait for sync object. Returning 0x%I64x",
                  (__int64)v103,
                  -1073741811LL,
                  0LL,
                  0LL,
                  0LL);
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v151);
                if ( v122 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v121);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v158);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v141);
                if ( v123 && v124 )
                {
                  ExReleaseResourceLite(*(PERESOURCE *)(v123 + 136));
                  KeLeaveCriticalRegion();
                }
                DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v127);
                if ( v129 != v130 && v129 )
                  ExFreePoolWithTag(v129, 0);
                v129 = 0LL;
                v131 = 0;
                goto LABEL_321;
              }
            }
          }
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v151);
      *(_QWORD *)&Pool2[8 * v12++] = v29;
    }
    else
    {
      v30 = v136[v12];
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v24, 0LL) )
      {
        DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)v24, v31, v32);
        ExAcquirePushLockSharedEx(v24, 0LL);
      }
      _InterlockedIncrement(v24 + 4);
      v33 = (v30 >> 6) & 0xFFFFFF;
      if ( v33 < *((_DWORD *)v126 + 74) )
      {
        v34 = 16LL * v33 + *((_QWORD *)v126 + 35);
        if ( ((v30 >> 25) & 0x60) == (*(_BYTE *)(v34 + 8) & 0x60) && (*(_DWORD *)(v34 + 8) & 0x2000) == 0 )
        {
          v35 = *(_DWORD *)(v34 + 8) & 0x1F;
          if ( v35 )
          {
            if ( v35 == 11 )
            {
              v36 = *(_QWORD *)v34;
              goto LABEL_48;
            }
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      v36 = 0LL;
LABEL_48:
      _InterlockedDecrement(v24 + 4);
      ExReleasePushLockSharedEx(v24, 0LL);
      KeLeaveCriticalRegion();
      if ( !v36 )
      {
        v113 = v136;
        v114 = v126;
        WdLogSingleEntry3(2LL, v126, v136[v12], v12);
        WdLogGlobalForLineNumber = 2061;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"0x%p failed to wait with invalid hSyncObject 0x%x at index %d",
          (__int64)v114,
          v113[v12],
          v12,
          0LL,
          0LL);
        goto LABEL_393;
      }
      if ( v135 )
        v135[v12] = (struct DXGDEVICESYNCOBJECT *)v36;
      v119 = 1;
      if ( v22 )
      {
        v112 = v126;
        WdLogSingleEntry1(2LL, v126);
        WdLogGlobalForLineNumber = 2075;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"0x%p mixes monitored fence and non-monitored fence sync objects in one wait call.",
          (__int64)v112,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_393:
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v121);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v158);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v141);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v123);
        goto LABEL_334;
      }
      v37 = *(_QWORD *)(v36 + 16);
      v38 = *((_QWORD *)v145 + 2);
      if ( v37 != v38 )
      {
        WdLogSingleEntry2(2LL, v38, v37);
        WdLogGlobalForLineNumber = 2084;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"WaitForSynchronizationObjectFromGpu on device 0x%p attempts to use a sync object opened on a different device 0x%p.",
          *((_QWORD *)v132 + 2),
          *(_QWORD *)(v36 + 16),
          0LL,
          0LL,
          0LL);
        if ( v122 )
        {
          v122 = 0;
          ExReleaseResourceLite(*((PERESOURCE *)v121 + 75));
          KeLeaveCriticalRegion();
        }
LABEL_213:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v158);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v141);
        if ( v123 && v124 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v123 + 136));
          KeLeaveCriticalRegion();
        }
        if ( v127 && v128 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v127 + 136));
          KeLeaveCriticalRegion();
        }
        goto LABEL_219;
      }
      if ( (*(_DWORD *)(v36 + 72) & 0x20) != 0 )
      {
        v111 = v136;
        WdLogSingleEntry1(2LL, v136[v12]);
        WdLogGlobalForLineNumber = 2092;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"0x%x object is opened as signal only and thus cannot be waited on.",
          v111[v12],
          0LL,
          0LL,
          0LL,
          0LL);
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v121);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v158);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v141);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v123);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v127);
        if ( v129 != v130 && v129 )
          ExFreePoolWithTag(v129, 0);
        v129 = 0LL;
        v131 = 0;
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v133);
        if ( P != v138 && P )
          ExFreePoolWithTag(P, 0);
        return 3221225506LL;
      }
      if ( !g_NativeFenceDebugTest && *(_DWORD *)(*(_QWORD *)(v36 + 32) + 404LL) == 7 && !*(_QWORD *)(v36 + 96) )
      {
        WdLogSingleEntry1(2LL, v36);
        WdLogGlobalForLineNumber = 2102;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DXGDEVICESYNCOBJECT 0x%x is a native fence object and has a NULL Driver Handle, returning STATUS_INVALID_PARAMETER",
          v36,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_329:
        if ( v122 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v121);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v158);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v141);
        if ( v123 && v124 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v123 + 136));
          KeLeaveCriticalRegion();
        }
LABEL_334:
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v127);
LABEL_219:
        v79 = v129;
        if ( v129 != v130 && v129 )
          goto LABEL_231;
        goto LABEL_221;
      }
      v39 = *(_QWORD *)(v36 + 32);
      if ( (unsigned int)(*(_DWORD *)(v39 + 404) - 5) > 2 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2111;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pSyncObject->GetSyncObjectType() == D3DDDI_MONITORED_FENCE || pSyncObject->GetSyncObjectType() == D3DDDI_PERIO"
           "DIC_MONITORED_FENCE || pSyncObject->GetSyncObjectType() == D3DDDI_NATIVE_FENCE",
          2111LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_QWORD *)&Pool2[8 * v12++] = v39;
    }
  }
  v40 = 0LL;
  v155 = 0LL;
  v41 = 0;
  v157 = 0;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)Pool2 + 404LL) - 5) > 2 )
  {
    v45 = Src;
    goto LABEL_88;
  }
  if ( !a7 )
  {
    if ( a10 )
    {
      v45 = &v144;
      Src = &v144;
    }
    else
    {
      v45 = Src;
      if ( !Src )
      {
        v106 = v126;
        WdLogSingleEntry1(2LL, v126);
        WdLogGlobalForLineNumber = 2163;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"0x%I64x encountered exception, MonitoredFenceValueArray may not be null for monitored fence types.",
          (__int64)v106,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( v155 != v156 && v155 )
          ExFreePoolWithTag(v155, 0);
        v155 = 0LL;
        v157 = 0;
        if ( v122 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v121);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v158);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v141);
        if ( v123 && v124 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v123 + 136));
          KeLeaveCriticalRegion();
        }
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v127);
        if ( v129 != v130 && v129 )
          ExFreePoolWithTag(v129, 0);
        v129 = 0LL;
        v131 = 0;
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v133);
        v80 = P;
        if ( P == v138 )
          return 3221225485LL;
        goto LABEL_243;
      }
    }
LABEL_88:
    if ( v120 )
    {
      v91 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v132 + 2) + 16LL) + 16LL) + 4664LL),
              v126,
              v132,
              v136,
              (struct DXGSYNCOBJECT **)Pool2,
              v135,
              v45,
              v144,
              v11,
              0LL);
      if ( v155 != v156 && v155 )
        ExFreePoolWithTag(v155, 0);
      v155 = 0LL;
      v157 = 0;
      if ( v122 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v121);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v158);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v141);
      if ( v123 && v124 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v123 + 136));
        KeLeaveCriticalRegion();
      }
      if ( v127 && v128 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v127 + 136));
        KeLeaveCriticalRegion();
      }
      if ( v129 != v130 && v129 )
        ExFreePoolWithTag(v129, 0);
      v129 = 0LL;
      v131 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v133);
      if ( P != v138 && P )
        ExFreePoolWithTag(P, 0);
      return v91;
    }
    v46 = 0;
    v145 = v132;
    while ( 1 )
    {
      if ( v46 >= (unsigned int)v11 )
      {
        if ( v155 != v156 && v155 )
          ExFreePoolWithTag(v155, 0);
        v155 = 0LL;
        v157 = 0;
        if ( v122 )
        {
          v122 = 0;
          ExReleaseResourceLite(*((PERESOURCE *)v121 + 75));
          KeLeaveCriticalRegion();
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v158);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v141);
        if ( v123 && v124 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v123 + 136));
          KeLeaveCriticalRegion();
        }
        if ( v127 && v128 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v127 + 136));
          KeLeaveCriticalRegion();
        }
        if ( v129 != v130 && v129 )
          ExFreePoolWithTag(v129, 0);
        v129 = 0LL;
        v131 = 0;
        if ( v133 && !v134 )
          DXGCONTEXT::ReleaseReference(v133);
        if ( P != v138 && P )
          ExFreePoolWithTag(P, 0);
        return 0LL;
      }
      v47 = v46;
      v146 = (struct DXGPROCESS *)(8LL * v46);
      v48 = *(_QWORD *)&Pool2[(_QWORD)v146];
      DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v148, (struct DXGSYNCOBJECT *)v48);
      if ( v149 )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, &v148, 0LL, 0LL);
        WdLogGlobalForLineNumber = 682;
      }
      v49 = v148;
      KeEnterCriticalRegion();
      if ( *(struct _KTHREAD **)(v49 + 24) == KeGetCurrentThread() )
      {
        if ( *(int *)(v49 + 32) <= 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 521;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 521LL, 0LL, 0LL, 0LL, 0LL);
        }
        ++*(_DWORD *)(v49 + 32);
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v49 + 8, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v52 = *(_DWORD *)(v49 + 36);
            if ( v52 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v50, (__int64)&EventBlockThread, v51, v52);
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v49 + 16));
          ExAcquirePushLockExclusiveEx(v49 + 8, 0LL);
        }
        if ( *(_QWORD *)(v49 + 24) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 547;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NULL == m_OwningThread", 547LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( *(_DWORD *)(v49 + 32) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 548;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"0 == m_OwnerAcquireCount", 548LL, 0LL, 0LL, 0LL, 0LL);
        }
        *(_QWORD *)(v49 + 24) = KeGetCurrentThread();
        *(_DWORD *)(v49 + 32) = 1;
      }
      v149 = 1;
      v53 = *(_DWORD *)(v48 + 404);
      if ( (unsigned int)(v53 - 5) > 2 )
      {
        v55 = 0LL;
        if ( v53 == 3 )
          v55 = (unsigned int *)v144;
        v54 = (char *)Src;
      }
      else
      {
        v54 = (char *)Src;
        v55 = (unsigned int *)*((_QWORD *)Src + v46);
      }
      v56 = *(_QWORD *)(*((_QWORD *)v145 + 2) + 16LL);
      if ( (*(_DWORD *)(v48 + 408) & 4) != 0 )
      {
        v88 = (_QWORD **)(v48 + 424);
        for ( j = *v88; j != v88; j = (_QWORD *)*j )
        {
          v90 = j - 14;
          if ( !v56 || v90[2] == v56 )
            goto LABEL_249;
        }
        v90 = 0LL;
LABEL_249:
        v57 = (struct DXGDEVICESYNCOBJECT **)v90[4];
      }
      else
      {
        v57 = *(struct DXGDEVICESYNCOBJECT ***)(v48 + 456);
      }
      v135 = v57;
      v58 = v132;
      if ( (*((_DWORD *)v132 + 98) & 0x10) != 0 )
      {
        if ( !a10 )
        {
          DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator((_QWORD *)v132 + 50, &v152);
          v84 = (_QWORD *)*((_QWORD *)&v152 + 1);
          while ( 1 )
          {
            if ( v84 == (_QWORD *)v152 || !v84 )
            {
              v152 = 0LL;
              goto LABEL_115;
            }
            v146 = (struct DXGPROCESS *)v84[5];
            v85 = (*(__int64 (__fastcall **)(struct DXGPROCESS *, struct DXGDEVICESYNCOBJECT **, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v82 + 2) + 16LL) + 736LL) + 8LL) + 640LL))(
                    v146,
                    v83,
                    v55);
            v63 = v85;
            if ( v85 < 0 )
              break;
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            {
              LODWORD(Timeout) = 1;
              McTemplateK0pqPR1XR1_EtwWriteTransfer(
                v86,
                (__int64)&EventWaitForSynchronizationObjectFromGpu,
                v87,
                v146,
                Timeout,
                &v135,
                &v54[8 * v46]);
            }
            v84 = (_QWORD *)*v84;
            *((_QWORD *)&v152 + 1) = v84;
            v83 = v135;
            v82 = v145;
          }
          v92 = v136;
          v93 = v126;
          WdLogSingleEntry4(2LL, v126, v136[v47], v47, v85);
          WdLogGlobalForLineNumber = 2264;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"0x%I64x failed to acquire hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
            (__int64)v93,
            v92[v47],
            v47,
            v63,
            0LL);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v148);
          if ( v155 != v156 && v155 )
            ExFreePoolWithTag(v155, 0);
          v155 = 0LL;
          v157 = 0;
          if ( v122 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v121);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v158);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v141);
          if ( v123 && v124 )
          {
            ExReleaseResourceLite(*(PERESOURCE *)(v123 + 136));
            KeLeaveCriticalRegion();
          }
          if ( v127 && v128 )
          {
            ExReleaseResourceLite(*(PERESOURCE *)(v127 + 136));
            KeLeaveCriticalRegion();
          }
          v94 = v129;
          if ( v129 != v130 && v129 )
LABEL_403:
            ExFreePoolWithTag(v94, 0);
LABEL_282:
          v129 = 0LL;
          v131 = 0;
LABEL_199:
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v133);
          if ( P != v138 && P )
            ExFreePoolWithTag(P, 0);
          return (unsigned int)v63;
        }
        v58 = (struct DXGCONTEXT *)*((_QWORD *)v132 + 36);
        IsAllocationInPresentQueue = VIDMM_EXPORT::VidMmIsAllocationInPresentQueue(
                                       *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v145 + 2) + 16LL) + 736LL),
                                       v58,
                                       (struct VIDMM_MULTI_ALLOC *)v57,
                                       v55);
        v63 = IsAllocationInPresentQueue;
        if ( IsAllocationInPresentQueue < 0 )
        {
          v116 = v136;
          v117 = v126;
          WdLogSingleEntry4(2LL, v126, v136[v47], v47, IsAllocationInPresentQueue);
          WdLogGlobalForLineNumber = 2235;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"0x%I64x failed to acquire hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
            (__int64)v117,
            v116[v47],
            v47,
            v63,
            0LL);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v148);
          if ( v155 != v156 && v155 )
            ExFreePoolWithTag(v155, 0);
          v155 = 0LL;
          v157 = 0;
          DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v121);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v158);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v141);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v123);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v127);
          v94 = v129;
          if ( v129 != v130 && v129 )
            goto LABEL_403;
          goto LABEL_282;
        }
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
LABEL_114:
          LODWORD(Timeout) = 1;
          McTemplateK0pqPR1XR1_EtwWriteTransfer(
            v61,
            (__int64)&EventWaitForSynchronizationObjectFromGpu,
            v62,
            v58,
            Timeout,
            &v135,
            (char *)v146 + (_QWORD)v54);
        }
      }
      else
      {
        v59 = (*(__int64 (__fastcall **)(_QWORD, struct DXGDEVICESYNCOBJECT **, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v145 + 2) + 16LL) + 736LL) + 8LL)
                                                                                               + 632LL))(
                *((_QWORD *)v132 + 32),
                v57,
                v55);
        v63 = v59;
        if ( v59 < 0 )
        {
          v76 = v136;
          v77 = v126;
          WdLogSingleEntry4(2LL, v126, v136[v47], v47, v59);
          WdLogGlobalForLineNumber = 2290;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"0x%I64x failed to acquire hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
            (__int64)v77,
            v76[v47],
            v47,
            v63,
            0LL);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v148);
          if ( v155 != v156 && v155 )
            ExFreePoolWithTag(v155, 0);
          v155 = 0LL;
          v157 = 0;
          if ( v122 )
          {
            v122 = 0;
            ExReleaseResourceLite(*((PERESOURCE *)v121 + 75));
            KeLeaveCriticalRegion();
          }
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v158);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v141);
          if ( v123 && v124 )
          {
            ExReleaseResourceLite(*(PERESOURCE *)(v123 + 136));
            KeLeaveCriticalRegion();
          }
          if ( v127 && v128 )
          {
            ExReleaseResourceLite(*(PERESOURCE *)(v127 + 136));
            KeLeaveCriticalRegion();
          }
          if ( v129 != v130 && v129 )
            ExFreePoolWithTag(v129, 0);
          v129 = 0LL;
          v131 = 0;
          goto LABEL_199;
        }
        if ( v119 )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            goto LABEL_114;
        }
        else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          McTemplateK0pqPR1x_EtwWriteTransfer(v61, v60, v62, v58);
        }
      }
LABEL_115:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v148);
      ++v46;
      Pool2 = v147;
    }
  }
  if ( (unsigned int)v11 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v11 >= 8 )
    {
      v40 = (_BYTE *)ExAllocatePool2(64LL, 8 * v11, 1265072196LL, 0LL);
      v155 = v40;
      goto LABEL_64;
    }
  }
  else
  {
    v40 = v156;
    v155 = v156;
    if ( (_DWORD)v11 )
    {
      memset(v156, 0, 8 * v11);
      v40 = v155;
    }
LABEL_64:
    v41 = v11;
    v157 = v11;
  }
  if ( v40 )
  {
    v42 = 8LL * v41;
    v153 = v42;
    v154 = v40;
    v43 = Src;
    if ( (char *)Src + v42 < Src || (unsigned __int64)Src + v42 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v40, v43, v42);
    v45 = v155;
    Src = v155;
    goto LABEL_88;
  }
  v155 = 0LL;
  v157 = 0;
  if ( v122 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v121);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v158);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v141);
  if ( v123 && v124 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v123 + 136));
    KeLeaveCriticalRegion();
  }
  if ( v127 && v128 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v127 + 136));
    KeLeaveCriticalRegion();
    v128 = 0;
  }
  if ( v129 != v130 && v129 )
    ExFreePoolWithTag(v129, 0);
  v129 = 0LL;
  v131 = 0;
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v133);
  if ( P != v138 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v139 = 0;
  return 3221225495LL;
}
