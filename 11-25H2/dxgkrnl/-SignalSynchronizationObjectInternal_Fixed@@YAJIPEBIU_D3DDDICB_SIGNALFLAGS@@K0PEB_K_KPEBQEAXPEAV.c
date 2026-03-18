/*
 * XREFs of ?SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1401EFCAC
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1402AA44C (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1400138E0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     McTemplateK0qPR0qqPR3XR3d_EtwWriteTransfer @ 0x140014C3C (McTemplateK0qPR0qqPR3XR3d_EtwWriteTransfer.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0qPR0qPR2qxd_EtwWriteTransfer @ 0x1400165A8 (McTemplateK0qPR0qPR2qxd_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14001DE10 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x14001F680 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140022F40 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IEE@Z @ 0x140025CD0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1400262A0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x140026360 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x140029BB0 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_CONTEXT@@$07$0ELGHHIEE@@@QEAAPEAPEAU_VIDSCH_CONTEXT@@I@Z @ 0x14002B680 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_CONTEXT@@$07$0ELGHHIEE@@@QEAAPEAPEAU_VID.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002B770 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$01$0ELGHHIEE@@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x14002B8E0 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$01$0ELGHHIEE@@@QEAAPEAPEAU.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x14002BF40 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CONTEXT@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KE@Z @ 0x14002CF20 (-VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CON.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAUVIDSCH_HW_QUEUE@@$07$0ELGHHIEE@@@QEAAPEAPEAUVIDSCH_HW_QUEUE@@I@Z @ 0x14002D550 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAUVIDSCH_HW_QUEUE@@$07$0ELGHHIEE@@@QEAAPEAPEAUVIDS.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D5E0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002F800 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?GetHeadIterator@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA?AVITERATOR@1@XZ @ 0x140036938 (-GetHeadIterator@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA-AVITERATOR@1@XZ.c)
 *     ?IsNativeWslProcess@DXGPROCESS@@QEBAEXZ @ 0x1400379BC (-IsNativeWslProcess@DXGPROCESS@@QEBAEXZ.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x140047AF4 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ?VidSchEnqueueCpuEvent@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CONTEXT@@U_D3DDDICB_SIGNALFLAGS@@PEAX@Z @ 0x14004E694 (-VidSchEnqueueCpuEvent@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CONTEXT@@U_D.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140058780 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PEAVDXGPAGINGQUEUE@@PEAE_N4@Z @ 0x14018061C (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PE.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x140227BDC (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1402FCB50 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x14030C3C0 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAAPEAPEAVDXGCONTEXT@@I@Z @ 0x140316680 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAAPEAPEAVDXGCONTEXT@@I@Z.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x14037A70C (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
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
  __int64 v37; // r9
  __int64 v38; // rdi
  struct _VIDSCH_SYNC_OBJECT **v39; // r12
  unsigned int v40; // r10d
  unsigned int v41; // r11d
  DXGCONTEXT **v42; // r8
  unsigned int RenderHwQueueCount; // eax
  int v44; // r11d
  __int64 v45; // r8
  __int64 v46; // r9
  struct VIDSCH_HW_QUEUE **v47; // rax
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r11
  struct VIDSCH_HW_QUEUE **v51; // rbx
  struct _VIDSCH_CONTEXT **v52; // r12
  __int64 v53; // rdx
  int v54; // r10d
  _QWORD *i; // rdx
  __int64 Pool2; // r13
  __int64 v57; // r9
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rbx
  __int64 *v63; // rdi
  void **v64; // rax
  __int64 v65; // r8
  void **v66; // rcx
  __int64 v67; // r9
  unsigned int *v68; // rcx
  unsigned int v69; // r13d
  unsigned int v70; // eax
  unsigned int v71; // r13d
  __int64 v72; // r8
  unsigned int v73; // ecx
  __int64 v74; // r13
  struct _VIDSCH_SYNC_OBJECT **v75; // rdi
  unsigned int *v76; // r13
  const wchar_t *v77; // r9
  unsigned int v78; // r13d
  unsigned int v79; // eax
  unsigned int v80; // r13d
  __int64 v81; // r8
  unsigned int v82; // ecx
  int v83; // ecx
  __int64 v84; // r13
  __int64 v85; // r13
  __int64 v86; // rdx
  DXGPROCESS *v87; // rdx
  int v88; // ecx
  __int64 v89; // r8
  __int64 v90; // r9
  unsigned int *v91; // rdi
  unsigned int *v92; // rdi
  unsigned int *v93; // rdi
  PVOID v94; // rcx
  size_t v95; // r8
  struct _VIDSCH_SYNC_OBJECT **v96; // rax
  struct DXGADAPTERSYNCOBJECT *v97; // r11
  struct _VIDSCH_SYNC_OBJECT **v98; // rcx
  void **v99; // rdx
  int DxgAdapterSyncObject; // eax
  __int64 v101; // r8
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v103; // r9
  DXGPROCESS *v104; // rcx
  int v105; // eax
  __int64 v106; // rdx
  __int64 v107; // r8
  __int64 v108; // rcx
  __int64 v109; // rbx
  unsigned int *v110; // rdi
  __int64 v111; // [rsp+28h] [rbp-440h]
  struct _VIDSCH_SYNC_OBJECT **v112; // [rsp+30h] [rbp-438h]
  __int64 v113; // [rsp+38h] [rbp-430h]
  char v114; // [rsp+70h] [rbp-3F8h]
  char v115; // [rsp+70h] [rbp-3F8h]
  char v116; // [rsp+71h] [rbp-3F7h]
  char v117; // [rsp+74h] [rbp-3F4h]
  unsigned int v118; // [rsp+74h] [rbp-3F4h]
  unsigned int v119; // [rsp+74h] [rbp-3F4h]
  unsigned int v120; // [rsp+78h] [rbp-3F0h]
  signed int v121; // [rsp+78h] [rbp-3F0h]
  unsigned int v122; // [rsp+78h] [rbp-3F0h]
  PVOID P; // [rsp+80h] [rbp-3E8h] BYREF
  _BYTE v124[16]; // [rsp+88h] [rbp-3E0h] BYREF
  unsigned int v125; // [rsp+98h] [rbp-3D0h]
  PVOID v126; // [rsp+A0h] [rbp-3C8h] BYREF
  _BYTE v127[16]; // [rsp+A8h] [rbp-3C0h] BYREF
  int v128; // [rsp+B8h] [rbp-3B0h]
  unsigned int v129[2]; // [rsp+C0h] [rbp-3A8h] BYREF
  unsigned int v130; // [rsp+C8h] [rbp-3A0h]
  DXGCONTEXT **v131; // [rsp+D0h] [rbp-398h]
  _BYTE v132[16]; // [rsp+D8h] [rbp-390h] BYREF
  __int64 v133; // [rsp+E8h] [rbp-380h] BYREF
  int v134; // [rsp+F0h] [rbp-378h]
  _QWORD *v135; // [rsp+F8h] [rbp-370h]
  _BYTE v136[16]; // [rsp+100h] [rbp-368h] BYREF
  unsigned int *v137; // [rsp+110h] [rbp-358h]
  void **v138; // [rsp+118h] [rbp-350h]
  struct _VIDSCH_SYNC_OBJECT **v139; // [rsp+120h] [rbp-348h]
  unsigned int v140; // [rsp+128h] [rbp-340h]
  PVOID v141; // [rsp+130h] [rbp-338h] BYREF
  _BYTE v142[64]; // [rsp+138h] [rbp-330h] BYREF
  int v143; // [rsp+178h] [rbp-2F0h]
  PVOID v144; // [rsp+180h] [rbp-2E8h] BYREF
  _BYTE v145[64]; // [rsp+188h] [rbp-2E0h] BYREF
  int v146; // [rsp+1C8h] [rbp-2A0h]
  DXGPROCESS *v147; // [rsp+1D0h] [rbp-298h]
  struct VIDSCH_HW_QUEUE **v148; // [rsp+1D8h] [rbp-290h]
  struct _VIDSCH_CONTEXT **Elements; // [rsp+1E0h] [rbp-288h]
  PVOID v150; // [rsp+1E8h] [rbp-280h] BYREF
  _BYTE v151[16]; // [rsp+1F0h] [rbp-278h] BYREF
  int v152; // [rsp+200h] [rbp-268h]
  DXGSYNCOBJECT *v153; // [rsp+208h] [rbp-260h]
  _QWORD v154[6]; // [rsp+210h] [rbp-258h] BYREF
  char v155; // [rsp+240h] [rbp-228h]
  struct DXGADAPTERSYNCOBJECT *v156; // [rsp+248h] [rbp-220h] BYREF
  __int64 *v157; // [rsp+250h] [rbp-218h]
  __int128 v158; // [rsp+258h] [rbp-210h] BYREF
  _QWORD v159[4]; // [rsp+268h] [rbp-200h] BYREF
  char v160; // [rsp+288h] [rbp-1E0h]
  _BYTE v161[24]; // [rsp+290h] [rbp-1D8h] BYREF
  PVOID v162; // [rsp+2A8h] [rbp-1C0h]
  size_t v163; // [rsp+2B0h] [rbp-1B8h]
  PVOID v164; // [rsp+2B8h] [rbp-1B0h] BYREF
  _BYTE v165[32]; // [rsp+2C0h] [rbp-1A8h] BYREF
  unsigned int v166; // [rsp+2E0h] [rbp-188h]
  _BYTE v167[160]; // [rsp+2F0h] [rbp-178h] BYREF
  _BYTE v168[144]; // [rsp+390h] [rbp-D8h] BYREF

  v130 = a4;
  v10 = a3;
  v137 = a2;
  v129[0] = a1;
  v11 = a10;
  v117 = a10;
  v139 = a5;
  v12 = (__int64 *)Src;
  v157 = (__int64 *)Src;
  v138 = a8;
  v13 = a9;
  v147 = a9;
  v156 = a9;
  if ( !a4 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 511;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"No contexts were provided to signal.",
      511LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  P = 0LL;
  v125 = 0;
  v15 = (struct DXGCONTEXT **)PagedPoolZeroedArray<DXGCONTEXT *,2>::AllocateElements(&P, a4);
  v16 = v15;
  v131 = v15;
  if ( !v15 )
    goto LABEL_334;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v132, *(_DWORD *)a5, v13, v15, (v11 & 2) != 0, 1);
  v18 = *v16;
  if ( !*v16 )
  {
    WdLogSingleEntry3(2LL, v13, *(unsigned int *)a5, -1073741811LL);
    WdLogGlobalForLineNumber = 529;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
    if ( v129[0] )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 541;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"ObjectCount must be zero when Flags.EnqueueCpuEvent is set.",
        541LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_287;
    }
    if ( !*v138 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 546;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"CpuEventHandle should not be NULL when Flags.EnqueueCpuEvent is set.",
        546LL,
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
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v168, (struct DXGADAPTER *const)v20, 0LL);
    if ( (v11 & 2) == 0 )
    {
      v22 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v168, 0LL);
      v21 = 0LL;
      if ( v22 < 0 )
      {
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v168);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v132);
        if ( P != v124 && P )
          ExFreePoolWithTag(P, 0);
        return 3221226166LL;
      }
    }
    LODWORD(v23) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(v20 + 4664),
                     v13,
                     v129[0],
                     v137,
                     (struct _D3DDDICB_SIGNALFLAGS)v10,
                     v130,
                     (const unsigned int *)a5,
                     Src,
                     a7,
                     v138,
                     v11 & 1,
                     (bool)v21,
                     v21);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v168);
    goto LABEL_20;
  }
  v133 = *((_QWORD *)v18 + 2);
  v134 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v167, v19, 0, v17, (v11 & 2) != 0);
  v114 = 0;
  if ( (v11 & 2) == 0 )
  {
    if ( (v11 & 1) != 0 || *(_DWORD *)(*((_QWORD *)*v131 + 2) + 464LL) == 2 || (v11 & 4) == 0 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v133);
      v114 = 1;
    }
    else if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v133) )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v167);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v133);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v132);
      if ( P != v124 && P )
        ExFreePoolWithTag(P, 0);
      return 2147483665LL;
    }
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v161, v13);
  v24 = 1LL;
  v120 = 1;
  if ( v130 > 1 )
  {
    v25 = (__int64)v131;
    v26 = v131 + 1;
    v135 = v131 + 1;
    v27 = (struct _VIDSCH_SYNC_OBJECT **)((char *)a5 + 4);
    v148 = (struct _VIDSCH_SYNC_OBJECT **)((char *)a5 + 4);
    while ( 1 )
    {
      v28 = (*(_DWORD *)v27 >> 6) & 0xFFFFFF;
      v29 = *(_DWORD *)v27 >> 30;
      if ( v28 >= *((_DWORD *)v13 + 74) )
        goto LABEL_43;
      v153 = (DXGSYNCOBJECT *)*((_QWORD *)v13 + 35);
      v30 = *((_DWORD *)v153 + 4 * v28 + 2);
      if ( v29 != ((v30 >> 5) & 3) )
        goto LABEL_42;
      if ( (v30 & 0x2000) != 0 )
        goto LABEL_42;
      v31 = v30 & 0x1F;
      if ( !v31 )
        goto LABEL_42;
      if ( v31 != 7 )
        break;
      v32 = *((_QWORD *)v153 + 2 * v28);
      v26 = v135;
LABEL_44:
      *v26 = v32;
      if ( !v32 || *(_QWORD *)(v32 + 16) != *(_QWORD *)(*(_QWORD *)v25 + 16LL) )
      {
        v33 = (unsigned int)v24;
        v34 = v139;
        WdLogSingleEntry4(2LL, *(unsigned int *)v139, *((unsigned int *)v139 + v24), v24, -1073741811LL);
        WdLogGlobalForLineNumber = 627;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"hContext 0x%I64x failed to signal with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
          *(unsigned int *)v34,
          *((unsigned int *)v34 + v33),
          v33,
          -1073741811LL,
          0LL);
        DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v161);
        goto LABEL_286;
      }
      v24 = (unsigned int)(v24 + 1);
      v120 = v24;
      v27 = (struct VIDSCH_HW_QUEUE **)((char *)v27 + 4);
      v148 = v27;
      v135 = ++v26;
      v25 = (__int64)v131;
      if ( (unsigned int)v24 >= v130 )
        goto LABEL_50;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    v25 = (__int64)v131;
    v24 = v120;
    v27 = v148;
LABEL_42:
    v26 = v135;
LABEL_43:
    v32 = 0LL;
    goto LABEL_44;
  }
LABEL_50:
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v161);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v154,
    P,
    v125,
    v35,
    v114);
  if ( v155 )
  {
    if ( v154[0] )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 649;
      goto LABEL_285;
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 644;
    goto LABEL_333;
  }
  if ( (v11 & 2) == 0 )
  {
    v121 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v167, 0LL);
    if ( v121 < 0 )
    {
LABEL_56:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v154);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v167);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v133);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v132);
      if ( P != v124 && P )
        ExFreePoolWithTag(P, 0);
      return (unsigned int)v121;
    }
  }
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v136, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v136);
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)*v131 + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 670;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pBroadcastDxgContext[0]->GetRenderCore()->IsCoreResourceSharedOwner()",
      670LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (v11 & 1) != 0
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v131 + 2) + 16LL) + 16LL)
                                                     + 216LL)
                                         + 64LL)
                             + 40LL)
                 + 28LL) > 0x1052u )
  {
    if ( (v10 & 0x7FFFFFF8) != 0 )
    {
      v38 = (v10 >> 3) & 0xFFFFFFF;
      v39 = v139;
      WdLogSingleEntry3(2LL, *(unsigned int *)v139, (unsigned int)v38, -1073741811LL);
      WdLogGlobalForLineNumber = 682;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"hContext 0x%I64x SignalSyncObject.Flags.Reserved is not Zero, but %I64d, returning 0x%I64x",
        *(unsigned int *)v39,
        (unsigned int)v38,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_284;
    }
    if ( (v10 & 0x80000000) != 0LL )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 688;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"SignalSynchronizationObject is called with the DXGK_SIGNAL_FLAG_INTERNAL0 flag bits.",
        688LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_284;
    }
  }
  v40 = 0;
  v122 = 0;
  v41 = 0;
  v140 = 0;
  if ( v130 )
  {
    v42 = v131;
    v37 = v130;
    do
    {
      if ( (*((_DWORD *)*v42 + 98) & 0x10) != 0 )
      {
        RenderHwQueueCount = DXGCONTEXT::GetRenderHwQueueCount(*v42);
        v41 = RenderHwQueueCount + v44;
      }
      else
      {
        ++v40;
      }
      ++v42;
      --v37;
    }
    while ( v37 );
    v140 = v41;
    v122 = v40;
  }
  v144 = 0LL;
  v146 = 0;
  Elements = (struct _VIDSCH_CONTEXT **)NonPagedPoolZeroedArray<_VIDSCH_CONTEXT *,8,1265072196>::AllocateElements(
                                          (__int64)&v144,
                                          v40,
                                          0LL,
                                          v37);
  v141 = 0LL;
  v143 = 0;
  v47 = (struct VIDSCH_HW_QUEUE **)NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::AllocateElements(
                                     (__int64)&v141,
                                     v140,
                                     v45,
                                     v46);
  v148 = v47;
  if ( !Elements || !v47 )
  {
    if ( v141 != v142 && v141 )
      ExFreePoolWithTag(v141, 0);
    v141 = 0LL;
    v143 = 0;
    if ( v144 != v145 && v144 )
      ExFreePoolWithTag(v144, 0);
    v144 = 0LL;
    v146 = 0;
    goto LABEL_332;
  }
  v49 = 0LL;
  if ( v130 )
  {
    v48 = (__int64)v131;
    v50 = v130;
    v51 = v148;
    v52 = Elements;
    do
    {
      v53 = *(_QWORD *)v48;
      if ( (*(_DWORD *)(*(_QWORD *)v48 + 392LL) & 0x10) != 0 )
      {
        DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator((_QWORD *)(v53 + 400), &v158);
        for ( i = (_QWORD *)*((_QWORD *)&v158 + 1); i != (_QWORD *)v158 && i; i = (_QWORD *)*i )
          v51[v54++] = (struct VIDSCH_HW_QUEUE *)i[5];
        v158 = 0LL;
        v52 = Elements;
      }
      else
      {
        v52[(unsigned int)v49] = *(struct _VIDSCH_CONTEXT **)(v53 + 256);
        v49 = (unsigned int)(v49 + 1);
      }
      v48 += 8LL;
      --v50;
    }
    while ( v50 );
    v11 = v117;
    v13 = v147;
  }
  if ( (v10 & 2) != 0 )
  {
    v137 = (unsigned int *)*v138;
    Pool2 = 0LL;
    if ( DXGPROCESS::IsNativeWslProcess(v13) )
    {
      Pool2 = ExAllocatePool2(64LL, 40LL, 1265072196LL, v57);
      if ( !Pool2 )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 757;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          0xFFFFFFFFLL,
          L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
          757LL,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_92:
        if ( v141 != v142 && v141 )
          ExFreePoolWithTag(v141, 0);
        v141 = 0LL;
        v143 = 0;
        if ( v144 != v145 && v144 )
          ExFreePoolWithTag(v144, 0);
        v144 = 0LL;
        v146 = 0;
LABEL_332:
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v136);
LABEL_333:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v154);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v167);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v133);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v132);
LABEL_334:
        if ( P != v124 && P )
          ExFreePoolWithTag(P, 0);
        return 3221225495LL;
      }
      *(_QWORD *)(Pool2 + 8) = v137;
      *(_WORD *)(Pool2 + 16) = 1;
      *(_BYTE *)(Pool2 + 19) = 1;
      v137 = (unsigned int *)Pool2;
      DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
    }
    v58 = VIDSCH_EXPORT::VidSchEnqueueCpuEvent(
            *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)*v131 + 2) + 16LL) + 736LL),
            v140,
            v148,
            v122,
            Elements,
            (struct _D3DDDICB_SIGNALFLAGS)v10,
            v137);
    v121 = v58;
    if ( v58 < 0 )
    {
      v62 = v58;
      v63 = (__int64 *)v138;
      WdLogSingleEntry3(2LL, v13, *v138, v58);
      WdLogGlobalForLineNumber = 780;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"0x%I64x failed to enqueue CPU event 0x%I64x returning 0x%I64x",
        (__int64)v13,
        *v63,
        v62,
        0LL,
        0LL);
      if ( Pool2 )
        DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
      if ( v141 != v142 && v141 )
        ExFreePoolWithTag(v141, 0);
      v141 = 0LL;
      v143 = 0;
      if ( v144 != v145 && v144 )
        ExFreePoolWithTag(v144, 0);
      v144 = 0LL;
      v146 = 0;
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v136);
      goto LABEL_56;
    }
    if ( bTracingEnabled )
    {
      *(_QWORD *)v129 = *v138;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qPR0qPR2qxd_EtwWriteTransfer(v60, v59, v61, v130, (__int64)v131, 1, (__int64)v129, v10, 0, v11);
    }
LABEL_113:
    if ( v141 != v142 && v141 )
      ExFreePoolWithTag(v141, 0);
    v143 = 0;
    v141 = 0LL;
    if ( v144 != v145 && v144 )
      ExFreePoolWithTag(v144, 0);
    v144 = 0LL;
    v146 = 0;
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v136);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v154);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v167);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v133);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v132);
    if ( P != v124 && P )
      ExFreePoolWithTag(P, 0);
    return 0LL;
  }
  if ( !v129[0] )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 804;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Can't signal zero sync objects.",
      804LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_277:
    if ( v141 != v142 && v141 )
      ExFreePoolWithTag(v141, 0);
    v141 = 0LL;
    v143 = 0;
    if ( v144 != v145 && v144 )
      ExFreePoolWithTag(v144, 0);
    v144 = 0LL;
    v146 = 0;
    goto LABEL_284;
  }
  v126 = 0LL;
  v128 = 0;
  v64 = (void **)PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::AllocateElements(&v126, v129[0], v48, v49);
  v66 = v64;
  v138 = v64;
  v67 = 0LL;
  if ( !v64 )
  {
    if ( v126 != v127 && v126 )
      ExFreePoolWithTag(v126, 0);
    v126 = 0LL;
    v128 = 0;
    if ( v141 != v142 && v141 )
      ExFreePoolWithTag(v141, 0);
    v141 = 0LL;
    v143 = 0;
    if ( v144 != v145 && v144 )
      ExFreePoolWithTag(v144, 0);
    v144 = 0LL;
    v146 = 0;
    goto LABEL_332;
  }
  v115 = 0;
  v116 = 0;
  v118 = 0;
  if ( !v129[0] )
  {
LABEL_171:
    v164 = 0LL;
    v166 = 0;
    v88 = *((_DWORD *)*v66 + 101);
    if ( (unsigned int)(v88 - 5) <= 2 )
    {
      if ( (v11 & 1) != 0 )
      {
        NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements((__int64)&v164, v129[0], v65, 0LL);
        v94 = v164;
        if ( !v164 )
        {
          v164 = 0LL;
          v166 = 0;
          if ( v126 != v127 && v126 )
            ExFreePoolWithTag(v126, 0);
          v126 = 0LL;
          v128 = 0;
          if ( v141 != v142 && v141 )
            ExFreePoolWithTag(v141, 0);
          v141 = 0LL;
          v143 = 0;
          if ( v144 != v145 && v144 )
            ExFreePoolWithTag(v144, 0);
          v144 = 0LL;
          v146 = 0;
          DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v136);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v154);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v167);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v133);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v132);
          if ( P != v124 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v125 = 0;
          return 3221225495LL;
        }
        v95 = v166;
        v163 = v95 * 8;
        v162 = v164;
        if ( &v12[v95] < v12 || (unsigned __int64)&v12[v95] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v94, v12, v95 * 8);
        v12 = (__int64 *)v164;
        v157 = (__int64 *)v164;
      }
      else if ( !v12 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 963;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"MonitoredFenceValueArray is NULL when signaling monitored fence objects",
          963LL,
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
      if ( v88 != 3 )
        v12 = 0LL;
      v157 = v12;
    }
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v159,
      v138,
      v129[0],
      v67);
    if ( !v160 )
    {
      v150 = 0LL;
      v152 = 0;
      v96 = (struct _VIDSCH_SYNC_OBJECT **)NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,1265072196>::AllocateElements(
                                             (__int64)&v150,
                                             v129[0],
                                             v89,
                                             v90);
      v139 = v96;
      v97 = 0LL;
      if ( v96 )
      {
        v119 = 0;
        if ( v129[0] )
        {
          v98 = v96;
          v147 = (DXGPROCESS *)v96;
          v99 = (void **)((char *)v138 - (char *)v96);
          v138 = (void **)((char *)v138 - (__int64)v96);
          while ( 1 )
          {
            v153 = *(struct _VIDSCH_SYNC_OBJECT **)((char *)v98 + (_QWORD)v99);
            v156 = v97;
            DxgAdapterSyncObject = DXGSYNCOBJECT::GetDxgAdapterSyncObject(
                                     v153,
                                     *(struct ADAPTER_RENDER **)(*((_QWORD *)*v131 + 2) + 16LL),
                                     &v156,
                                     0LL,
                                     (unsigned __int8 *)v97,
                                     (bool)v97,
                                     (bool)v97);
            v101 = *((_QWORD *)*v131 + 2);
            if ( DxgAdapterSyncObject < 0 )
              break;
            VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(v153, *(struct ADAPTER_RENDER **)(v101 + 16));
            v104 = v147;
            *(_QWORD *)v147 = VidSchSyncObject;
            if ( !VidSchSyncObject )
            {
              WdLogSingleEntry1(2LL, v103);
              WdLogGlobalForLineNumber = 1040;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"0x%p sync object adapter state is destroyed, thus it cannot be signaled.",
                (__int64)v153,
                0LL,
                0LL,
                0LL,
                0LL);
              if ( v150 != v151 && v150 )
                ExFreePoolWithTag(v150, 0);
              v150 = 0LL;
              v152 = 0;
              goto LABEL_268;
            }
            ++v119;
            v98 = (struct _VIDSCH_SYNC_OBJECT **)((char *)v104 + 8);
            v147 = (DXGPROCESS *)v98;
            v99 = v138;
            if ( v119 >= v129[0] )
              goto LABEL_244;
          }
          v23 = DxgAdapterSyncObject;
          WdLogSingleEntry3(2LL, v13, *(_QWORD *)(*(_QWORD *)(v101 + 16) + 16LL), DxgAdapterSyncObject);
          WdLogGlobalForLineNumber = 1029;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"0x%I64x failed, failed to create a sync object on logical adapter 0x%I64x returning 0x%I64x",
            (__int64)v13,
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v131 + 2) + 16LL) + 16LL),
            v23,
            0LL,
            0LL);
          if ( v150 != v151 && v150 )
            ExFreePoolWithTag(v150, 0);
          v150 = 0LL;
          v152 = 0;
          DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v159);
          if ( v164 != v165 && v164 )
            ExFreePoolWithTag(v164, 0);
          v164 = 0LL;
          v166 = 0;
          if ( v126 != v127 && v126 )
            ExFreePoolWithTag(v126, 0);
          v126 = 0LL;
          v128 = 0;
          if ( v141 != v142 && v141 )
            ExFreePoolWithTag(v141, 0);
          v141 = 0LL;
          v143 = 0;
          if ( v144 != v145 && v144 )
            ExFreePoolWithTag(v144, 0);
          v144 = 0LL;
          v146 = 0;
          DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v136);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v154);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v167);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v133);
LABEL_20:
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v132);
          if ( P != v124 && P )
            ExFreePoolWithTag(P, 0);
          return (unsigned int)v23;
        }
LABEL_244:
        v105 = VIDSCH_EXPORT::VidSchSignalSyncObjectsFromGpu(
                 *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)*v131 + 2) + 16LL) + 736LL),
                 v140,
                 v148,
                 v122,
                 Elements,
                 v129[0],
                 v139,
                 (struct _D3DDDICB_SIGNALFLAGS)v10,
                 (const unsigned __int64 *)v12,
                 (v11 & 8) != 0);
        LODWORD(v135) = v105;
        v108 = 0LL;
        if ( v105 < 0 )
        {
          v109 = v105;
          v110 = v137;
          WdLogSingleEntry4(2LL, v13, *v137, 0LL, v105);
          WdLogGlobalForLineNumber = 1063;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"0x%I64x failed to signal SyncObject 0x%I64x at index %I64d returning 0x%I64x",
            (__int64)v13,
            *v110,
            0LL,
            v109,
            0LL);
          if ( v150 != v151 && v150 )
            ExFreePoolWithTag(v150, 0);
          v150 = 0LL;
          v152 = 0;
          DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v159);
          if ( v164 != v165 && v164 )
            ExFreePoolWithTag(v164, 0);
          v164 = 0LL;
          v166 = 0;
          if ( v126 != v127 && v126 )
            ExFreePoolWithTag(v126, 0);
          v126 = 0LL;
          v128 = 0;
          if ( v141 != v142 && v141 )
            ExFreePoolWithTag(v141, 0);
          v141 = 0LL;
          v143 = 0;
          if ( v144 != v145 && v144 )
            ExFreePoolWithTag(v144, 0);
          v144 = 0LL;
          v146 = 0;
          DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v136);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v154);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v167);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v133);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v132);
          if ( P != v124 && P )
            ExFreePoolWithTag(P, 0);
          return (unsigned int)v135;
        }
        if ( v115 )
        {
          if ( bTracingEnabled )
          {
            if ( v12 )
              v108 = *v12;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0qPR0qPR2qxd_EtwWriteTransfer(
                v108,
                v106,
                v107,
                v130,
                (__int64)v131,
                v129[0],
                (__int64)v139,
                v10,
                v108,
                v11);
          }
        }
        else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          McTemplateK0qPR0qqPR3XR3d_EtwWriteTransfer(
            0LL,
            v106,
            v107,
            v130,
            (__int64)v131,
            v10,
            v129[0],
            (__int64)v139,
            (__int64)v12,
            v11);
        }
        if ( v150 != v151 && v150 )
          ExFreePoolWithTag(v150, 0);
        v150 = 0LL;
        v152 = 0;
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v159);
        if ( v164 != v165 && v164 )
          ExFreePoolWithTag(v164, 0);
        v164 = 0LL;
        v166 = 0;
        if ( v126 != v127 && v126 )
          ExFreePoolWithTag(v126, 0);
        v126 = 0LL;
        v128 = 0;
        goto LABEL_113;
      }
      if ( v150 != v151 && v150 )
        ExFreePoolWithTag(v150, 0);
      v150 = 0LL;
      v152 = 0;
LABEL_177:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v159);
      if ( v164 != v165 && v164 )
        ExFreePoolWithTag(v164, 0);
      v166 = 0;
      v164 = 0LL;
      if ( v126 != v127 && v126 )
        ExFreePoolWithTag(v126, 0);
      v126 = 0LL;
      v128 = 0;
      goto LABEL_92;
    }
    if ( !v159[0] )
      goto LABEL_177;
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 996;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The same sync object handle is passed twice",
      996LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_268:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v159);
LABEL_269:
    if ( v164 != v165 && v164 )
      ExFreePoolWithTag(v164, 0);
    v164 = 0LL;
    v166 = 0;
LABEL_273:
    if ( v126 != v127 && v126 )
      ExFreePoolWithTag(v126, 0);
    v128 = 0;
    v126 = 0LL;
    goto LABEL_277;
  }
  v147 = (DXGPROCESS *)v64;
  v68 = v137;
  v139 = (struct _VIDSCH_SYNC_OBJECT **)v137;
  while ( 1 )
  {
    v69 = *v68;
    DXGPUSHLOCK::AcquireShared((DXGPROCESS *)((char *)v13 + 248));
    v70 = (v69 >> 6) & 0xFFFFFF;
    v71 = v69 >> 30;
    if ( v70 < *((_DWORD *)v13 + 74)
      && (v72 = *((_QWORD *)v13 + 35), v73 = *(_DWORD *)(v72 + 16LL * v70 + 8), v71 == ((v73 >> 5) & 3))
      && (v73 & 0x2000) == 0
      && (v73 & 0x1F) == 8 )
    {
      v74 = *(_QWORD *)(v72 + 16LL * v70);
    }
    else
    {
      v74 = 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)v13 + 66);
    ExReleasePushLockSharedEx((char *)v13 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( v74 )
    {
      if ( *(_DWORD *)(v74 + 404) == 5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 838;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pSyncObject->GetSyncObjectType() != D3DDDI_MONITORED_FENCE",
          838LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *(_DWORD *)(v74 + 404) == 6 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 839;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pSyncObject->GetSyncObjectType() != D3DDDI_PERIODIC_MONITORED_FENCE",
          839LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v115 = 1;
      v67 = 0LL;
      if ( v116 )
      {
        WdLogSingleEntry1(2LL, v13);
        WdLogGlobalForLineNumber = 845;
        goto LABEL_186;
      }
      if ( (*(_DWORD *)(v74 + 212) & 0x100) != 0 )
      {
        v91 = v137;
        WdLogSingleEntry1(2LL, v137[v118]);
        WdLogGlobalForLineNumber = 852;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Sync object 0x%I64x is created with SignalByKmd and cannot be signaled",
          v91[v118],
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_273;
      }
      if ( *(_DWORD *)(v74 + 404) == 3 && v129[0] != 1 )
      {
        v75 = (struct _VIDSCH_SYNC_OBJECT **)v129[0];
        v76 = v137;
        WdLogSingleEntry4(2LL, v13, v137[v118], v129[0], -1073741811LL);
        WdLogGlobalForLineNumber = 866;
        v113 = -1073741811LL;
        v112 = v75;
        v111 = v76[v118];
        v77 = L"0x%I64x failed on signaling fence object 0x%I64x at non-1 object count %I64d returning 0x%I64x";
        goto LABEL_154;
      }
      goto LABEL_169;
    }
    v78 = *(_DWORD *)v139;
    DXGPUSHLOCK::AcquireShared((DXGPROCESS *)((char *)v13 + 248));
    v79 = (v78 >> 6) & 0xFFFFFF;
    v80 = v78 >> 30;
    if ( v79 < *((_DWORD *)v13 + 74)
      && (v81 = *((_QWORD *)v13 + 35), v82 = *(_DWORD *)(v81 + 16LL * v79 + 8), v80 == ((v82 >> 5) & 3))
      && (v82 & 0x2000) == 0
      && (v83 = v82 & 0x1F) != 0 )
    {
      if ( v83 == 11 )
      {
        v84 = *(_QWORD *)(v81 + 16LL * v79);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        v84 = 0LL;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      v84 = 0LL;
    }
    v135 = (_QWORD *)v84;
    _InterlockedDecrement((volatile signed __int32 *)v13 + 66);
    ExReleasePushLockSharedEx((char *)v13 + 248, 0LL);
    KeLeaveCriticalRegion();
    v67 = 0LL;
    if ( !v84 )
      break;
    v116 = 1;
    if ( v115 )
    {
      WdLogSingleEntry1(2LL, v13);
      WdLogGlobalForLineNumber = 894;
LABEL_186:
      v113 = 0LL;
      v112 = 0LL;
      v111 = 0LL;
      v77 = L"0x%I64x mixes monitored fence and non-monitored fence sync objects in one signal call.";
LABEL_154:
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v77, (__int64)v13, v111, (__int64)v112, v113, 0LL);
      goto LABEL_273;
    }
    if ( (*(_DWORD *)(v84 + 72) & 0x10) != 0 )
    {
      v92 = v137;
      WdLogSingleEntry1(2LL, v137[v118]);
      WdLogGlobalForLineNumber = 901;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"0x%I64x object is opened with NoSignal flag and thus cannot be signaled.",
        v92[v118],
        0LL,
        0LL,
        0LL,
        0LL);
      if ( v126 != v127 && v126 )
        ExFreePoolWithTag(v126, 0);
      v126 = 0LL;
      v128 = 0;
      if ( v141 != v142 && v141 )
        ExFreePoolWithTag(v141, 0);
      v141 = 0LL;
      v143 = 0;
      if ( v144 != v145 && v144 )
        ExFreePoolWithTag(v144, 0);
      v144 = 0LL;
      v146 = 0;
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v136);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v154);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v167);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v133);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v132);
      if ( P != v124 && P )
        ExFreePoolWithTag(P, 0);
      return 3221225506LL;
    }
    v65 = *(_QWORD *)(v84 + 16);
    v85 = (__int64)v131;
    v86 = *((_QWORD *)*v131 + 2);
    if ( v65 != v86 )
    {
      WdLogSingleEntry2(2LL, v86, v65);
      WdLogGlobalForLineNumber = 911;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"SignalSynchronizationObjectFromGpu on device 0x%p attempts to use a sync object opened on a different device 0x%p.",
        *(_QWORD *)(*(_QWORD *)v85 + 16LL),
        v135[2],
        0LL,
        0LL,
        0LL);
      goto LABEL_273;
    }
    v74 = v135[4];
    if ( (unsigned int)(*(_DWORD *)(v74 + 404) - 5) > 2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 920;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pSyncObject->GetSyncObjectType() == D3DDDI_MONITORED_FENCE || pSyncObject->GetSyncObjectType() == D3DDDI_PERIODI"
         "C_MONITORED_FENCE || pSyncObject->GetSyncObjectType() == D3DDDI_NATIVE_FENCE",
        920LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v67 = 0LL;
    }
LABEL_169:
    v87 = v147;
    *(_QWORD *)v147 = v74;
    ++v118;
    v68 = (unsigned int *)v139 + 1;
    v139 = (struct _VIDSCH_SYNC_OBJECT **)((char *)v139 + 4);
    v147 = (DXGPROCESS *)((char *)v87 + 8);
    if ( v118 >= v129[0] )
    {
      v12 = v157;
      v66 = v138;
      goto LABEL_171;
    }
  }
  v93 = v137;
  WdLogSingleEntry4(2LL, v13, v137[v118], v118, -1073741811LL);
  WdLogGlobalForLineNumber = 885;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"0x%I64x failed to signal with invalid hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
    (__int64)v13,
    v93[v118],
    v118,
    -1073741811LL,
    0LL);
  if ( v126 != v127 && v126 )
    ExFreePoolWithTag(v126, 0);
  v126 = 0LL;
  v128 = 0;
  if ( v141 != v142 && v141 )
    ExFreePoolWithTag(v141, 0);
  v141 = 0LL;
  v143 = 0;
  if ( v144 != v145 && v144 )
    ExFreePoolWithTag(v144, 0);
  v144 = 0LL;
  v146 = 0;
LABEL_284:
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v136);
LABEL_285:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v154);
LABEL_286:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v167);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v133);
LABEL_287:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v132);
  if ( P != v124 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return 3221225485LL;
}
