/*
 * XREFs of ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1403A620C
 * Callers:
 *     ?VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403FAAB0 (-VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140427530 (-VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14000E300 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14000E830 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer @ 0x140011548 (McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140011820 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140012080 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0ppqqxdqp_EtwWriteTransfer @ 0x14001277C (McTemplateK0ppqqxdqp_EtwWriteTransfer.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x140021DDC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140022C10 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140023750 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x14002BA80 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002BEF0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DD50 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002DDD0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1CAutoRefCountedBuffer@@QEAA@XZ @ 0x14002DEC0 (--1CAutoRefCountedBuffer@@QEAA@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002FE40 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1400338A0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004F730 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x14004FB0C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAUDXGK_PRESENT_PARAMS@@1@Z @ 0x1401EB208 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1402F94BC (-GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x140331FB0 (-GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUS.c)
 *     ?GetSizeOfPresentToken@@YAIPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x140336D50 (-GetSizeOfPresentToken@@YAIPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x14035EFA0 (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?GetPresentHistoryTokenSlot@DXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAU_D3DKMT_PRESENTHISTORYTOKEN@@XZ @ 0x14036DE70 (-GetPresentHistoryTokenSlot@DXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAU_D3DKMT_PRESENTHISTORYTOKEN@@XZ.c)
 *     _DXGADAPTER::SubmitPresentHistoryTokenFromVm_::_45_::ENSURE_DELETE::_ENSURE_DELETE @ 0x14037605C (_DXGADAPTER--SubmitPresentHistoryTokenFromVm_--_45_--ENSURE_DELETE--_ENSURE_DELETE.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1403C43D0 (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1404201A0 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 */

__int64 __fastcall DXGADAPTER::SubmitPresentHistoryTokenFromVm(
        struct DXGADAPTER *a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a6,
        __int64 a7,
        unsigned int a8,
        int a9,
        void *a10,
        unsigned int a11)
{
  struct _KTHREAD **Current; // rax
  __int64 v15; // rcx
  struct DXGPROCESS *v16; // r13
  unsigned int v17; // eax
  __int64 v18; // r14
  int v19; // edx
  __int64 v20; // r14
  __int64 v21; // r14
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  struct DXGADAPTER *v25; // rsi
  __int64 v26; // r9
  __int64 v27; // rdi
  ADAPTER_RENDER *v28; // rdi
  __int64 v29; // r8
  struct VIDSCH_SUBMIT_DATA_BASE *v30; // rsi
  unsigned int v31; // eax
  __int64 v32; // rcx
  unsigned int SizeOfPresentToken; // ebx
  struct DXGGLOBAL *Global; // rax
  ADAPTER_RENDER *v35; // rdi
  union _SLIST_HEADER *PresentHistoryTokenQueue; // r13
  void *Alignment; // rcx
  struct _D3DKMT_PRESENTHISTORYTOKEN *PresentHistoryTokenSlot; // r15
  const char *v39; // rdx
  struct DXGGLOBAL *v40; // rax
  _DWORD *v41; // rax
  _DWORD *v42; // rbx
  volatile signed __int32 *v43; // r12
  int v44; // eax
  __int64 v45; // rax
  void *v46; // r10
  __int64 v47; // r8
  __int64 v48; // rax
  int v49; // r15d
  int v50; // ebx
  __int64 v51; // rdx
  __int64 v52; // r9
  int v53; // r13d
  int v54; // edi
  int v55; // r12d
  int v56; // r9d
  int v57; // r9d
  int v58; // r9d
  int v59; // r9d
  int v60; // r9d
  int v61; // r9d
  int v62; // r9d
  unsigned int *v63; // r10
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  unsigned int v67; // r11d
  int *v68; // r10
  __int64 v69; // r15
  int v70; // ecx
  DXGCONTEXT *v71; // rcx
  int v72; // eax
  struct DXGGLOBAL *v73; // rax
  struct DXGPROCESS *v74; // rsi
  volatile signed __int32 *v75; // rdi
  __int64 v76; // rdx
  int v77; // ecx
  DXGDEVICESYNCOBJECT *v78; // rbx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  struct DXGK_PRESENT_PARAMS *v80; // [rsp+28h] [rbp-450h]
  bool v81[8]; // [rsp+30h] [rbp-448h]
  __int64 v82; // [rsp+40h] [rbp-438h]
  char v83; // [rsp+100h] [rbp-378h]
  char v84; // [rsp+104h] [rbp-374h]
  DXGCONTEXT *v85[3]; // [rsp+108h] [rbp-370h] BYREF
  __int64 v86; // [rsp+120h] [rbp-358h] BYREF
  int v87; // [rsp+128h] [rbp-350h]
  void *Src; // [rsp+130h] [rbp-348h]
  struct DXGADAPTER *v89[2]; // [rsp+138h] [rbp-340h] BYREF
  _BYTE v90[16]; // [rsp+148h] [rbp-330h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v91[2]; // [rsp+158h] [rbp-320h] BYREF
  unsigned int v92; // [rsp+168h] [rbp-310h]
  unsigned int v93; // [rsp+16Ch] [rbp-30Ch]
  PVOID Object; // [rsp+170h] [rbp-308h] BYREF
  __int64 v95; // [rsp+178h] [rbp-300h]
  _BYTE v96[16]; // [rsp+180h] [rbp-2F8h] BYREF
  char v97[8]; // [rsp+190h] [rbp-2E8h] BYREF
  char *v98; // [rsp+198h] [rbp-2E0h]
  int v99; // [rsp+1A0h] [rbp-2D8h]
  __int128 v100; // [rsp+1A8h] [rbp-2D0h]
  _BYTE v101[24]; // [rsp+1B8h] [rbp-2C0h] BYREF
  PVOID Entry; // [rsp+1D0h] [rbp-2A8h]
  __int128 v103; // [rsp+1D8h] [rbp-2A0h]
  __int128 v104; // [rsp+1E8h] [rbp-290h]
  struct DXGPROCESS *v105; // [rsp+1F8h] [rbp-280h]
  ADAPTER_RENDER *v106; // [rsp+200h] [rbp-278h]
  PVOID v107; // [rsp+208h] [rbp-270h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+210h] [rbp-268h] BYREF
  DXGPUSHLOCK *v109[3]; // [rsp+218h] [rbp-260h] BYREF
  _BYTE v110[32]; // [rsp+230h] [rbp-248h] BYREF
  _BYTE v111[160]; // [rsp+250h] [rbp-228h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+2F0h] [rbp-188h] BYREF
  char v113; // [rsp+320h] [rbp-158h]
  _BYTE v115[64]; // [rsp+330h] [rbp-148h] BYREF
  _BYTE v116[64]; // [rsp+370h] [rbp-108h] BYREF
  char v117[64]; // [rsp+3B0h] [rbp-C8h] BYREF
  _DWORD v118[16]; // [rsp+3F0h] [rbp-88h] BYREF

  Src = a6;
  Entry = a10;
  v83 = 0;
  v85[0] = 0LL;
  v89[0] = a1;
  v93 = a8;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1);
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v90, a2, Current, v85, 0, 1);
  v105 = DXGPROCESS::GetCurrent(v15);
  v16 = v105;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v110, v105);
  v17 = (a8 >> 6) & 0xFFFFFF;
  v92 = v17;
  if ( v17 < *((_DWORD *)v16 + 74) )
  {
    v18 = *((_QWORD *)v16 + 35);
    if ( ((a8 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0x60)
      && (*(_DWORD *)(v18 + 16LL * v17 + 8) & 0x2000) == 0 )
    {
      v19 = *(_DWORD *)(v18 + 16LL * v17 + 8) & 0x1F;
      if ( v19 )
      {
        if ( v19 == 11 )
        {
          v20 = *(_QWORD *)(v18 + 16LL * v17);
          if ( v20 )
          {
            v21 = *(_QWORD *)(v20 + 16);
            if ( v21 )
              goto LABEL_11;
          }
        }
        else
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
  }
  if ( v85[0] )
  {
    v21 = *((_QWORD *)v85[0] + 2);
LABEL_11:
    _m_prefetchw((const void *)(v21 + 64));
    v22 = *(_QWORD *)(v21 + 64);
    do
    {
      if ( !v22 )
        goto LABEL_14;
      v23 = v22;
      v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 64), v22 + 1, v22);
    }
    while ( v23 != v22 );
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v110);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v96,
      (struct DXGDEVICE *)v21);
    v98 = 0LL;
    v99 = 0;
    if ( v85[0] )
    {
      v98 = (char *)v85[0] + 440;
      DXGPUSHLOCK::AcquireExclusive((DXGCONTEXT *)((char *)v85[0] + 440));
      v99 = 2;
    }
    v25 = v89[0];
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v101, v89[0], 1);
    if ( *((_DWORD *)v25 + 50) != 1 )
    {
      LODWORD(v27) = -1073741130;
      goto LABEL_108;
    }
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v111, v21, 2, v26, 0);
    LODWORD(v27) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v111, 0LL);
    if ( (int)v27 < 0 )
      goto LABEL_104;
    v28 = (ADAPTER_RENDER *)*((_QWORD *)v25 + 391);
    v86 = 0LL;
    v106 = v28;
    CVidSchSubmitData::CVidSchSubmitData((CVidSchSubmitData *)v91, v28, 1);
    v30 = v91[0];
    if ( !v91[0] )
    {
LABEL_29:
      LODWORD(v27) = -1073741801;
      CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v91);
      CAutoRefCountedBuffer::~CAutoRefCountedBuffer((CAutoRefCountedBuffer *)&v86);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v111);
LABEL_108:
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v101);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v97);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v96);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v90);
      goto LABEL_109;
    }
    *((_DWORD *)v91[0] + 1) |= 8u;
    v31 = *(_DWORD *)v30 & 0xFFFFFFDF;
    *((_DWORD *)v30 + 29) = -1;
    *(_DWORD *)v30 = a3 & 0x20 | v31 | 0x40000;
    *((_QWORD *)v30 + 70) = *(_QWORD *)(*(_QWORD *)(v21 + 112) + 104LL) + 160LL;
    v32 = a5;
    *((_DWORD *)v30 + 142) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 112) + 104LL) + 392LL);
    *((_QWORD *)v30 + 74) = a7;
    *((_QWORD *)v30 + 72) = a4;
    *((_QWORD *)v30 + 73) = a5;
    *((_QWORD *)v30 + 12) = a4;
    *((_QWORD *)v30 + 13) = a5;
    if ( a11 != -1 )
    {
      if ( v16 )
      {
        if ( a9 )
        {
          if ( a6 )
          {
            SizeOfPresentToken = GetSizeOfPresentToken(a6);
            if ( SizeOfPresentToken )
            {
              Object = 0LL;
              Global = DXGGLOBAL::GetGlobal();
              LODWORD(v27) = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
                               *((DXGSESSIONMGR **)Global + 122),
                               a11,
                               (struct _KPROCESS **)&Object);
              if ( (int)v27 < 0 )
                goto LABEL_103;
              v113 = 0;
              CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
              v35 = v106;
              DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v109, (struct _KTHREAD **)v106 + 122, 0);
              DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v109);
              PresentHistoryTokenQueue = (union _SLIST_HEADER *)ADAPTER_RENDER::GetPresentHistoryTokenQueue(
                                                                  v35,
                                                                  v109,
                                                                  0);
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v109);
              ObfDereferenceObject(Object);
              CPROCESSATTACHHELPER::Detach(&ApcState);
              if ( PresentHistoryTokenQueue )
              {
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v101);
                COREDEVICEACCESS::Release((COREDEVICEACCESS *)v111);
                Alignment = (void *)PresentHistoryTokenQueue[4].Alignment;
                Timeout.QuadPart = -20000000LL;
                KeWaitForSingleObject(Alignment, Executive, 0, 1u, &Timeout);
                PresentHistoryTokenSlot = (struct _D3DKMT_PRESENTHISTORYTOKEN *)DXGPRESENTHISTORYTOKENQUEUE::GetPresentHistoryTokenSlot(PresentHistoryTokenQueue);
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v101);
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v111, v39);
                if ( PresentHistoryTokenSlot )
                {
                  memmove(PresentHistoryTokenSlot, Src, SizeOfPresentToken);
                  *((_DWORD *)v30 + 1) |= 0x10u;
                  *((_QWORD *)v30 + 12) = PresentHistoryTokenQueue;
                  *((_QWORD *)v30 + 13) = PresentHistoryTokenSlot;
                  v40 = DXGGLOBAL::GetGlobal();
                  v41 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v40 + 1136));
                  v42 = v41;
                  if ( !v41 )
                    goto LABEL_29;
                  memset(v41, 0, 0x5F8uLL);
                  v42[5] = a9;
                  v43 = (volatile signed __int32 *)Entry;
                  *((_QWORD *)v42 + 187) = v85;
                  *((_BYTE *)v42 + 1512) = 1;
                  v107 = v42;
                  v44 = PrepareIndependentFlipToken(
                          PresentHistoryTokenSlot,
                          (struct DXGK_PRESENT_PARAMS *)v42,
                          v30,
                          v85[0],
                          0LL,
                          (struct CRefCountedBuffer *)v43);
                  LODWORD(v27) = v44;
                  if ( v44 < 0 )
                  {
                    WdLogSingleEntry1(3LL, v44);
                    WdLogGlobalForLineNumber = 3639;
                    ExpInterlockedPushEntrySList(
                      PresentHistoryTokenQueue + 3,
                      (PSLIST_ENTRY)(&PresentHistoryTokenSlot[-1].Token.SurfaceComplete + 131));
                    v45 = *((_QWORD *)v30 + 72);
                    *((_DWORD *)v30 + 1) &= ~0x10u;
                    *((_QWORD *)v30 + 12) = v45;
                    *((_QWORD *)v30 + 13) = *((_QWORD *)v30 + 73);
                  }
                  else
                  {
                    *((_DWORD *)v30 + 1) |= 0x20u;
                    if ( v43 )
                    {
                      _InterlockedIncrement(v43 + 3);
                      v30 = v91[0];
                      v83 = 1;
                    }
                    *((_QWORD *)v30 + 100) = v43;
                  }
                  v86 = *((_QWORD *)v30 + 4);
                  DXGADAPTER::SubmitPresentHistoryTokenFromVm_::_45_::ENSURE_DELETE::_ENSURE_DELETE(&v107);
                  if ( (int)v27 < 0 )
                  {
LABEL_103:
                    CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v91);
                    CAutoRefCountedBuffer::~CAutoRefCountedBuffer((CAutoRefCountedBuffer *)&v86);
LABEL_104:
                    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v111);
                    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v101);
                    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v97);
                    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v96);
                    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v90);
                    if ( (int)v27 >= 0 )
                    {
LABEL_109:
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v21 + 16), (struct DXGDEVICE *)v21);
                      return (unsigned int)v27;
                    }
LABEL_105:
                    if ( v83 )
                      CRefCountedBuffer::RefCountedBufferRelease(Entry);
                    goto LABEL_109;
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( !bTracingEnabled )
    {
LABEL_85:
      v71 = v85[0];
      if ( v85[0] )
      {
        if ( (*((_DWORD *)v85[0] + 98) & 0x10) != 0 )
        {
          v72 = DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(v85[0], 0LL, 0, 1, 0LL, 0LL, 1);
          v27 = v72;
          if ( v72 < 0 )
          {
            WdLogSingleEntry2(2LL, v85[0], v72);
            WdLogGlobalForLineNumber = 3692;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"DXGCONTEXT: 0x%I64x Failed to SynchronizeImplicitQueueWithRenderQueues, returning",
              (__int64)v85[0],
              v27,
              0LL,
              0LL,
              0LL);
            goto LABEL_103;
          }
          v71 = v85[0];
        }
        LODWORD(v27) = DXGCONTEXT::SubmitCommandToImplicitQueue(v71, v30);
        goto LABEL_103;
      }
      v73 = DXGGLOBAL::GetGlobal();
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v89, v73, 0);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v89);
      v74 = v105;
      v75 = (volatile signed __int32 *)((char *)v105 + 248);
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v105 + 248));
      if ( v92 < *((_DWORD *)v74 + 74) )
      {
        v76 = *((_QWORD *)v74 + 35);
        if ( ((v93 >> 25) & 0x60) == (*(_BYTE *)(v76 + 16LL * v92 + 8) & 0x60)
          && (*(_DWORD *)(v76 + 16LL * v92 + 8) & 0x2000) == 0 )
        {
          v77 = *(_DWORD *)(v76 + 16LL * v92 + 8) & 0x1F;
          if ( v77 )
          {
            if ( v77 == 11 )
            {
              v78 = *(DXGDEVICESYNCOBJECT **)(v76 + 16LL * v92);
LABEL_98:
              _InterlockedDecrement(v75 + 4);
              ExReleasePushLockSharedEx(v75, 0LL);
              KeLeaveCriticalRegion();
              if ( v78 && *((_QWORD *)v78 + 2) != v21 )
              {
                LODWORD(v27) = -1073741811;
                DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v89);
                CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v91);
                CAutoRefCountedBuffer::~CAutoRefCountedBuffer((CAutoRefCountedBuffer *)&v86);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v111);
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v101);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v97);
                DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v96);
                DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v90);
                goto LABEL_105;
              }
              VidSchSyncObject = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(v78);
              LODWORD(v27) = (*(__int64 (__fastcall **)(struct VIDSCH_SUBMIT_DATA_BASE *, _QWORD, struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(*((_QWORD *)v106 + 92) + 8LL) + 1016LL))(
                               v91[0],
                               *(_QWORD *)(*((_QWORD *)v78 + 2) + 800LL),
                               VidSchSyncObject);
              DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v89);
              goto LABEL_103;
            }
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      v78 = 0LL;
      goto LABEL_98;
    }
    if ( (*((_DWORD *)v30 + 1) & 0x10) == 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      {
        LODWORD(v82) = 0;
        *(_DWORD *)v81 = 0;
        LODWORD(v80) = 2;
        McTemplateK0ppqqxdqp_EtwWriteTransfer(
          v32,
          &EventSubmitPresentHistory,
          v29,
          v89[0],
          *((_QWORD *)v30 + 13),
          v80,
          *(_QWORD *)v81,
          0LL,
          v82,
          0,
          *((_QWORD *)v30 + 70));
      }
      goto LABEL_85;
    }
    v46 = (void *)*((_QWORD *)v30 + 70);
    v47 = *((_QWORD *)v30 + 13);
    Src = v46;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0LL )
      goto LABEL_85;
    LOBYTE(v48) = 0;
    LOBYTE(v49) = 0;
    v95 = 0LL;
    v50 = 0;
    v84 = 0;
    LODWORD(v51) = 0;
    v52 = 0LL;
    LOBYTE(v53) = 0;
    v54 = 0;
    v55 = 0;
    v100 = 0LL;
    v104 = 0LL;
    v103 = 0LL;
    if ( !v47 )
    {
LABEL_83:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      {
        LODWORD(v82) = v54;
        *(_DWORD *)v81 = v51;
        LODWORD(v80) = v50;
        McTemplateK0ppqqxdqp_EtwWriteTransfer(
          Microsoft_Windows_DxgKrnlEnableBits,
          &EventSubmitPresentHistory,
          v47,
          v89[0],
          v47,
          v80,
          *(_QWORD *)v81,
          v52,
          v82,
          v55,
          v46);
      }
      goto LABEL_85;
    }
    v50 = *(_DWORD *)v47;
    v56 = *(_DWORD *)v47;
    v51 = *(unsigned int *)(v47 + 4);
    v87 = *(_DWORD *)(v47 + 4);
    v57 = v56 - 1;
    if ( v57 )
    {
      v58 = v57 - 1;
      if ( !v58 )
      {
        v52 = *(_QWORD *)(v47 + 24);
        goto LABEL_60;
      }
      v59 = v58 - 1;
      if ( !v59 )
      {
        v52 = *(_QWORD *)(v47 + 16);
        goto LABEL_58;
      }
      v60 = v59 - 1;
      if ( !v60 || (v61 = v60 - 1) == 0 || (v62 = v61 - 1) == 0 || (unsigned int)(v62 - 1) < 2 )
      {
        v52 = *(_QWORD *)(v47 + 16);
        goto LABEL_54;
      }
      v52 = 0LL;
      if ( v50 != 1 )
      {
        if ( v50 != 2 )
        {
          if ( v50 != 3 )
          {
LABEL_54:
            v63 = 0LL;
            if ( v50 != 1 )
            {
              if ( v50 != 2 )
              {
LABEL_62:
                v84 = v49;
                if ( v50 == 6 )
                {
                  v54 = *(_DWORD *)(v47 + 24);
                  goto LABEL_65;
                }
                if ( v50 == 9 )
                {
                  v54 = *(_DWORD *)(v47 + 32);
LABEL_65:
                  v84 = v49;
LABEL_73:
                  if ( v63 )
                  {
                    v67 = *v63;
                    if ( *v63 >= 0x10 )
                    {
                      v67 = 16;
                    }
                    else if ( !v67 )
                    {
                      goto LABEL_80;
                    }
                    v68 = (int *)(v63 + 3);
                    v69 = v67;
                    v51 = 0LL;
                    do
                    {
                      *(_DWORD *)((char *)v118 + v51) = *(v68 - 2);
                      v51 += 4LL;
                      v70 = *v68;
                      v68 += 4;
                      *(_DWORD *)&v116[v51 + 60] = v70;
                      *(_DWORD *)&v115[v51 + 60] = *(v68 - 5);
                      *(_DWORD *)&v115[v51 - 4] = *(v68 - 3);
                      --v69;
                    }
                    while ( v69 );
LABEL_80:
                    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
                      McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer(
                        HIDWORD(v95),
                        v51,
                        v47,
                        (__int64)v89[0],
                        v47,
                        v50,
                        v87,
                        v52,
                        v54,
                        v55,
                        v100,
                        SBYTE8(v100),
                        SBYTE4(v100),
                        SBYTE12(v100),
                        v48,
                        SBYTE4(v95),
                        v67,
                        (__int64)v118,
                        (__int64)v117,
                        (__int64)v116,
                        (__int64)v115,
                        v104,
                        SBYTE8(v104),
                        SBYTE4(v104),
                        SBYTE12(v104),
                        v53,
                        v84,
                        v103,
                        SBYTE8(v103),
                        SBYTE4(v103),
                        SBYTE12(v103),
                        (char)Src);
                    goto LABEL_85;
                  }
                  v46 = Src;
                  goto LABEL_83;
                }
                goto LABEL_71;
              }
LABEL_61:
              v64 = *(_OWORD *)(v47 + 96);
              v48 = *(_QWORD *)(v47 + 112);
              v95 = v48;
              v100 = v64;
              v49 = *(_DWORD *)(v47 + 752);
              v53 = *(_DWORD *)(v47 + 748);
              v84 = v49;
              v65 = *(_OWORD *)(v47 + 756);
              v104 = *(_OWORD *)(v47 + 732);
              v103 = v65;
              if ( v50 == 2 )
              {
                v54 = *(_DWORD *)(v47 + 60);
                goto LABEL_72;
              }
              goto LABEL_62;
            }
            goto LABEL_70;
          }
LABEL_58:
          v63 = (unsigned int *)(v47 + 40);
          goto LABEL_71;
        }
LABEL_60:
        v63 = (unsigned int *)(v47 + 812);
        goto LABEL_61;
      }
    }
    else
    {
      v52 = *(_QWORD *)(v47 + 16);
    }
    v63 = (unsigned int *)(v47 + 56);
LABEL_70:
    v66 = *(_OWORD *)(v47 + 32);
    v48 = *(_QWORD *)(v47 + 48);
    v95 = v48;
    v100 = v66;
LABEL_71:
    if ( v50 != 2 )
      goto LABEL_73;
LABEL_72:
    v55 = *(_DWORD *)(v47 + 796);
    goto LABEL_73;
  }
LABEL_14:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v110);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v90);
  return 3221225485LL;
}
