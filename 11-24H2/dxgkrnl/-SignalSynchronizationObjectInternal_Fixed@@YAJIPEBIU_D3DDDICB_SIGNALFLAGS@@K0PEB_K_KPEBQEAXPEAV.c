/*
 * XREFs of ?SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1401F65B0
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1402B29CC (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14000E830 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     McTemplateK0qPR0qqPR3XR3d_EtwWriteTransfer @ 0x140011A3C (McTemplateK0qPR0qqPR3XR3d_EtwWriteTransfer.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0qPR0qPR2qxd_EtwWriteTransfer @ 0x1400133A8 (McTemplateK0qPR0qPR2qxd_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140013690 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x140022A50 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140023750 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IEE@Z @ 0x140026480 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x140026A50 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x140026BF0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x14002A350 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_CONTEXT@@$07$0ELGHHIEE@@@QEAAPEAPEAU_VIDSCH_CONTEXT@@I@Z @ 0x14002BBD0 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_CONTEXT@@$07$0ELGHHIEE@@@QEAAPEAPEAU_VID.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002BEA0 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002BEF0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$01$0ELGHHIEE@@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x14002C060 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$01$0ELGHHIEE@@@QEAAPEAPEAU.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x14002C670 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     ?VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CONTEXT@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KE@Z @ 0x14002D620 (-VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CON.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAUVIDSCH_HW_QUEUE@@$07$0ELGHHIEE@@@QEAAPEAPEAUVIDSCH_HW_QUEUE@@I@Z @ 0x14002DCC0 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAUVIDSCH_HW_QUEUE@@$07$0ELGHHIEE@@@QEAAPEAPEAUVIDS.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DD50 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002FE40 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?GetHeadIterator@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA?AVITERATOR@1@XZ @ 0x140036888 (-GetHeadIterator@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA-AVITERATOR@1@XZ.c)
 *     ?IsNativeWslProcess@DXGPROCESS@@QEBAEXZ @ 0x14003725C (-IsNativeWslProcess@DXGPROCESS@@QEBAEXZ.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x140047454 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ?VidSchEnqueueCpuEvent@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CONTEXT@@U_D3DDDICB_SIGNALFLAGS@@PEAX@Z @ 0x14004DF94 (-VidSchEnqueueCpuEvent@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CONTEXT@@U_D.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140058200 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PEAVDXGPAGINGQUEUE@@PEAE_N4@Z @ 0x140183008 (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PE.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x14022E4C8 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1402B3760 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1402FD3E0 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAAPEAPEAVDXGCONTEXT@@I@Z @ 0x140300070 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAAPEAPEAVDXGCONTEXT@@I@Z.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x14035E2D0 (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
 */

__int64 __fastcall SignalSynchronizationObjectInternal_Fixed(
        unsigned int a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4,
        struct _VIDSCH_SYNC_OBJECT **a5,
        const unsigned __int64 *Src,
        unsigned __int64 a7,
        void **a8,
        DXGPROCESS *a9,
        char a10)
{
  unsigned __int64 v10; // rdi
  char v11; // bl
  __int64 *v12; // r13
  DXGPROCESS *v13; // r12
  struct DXGCONTEXT **v15; // rax
  struct DXGCONTEXT **v16; // rsi
  __int64 v17; // r9
  struct DXGCONTEXT *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r15
  struct DXGDEVICE *v21; // r10
  int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // r9
  __int64 v25; // rcx
  _QWORD *v26; // r10
  struct VIDSCH_HW_QUEUE **v27; // r11
  unsigned int v28; // eax
  int v29; // r8d
  unsigned int v30; // edx
  int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // rbx
  struct _VIDSCH_SYNC_OBJECT **v34; // r12
  __int64 v35; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v37; // rdi
  struct _VIDSCH_SYNC_OBJECT **v38; // r12
  unsigned int v39; // r10d
  unsigned int v40; // r11d
  DXGCONTEXT **v41; // r8
  __int64 v42; // r9
  unsigned int RenderHwQueueCount; // eax
  int v44; // r11d
  struct VIDSCH_HW_QUEUE **v45; // rax
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r11
  struct VIDSCH_HW_QUEUE **v49; // rbx
  struct _VIDSCH_CONTEXT **v50; // r12
  __int64 v51; // rdx
  int v52; // r10d
  _QWORD *i; // rdx
  __int64 Pool2; // r13
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rbx
  __int64 *v60; // rdi
  void **v61; // rax
  void **v62; // rcx
  unsigned int *v63; // rcx
  unsigned int v64; // r13d
  unsigned int v65; // eax
  unsigned int v66; // r13d
  __int64 v67; // r8
  unsigned int v68; // ecx
  __int64 v69; // r13
  struct _VIDSCH_SYNC_OBJECT **v70; // rdi
  unsigned int *v71; // r13
  const wchar_t *v72; // r9
  unsigned int v73; // r13d
  unsigned int v74; // eax
  unsigned int v75; // r13d
  __int64 v76; // r8
  unsigned int v77; // ecx
  int v78; // ecx
  __int64 v79; // r13
  __int64 v80; // r8
  __int64 v81; // r13
  __int64 v82; // rdx
  DXGPROCESS *v83; // rdx
  int v84; // ecx
  unsigned int *v85; // rdi
  unsigned int *v86; // rdi
  unsigned int *v87; // rdi
  PVOID v88; // rcx
  size_t v89; // r8
  struct _VIDSCH_SYNC_OBJECT **v90; // rax
  struct DXGADAPTERSYNCOBJECT *v91; // r11
  struct _VIDSCH_SYNC_OBJECT **v92; // rcx
  void **v93; // rdx
  int DxgAdapterSyncObject; // eax
  __int64 v95; // r8
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v97; // r9
  DXGPROCESS *v98; // rcx
  int v99; // eax
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // rcx
  __int64 v103; // rbx
  unsigned int *v104; // rdi
  __int64 v105; // [rsp+28h] [rbp-440h]
  struct _VIDSCH_SYNC_OBJECT **v106; // [rsp+30h] [rbp-438h]
  __int64 v107; // [rsp+38h] [rbp-430h]
  char v108; // [rsp+70h] [rbp-3F8h]
  char v109; // [rsp+70h] [rbp-3F8h]
  char v110; // [rsp+71h] [rbp-3F7h]
  char v111; // [rsp+74h] [rbp-3F4h]
  unsigned int v112; // [rsp+74h] [rbp-3F4h]
  unsigned int v113; // [rsp+74h] [rbp-3F4h]
  unsigned int v114; // [rsp+78h] [rbp-3F0h]
  signed int v115; // [rsp+78h] [rbp-3F0h]
  unsigned int v116; // [rsp+78h] [rbp-3F0h]
  PVOID P; // [rsp+80h] [rbp-3E8h] BYREF
  _BYTE v118[16]; // [rsp+88h] [rbp-3E0h] BYREF
  unsigned int v119; // [rsp+98h] [rbp-3D0h]
  PVOID v120; // [rsp+A0h] [rbp-3C8h] BYREF
  _BYTE v121[16]; // [rsp+A8h] [rbp-3C0h] BYREF
  int v122; // [rsp+B8h] [rbp-3B0h]
  unsigned int v123[2]; // [rsp+C0h] [rbp-3A8h] BYREF
  unsigned int v124; // [rsp+C8h] [rbp-3A0h]
  DXGCONTEXT **v125; // [rsp+D0h] [rbp-398h]
  _BYTE v126[16]; // [rsp+D8h] [rbp-390h] BYREF
  __int64 v127; // [rsp+E8h] [rbp-380h] BYREF
  int v128; // [rsp+F0h] [rbp-378h]
  _QWORD *v129; // [rsp+F8h] [rbp-370h]
  _BYTE v130[16]; // [rsp+100h] [rbp-368h] BYREF
  unsigned int *v131; // [rsp+110h] [rbp-358h]
  void **v132; // [rsp+118h] [rbp-350h]
  struct _VIDSCH_SYNC_OBJECT **v133; // [rsp+120h] [rbp-348h]
  unsigned int v134; // [rsp+128h] [rbp-340h]
  PVOID v135; // [rsp+130h] [rbp-338h] BYREF
  _BYTE v136[64]; // [rsp+138h] [rbp-330h] BYREF
  int v137; // [rsp+178h] [rbp-2F0h]
  PVOID v138; // [rsp+180h] [rbp-2E8h] BYREF
  _BYTE v139[64]; // [rsp+188h] [rbp-2E0h] BYREF
  int v140; // [rsp+1C8h] [rbp-2A0h]
  DXGPROCESS *v141; // [rsp+1D0h] [rbp-298h]
  struct VIDSCH_HW_QUEUE **v142; // [rsp+1D8h] [rbp-290h]
  struct _VIDSCH_CONTEXT **Elements; // [rsp+1E0h] [rbp-288h]
  PVOID v144; // [rsp+1E8h] [rbp-280h] BYREF
  _BYTE v145[16]; // [rsp+1F0h] [rbp-278h] BYREF
  int v146; // [rsp+200h] [rbp-268h]
  DXGSYNCOBJECT *v147; // [rsp+208h] [rbp-260h]
  _QWORD v148[6]; // [rsp+210h] [rbp-258h] BYREF
  char v149; // [rsp+240h] [rbp-228h]
  struct DXGADAPTERSYNCOBJECT *v150; // [rsp+248h] [rbp-220h] BYREF
  __int64 *v151; // [rsp+250h] [rbp-218h]
  __int128 v152; // [rsp+258h] [rbp-210h] BYREF
  _QWORD v153[4]; // [rsp+268h] [rbp-200h] BYREF
  char v154; // [rsp+288h] [rbp-1E0h]
  _BYTE v155[24]; // [rsp+290h] [rbp-1D8h] BYREF
  PVOID v156; // [rsp+2A8h] [rbp-1C0h]
  size_t v157; // [rsp+2B0h] [rbp-1B8h]
  PVOID v158; // [rsp+2B8h] [rbp-1B0h] BYREF
  _BYTE v159[32]; // [rsp+2C0h] [rbp-1A8h] BYREF
  unsigned int v160; // [rsp+2E0h] [rbp-188h]
  _BYTE v161[160]; // [rsp+2F0h] [rbp-178h] BYREF
  _BYTE v162[144]; // [rsp+390h] [rbp-D8h] BYREF

  v124 = a4;
  v10 = a3;
  v131 = a2;
  v123[0] = a1;
  v11 = a10;
  v111 = a10;
  v133 = a5;
  v12 = (__int64 *)Src;
  v151 = (__int64 *)Src;
  v132 = a8;
  v13 = a9;
  v141 = a9;
  v150 = a9;
  if ( !a4 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 535;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"No contexts were provided to signal.",
      535LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  P = 0LL;
  v119 = 0;
  v15 = (struct DXGCONTEXT **)PagedPoolZeroedArray<DXGCONTEXT *,2>::AllocateElements(&P, a4);
  v16 = v15;
  v125 = v15;
  if ( !v15 )
    goto LABEL_334;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v126,
    *(_DWORD *)a5,
    (struct _KTHREAD **)v13,
    v15,
    (v11 & 2) != 0,
    1);
  v18 = *v16;
  if ( !*v16 )
  {
    WdLogSingleEntry3(2LL, v13, *(unsigned int *)a5, -1073741811LL);
    WdLogGlobalForLineNumber = 553;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%I64x failed with invalid hContext 0x%I64x returning 0x%I64x",
      (__int64)v13,
      *(unsigned int *)a5,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_287;
  }
  if ( (v10 & 2) != 0 )
  {
    if ( v123[0] )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 565;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"ObjectCount must be zero when Flags.EnqueueCpuEvent is set.",
        565LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_287;
    }
    if ( !*v132 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 570;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"CpuEventHandle should not be NULL when Flags.EnqueueCpuEvent is set.",
        570LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_287;
    }
  }
  v19 = *((_QWORD *)v18 + 2);
  if ( *((_BYTE *)v18 + 434) )
  {
    v20 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v162, (struct DXGADAPTER *const)v20, 0LL);
    if ( (v11 & 2) == 0 )
    {
      v22 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v162, 0LL);
      v21 = 0LL;
      if ( v22 < 0 )
      {
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v162);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v126);
        if ( P != v118 && P )
          ExFreePoolWithTag(P, 0);
        return 3221226166LL;
      }
    }
    LODWORD(v23) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(v20 + 4664),
                     v13,
                     v123[0],
                     v131,
                     (struct _D3DDDICB_SIGNALFLAGS)v10,
                     v124,
                     (const unsigned int *)a5,
                     Src,
                     a7,
                     v132,
                     v11 & 1,
                     (bool)v21,
                     v21);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v162);
    goto LABEL_20;
  }
  v127 = *((_QWORD *)v18 + 2);
  v128 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v161, v19, 0, v17, (v11 & 2) != 0);
  v108 = 0;
  if ( (v11 & 2) == 0 )
  {
    if ( (v11 & 1) != 0 || *(_DWORD *)(*((_QWORD *)*v125 + 2) + 464LL) == 2 || (v11 & 4) == 0 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v127);
      v108 = 1;
    }
    else if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v127) )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v127);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v126);
      if ( P != v118 && P )
        ExFreePoolWithTag(P, 0);
      return 2147483665LL;
    }
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v155, v13);
  v24 = 1LL;
  v114 = 1;
  if ( v124 > 1 )
  {
    v25 = (__int64)v125;
    v26 = v125 + 1;
    v129 = v125 + 1;
    v27 = (struct _VIDSCH_SYNC_OBJECT **)((char *)a5 + 4);
    v142 = (struct _VIDSCH_SYNC_OBJECT **)((char *)a5 + 4);
    while ( 1 )
    {
      v28 = (*(_DWORD *)v27 >> 6) & 0xFFFFFF;
      v29 = *(_DWORD *)v27 >> 30;
      if ( v28 >= *((_DWORD *)v13 + 74) )
        goto LABEL_43;
      v147 = (DXGSYNCOBJECT *)*((_QWORD *)v13 + 35);
      v30 = *((_DWORD *)v147 + 4 * v28 + 2);
      if ( v29 != ((v30 >> 5) & 3) )
        goto LABEL_42;
      if ( (v30 & 0x2000) != 0 )
        goto LABEL_42;
      v31 = v30 & 0x1F;
      if ( !v31 )
        goto LABEL_42;
      if ( v31 != 7 )
        break;
      v32 = *((_QWORD *)v147 + 2 * v28);
      v26 = v129;
LABEL_44:
      *v26 = v32;
      if ( !v32 || *(_QWORD *)(v32 + 16) != *(_QWORD *)(*(_QWORD *)v25 + 16LL) )
      {
        v33 = (unsigned int)v24;
        v34 = v133;
        WdLogSingleEntry4(2LL, *(unsigned int *)v133, *((unsigned int *)v133 + v24), v24, -1073741811LL);
        WdLogGlobalForLineNumber = 651;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"hContext 0x%I64x failed to signal with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
          *(unsigned int *)v34,
          *((unsigned int *)v34 + v33),
          v33,
          -1073741811LL,
          0LL);
        DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v155);
        goto LABEL_286;
      }
      v24 = (unsigned int)(v24 + 1);
      v114 = v24;
      v27 = (struct VIDSCH_HW_QUEUE **)((char *)v27 + 4);
      v142 = v27;
      v129 = ++v26;
      v25 = (__int64)v125;
      if ( (unsigned int)v24 >= v124 )
        goto LABEL_50;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    v25 = (__int64)v125;
    v24 = v114;
    v27 = v142;
LABEL_42:
    v26 = v129;
LABEL_43:
    v32 = 0LL;
    goto LABEL_44;
  }
LABEL_50:
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v155);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v148,
    P,
    v119,
    v35,
    v108);
  if ( v149 )
  {
    if ( v148[0] )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 673;
      goto LABEL_285;
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 668;
    goto LABEL_333;
  }
  if ( (v11 & 2) == 0 )
  {
    v115 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v161, 0LL);
    if ( v115 < 0 )
    {
LABEL_56:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v148);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v127);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v126);
      if ( P != v118 && P )
        ExFreePoolWithTag(P, 0);
      return (unsigned int)v115;
    }
  }
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v130, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v130);
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)*v125 + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 694;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pBroadcastDxgContext[0]->GetRenderCore()->IsCoreResourceSharedOwner()",
      694LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (v11 & 1) != 0
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v125 + 2) + 16LL) + 16LL)
                                                     + 216LL)
                                         + 64LL)
                             + 40LL)
                 + 28LL) > 0x1052u )
  {
    if ( (v10 & 0x7FFFFFF8) != 0 )
    {
      v37 = (v10 >> 3) & 0xFFFFFFF;
      v38 = v133;
      WdLogSingleEntry3(2LL, *(unsigned int *)v133, (unsigned int)v37, -1073741811LL);
      WdLogGlobalForLineNumber = 706;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"hContext 0x%I64x SignalSyncObject.Flags.Reserved is not Zero, but %I64d, returning 0x%I64x",
        *(unsigned int *)v38,
        (unsigned int)v37,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_284;
    }
    if ( (v10 & 0x80000000) != 0LL )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 712;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"SignalSynchronizationObject is called with the DXGK_SIGNAL_FLAG_INTERNAL0 flag bits.",
        712LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_284;
    }
  }
  v39 = 0;
  v116 = 0;
  v40 = 0;
  v134 = 0;
  if ( v124 )
  {
    v41 = v125;
    v42 = v124;
    do
    {
      if ( (*((_DWORD *)*v41 + 98) & 0x10) != 0 )
      {
        RenderHwQueueCount = DXGCONTEXT::GetRenderHwQueueCount(*v41);
        v40 = RenderHwQueueCount + v44;
      }
      else
      {
        ++v39;
      }
      ++v41;
      --v42;
    }
    while ( v42 );
    v134 = v40;
    v116 = v39;
  }
  v138 = 0LL;
  v140 = 0;
  Elements = (struct _VIDSCH_CONTEXT **)NonPagedPoolZeroedArray<_VIDSCH_CONTEXT *,8,1265072196>::AllocateElements(
                                          (__int64)&v138,
                                          v39);
  v135 = 0LL;
  v137 = 0;
  v45 = (struct VIDSCH_HW_QUEUE **)NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::AllocateElements(
                                     (__int64)&v135,
                                     v134);
  v142 = v45;
  if ( !Elements || !v45 )
  {
    if ( v135 != v136 && v135 )
      ExFreePoolWithTag(v135, 0);
    v135 = 0LL;
    v137 = 0;
    if ( v138 != v139 && v138 )
      ExFreePoolWithTag(v138, 0);
    v138 = 0LL;
    v140 = 0;
    goto LABEL_332;
  }
  v47 = 0LL;
  if ( v124 )
  {
    v46 = (__int64)v125;
    v48 = v124;
    v49 = v142;
    v50 = Elements;
    do
    {
      v51 = *(_QWORD *)v46;
      if ( (*(_DWORD *)(*(_QWORD *)v46 + 392LL) & 0x10) != 0 )
      {
        DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator((_QWORD *)(v51 + 400), &v152);
        for ( i = (_QWORD *)*((_QWORD *)&v152 + 1); i != (_QWORD *)v152 && i; i = (_QWORD *)*i )
          v49[v52++] = (struct VIDSCH_HW_QUEUE *)i[5];
        v152 = 0LL;
        v50 = Elements;
      }
      else
      {
        v50[(unsigned int)v47] = *(struct _VIDSCH_CONTEXT **)(v51 + 256);
        v47 = (unsigned int)(v47 + 1);
      }
      v46 += 8LL;
      --v48;
    }
    while ( v48 );
    v11 = v111;
    v13 = v141;
  }
  if ( (v10 & 2) != 0 )
  {
    v131 = (unsigned int *)*v132;
    Pool2 = 0LL;
    if ( DXGPROCESS::IsNativeWslProcess(v13) )
    {
      Pool2 = ExAllocatePool2(64LL, 40LL, 1265072196LL);
      if ( !Pool2 )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 781;
        DxgkLogInternalTriageEvent(
          0LL,
          262145LL,
          0xFFFFFFFFLL,
          L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
          781LL,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_92:
        if ( v135 != v136 && v135 )
          ExFreePoolWithTag(v135, 0);
        v135 = 0LL;
        v137 = 0;
        if ( v138 != v139 && v138 )
          ExFreePoolWithTag(v138, 0);
        v138 = 0LL;
        v140 = 0;
LABEL_332:
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v130);
LABEL_333:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v148);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v127);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v126);
LABEL_334:
        if ( P != v118 && P )
          ExFreePoolWithTag(P, 0);
        return 3221225495LL;
      }
      *(_QWORD *)(Pool2 + 8) = v131;
      *(_WORD *)(Pool2 + 16) = 1;
      *(_BYTE *)(Pool2 + 19) = 1;
      v131 = (unsigned int *)Pool2;
      DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
    }
    v55 = VIDSCH_EXPORT::VidSchEnqueueCpuEvent(
            *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)*v125 + 2) + 16LL) + 736LL),
            v134,
            v142,
            v116,
            Elements,
            (struct _D3DDDICB_SIGNALFLAGS)v10,
            v131);
    v115 = v55;
    if ( v55 < 0 )
    {
      v59 = v55;
      v60 = (__int64 *)v132;
      WdLogSingleEntry3(2LL, v13, *v132, v55);
      WdLogGlobalForLineNumber = 804;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"0x%I64x failed to enqueue CPU event 0x%I64x returning 0x%I64x",
        (__int64)v13,
        *v60,
        v59,
        0LL,
        0LL);
      if ( Pool2 )
        DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
      if ( v135 != v136 && v135 )
        ExFreePoolWithTag(v135, 0);
      v135 = 0LL;
      v137 = 0;
      if ( v138 != v139 && v138 )
        ExFreePoolWithTag(v138, 0);
      v138 = 0LL;
      v140 = 0;
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v130);
      goto LABEL_56;
    }
    if ( bTracingEnabled )
    {
      *(_QWORD *)v123 = *v132;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qPR0qPR2qxd_EtwWriteTransfer(v57, v56, v58, v124, (__int64)v125, 1, (__int64)v123, v10, 0, v11);
    }
LABEL_113:
    if ( v135 != v136 && v135 )
      ExFreePoolWithTag(v135, 0);
    v137 = 0;
    v135 = 0LL;
    if ( v138 != v139 && v138 )
      ExFreePoolWithTag(v138, 0);
    v138 = 0LL;
    v140 = 0;
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v130);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v148);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v127);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v126);
    if ( P != v118 && P )
      ExFreePoolWithTag(P, 0);
    return 0LL;
  }
  if ( !v123[0] )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 828;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Can't signal zero sync objects.",
      828LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_277:
    if ( v135 != v136 && v135 )
      ExFreePoolWithTag(v135, 0);
    v135 = 0LL;
    v137 = 0;
    if ( v138 != v139 && v138 )
      ExFreePoolWithTag(v138, 0);
    v138 = 0LL;
    v140 = 0;
    goto LABEL_284;
  }
  v120 = 0LL;
  v122 = 0;
  v61 = (void **)PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::AllocateElements(&v120, v123[0], v46, v47);
  v62 = v61;
  v132 = v61;
  if ( !v61 )
  {
    if ( v120 != v121 && v120 )
      ExFreePoolWithTag(v120, 0);
    v120 = 0LL;
    v122 = 0;
    if ( v135 != v136 && v135 )
      ExFreePoolWithTag(v135, 0);
    v135 = 0LL;
    v137 = 0;
    if ( v138 != v139 && v138 )
      ExFreePoolWithTag(v138, 0);
    v138 = 0LL;
    v140 = 0;
    goto LABEL_332;
  }
  v109 = 0;
  v110 = 0;
  v112 = 0;
  if ( !v123[0] )
  {
LABEL_171:
    v158 = 0LL;
    v160 = 0;
    v84 = *((_DWORD *)*v62 + 101);
    if ( (unsigned int)(v84 - 5) <= 2 )
    {
      if ( (v11 & 1) != 0 )
      {
        NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements((__int64)&v158, v123[0]);
        v88 = v158;
        if ( !v158 )
        {
          v158 = 0LL;
          v160 = 0;
          if ( v120 != v121 && v120 )
            ExFreePoolWithTag(v120, 0);
          v120 = 0LL;
          v122 = 0;
          if ( v135 != v136 && v135 )
            ExFreePoolWithTag(v135, 0);
          v135 = 0LL;
          v137 = 0;
          if ( v138 != v139 && v138 )
            ExFreePoolWithTag(v138, 0);
          v138 = 0LL;
          v140 = 0;
          DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v130);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v148);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v127);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v126);
          if ( P != v118 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v119 = 0;
          return 3221225495LL;
        }
        v89 = v160;
        v157 = v89 * 8;
        v156 = v158;
        if ( &v12[v89] < v12 || (unsigned __int64)&v12[v89] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v88, v12, v89 * 8);
        v12 = (__int64 *)v158;
        v151 = (__int64 *)v158;
      }
      else if ( !v12 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 987;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"MonitoredFenceValueArray is NULL when signaling monitored fence objects",
          987LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_269;
      }
    }
    else
    {
      v12 = (__int64 *)&a7;
      if ( v84 != 3 )
        v12 = 0LL;
      v151 = v12;
    }
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v153,
      v132,
      v123[0]);
    if ( !v154 )
    {
      v144 = 0LL;
      v146 = 0;
      v90 = (struct _VIDSCH_SYNC_OBJECT **)NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,1265072196>::AllocateElements(
                                             (__int64)&v144,
                                             v123[0]);
      v133 = v90;
      v91 = 0LL;
      if ( v90 )
      {
        v113 = 0;
        if ( v123[0] )
        {
          v92 = v90;
          v141 = (DXGPROCESS *)v90;
          v93 = (void **)((char *)v132 - (char *)v90);
          v132 = (void **)((char *)v132 - (__int64)v90);
          while ( 1 )
          {
            v147 = *(struct _VIDSCH_SYNC_OBJECT **)((char *)v92 + (_QWORD)v93);
            v150 = v91;
            DxgAdapterSyncObject = DXGSYNCOBJECT::GetDxgAdapterSyncObject(
                                     v147,
                                     *(struct ADAPTER_RENDER **)(*((_QWORD *)*v125 + 2) + 16LL),
                                     &v150,
                                     0LL,
                                     (unsigned __int8 *)v91,
                                     (bool)v91,
                                     (bool)v91);
            v95 = *((_QWORD *)*v125 + 2);
            if ( DxgAdapterSyncObject < 0 )
              break;
            VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(v147, *(struct ADAPTER_RENDER **)(v95 + 16));
            v98 = v141;
            *(_QWORD *)v141 = VidSchSyncObject;
            if ( !VidSchSyncObject )
            {
              WdLogSingleEntry1(2LL, v97);
              WdLogGlobalForLineNumber = 1064;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"0x%p sync object adapter state is destroyed, thus it cannot be signaled.",
                (__int64)v147,
                0LL,
                0LL,
                0LL,
                0LL);
              if ( v144 != v145 && v144 )
                ExFreePoolWithTag(v144, 0);
              v144 = 0LL;
              v146 = 0;
              goto LABEL_268;
            }
            ++v113;
            v92 = (struct _VIDSCH_SYNC_OBJECT **)((char *)v98 + 8);
            v141 = (DXGPROCESS *)v92;
            v93 = v132;
            if ( v113 >= v123[0] )
              goto LABEL_244;
          }
          v23 = DxgAdapterSyncObject;
          WdLogSingleEntry3(2LL, v13, *(_QWORD *)(*(_QWORD *)(v95 + 16) + 16LL), DxgAdapterSyncObject);
          WdLogGlobalForLineNumber = 1053;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"0x%I64x failed, failed to create a sync object on logical adapter 0x%I64x returning 0x%I64x",
            (__int64)v13,
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v125 + 2) + 16LL) + 16LL),
            v23,
            0LL,
            0LL);
          if ( v144 != v145 && v144 )
            ExFreePoolWithTag(v144, 0);
          v144 = 0LL;
          v146 = 0;
          DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v153);
          if ( v158 != v159 && v158 )
            ExFreePoolWithTag(v158, 0);
          v158 = 0LL;
          v160 = 0;
          if ( v120 != v121 && v120 )
            ExFreePoolWithTag(v120, 0);
          v120 = 0LL;
          v122 = 0;
          if ( v135 != v136 && v135 )
            ExFreePoolWithTag(v135, 0);
          v135 = 0LL;
          v137 = 0;
          if ( v138 != v139 && v138 )
            ExFreePoolWithTag(v138, 0);
          v138 = 0LL;
          v140 = 0;
          DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v130);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v148);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v127);
LABEL_20:
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v126);
          if ( P != v118 && P )
            ExFreePoolWithTag(P, 0);
          return (unsigned int)v23;
        }
LABEL_244:
        v99 = VIDSCH_EXPORT::VidSchSignalSyncObjectsFromGpu(
                *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)*v125 + 2) + 16LL) + 736LL),
                v134,
                v142,
                v116,
                Elements,
                v123[0],
                v133,
                (struct _D3DDDICB_SIGNALFLAGS)v10,
                (const unsigned __int64 *)v12,
                (v11 & 8) != 0);
        LODWORD(v129) = v99;
        v102 = 0LL;
        if ( v99 < 0 )
        {
          v103 = v99;
          v104 = v131;
          WdLogSingleEntry4(2LL, v13, *v131, 0LL, v99);
          WdLogGlobalForLineNumber = 1087;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"0x%I64x failed to signal SyncObject 0x%I64x at index %I64d returning 0x%I64x",
            (__int64)v13,
            *v104,
            0LL,
            v103,
            0LL);
          if ( v144 != v145 && v144 )
            ExFreePoolWithTag(v144, 0);
          v144 = 0LL;
          v146 = 0;
          DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v153);
          if ( v158 != v159 && v158 )
            ExFreePoolWithTag(v158, 0);
          v158 = 0LL;
          v160 = 0;
          if ( v120 != v121 && v120 )
            ExFreePoolWithTag(v120, 0);
          v120 = 0LL;
          v122 = 0;
          if ( v135 != v136 && v135 )
            ExFreePoolWithTag(v135, 0);
          v135 = 0LL;
          v137 = 0;
          if ( v138 != v139 && v138 )
            ExFreePoolWithTag(v138, 0);
          v138 = 0LL;
          v140 = 0;
          DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v130);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v148);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v127);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v126);
          if ( P != v118 && P )
            ExFreePoolWithTag(P, 0);
          return (unsigned int)v129;
        }
        if ( v109 )
        {
          if ( bTracingEnabled )
          {
            if ( v12 )
              v102 = *v12;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0qPR0qPR2qxd_EtwWriteTransfer(
                v102,
                v100,
                v101,
                v124,
                (__int64)v125,
                v123[0],
                (__int64)v133,
                v10,
                v102,
                v11);
          }
        }
        else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          McTemplateK0qPR0qqPR3XR3d_EtwWriteTransfer(
            0LL,
            v100,
            v101,
            v124,
            (__int64)v125,
            v10,
            v123[0],
            (__int64)v133,
            (__int64)v12,
            v11);
        }
        if ( v144 != v145 && v144 )
          ExFreePoolWithTag(v144, 0);
        v144 = 0LL;
        v146 = 0;
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v153);
        if ( v158 != v159 && v158 )
          ExFreePoolWithTag(v158, 0);
        v158 = 0LL;
        v160 = 0;
        if ( v120 != v121 && v120 )
          ExFreePoolWithTag(v120, 0);
        v120 = 0LL;
        v122 = 0;
        goto LABEL_113;
      }
      if ( v144 != v145 && v144 )
        ExFreePoolWithTag(v144, 0);
      v144 = 0LL;
      v146 = 0;
LABEL_177:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v153);
      if ( v158 != v159 && v158 )
        ExFreePoolWithTag(v158, 0);
      v160 = 0;
      v158 = 0LL;
      if ( v120 != v121 && v120 )
        ExFreePoolWithTag(v120, 0);
      v120 = 0LL;
      v122 = 0;
      goto LABEL_92;
    }
    if ( !v153[0] )
      goto LABEL_177;
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1020;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The same sync object handle is passed twice",
      1020LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_268:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v153);
LABEL_269:
    if ( v158 != v159 && v158 )
      ExFreePoolWithTag(v158, 0);
    v158 = 0LL;
    v160 = 0;
LABEL_273:
    if ( v120 != v121 && v120 )
      ExFreePoolWithTag(v120, 0);
    v122 = 0;
    v120 = 0LL;
    goto LABEL_277;
  }
  v141 = (DXGPROCESS *)v61;
  v63 = v131;
  v133 = (struct _VIDSCH_SYNC_OBJECT **)v131;
  while ( 1 )
  {
    v64 = *v63;
    DXGPUSHLOCK::AcquireShared((DXGPROCESS *)((char *)v13 + 248));
    v65 = (v64 >> 6) & 0xFFFFFF;
    v66 = v64 >> 30;
    if ( v65 < *((_DWORD *)v13 + 74)
      && (v67 = *((_QWORD *)v13 + 35), v68 = *(_DWORD *)(v67 + 16LL * v65 + 8), v66 == ((v68 >> 5) & 3))
      && (v68 & 0x2000) == 0
      && (v68 & 0x1F) == 8 )
    {
      v69 = *(_QWORD *)(v67 + 16LL * v65);
    }
    else
    {
      v69 = 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)v13 + 66);
    ExReleasePushLockSharedEx((char *)v13 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( v69 )
    {
      if ( *(_DWORD *)(v69 + 404) == 5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 862;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pSyncObject->GetSyncObjectType() != D3DDDI_MONITORED_FENCE",
          862LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *(_DWORD *)(v69 + 404) == 6 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 863;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pSyncObject->GetSyncObjectType() != D3DDDI_PERIODIC_MONITORED_FENCE",
          863LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v109 = 1;
      if ( v110 )
      {
        WdLogSingleEntry1(2LL, v13);
        WdLogGlobalForLineNumber = 869;
        goto LABEL_186;
      }
      if ( (*(_DWORD *)(v69 + 212) & 0x100) != 0 )
      {
        v85 = v131;
        WdLogSingleEntry1(2LL, v131[v112]);
        WdLogGlobalForLineNumber = 876;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Sync object 0x%I64x is created with SignalByKmd and cannot be signaled",
          v85[v112],
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_273;
      }
      if ( *(_DWORD *)(v69 + 404) == 3 && v123[0] != 1 )
      {
        v70 = (struct _VIDSCH_SYNC_OBJECT **)v123[0];
        v71 = v131;
        WdLogSingleEntry4(2LL, v13, v131[v112], v123[0], -1073741811LL);
        WdLogGlobalForLineNumber = 890;
        v107 = -1073741811LL;
        v106 = v70;
        v105 = v71[v112];
        v72 = L"0x%I64x failed on signaling fence object 0x%I64x at non-1 object count %I64d returning 0x%I64x";
        goto LABEL_154;
      }
      goto LABEL_169;
    }
    v73 = *(_DWORD *)v133;
    DXGPUSHLOCK::AcquireShared((DXGPROCESS *)((char *)v13 + 248));
    v74 = (v73 >> 6) & 0xFFFFFF;
    v75 = v73 >> 30;
    if ( v74 < *((_DWORD *)v13 + 74)
      && (v76 = *((_QWORD *)v13 + 35), v77 = *(_DWORD *)(v76 + 16LL * v74 + 8), v75 == ((v77 >> 5) & 3))
      && (v77 & 0x2000) == 0
      && (v78 = v77 & 0x1F) != 0 )
    {
      if ( v78 == 11 )
      {
        v79 = *(_QWORD *)(v76 + 16LL * v74);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        v79 = 0LL;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      v79 = 0LL;
    }
    v129 = (_QWORD *)v79;
    _InterlockedDecrement((volatile signed __int32 *)v13 + 66);
    ExReleasePushLockSharedEx((char *)v13 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( !v79 )
      break;
    v110 = 1;
    if ( v109 )
    {
      WdLogSingleEntry1(2LL, v13);
      WdLogGlobalForLineNumber = 918;
LABEL_186:
      v107 = 0LL;
      v106 = 0LL;
      v105 = 0LL;
      v72 = L"0x%I64x mixes monitored fence and non-monitored fence sync objects in one signal call.";
LABEL_154:
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v72, (__int64)v13, v105, (__int64)v106, v107, 0LL);
      goto LABEL_273;
    }
    if ( (*(_DWORD *)(v79 + 72) & 0x10) != 0 )
    {
      v86 = v131;
      WdLogSingleEntry1(2LL, v131[v112]);
      WdLogGlobalForLineNumber = 925;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"0x%I64x object is opened with NoSignal flag and thus cannot be signaled.",
        v86[v112],
        0LL,
        0LL,
        0LL,
        0LL);
      if ( v120 != v121 && v120 )
        ExFreePoolWithTag(v120, 0);
      v120 = 0LL;
      v122 = 0;
      if ( v135 != v136 && v135 )
        ExFreePoolWithTag(v135, 0);
      v135 = 0LL;
      v137 = 0;
      if ( v138 != v139 && v138 )
        ExFreePoolWithTag(v138, 0);
      v138 = 0LL;
      v140 = 0;
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v130);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v148);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v127);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v126);
      if ( P != v118 && P )
        ExFreePoolWithTag(P, 0);
      return 3221225506LL;
    }
    v80 = *(_QWORD *)(v79 + 16);
    v81 = (__int64)v125;
    v82 = *((_QWORD *)*v125 + 2);
    if ( v80 != v82 )
    {
      WdLogSingleEntry2(2LL, v82, v80);
      WdLogGlobalForLineNumber = 935;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"SignalSynchronizationObjectFromGpu on device 0x%p attempts to use a sync object opened on a different device 0x%p.",
        *(_QWORD *)(*(_QWORD *)v81 + 16LL),
        v129[2],
        0LL,
        0LL,
        0LL);
      goto LABEL_273;
    }
    v69 = v129[4];
    if ( (unsigned int)(*(_DWORD *)(v69 + 404) - 5) > 2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 944;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pSyncObject->GetSyncObjectType() == D3DDDI_MONITORED_FENCE || pSyncObject->GetSyncObjectType() == D3DDDI_PERIODI"
         "C_MONITORED_FENCE || pSyncObject->GetSyncObjectType() == D3DDDI_NATIVE_FENCE",
        944LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
LABEL_169:
    v83 = v141;
    *(_QWORD *)v141 = v69;
    ++v112;
    v63 = (unsigned int *)v133 + 1;
    v133 = (struct _VIDSCH_SYNC_OBJECT **)((char *)v133 + 4);
    v141 = (DXGPROCESS *)((char *)v83 + 8);
    if ( v112 >= v123[0] )
    {
      v12 = v151;
      v62 = v132;
      goto LABEL_171;
    }
  }
  v87 = v131;
  WdLogSingleEntry4(2LL, v13, v131[v112], v112, -1073741811LL);
  WdLogGlobalForLineNumber = 909;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"0x%I64x failed to signal with invalid hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
    (__int64)v13,
    v87[v112],
    v112,
    -1073741811LL,
    0LL);
  if ( v120 != v121 && v120 )
    ExFreePoolWithTag(v120, 0);
  v120 = 0LL;
  v122 = 0;
  if ( v135 != v136 && v135 )
    ExFreePoolWithTag(v135, 0);
  v135 = 0LL;
  v137 = 0;
  if ( v138 != v139 && v138 )
    ExFreePoolWithTag(v138, 0);
  v138 = 0LL;
  v140 = 0;
LABEL_284:
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v130);
LABEL_285:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v148);
LABEL_286:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v127);
LABEL_287:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v126);
  if ( P != v118 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return 3221225485LL;
}
