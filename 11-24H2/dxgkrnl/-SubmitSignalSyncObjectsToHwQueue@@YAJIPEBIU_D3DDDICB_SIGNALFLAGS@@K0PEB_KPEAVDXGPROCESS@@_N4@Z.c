/*
 * XREFs of ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1403260EC
 * Callers:
 *     ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x14029D7B8 (-DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1402B0C60 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140426D90 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x14000EB90 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14000FBB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     McTemplateK0qPR0qqPR3XR3d_EtwWriteTransfer @ 0x140011A3C (McTemplateK0qPR0qqPR3XR3d_EtwWriteTransfer.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140012FC0 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IEE@Z @ 0x140026480 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x140026A50 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x14002A350 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14002BC70 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DE40 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002FE40 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x14003B854 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x140047454 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PEAVDXGPAGINGQUEUE@@PEAE_N4@Z @ 0x140183100 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x14022E4C8 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A4390 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x140393D54 (-DeallocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ.c)
 */

__int64 __fastcall SubmitSignalSyncObjectsToHwQueue(
        unsigned int a1,
        unsigned int *a2,
        struct _D3DDDICB_SIGNALFLAGS a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int64 *a6,
        struct _KTHREAD **a7,
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
  unsigned int v24; // esi
  PVOID v25; // r12
  unsigned int v26; // eax
  PVOID v27; // rcx
  __int64 v28; // r8
  unsigned __int64 v29; // rdi
  unsigned int v30; // r9d
  size_t v31; // r8
  void *v32; // r9
  unsigned int v33; // esi
  _QWORD *v34; // r12
  unsigned int i; // r9d
  unsigned __int64 v36; // r10
  __int64 v37; // rsi
  struct ADAPTER_RENDER *v38; // r13
  struct ADAPTER_RENDER *v39; // r8
  __int64 v40; // rax
  __int64 v41; // rsi
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // r8
  unsigned int *v46; // rsi
  __int64 v47; // r12
  __int64 v48; // rsi
  unsigned __int64 v49; // rdi
  volatile signed __int32 *v50; // r12
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rax
  struct _KTHREAD *v54; // r8
  int v55; // edx
  __int64 v56; // rdi
  __int64 v57; // rdi
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rdi
  __int64 v61; // rax
  struct _KTHREAD *v62; // rdi
  int v63; // edx
  unsigned int *v64; // rbx
  __int64 v65; // r12
  DXGADAPTER *v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // r8
  _BYTE *v69; // rsi
  __int64 v70; // r12
  __int64 v71; // rsi
  unsigned int v72; // eax
  struct _KTHREAD *v73; // r9
  int v74; // ecx
  __int64 v75; // rdx
  __int64 v76; // r8
  unsigned int *v77; // rbx
  void **v78; // r10
  int v79; // eax
  __int64 v80; // rbx
  __int64 v81; // rax
  const wchar_t *v82; // r9
  struct DXGGLOBAL *v83; // [rsp+70h] [rbp-378h] BYREF
  char v84; // [rsp+78h] [rbp-370h]
  __int64 v85; // [rsp+80h] [rbp-368h] BYREF
  int v86; // [rsp+88h] [rbp-360h]
  unsigned int v87; // [rsp+90h] [rbp-358h]
  PVOID v88; // [rsp+98h] [rbp-350h]
  _BYTE v89[16]; // [rsp+A0h] [rbp-348h] BYREF
  unsigned int v90; // [rsp+B0h] [rbp-338h]
  unsigned int v91; // [rsp+B8h] [rbp-330h]
  _BYTE v92[16]; // [rsp+C0h] [rbp-328h] BYREF
  unsigned int v93; // [rsp+D0h] [rbp-318h]
  struct _KTHREAD **v94; // [rsp+D8h] [rbp-310h]
  PVOID v95; // [rsp+E0h] [rbp-308h] BYREF
  _BYTE v96[16]; // [rsp+E8h] [rbp-300h] BYREF
  int v97; // [rsp+F8h] [rbp-2F0h]
  _BYTE *v98; // [rsp+100h] [rbp-2E8h]
  unsigned int *v99; // [rsp+108h] [rbp-2E0h]
  void *Src; // [rsp+110h] [rbp-2D8h] BYREF
  _BYTE *v101; // [rsp+118h] [rbp-2D0h]
  PVOID v102; // [rsp+120h] [rbp-2C8h]
  _BYTE v103[16]; // [rsp+128h] [rbp-2C0h] BYREF
  unsigned int v104; // [rsp+138h] [rbp-2B0h]
  _QWORD *v105; // [rsp+140h] [rbp-2A8h]
  PVOID P; // [rsp+150h] [rbp-298h]
  _BYTE v107[128]; // [rsp+158h] [rbp-290h] BYREF
  int v108; // [rsp+1D8h] [rbp-210h]
  PVOID v109; // [rsp+1E0h] [rbp-208h]
  struct _KTHREAD **v110; // [rsp+1E8h] [rbp-200h]
  _QWORD v111[4]; // [rsp+1F0h] [rbp-1F8h] BYREF
  char v112; // [rsp+210h] [rbp-1D8h]
  size_t v113; // [rsp+218h] [rbp-1D0h]
  PVOID v114; // [rsp+220h] [rbp-1C8h]
  _BYTE v115[24]; // [rsp+228h] [rbp-1C0h] BYREF
  PVOID v116; // [rsp+240h] [rbp-1A8h]
  _BYTE v117[32]; // [rsp+248h] [rbp-1A0h] BYREF
  unsigned int v118; // [rsp+268h] [rbp-180h]
  char v119[8]; // [rsp+270h] [rbp-178h] BYREF
  _BYTE v120[16]; // [rsp+278h] [rbp-170h] BYREF
  DXGADAPTER *v121; // [rsp+288h] [rbp-160h]
  char v122; // [rsp+290h] [rbp-158h]
  __int64 v123; // [rsp+298h] [rbp-150h]
  _BYTE v124[16]; // [rsp+2B8h] [rbp-130h] BYREF
  DXGADAPTER *v125; // [rsp+2C8h] [rbp-120h]
  char v126; // [rsp+2D0h] [rbp-118h]
  __int64 v127; // [rsp+2D8h] [rbp-110h]
  __int64 v128; // [rsp+2F8h] [rbp-F0h]
  char v129; // [rsp+300h] [rbp-E8h]
  _BYTE v130[144]; // [rsp+310h] [rbp-D8h] BYREF

  v9 = a4;
  v93 = a4;
  Value = a3.Value;
  v99 = a2;
  v87 = a1;
  Src = a6;
  v94 = a7;
  v110 = a7;
  v95 = 0LL;
  v97 = 0;
  if ( a4 <= 2 )
  {
    Pool2 = v96;
    v98 = v96;
    v95 = v96;
    if ( !a4 )
    {
LABEL_5:
      v97 = v9;
      v13 = v9;
      goto LABEL_6;
    }
    memset(v96, 0, 8LL * a4);
    Pool2 = v95;
LABEL_4:
    v98 = Pool2;
    goto LABEL_5;
  }
  v13 = a4;
  if ( 0xFFFFFFFFFFFFFFFFuLL / a4 >= 8 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8LL * a4, 1265072196LL);
    v95 = Pool2;
    goto LABEL_4;
  }
  Pool2 = 0LL;
  v98 = 0LL;
LABEL_6:
  if ( !Pool2 )
  {
    LODWORD(v19) = -1073741801;
    goto LABEL_303;
  }
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v92, *a5, a7, (struct DXGHWQUEUE **)Pool2, a9, 1);
  if ( !*(_QWORD *)Pool2 )
  {
    LODWORD(v19) = -1073741811;
    WdLogSingleEntry3(2LL, a7, *a5, -1073741811LL);
    WdLogGlobalForLineNumber = 1858;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
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
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v130, (struct DXGADAPTER *const)v19, 0LL);
    if ( a9 != (_BYTE)v78
      || (v79 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v130, 0LL), v78 = 0LL, v79 >= 0) )
    {
      LODWORD(v19) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(v19 + 4664),
                       (struct DXGPROCESS *)a7,
                       a1,
                       v99,
                       (struct _D3DDDICB_SIGNALFLAGS)Value,
                       v9,
                       a5,
                       (unsigned __int64 *)Src,
                       (unsigned __int64)v78,
                       v78,
                       a8,
                       (bool)v78,
                       (struct DXGDEVICE *)v78);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v130);
      goto LABEL_302;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v130);
    goto LABEL_30;
  }
  P = 0LL;
  v108 = 0;
  if ( (unsigned int)v9 > 0x10 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v13 < 8 )
    {
      v16 = 0LL;
      v101 = 0LL;
      goto LABEL_13;
    }
    v16 = (_QWORD *)ExAllocatePool2(64LL, 8 * v13, 1265072196LL);
    v101 = v16;
    P = v16;
  }
  else
  {
    v16 = v107;
    v101 = v107;
    P = v107;
    if ( (_DWORD)v9 )
    {
      memset(v107, 0, 8 * v13);
      v16 = P;
      v101 = P;
    }
  }
  v108 = v9;
LABEL_13:
  if ( !v16 )
  {
    P = 0LL;
    v108 = 0;
    goto LABEL_144;
  }
  v85 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Pool2 + 16LL) + 16LL);
  v86 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v119, v85, 0, v14, a9);
  if ( !a9 )
  {
    if ( a8
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)Pool2 + 16LL) + 16LL) + 464LL) == 2
      || ((_DWORD)a7[51] & 0x100) != 0 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v85);
    }
    else if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v85) )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v85);
      if ( P != v107 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v108 = 0;
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v92);
      LODWORD(v19) = -2147483631;
      goto LABEL_303;
    }
    if ( v129 )
    {
      if ( v126 )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v124, 0LL, 0LL);
        WdLogGlobalForLineNumber = 7628;
      }
      v66 = v125;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v125 + 23) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v125 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v67, (__int64)&EventBlockThread, v68, 72);
          KeWaitForSingleObject((char *)v125 + 48, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(v125, 0LL);
        v66 = v125;
      }
      v127 = 0LL;
      v126 = 1;
      if ( *((_DWORD *)v66 + 50) != 1 )
        goto LABEL_25;
    }
    if ( v122 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v120, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7628;
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v121 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v121 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventBlockThread, v18, 72);
        KeWaitForSingleObject((char *)v121 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v121, 0LL);
    }
    v123 = 0LL;
    v122 = 1;
    if ( *(_DWORD *)(v128 + 608) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v120);
      if ( !v129 )
      {
LABEL_26:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v85);
        if ( P != v107 )
        {
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
        P = 0LL;
        v108 = 0;
LABEL_30:
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v92);
        LODWORD(v19) = -1073741130;
        goto LABEL_303;
      }
LABEL_25:
      COREACCESS::Release((COREACCESS *)v124);
      goto LABEL_26;
    }
  }
  Global = DXGGLOBAL::GetGlobal();
  v83 = Global;
  v84 = 0;
  if ( !Global )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3030;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pGlobal != NULL", 3030LL, 0LL, 0LL, 0LL, 0LL);
    Global = 0LL;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 75)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3035;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"!m_pGlobal->IsSyncObjectLockSharedOwner() || bAllowRecursiveSharedLock",
      3035LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v21 = v83;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*((PERESOURCE *)v21 + 75), 1u);
  v22 = 1;
  v84 = 1;
  v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)Pool2 + 16LL) + 16LL) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v23 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v23 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1943;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
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
    v80 = (Value >> 3) & 0xFFFFFFF;
    LODWORD(v19) = -1073741811;
    WdLogSingleEntry3(2LL, *a5, (unsigned int)v80, -1073741811LL);
    WdLogGlobalForLineNumber = 1950;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"hHwQueue 0x%I64x SignalSyncObject.Flags.Reserved is not Zero, but %I64d, returning 0x%I64x",
      *a5,
      (unsigned int)v80,
      -1073741811LL,
      0LL,
      0LL);
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v83);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v85);
    if ( P != v107 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_301;
  }
  if ( (Value & 0x80000000) != 0LL )
  {
    WdLogSingleEntry0(2LL);
    v81 = 1957LL;
    v82 = L"SignalSynchronizationObject is called with the DXGK_SIGNAL_FLAG_INTERNAL0 flag bits.";
LABEL_292:
    WdLogGlobalForLineNumber = v81;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v82, v81, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_297;
  }
  *v16 = *(_QWORD *)(*(_QWORD *)Pool2 + 40LL);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v115, (struct DXGPROCESS *)a7);
  while ( v22 < v93 )
  {
    v71 = v22;
    v72 = (a5[v22] >> 6) & 0xFFFFFF;
    if ( v72 >= *((_DWORD *)v94 + 74) )
      goto LABEL_249;
    v73 = v94[35];
    if ( ((a5[v22] >> 25) & 0x60) != (*((_BYTE *)v73 + 16 * v72 + 8) & 0x60) )
      goto LABEL_249;
    if ( (*((_DWORD *)v73 + 4 * v72 + 2) & 0x2000) != 0 )
      goto LABEL_249;
    v74 = *((_DWORD *)v73 + 4 * v72 + 2) & 0x1F;
    if ( !v74 )
      goto LABEL_249;
    if ( v74 != 15 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_249:
      v75 = 0LL;
      goto LABEL_198;
    }
    v75 = *((_QWORD *)v73 + 2 * v72);
LABEL_198:
    *(_QWORD *)&Pool2[8 * v22] = v75;
    if ( !v75 || *(_QWORD *)(*(_QWORD *)(v75 + 16) + 16LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Pool2 + 16LL) + 16LL) )
    {
      v76 = a5[v22];
      LODWORD(v19) = -1073741811;
      WdLogSingleEntry4(2LL, *a5, v76, v71, -1073741811LL);
      WdLogGlobalForLineNumber = 1989;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"hHwQueue 0x%I64x failed to signal with invalid broadcast queue 0x%I64x at index %I64d returning 0x%I64x",
        *a5,
        a5[v71],
        v71,
        -1073741811LL,
        0LL);
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v115);
      if ( v84 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v83);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v85);
      goto LABEL_128;
    }
    *(_QWORD *)&v101[8 * v22++] = *(_QWORD *)(v75 + 40);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v115);
  v24 = v87;
  v25 = 0LL;
  if ( !v87 )
  {
    WdLogSingleEntry0(2LL);
    v81 = 2000LL;
    v82 = L"Can't signal zero sync objects.";
    goto LABEL_292;
  }
  v88 = 0LL;
  v90 = 0;
  if ( v87 <= 2 )
  {
    v88 = v89;
    memset(v89, 0, 8LL * v87);
    v25 = v88;
    goto LABEL_45;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v87 >= 8 )
  {
    v25 = (PVOID)ExAllocatePool2(256LL, 8LL * v87, 1265072196LL);
    v88 = v25;
LABEL_45:
    v90 = v24;
  }
  v105 = v25;
  if ( !v25 )
  {
    v88 = 0LL;
    v90 = 0;
    if ( v84 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v83);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
    if ( v85 && v86 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v85 + 136));
      KeLeaveCriticalRegion();
    }
    if ( P != v107 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v108 = 0;
LABEL_144:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v92);
    if ( v95 != v96 && v95 )
      ExFreePoolWithTag(v95, 0);
    return 3221225495LL;
  }
  v26 = 0;
  while ( 1 )
  {
    v91 = v26;
    if ( v26 >= v24 )
    {
      v27 = 0LL;
      v116 = 0LL;
      v28 = 0LL;
      v118 = 0;
      if ( v24 > 4 )
      {
        v30 = 0;
        v29 = v24;
        if ( 0xFFFFFFFFFFFFFFFFuLL / v24 < 8 )
        {
LABEL_52:
          if ( v27 )
          {
            if ( a8 )
            {
              v31 = 8 * v28;
              v113 = v31;
              v114 = v27;
              v32 = Src;
              if ( (char *)Src + v31 < Src || (unsigned __int64)Src + v31 > MmUserProbeAddress )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v27, v32, v31);
            }
            else
            {
              memmove(v27, Src, 8LL * v30);
            }
            v109 = v116;
            v33 = v87;
            DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
              (__int64)v111,
              v25,
              v87);
            v34 = 0LL;
            if ( !v112 )
            {
              v102 = 0LL;
              v104 = 0;
              if ( v33 > 2 )
              {
                if ( 0xFFFFFFFFFFFFFFFFuLL / v29 < 8 )
                {
LABEL_62:
                  for ( i = 0; ; ++i )
                  {
                    v91 = i;
                    if ( i >= v33 )
                      break;
                    v36 = i;
                    v110 = (struct _KTHREAD **)i;
                    v37 = v105[i];
                    v38 = *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)Pool2 + 16LL) + 16LL) + 16LL);
                    Src = 0LL;
                    if ( (*(_DWORD *)(v37 + 408) & 4) != 0 )
                    {
                      LODWORD(v19) = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
                                       (DXGSYNCOBJECTCA *)v37,
                                       v38,
                                       (struct DXGADAPTERSYNCOBJECT **)&Src,
                                       0LL,
                                       0LL,
                                       0,
                                       0);
                      if ( (int)v19 < 0 )
                        goto LABEL_167;
                      i = v91;
                      v36 = (unsigned __int64)v110;
                    }
                    else
                    {
                      if ( v38 )
                      {
                        v39 = *(struct ADAPTER_RENDER **)(v37 + 440);
                        if ( v39 != v38 )
                        {
                          LODWORD(v19) = -1073741811;
                          WdLogSingleEntry4(2LL, v37, v39, v38, -1073741811LL);
                          WdLogGlobalForLineNumber = 2490;
                          DxgkLogInternalTriageEvent(
                            0LL,
                            0x40000LL,
                            0xFFFFFFFFLL,
                            L"Mismatch RenderCore with 0x%I64x (0x%I64x vs 0x%I64x), returning 0x%I64x",
                            v37,
                            *(_QWORD *)(v37 + 440),
                            (__int64)v38,
                            -1073741811LL,
                            0LL);
LABEL_167:
                          v69 = v98;
                          v70 = (__int64)v94;
                          WdLogSingleEntry3(
                            2LL,
                            v94,
                            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v98 + 16LL) + 16LL) + 16LL) + 16LL),
                            (int)v19);
                          WdLogGlobalForLineNumber = 2150;
                          DxgkLogInternalTriageEvent(
                            0LL,
                            0x40000LL,
                            0xFFFFFFFFLL,
                            L"0x%I64x failed, failed to create a sync object on logical adapter 0x%I64x returning 0x%I64x",
                            v70,
                            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v69 + 16LL) + 16LL) + 16LL) + 16LL),
                            (int)v19,
                            0LL,
                            0LL);
                          if ( v102 != v103 && v102 )
                            ExFreePoolWithTag(v102, 0);
                          v102 = 0LL;
                          v104 = 0;
                          DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v111);
                          if ( v116 != v117 && v116 )
                            ExFreePoolWithTag(v116, 0);
                          v116 = 0LL;
                          v118 = 0;
                          if ( v88 != v89 && v88 )
                            ExFreePoolWithTag(v88, 0);
                          v88 = 0LL;
                          v90 = 0;
                          if ( v84 )
                            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v83);
LABEL_92:
                          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
                          if ( v85 && v86 )
                          {
                            ExReleaseResourceLite(*(PERESOURCE *)(v85 + 136));
                            KeLeaveCriticalRegion();
                          }
                          if ( P != v107 && P )
                            ExFreePoolWithTag(P, 0);
                          P = 0LL;
                          v108 = 0;
                          goto LABEL_97;
                        }
                      }
                      Src = (void *)(v37 + 424);
                    }
                    Pool2 = v98;
                    if ( (*(_DWORD *)(v37 + 408) & 4) != 0 )
                      v40 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                                          (DXGSYNCOBJECTCA *)v37,
                                          *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v98 + 16LL)
                                                                                + 16LL)
                                                                    + 16LL))
                            + 4);
                    else
                      v40 = *(_QWORD *)(v37 + 456);
                    v34[v36] = v40;
                    if ( !v40 )
                    {
                      WdLogSingleEntry1(2LL, v37);
                      WdLogGlobalForLineNumber = 2161;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000LL,
                        0xFFFFFFFFLL,
                        L"0x%p sync object adapter state is destroyed, thus it cannot be signaled.",
                        v37,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                      if ( v102 != v103 && v102 )
                        ExFreePoolWithTag(v102, 0);
                      v102 = 0LL;
                      v104 = 0;
                      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v111);
                      if ( v116 != v117 && v116 )
                        ExFreePoolWithTag(v116, 0);
                      v116 = 0LL;
                      v118 = 0;
                      if ( v88 != v89 && v88 )
                        ExFreePoolWithTag(v88, 0);
                      v88 = 0LL;
                      v90 = 0;
                      if ( v84 )
                        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v83);
                      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
                      if ( v85 && v86 )
                      {
                        ExReleaseResourceLite(*(PERESOURCE *)(v85 + 136));
                        KeLeaveCriticalRegion();
                      }
                      if ( P != v107 && P )
                        ExFreePoolWithTag(P, 0);
                      P = 0LL;
                      v108 = 0;
                      goto LABEL_165;
                    }
                    v33 = v87;
                  }
                  v41 = (__int64)v109;
                  v42 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, _QWORD, _QWORD *, _DWORD, PVOID))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)Pool2 + 16LL) + 16LL) + 16LL) + 736LL) + 8LL) + 656LL))(
                          v93,
                          v101,
                          v87,
                          v34,
                          Value,
                          v109);
                  v19 = v42;
                  if ( v42 < 0 )
                  {
                    v46 = v99;
                    v47 = (__int64)v94;
                    WdLogSingleEntry4(2LL, v94, *v99, 0LL, v42);
                    WdLogGlobalForLineNumber = 2181;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000LL,
                      0xFFFFFFFFLL,
                      L"0x%I64x failed to signal SyncObject 0x%I64x at index %I64d returning 0x%I64x",
                      v47,
                      *v46,
                      0LL,
                      v19,
                      0LL);
                    if ( v102 != v103 && v102 )
                      ExFreePoolWithTag(v102, 0);
                    v102 = 0LL;
                    v104 = 0;
                    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v111);
                    if ( v116 != v117 && v116 )
                      ExFreePoolWithTag(v116, 0);
                    v116 = 0LL;
                    v118 = 0;
                    if ( v88 != v89 && v88 )
                      ExFreePoolWithTag(v88, 0);
                    v88 = 0LL;
                    v90 = 0;
                    if ( v84 )
                    {
                      v84 = 0;
                      ExReleaseResourceLite(*((PERESOURCE *)v83 + 75));
                      KeLeaveCriticalRegion();
                    }
                    goto LABEL_92;
                  }
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                    McTemplateK0qPR0qqPR3XR3d_EtwWriteTransfer(
                      a8 | (2 * (unsigned int)a9),
                      v43,
                      v44,
                      v93,
                      (__int64)Pool2,
                      Value,
                      v87,
                      (__int64)v34,
                      v41,
                      a8 | (2 * a9));
                  if ( v102 != v103 && v102 )
                    ExFreePoolWithTag(v102, 0);
                  v102 = 0LL;
                  v104 = 0;
                  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v111);
                  if ( v116 != v117 && v116 )
                    ExFreePoolWithTag(v116, 0);
                  v116 = 0LL;
                  v118 = 0;
                  if ( v88 != v89 && v88 )
                    ExFreePoolWithTag(v88, 0);
                  v88 = 0LL;
                  v90 = 0;
                  if ( v84 )
                  {
                    v84 = 0;
                    ExReleaseResourceLite(*((PERESOURCE *)v83 + 75));
                    KeLeaveCriticalRegion();
                  }
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
                  if ( v85 && v86 )
                  {
                    ExReleaseResourceLite(*(PERESOURCE *)(v85 + 136));
                    KeLeaveCriticalRegion();
                  }
                  if ( P != v107 && P )
                    ExFreePoolWithTag(P, 0);
                  P = 0LL;
                  v108 = 0;
                  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v92);
                  if ( v95 != v96 && v95 )
                    ExFreePoolWithTag(v95, 0);
                  return 0LL;
                }
                v34 = (_QWORD *)ExAllocatePool2(64LL, 8 * v29, 1265072196LL);
                v102 = v34;
              }
              else
              {
                v102 = v103;
                memset(v103, 0, 8 * v29);
                v34 = v102;
              }
              v104 = v33;
              goto LABEL_62;
            }
            if ( v111[0] )
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 2122;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"The same sync object handle is passed twice",
                2122LL,
                0LL,
                0LL,
                0LL,
                0LL);
              DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v111);
              if ( v116 != v117 && v116 )
                ExFreePoolWithTag(v116, 0);
              v116 = 0LL;
              v118 = 0;
              if ( v88 != v89 && v88 )
                ExFreePoolWithTag(v88, 0);
              v88 = 0LL;
              v90 = 0;
              if ( v84 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v83);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
              if ( v85 && v86 )
              {
                ExReleaseResourceLite(*(PERESOURCE *)(v85 + 136));
                KeLeaveCriticalRegion();
              }
              if ( P != v107 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v108 = 0;
LABEL_165:
              DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v92);
              if ( v95 != v96 && v95 )
                ExFreePoolWithTag(v95, 0);
              LODWORD(v19) = -1073741811;
              return (unsigned int)v19;
            }
            DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v111);
            if ( v116 != v117 && v116 )
              ExFreePoolWithTag(v116, 0);
          }
          v118 = 0;
          v116 = 0LL;
          if ( v88 != v89 && v88 )
            ExFreePoolWithTag(v88, 0);
          v88 = 0LL;
          v90 = 0;
          DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v83);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v85);
          if ( P != v107 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v108 = 0;
          DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v92);
          PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements(&v95);
          return 3221225495LL;
        }
        v27 = (PVOID)ExAllocatePool2(64LL, 8LL * v24, 1265072196LL);
        v116 = v27;
      }
      else
      {
        v116 = v117;
        v29 = v24;
        memset(v117, 0, 8LL * v24);
        v27 = v116;
      }
      v28 = v24;
      v118 = v24;
      v30 = v24;
      goto LABEL_52;
    }
    v48 = v26;
    v49 = v99[v26];
    v50 = (volatile signed __int32 *)(v94 + 31);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v50, 0LL) )
    {
      DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)v50, v51, v52);
      ExAcquirePushLockSharedEx(v50, 0LL);
    }
    _InterlockedIncrement(v50 + 4);
    v53 = ((unsigned int)v49 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v53 < *((_DWORD *)v94 + 74)
      && (v54 = v94[35],
          v55 = *((_DWORD *)v54 + 4 * v53 + 2),
          (((unsigned int)v49 >> 25) & 0x60) == (*((_BYTE *)v54 + 16 * v53 + 8) & 0x60))
      && (v55 & 0x2000) == 0
      && (v55 & 0x1F) != 0
      && (v56 = 2 * ((v49 >> 6) & 0xFFFFFF), (*((_BYTE *)v54 + 8 * v56 + 8) & 0x1F) == 0xB) )
    {
      v57 = *((_QWORD *)v54 + v56);
    }
    else
    {
      v57 = 0LL;
    }
    _InterlockedDecrement(v50 + 4);
    ExReleasePushLockSharedEx(v50, 0LL);
    KeLeaveCriticalRegion();
    if ( !v57 )
      break;
    if ( (*(_DWORD *)(v57 + 72) & 0x10) != 0 )
    {
      v77 = v99;
      WdLogSingleEntry1(2LL, v99[v48]);
      WdLogGlobalForLineNumber = 2031;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"0x%I64x object is opened with NoSignal flag and thus cannot be signaled.",
        v77[v48],
        0LL,
        0LL,
        0LL,
        0LL);
      if ( v88 != v89 && v88 )
        ExFreePoolWithTag(v88, 0);
      v88 = 0LL;
      v90 = 0;
      if ( v84 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v83);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v85);
      if ( P != v107 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v108 = 0;
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v92);
      if ( v95 != v96 && v95 )
        ExFreePoolWithTag(v95, 0);
      return 3221225506LL;
    }
    v58 = *(_QWORD *)(v57 + 16);
    v59 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Pool2 + 16LL) + 16LL);
    if ( v58 != v59 )
    {
      WdLogSingleEntry2(2LL, v59, v58);
      WdLogGlobalForLineNumber = 2041;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"SignalSynchronizationObjectFromGpu on device 0x%p attempts to use a sync object opened on a different device 0x%p.",
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Pool2 + 16LL) + 16LL),
        *(_QWORD *)(v57 + 16),
        0LL,
        0LL,
        0LL);
      if ( v88 != v89 && v88 )
        ExFreePoolWithTag(v88, 0);
      v88 = 0LL;
      v90 = 0;
LABEL_297:
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v83);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v85);
      if ( P != v107 && P )
        ExFreePoolWithTag(P, 0);
      LODWORD(v19) = -1073741811;
LABEL_301:
      P = 0LL;
      v108 = 0;
LABEL_302:
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v92);
LABEL_303:
      PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements(&v95);
      return (unsigned int)v19;
    }
    v60 = *(_QWORD *)(v57 + 32);
LABEL_111:
    v25 = v105;
    v105[v48] = v60;
    v26 = v91 + 1;
    v24 = v87;
  }
  LODWORD(v109) = v99[v48];
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v50);
  v61 = ((unsigned int)v109 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v61 < *((_DWORD *)v94 + 74)
    && (v62 = v94[35],
        v63 = *((_DWORD *)v62 + 4 * v61 + 2),
        (((unsigned int)v109 >> 25) & 0x60) == (*((_BYTE *)v62 + 16 * v61 + 8) & 0x60))
    && (v63 & 0x2000) == 0
    && (v63 & 0x1F) != 0 )
  {
    if ( (*((_BYTE *)v62 + 16 * (((unsigned __int64)(unsigned int)v109 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 8 )
    {
      v60 = *((_QWORD *)v62 + 2 * (((unsigned __int64)(unsigned int)v109 >> 6) & 0xFFFFFF));
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      v60 = 0LL;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v60 = 0LL;
  }
  _InterlockedDecrement(v50 + 4);
  ExReleasePushLockSharedEx(v50, 0LL);
  KeLeaveCriticalRegion();
  if ( v60 )
    goto LABEL_111;
  v64 = v99;
  LODWORD(v19) = -1073741811;
  v65 = (__int64)v94;
  WdLogSingleEntry4(2LL, v94, v99[v48], v48, -1073741811LL);
  WdLogGlobalForLineNumber = 2059;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"0x%I64x failed to signal with invalid hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
    v65,
    v64[v48],
    v48,
    -1073741811LL,
    0LL);
  if ( v88 != v89 && v88 )
    ExFreePoolWithTag(v88, 0);
  v88 = 0LL;
  v90 = 0;
  if ( v84 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v83);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
  if ( v85 && v86 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v85 + 136));
    KeLeaveCriticalRegion();
  }
LABEL_128:
  if ( P != v107 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v108 = 0;
LABEL_97:
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v92);
  if ( v95 != v96 && v95 )
    ExFreePoolWithTag(v95, 0);
  return (unsigned int)v19;
}
