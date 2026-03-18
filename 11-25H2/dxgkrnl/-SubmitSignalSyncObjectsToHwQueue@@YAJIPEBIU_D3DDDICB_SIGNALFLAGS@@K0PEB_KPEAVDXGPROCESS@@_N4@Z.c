/*
 * XREFs of ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x140298C68
 * Callers:
 *     ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x1402982F8 (-DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1402AA8D0 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140427170 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     McTemplateK0qPR0qqPR3XR3d_EtwWriteTransfer @ 0x140014C3C (McTemplateK0qPR0qqPR3XR3d_EtwWriteTransfer.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x1400161C0 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x14001E170 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14001F190 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IEE@Z @ 0x140025CD0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x140026360 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x140029BB0 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14002B430 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D6D0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002F800 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x14003BE94 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x140047AF4 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PEAVDXGPAGINGQUEUE@@PEAE_N4@Z @ 0x140180714 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x140227BDC (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028FF40 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x14039BB80 (-DeallocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ.c)
 */

__int64 __fastcall SubmitSignalSyncObjectsToHwQueue(
        unsigned int a1,
        unsigned int *a2,
        struct _D3DDDICB_SIGNALFLAGS a3,
        __int64 a4,
        unsigned int *a5,
        unsigned __int64 *a6,
        struct DXGPROCESS *a7,
        bool a8,
        bool a9)
{
  unsigned __int64 v9; // r15
  unsigned __int64 Value; // rbx
  _BYTE *Pool2; // r13
  unsigned __int64 v13; // rdi
  __int64 v14; // r9
  __int64 v15; // rax
  _QWORD *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdi
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v21; // rdi
  unsigned int v22; // edi
  __int64 v23; // rcx
  __int64 v24; // r9
  unsigned int v25; // esi
  PVOID v26; // r12
  unsigned int v27; // eax
  PVOID v28; // rcx
  __int64 v29; // r8
  unsigned __int64 v30; // rdi
  unsigned int v31; // r9d
  size_t v32; // r8
  void *v33; // r9
  __int64 v34; // r9
  unsigned int v35; // esi
  __int64 v36; // r9
  _QWORD *v37; // r12
  unsigned int i; // r9d
  unsigned __int64 v39; // r10
  __int64 v40; // rsi
  struct ADAPTER_RENDER *v41; // r13
  struct ADAPTER_RENDER *v42; // r8
  __int64 v43; // rax
  __int64 v44; // rsi
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // r8
  unsigned int *v49; // rsi
  __int64 v50; // r12
  __int64 v51; // rsi
  unsigned __int64 v52; // rdi
  volatile signed __int32 *v53; // r12
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // r8
  int v58; // edx
  __int64 v59; // rdi
  __int64 v60; // rdi
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rdi
  int v66; // edx
  unsigned int *v67; // rbx
  __int64 v68; // r12
  DXGADAPTER *v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // r8
  _BYTE *v72; // rsi
  __int64 v73; // r12
  __int64 v74; // rsi
  unsigned int v75; // eax
  __int64 v76; // r9
  int v77; // ecx
  __int64 v78; // rdx
  __int64 v79; // r8
  unsigned int *v80; // rbx
  void **v81; // r10
  int v82; // eax
  __int64 v83; // rbx
  __int64 v84; // rax
  const wchar_t *v85; // r9
  struct DXGGLOBAL *v86; // [rsp+70h] [rbp-378h] BYREF
  char v87; // [rsp+78h] [rbp-370h]
  __int64 v88; // [rsp+80h] [rbp-368h] BYREF
  int v89; // [rsp+88h] [rbp-360h]
  unsigned int v90; // [rsp+90h] [rbp-358h]
  PVOID v91; // [rsp+98h] [rbp-350h]
  _BYTE v92[16]; // [rsp+A0h] [rbp-348h] BYREF
  unsigned int v93; // [rsp+B0h] [rbp-338h]
  unsigned int v94; // [rsp+B8h] [rbp-330h]
  _BYTE v95[16]; // [rsp+C0h] [rbp-328h] BYREF
  unsigned int v96; // [rsp+D0h] [rbp-318h]
  struct DXGPROCESS *v97; // [rsp+D8h] [rbp-310h]
  PVOID v98; // [rsp+E0h] [rbp-308h] BYREF
  _BYTE v99[16]; // [rsp+E8h] [rbp-300h] BYREF
  int v100; // [rsp+F8h] [rbp-2F0h]
  _BYTE *v101; // [rsp+100h] [rbp-2E8h]
  unsigned int *v102; // [rsp+108h] [rbp-2E0h]
  void *Src; // [rsp+110h] [rbp-2D8h] BYREF
  _BYTE *v104; // [rsp+118h] [rbp-2D0h]
  PVOID v105; // [rsp+120h] [rbp-2C8h]
  _BYTE v106[16]; // [rsp+128h] [rbp-2C0h] BYREF
  unsigned int v107; // [rsp+138h] [rbp-2B0h]
  _QWORD *v108; // [rsp+140h] [rbp-2A8h]
  PVOID P; // [rsp+150h] [rbp-298h]
  _BYTE v110[128]; // [rsp+158h] [rbp-290h] BYREF
  int v111; // [rsp+1D8h] [rbp-210h]
  PVOID v112; // [rsp+1E0h] [rbp-208h]
  unsigned __int64 v113; // [rsp+1E8h] [rbp-200h]
  _QWORD v114[4]; // [rsp+1F0h] [rbp-1F8h] BYREF
  char v115; // [rsp+210h] [rbp-1D8h]
  size_t v116; // [rsp+218h] [rbp-1D0h]
  PVOID v117; // [rsp+220h] [rbp-1C8h]
  _BYTE v118[24]; // [rsp+228h] [rbp-1C0h] BYREF
  PVOID v119; // [rsp+240h] [rbp-1A8h]
  _BYTE v120[32]; // [rsp+248h] [rbp-1A0h] BYREF
  unsigned int v121; // [rsp+268h] [rbp-180h]
  char v122[8]; // [rsp+270h] [rbp-178h] BYREF
  _BYTE v123[16]; // [rsp+278h] [rbp-170h] BYREF
  DXGADAPTER *v124; // [rsp+288h] [rbp-160h]
  char v125; // [rsp+290h] [rbp-158h]
  __int64 v126; // [rsp+298h] [rbp-150h]
  _BYTE v127[16]; // [rsp+2B8h] [rbp-130h] BYREF
  DXGADAPTER *v128; // [rsp+2C8h] [rbp-120h]
  char v129; // [rsp+2D0h] [rbp-118h]
  __int64 v130; // [rsp+2D8h] [rbp-110h]
  __int64 v131; // [rsp+2F8h] [rbp-F0h]
  char v132; // [rsp+300h] [rbp-E8h]
  _BYTE v133[144]; // [rsp+310h] [rbp-D8h] BYREF

  v9 = (unsigned int)a4;
  v96 = a4;
  Value = a3.Value;
  v102 = a2;
  v90 = a1;
  Src = a6;
  v97 = a7;
  v113 = (unsigned __int64)a7;
  v98 = 0LL;
  v100 = 0;
  if ( (unsigned int)a4 <= 2 )
  {
    Pool2 = v99;
    v101 = v99;
    v98 = v99;
    if ( !(_DWORD)a4 )
    {
LABEL_5:
      v100 = v9;
      v13 = v9;
      goto LABEL_6;
    }
    memset(v99, 0, 8LL * (unsigned int)a4);
    Pool2 = v98;
LABEL_4:
    v101 = Pool2;
    goto LABEL_5;
  }
  v13 = (unsigned int)a4;
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a4 >= 8 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8LL * (unsigned int)a4, 1265072196LL, a4);
    v98 = Pool2;
    goto LABEL_4;
  }
  Pool2 = 0LL;
  v101 = 0LL;
LABEL_6:
  if ( !Pool2 )
  {
    LODWORD(v19) = -1073741801;
    goto LABEL_303;
  }
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v95, *a5, a7, (struct DXGHWQUEUE **)Pool2, a9, 1);
  if ( !*(_QWORD *)Pool2 )
  {
    LODWORD(v19) = -1073741811;
    WdLogSingleEntry3(2LL, a7, *a5, -1073741811LL);
    WdLogGlobalForLineNumber = 1858;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%I64x failed with invalid hHwQueue 0x%I64x returning 0x%I64x",
      (__int64)a7,
      *a5,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_302;
  }
  v15 = *(_QWORD *)(*(_QWORD *)Pool2 + 16LL);
  if ( *(_BYTE *)(v15 + 434) )
  {
    v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v133, (struct DXGADAPTER *const)v19, 0LL);
    if ( a9 != (_BYTE)v81
      || (v82 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v133, 0LL), v81 = 0LL, v82 >= 0) )
    {
      LODWORD(v19) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(v19 + 4664),
                       a7,
                       a1,
                       v102,
                       (struct _D3DDDICB_SIGNALFLAGS)Value,
                       v9,
                       a5,
                       (unsigned __int64 *)Src,
                       (unsigned __int64)v81,
                       v81,
                       a8,
                       (bool)v81,
                       (struct DXGDEVICE *)v81);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v133);
      goto LABEL_302;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v133);
    goto LABEL_30;
  }
  P = 0LL;
  v111 = 0;
  if ( (unsigned int)v9 > 0x10 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v13 < 8 )
    {
      v16 = 0LL;
      v104 = 0LL;
      goto LABEL_13;
    }
    v16 = (_QWORD *)ExAllocatePool2(64LL, 8 * v13, 1265072196LL, v14);
    v104 = v16;
    P = v16;
  }
  else
  {
    v16 = v110;
    v104 = v110;
    P = v110;
    if ( (_DWORD)v9 )
    {
      memset(v110, 0, 8 * v13);
      v16 = P;
      v104 = P;
    }
  }
  v111 = v9;
LABEL_13:
  if ( !v16 )
  {
    P = 0LL;
    v111 = 0;
    goto LABEL_144;
  }
  v88 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Pool2 + 16LL) + 16LL);
  v89 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v122, v88, 0, v14, a9);
  if ( !a9 )
  {
    if ( a8
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)Pool2 + 16LL) + 16LL) + 464LL) == 2
      || (*((_DWORD *)a7 + 102) & 0x100) != 0 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
    }
    else if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88) )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
      if ( P != v110 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v111 = 0;
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v95);
      LODWORD(v19) = -2147483631;
      goto LABEL_303;
    }
    if ( v132 )
    {
      if ( v129 )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v127, 0LL, 0LL);
        WdLogGlobalForLineNumber = 7603;
      }
      v69 = v128;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v128 + 23) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v128 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v70, (__int64)&EventBlockThread, v71, 72);
          KeWaitForSingleObject((char *)v128 + 48, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(v128, 0LL);
        v69 = v128;
      }
      v130 = 0LL;
      v129 = 1;
      if ( *((_DWORD *)v69 + 50) != 1 )
        goto LABEL_25;
    }
    if ( v125 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v123, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7603;
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v124 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v124 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventBlockThread, v18, 72);
        KeWaitForSingleObject((char *)v124 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v124, 0LL);
    }
    v126 = 0LL;
    v125 = 1;
    if ( *(_DWORD *)(v131 + 608) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v123);
      if ( !v132 )
      {
LABEL_26:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
        if ( P != v110 )
        {
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
        P = 0LL;
        v111 = 0;
LABEL_30:
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v95);
        LODWORD(v19) = -1073741130;
        goto LABEL_303;
      }
LABEL_25:
      COREACCESS::Release((COREACCESS *)v127);
      goto LABEL_26;
    }
  }
  Global = DXGGLOBAL::GetGlobal();
  v86 = Global;
  v87 = 0;
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
  v21 = v86;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*((PERESOURCE *)v21 + 75), 1u);
  v22 = 1;
  v87 = 1;
  v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)Pool2 + 16LL) + 16LL) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v23 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v23 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1943;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pBroadcastDxgHwQueue[0]->GetRenderCore()->IsCoreResourceSharedOwner()",
      1943LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (Value & 0x7FFFFFF8) != 0 )
  {
    v83 = (Value >> 3) & 0xFFFFFFF;
    LODWORD(v19) = -1073741811;
    WdLogSingleEntry3(2LL, *a5, (unsigned int)v83, -1073741811LL);
    WdLogGlobalForLineNumber = 1950;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"hHwQueue 0x%I64x SignalSyncObject.Flags.Reserved is not Zero, but %I64d, returning 0x%I64x",
      *a5,
      (unsigned int)v83,
      -1073741811LL,
      0LL,
      0LL);
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v86);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
    if ( P != v110 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_301;
  }
  if ( (Value & 0x80000000) != 0LL )
  {
    WdLogSingleEntry0(2LL);
    v84 = 1957LL;
    v85 = L"SignalSynchronizationObject is called with the DXGK_SIGNAL_FLAG_INTERNAL0 flag bits.";
LABEL_292:
    WdLogGlobalForLineNumber = v84;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v85, v84, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_297;
  }
  *v16 = *(_QWORD *)(*(_QWORD *)Pool2 + 40LL);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v118, a7);
  while ( v22 < v96 )
  {
    v74 = v22;
    v75 = (a5[v22] >> 6) & 0xFFFFFF;
    if ( v75 >= *((_DWORD *)v97 + 74) )
      goto LABEL_249;
    v76 = *((_QWORD *)v97 + 35);
    if ( ((a5[v22] >> 25) & 0x60) != (*(_BYTE *)(v76 + 16LL * v75 + 8) & 0x60) )
      goto LABEL_249;
    if ( (*(_DWORD *)(v76 + 16LL * v75 + 8) & 0x2000) != 0 )
      goto LABEL_249;
    v77 = *(_DWORD *)(v76 + 16LL * v75 + 8) & 0x1F;
    if ( !v77 )
      goto LABEL_249;
    if ( v77 != 15 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_249:
      v78 = 0LL;
      goto LABEL_198;
    }
    v78 = *(_QWORD *)(v76 + 16LL * v75);
LABEL_198:
    *(_QWORD *)&Pool2[8 * v22] = v78;
    if ( !v78 || *(_QWORD *)(*(_QWORD *)(v78 + 16) + 16LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Pool2 + 16LL) + 16LL) )
    {
      v79 = a5[v22];
      LODWORD(v19) = -1073741811;
      WdLogSingleEntry4(2LL, *a5, v79, v74, -1073741811LL);
      WdLogGlobalForLineNumber = 1989;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"hHwQueue 0x%I64x failed to signal with invalid broadcast queue 0x%I64x at index %I64d returning 0x%I64x",
        *a5,
        a5[v74],
        v74,
        -1073741811LL,
        0LL);
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v118);
      if ( v87 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v86);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
      goto LABEL_128;
    }
    *(_QWORD *)&v104[8 * v22++] = *(_QWORD *)(v78 + 40);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v118);
  v25 = v90;
  v26 = 0LL;
  if ( !v90 )
  {
    WdLogSingleEntry0(2LL);
    v84 = 2000LL;
    v85 = L"Can't signal zero sync objects.";
    goto LABEL_292;
  }
  v91 = 0LL;
  v93 = 0;
  if ( v90 <= 2 )
  {
    v91 = v92;
    memset(v92, 0, 8LL * v90);
    v26 = v91;
    goto LABEL_45;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v90 >= 8 )
  {
    v26 = (PVOID)ExAllocatePool2(256LL, 8LL * v90, 1265072196LL, v24);
    v91 = v26;
LABEL_45:
    v93 = v25;
  }
  v108 = v26;
  if ( !v26 )
  {
    v91 = 0LL;
    v93 = 0;
    if ( v87 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v86);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
    if ( v88 && v89 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v88 + 136));
      KeLeaveCriticalRegion();
    }
    if ( P != v110 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v111 = 0;
LABEL_144:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v95);
    if ( v98 != v99 && v98 )
      ExFreePoolWithTag(v98, 0);
    return 3221225495LL;
  }
  v27 = 0;
  while ( 1 )
  {
    v94 = v27;
    if ( v27 >= v25 )
    {
      v28 = 0LL;
      v119 = 0LL;
      v29 = 0LL;
      v121 = 0;
      if ( v25 > 4 )
      {
        v31 = 0;
        v30 = v25;
        if ( 0xFFFFFFFFFFFFFFFFuLL / v25 < 8 )
        {
LABEL_52:
          if ( v28 )
          {
            if ( a8 )
            {
              v32 = 8 * v29;
              v116 = v32;
              v117 = v28;
              v33 = Src;
              if ( (char *)Src + v32 < Src || (unsigned __int64)Src + v32 > MmUserProbeAddress )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v28, v33, v32);
            }
            else
            {
              memmove(v28, Src, 8LL * v31);
            }
            v112 = v119;
            v35 = v90;
            DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
              (__int64)v114,
              v26,
              v90,
              v34);
            v37 = 0LL;
            if ( !v115 )
            {
              v105 = 0LL;
              v107 = 0;
              if ( v35 > 2 )
              {
                if ( 0xFFFFFFFFFFFFFFFFuLL / v30 < 8 )
                {
LABEL_62:
                  for ( i = 0; ; ++i )
                  {
                    v94 = i;
                    if ( i >= v35 )
                      break;
                    v39 = i;
                    v113 = i;
                    v40 = v108[i];
                    v41 = *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)Pool2 + 16LL) + 16LL) + 16LL);
                    Src = 0LL;
                    if ( (*(_DWORD *)(v40 + 408) & 4) != 0 )
                    {
                      LODWORD(v19) = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
                                       (DXGSYNCOBJECTCA *)v40,
                                       v41,
                                       (struct DXGADAPTERSYNCOBJECT **)&Src,
                                       0LL,
                                       0LL,
                                       0,
                                       0);
                      if ( (int)v19 < 0 )
                        goto LABEL_167;
                      i = v94;
                      v39 = v113;
                    }
                    else
                    {
                      if ( v41 )
                      {
                        v42 = *(struct ADAPTER_RENDER **)(v40 + 440);
                        if ( v42 != v41 )
                        {
                          LODWORD(v19) = -1073741811;
                          WdLogSingleEntry4(2LL, v40, v42, v41, -1073741811LL);
                          WdLogGlobalForLineNumber = 2529;
                          DxgkLogInternalTriageEvent(
                            0LL,
                            0x40000,
                            0xFFFFFFFFLL,
                            L"Mismatch RenderCore with 0x%I64x (0x%I64x vs 0x%I64x), returning 0x%I64x",
                            v40,
                            *(_QWORD *)(v40 + 440),
                            (__int64)v41,
                            -1073741811LL,
                            0LL);
LABEL_167:
                          v72 = v101;
                          v73 = (__int64)v97;
                          WdLogSingleEntry3(
                            2LL,
                            v97,
                            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v101 + 16LL) + 16LL) + 16LL)
                                      + 16LL),
                            (int)v19);
                          WdLogGlobalForLineNumber = 2150;
                          DxgkLogInternalTriageEvent(
                            0LL,
                            0x40000,
                            0xFFFFFFFFLL,
                            L"0x%I64x failed, failed to create a sync object on logical adapter 0x%I64x returning 0x%I64x",
                            v73,
                            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v72 + 16LL) + 16LL) + 16LL) + 16LL),
                            (int)v19,
                            0LL,
                            0LL);
                          if ( v105 != v106 && v105 )
                            ExFreePoolWithTag(v105, 0);
                          v105 = 0LL;
                          v107 = 0;
                          DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v114);
                          if ( v119 != v120 && v119 )
                            ExFreePoolWithTag(v119, 0);
                          v119 = 0LL;
                          v121 = 0;
                          if ( v91 != v92 && v91 )
                            ExFreePoolWithTag(v91, 0);
                          v91 = 0LL;
                          v93 = 0;
                          if ( v87 )
                            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v86);
LABEL_92:
                          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
                          if ( v88 && v89 )
                          {
                            ExReleaseResourceLite(*(PERESOURCE *)(v88 + 136));
                            KeLeaveCriticalRegion();
                          }
                          if ( P != v110 && P )
                            ExFreePoolWithTag(P, 0);
                          P = 0LL;
                          v111 = 0;
                          goto LABEL_97;
                        }
                      }
                      Src = (void *)(v40 + 424);
                    }
                    Pool2 = v101;
                    if ( (*(_DWORD *)(v40 + 408) & 4) != 0 )
                      v43 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                                          (DXGSYNCOBJECTCA *)v40,
                                          *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v101 + 16LL)
                                                                                + 16LL)
                                                                    + 16LL))
                            + 4);
                    else
                      v43 = *(_QWORD *)(v40 + 456);
                    v37[v39] = v43;
                    if ( !v43 )
                    {
                      WdLogSingleEntry1(2LL, v40);
                      WdLogGlobalForLineNumber = 2161;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        0xFFFFFFFFLL,
                        L"0x%p sync object adapter state is destroyed, thus it cannot be signaled.",
                        v40,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                      if ( v105 != v106 && v105 )
                        ExFreePoolWithTag(v105, 0);
                      v105 = 0LL;
                      v107 = 0;
                      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v114);
                      if ( v119 != v120 && v119 )
                        ExFreePoolWithTag(v119, 0);
                      v119 = 0LL;
                      v121 = 0;
                      if ( v91 != v92 && v91 )
                        ExFreePoolWithTag(v91, 0);
                      v91 = 0LL;
                      v93 = 0;
                      if ( v87 )
                        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v86);
                      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
                      if ( v88 && v89 )
                      {
                        ExReleaseResourceLite(*(PERESOURCE *)(v88 + 136));
                        KeLeaveCriticalRegion();
                      }
                      if ( P != v110 && P )
                        ExFreePoolWithTag(P, 0);
                      P = 0LL;
                      v111 = 0;
                      goto LABEL_165;
                    }
                    v35 = v90;
                  }
                  v44 = (__int64)v112;
                  v45 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, _QWORD, _QWORD *, _DWORD, PVOID))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)Pool2 + 16LL) + 16LL) + 16LL) + 736LL) + 8LL) + 656LL))(
                          v96,
                          v104,
                          v90,
                          v37,
                          Value,
                          v112);
                  v19 = v45;
                  if ( v45 < 0 )
                  {
                    v49 = v102;
                    v50 = (__int64)v97;
                    WdLogSingleEntry4(2LL, v97, *v102, 0LL, v45);
                    WdLogGlobalForLineNumber = 2181;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      0xFFFFFFFFLL,
                      L"0x%I64x failed to signal SyncObject 0x%I64x at index %I64d returning 0x%I64x",
                      v50,
                      *v49,
                      0LL,
                      v19,
                      0LL);
                    if ( v105 != v106 && v105 )
                      ExFreePoolWithTag(v105, 0);
                    v105 = 0LL;
                    v107 = 0;
                    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v114);
                    if ( v119 != v120 && v119 )
                      ExFreePoolWithTag(v119, 0);
                    v119 = 0LL;
                    v121 = 0;
                    if ( v91 != v92 && v91 )
                      ExFreePoolWithTag(v91, 0);
                    v91 = 0LL;
                    v93 = 0;
                    if ( v87 )
                    {
                      v87 = 0;
                      ExReleaseResourceLite(*((PERESOURCE *)v86 + 75));
                      KeLeaveCriticalRegion();
                    }
                    goto LABEL_92;
                  }
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                    McTemplateK0qPR0qqPR3XR3d_EtwWriteTransfer(
                      a8 | (2 * (unsigned int)a9),
                      v46,
                      v47,
                      v96,
                      (__int64)Pool2,
                      Value,
                      v90,
                      (__int64)v37,
                      v44,
                      a8 | (2 * a9));
                  if ( v105 != v106 && v105 )
                    ExFreePoolWithTag(v105, 0);
                  v105 = 0LL;
                  v107 = 0;
                  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v114);
                  if ( v119 != v120 && v119 )
                    ExFreePoolWithTag(v119, 0);
                  v119 = 0LL;
                  v121 = 0;
                  if ( v91 != v92 && v91 )
                    ExFreePoolWithTag(v91, 0);
                  v91 = 0LL;
                  v93 = 0;
                  if ( v87 )
                  {
                    v87 = 0;
                    ExReleaseResourceLite(*((PERESOURCE *)v86 + 75));
                    KeLeaveCriticalRegion();
                  }
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
                  if ( v88 && v89 )
                  {
                    ExReleaseResourceLite(*(PERESOURCE *)(v88 + 136));
                    KeLeaveCriticalRegion();
                  }
                  if ( P != v110 && P )
                    ExFreePoolWithTag(P, 0);
                  P = 0LL;
                  v111 = 0;
                  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v95);
                  if ( v98 != v99 && v98 )
                    ExFreePoolWithTag(v98, 0);
                  return 0LL;
                }
                v37 = (_QWORD *)ExAllocatePool2(64LL, 8 * v30, 1265072196LL, v36);
                v105 = v37;
              }
              else
              {
                v105 = v106;
                memset(v106, 0, 8 * v30);
                v37 = v105;
              }
              v107 = v35;
              goto LABEL_62;
            }
            if ( v114[0] )
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 2122;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"The same sync object handle is passed twice",
                2122LL,
                0LL,
                0LL,
                0LL,
                0LL);
              DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v114);
              if ( v119 != v120 && v119 )
                ExFreePoolWithTag(v119, 0);
              v119 = 0LL;
              v121 = 0;
              if ( v91 != v92 && v91 )
                ExFreePoolWithTag(v91, 0);
              v91 = 0LL;
              v93 = 0;
              if ( v87 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v86);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
              if ( v88 && v89 )
              {
                ExReleaseResourceLite(*(PERESOURCE *)(v88 + 136));
                KeLeaveCriticalRegion();
              }
              if ( P != v110 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v111 = 0;
LABEL_165:
              DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v95);
              if ( v98 != v99 && v98 )
                ExFreePoolWithTag(v98, 0);
              LODWORD(v19) = -1073741811;
              return (unsigned int)v19;
            }
            DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v114);
            if ( v119 != v120 && v119 )
              ExFreePoolWithTag(v119, 0);
          }
          v121 = 0;
          v119 = 0LL;
          if ( v91 != v92 && v91 )
            ExFreePoolWithTag(v91, 0);
          v91 = 0LL;
          v93 = 0;
          DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v86);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
          if ( P != v110 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v111 = 0;
          DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v95);
          PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements(&v98);
          return 3221225495LL;
        }
        v28 = (PVOID)ExAllocatePool2(64LL, 8LL * v25, 1265072196LL, 0LL);
        v119 = v28;
      }
      else
      {
        v119 = v120;
        v30 = v25;
        memset(v120, 0, 8LL * v25);
        v28 = v119;
      }
      v29 = v25;
      v121 = v25;
      v31 = v25;
      goto LABEL_52;
    }
    v51 = v27;
    v52 = v102[v27];
    v53 = (volatile signed __int32 *)((char *)v97 + 248);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v53, 0LL) )
    {
      DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)v53, v54, v55);
      ExAcquirePushLockSharedEx(v53, 0LL);
    }
    _InterlockedIncrement(v53 + 4);
    v56 = ((unsigned int)v52 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v56 < *((_DWORD *)v97 + 74)
      && (v57 = *((_QWORD *)v97 + 35),
          v58 = *(_DWORD *)(v57 + 16 * v56 + 8),
          (((unsigned int)v52 >> 25) & 0x60) == (*(_BYTE *)(v57 + 16 * v56 + 8) & 0x60))
      && (v58 & 0x2000) == 0
      && (v58 & 0x1F) != 0
      && (v59 = 2 * ((v52 >> 6) & 0xFFFFFF), (*(_BYTE *)(v57 + 8 * v59 + 8) & 0x1F) == 0xB) )
    {
      v60 = *(_QWORD *)(v57 + 8 * v59);
    }
    else
    {
      v60 = 0LL;
    }
    _InterlockedDecrement(v53 + 4);
    ExReleasePushLockSharedEx(v53, 0LL);
    KeLeaveCriticalRegion();
    if ( !v60 )
      break;
    if ( (*(_DWORD *)(v60 + 72) & 0x10) != 0 )
    {
      v80 = v102;
      WdLogSingleEntry1(2LL, v102[v51]);
      WdLogGlobalForLineNumber = 2031;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"0x%I64x object is opened with NoSignal flag and thus cannot be signaled.",
        v80[v51],
        0LL,
        0LL,
        0LL,
        0LL);
      if ( v91 != v92 && v91 )
        ExFreePoolWithTag(v91, 0);
      v91 = 0LL;
      v93 = 0;
      if ( v87 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v86);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
      if ( P != v110 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v111 = 0;
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v95);
      if ( v98 != v99 && v98 )
        ExFreePoolWithTag(v98, 0);
      return 3221225506LL;
    }
    v61 = *(_QWORD *)(v60 + 16);
    v62 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Pool2 + 16LL) + 16LL);
    if ( v61 != v62 )
    {
      WdLogSingleEntry2(2LL, v62, v61);
      WdLogGlobalForLineNumber = 2041;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"SignalSynchronizationObjectFromGpu on device 0x%p attempts to use a sync object opened on a different device 0x%p.",
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Pool2 + 16LL) + 16LL),
        *(_QWORD *)(v60 + 16),
        0LL,
        0LL,
        0LL);
      if ( v91 != v92 && v91 )
        ExFreePoolWithTag(v91, 0);
      v91 = 0LL;
      v93 = 0;
LABEL_297:
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v86);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
      if ( P != v110 && P )
        ExFreePoolWithTag(P, 0);
      LODWORD(v19) = -1073741811;
LABEL_301:
      P = 0LL;
      v111 = 0;
LABEL_302:
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v95);
LABEL_303:
      PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements(&v98);
      return (unsigned int)v19;
    }
    v63 = *(_QWORD *)(v60 + 32);
LABEL_111:
    v26 = v108;
    v108[v51] = v63;
    v27 = v94 + 1;
    v25 = v90;
  }
  LODWORD(v112) = v102[v51];
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v53);
  v64 = ((unsigned int)v112 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v64 < *((_DWORD *)v97 + 74)
    && (v65 = *((_QWORD *)v97 + 35),
        v66 = *(_DWORD *)(v65 + 16 * v64 + 8),
        (((unsigned int)v112 >> 25) & 0x60) == (*(_BYTE *)(v65 + 16 * v64 + 8) & 0x60))
    && (v66 & 0x2000) == 0
    && (v66 & 0x1F) != 0 )
  {
    if ( (*(_BYTE *)(v65 + 16 * (((unsigned __int64)(unsigned int)v112 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 8 )
    {
      v63 = *(_QWORD *)(v65 + 16 * (((unsigned __int64)(unsigned int)v112 >> 6) & 0xFFFFFF));
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      v63 = 0LL;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v63 = 0LL;
  }
  _InterlockedDecrement(v53 + 4);
  ExReleasePushLockSharedEx(v53, 0LL);
  KeLeaveCriticalRegion();
  if ( v63 )
    goto LABEL_111;
  v67 = v102;
  LODWORD(v19) = -1073741811;
  v68 = (__int64)v97;
  WdLogSingleEntry4(2LL, v97, v102[v51], v51, -1073741811LL);
  WdLogGlobalForLineNumber = 2059;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"0x%I64x failed to signal with invalid hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
    v68,
    v67[v51],
    v51,
    -1073741811LL,
    0LL);
  if ( v91 != v92 && v91 )
    ExFreePoolWithTag(v91, 0);
  v91 = 0LL;
  v93 = 0;
  if ( v87 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v86);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
  if ( v88 && v89 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v88 + 136));
    KeLeaveCriticalRegion();
  }
LABEL_128:
  if ( P != v110 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v111 = 0;
LABEL_97:
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v95);
  if ( v98 != v99 && v98 )
    ExFreePoolWithTag(v98, 0);
  return (unsigned int)v19;
}
