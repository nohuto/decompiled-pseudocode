/*
 * XREFs of ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140317D20
 * Callers:
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAUVIDMM_MULTI_ALLOC@@IE@Z @ 0x140292440 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     DxgkPresent @ 0x1402F11A0 (DxgkPresent.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402F3D20 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkPresentRedirected @ 0x140316770 (DxgkPresentRedirected.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14034562C (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEBD@Z @ 0x14037E1A0 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEBD@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1403886A4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     DxgkSubmitPresentToHwQueue @ 0x140420F70 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x14001294C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer @ 0x140014748 (McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0ppqqxdqp_EtwWriteTransfer @ 0x14001597C (McTemplateK0ppqqxdqp_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x14002B2E0 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002B770 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D5E0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D6D0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1400332CC (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034400 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?VidSchWaitForSingleSyncObject@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x14003642C (-VidSchWaitForSingleSyncObject@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?VidSchSubmitCommandContextless@VIDSCH_EXPORT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400519B0 (-VidSchSubmitCommandContextless@VIDSCH_EXPORT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAU_VIDSCH_DEV.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z @ 0x140057794 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?DxgkQueryHostCompSurfInfo@@YAJ_JAEAIAEA_K@Z @ 0x140061884 (-DxgkQueryHostCompSurfInfo@@YAJ_JAEAIAEA_K@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGDEVICESYNCOBJECT@@@Z @ 0x140182D04 (-VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONT.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x140186DE0 (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendSubmitVailPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGSYNCOBJECT@@PEAVDXGALLOCATION_VGPU@@I_K@Z @ 0x1402F99B0 (-VmBusSendSubmitVailPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXG.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1402FCB50 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x14032C7C4 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?GetSizeOfPresentToken@@YAIPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1403498F0 (-GetSizeOfPresentToken@@YAIPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x14035B064 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x14037DF88 (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ @ 0x1403864F8 (-GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1403DA558 (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1404233E0 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 */

__int64 __fastcall SubmitPresentHistoryToken(
        struct _D3DKMT_PRESENTHISTORYTOKEN *a1,
        struct COREDEVICEACCESS *a2,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a3,
        struct CWin32kLocks *a4,
        char a5,
        union _LARGE_INTEGER *a6,
        struct DXGK_PRESENT_PARAMS *a7,
        struct VIDSCH_SUBMIT_DATA_BASE *a8,
        struct DXGCONTEXT *a9,
        struct _PRESENT_REDIRECTED_PARAMS *a10,
        char *a11)
{
  struct VIDSCH_SUBMIT_DATA_BASE *v12; // r15
  unsigned int v13; // r13d
  const wchar_t *v15; // r9
  __int64 v17; // rax
  DXGADAPTER *v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v24; // rcx
  DXGPRESENTHISTORYTOKENQUEUE *v25; // rax
  void *v26; // rdi
  __int64 v27; // rcx
  DXGADAPTER *v28; // rbx
  union _LARGE_INTEGER *v29; // rdi
  NTSTATUS v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  const char *v33; // rdx
  int LiveDumpWithWdLogs2; // eax
  unsigned __int8 IsDebuggerPresent; // al
  _WORD *v36; // rcx
  __int64 v37; // rax
  bool v38; // zf
  int v39; // eax
  int v40; // eax
  int v41; // eax
  __int64 v42; // r14
  union _SLIST_HEADER *v43; // r12
  PSLIST_ENTRY v44; // rax
  __int64 v45; // r12
  unsigned int SizeOfPresentToken; // eax
  int v47; // eax
  struct CRefCountedBuffer *v48; // rdi
  volatile signed __int32 *v49; // rsi
  char v50; // cl
  int v51; // ecx
  DXGPRESENTHISTORYTOKENQUEUE *v52; // rax
  struct CRefCountedBuffer *v53; // rcx
  bool v54; // cc
  unsigned int v55; // edx
  void *v56; // r8
  int PresentPrivateDriverData; // eax
  int v58; // eax
  int v59; // r11d
  union _LARGE_INTEGER *v60; // rax
  int v61; // r14d
  __int64 v62; // r9
  unsigned int *v63; // rdx
  __int128 v64; // xmm0
  __int64 v65; // rcx
  __int64 v66; // r8
  __int128 v67; // xmm0
  int v68; // ecx
  __int128 v69; // xmm1
  int v70; // ecx
  unsigned int v71; // r14d
  __int64 v72; // r10
  int v73; // ecx
  DXGCONTEXT *v74; // r10
  struct DXGK_PRESENT_PARAMS *v75; // rcx
  unsigned int v76; // r8d
  int v77; // edx
  __int64 v78; // r10
  __int64 v79; // rax
  struct DXGK_PRESENT_PARAMS *v80; // r8
  _BYTE *Pool2; // r9
  __int64 v82; // rax
  unsigned int v83; // r10d
  unsigned int v84; // edx
  __int64 v85; // r11
  __int64 v86; // r8
  __int64 v87; // rax
  __int64 v88; // rcx
  int v89; // eax
  _BYTE *v90; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v92; // rcx
  __int64 v93; // r14
  PLARGE_INTEGER v94; // rbx
  LONGLONG v95; // r14
  int v96; // edx
  union _LARGE_INTEGER *v97; // r14
  DXGSYNCOBJECT *QuadPart; // rax
  char *v99; // rbx
  __int64 v100; // r8
  unsigned int v101; // r14d
  __int64 v102; // r8
  int v103; // edx
  DXGSYNCOBJECT *v104; // r8
  __int64 v105; // rbx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  VIDSCH_EXPORT *v107; // r10
  __int64 v108; // rcx
  DXGGLOBAL *v109; // rax
  unsigned int v110; // eax
  __int64 v111; // r8
  int v112; // ecx
  struct _EX_RUNDOWN_REF *v113; // rdx
  void *v114; // rcx
  __int64 v115; // rcx
  unsigned int v116; // r15d
  char *v117; // r12
  __int64 v118; // rbx
  struct DXGPROCESS *v119; // rax
  PVOID v120; // r12
  __int64 v121; // rbx
  DXGPROCESS *v122; // rax
  int v123; // eax
  unsigned int v124; // r12d
  struct ADAPTER_RENDER *v125; // rdi
  struct DXGK_PRESENT_PARAMS *v126; // rsi
  __int64 v127; // rbx
  struct VIDMM_ALLOC **v128; // r9
  struct VIDMM_ALLOC **v129; // r9
  PVOID v130; // rdi
  __int64 v131; // rcx
  struct DXGPROCESS *v132; // rax
  BOOLEAN Alertable[8]; // [rsp+28h] [rbp-158h]
  PLARGE_INTEGER Timeout; // [rsp+30h] [rbp-150h]
  __int64 v135; // [rsp+40h] [rbp-140h]
  __int64 v136; // [rsp+40h] [rbp-140h]
  int v137; // [rsp+80h] [rbp-100h]
  int v138; // [rsp+100h] [rbp-80h]
  DXGSYNCOBJECT *v139; // [rsp+100h] [rbp-80h]
  int v140; // [rsp+108h] [rbp-78h]
  int v141; // [rsp+108h] [rbp-78h]
  int v142; // [rsp+108h] [rbp-78h]
  unsigned int v143; // [rsp+108h] [rbp-78h]
  unsigned int v144; // [rsp+10Ch] [rbp-74h] BYREF
  int v145; // [rsp+110h] [rbp-70h]
  PVOID v146; // [rsp+118h] [rbp-68h]
  int v147; // [rsp+120h] [rbp-60h]
  PLARGE_INTEGER Current; // [rsp+128h] [rbp-58h]
  unsigned int v149; // [rsp+130h] [rbp-50h]
  struct DXGK_PRESENT_PARAMS *v150; // [rsp+138h] [rbp-48h]
  volatile signed __int32 *v151; // [rsp+140h] [rbp-40h]
  DXGCONTEXT *v152; // [rsp+148h] [rbp-38h]
  __int64 v153; // [rsp+150h] [rbp-30h]
  void *Src; // [rsp+158h] [rbp-28h]
  PVOID v155; // [rsp+160h] [rbp-20h] BYREF
  struct ADAPTER_RENDER *v156; // [rsp+168h] [rbp-18h]
  __int16 v157; // [rsp+170h] [rbp-10h] BYREF
  __int16 v158; // [rsp+172h] [rbp-Eh] BYREF
  char *v159; // [rsp+178h] [rbp-8h] BYREF
  DXGPRESENTHISTORYTOKENQUEUE *v160; // [rsp+180h] [rbp+0h]
  struct CRefCountedBuffer *v161; // [rsp+188h] [rbp+8h]
  struct DXG_VMBUS_CHANNEL_BASE *v162; // [rsp+190h] [rbp+10h]
  struct _PRESENT_REDIRECTED_PARAMS *v163; // [rsp+198h] [rbp+18h] BYREF
  __int64 v164; // [rsp+1A0h] [rbp+20h] BYREF
  char v165; // [rsp+1A8h] [rbp+28h]
  CWin32kLocks *v166; // [rsp+1B0h] [rbp+30h]
  DXGADAPTER *v167[2]; // [rsp+1B8h] [rbp+38h] BYREF
  int v168; // [rsp+1C8h] [rbp+48h] BYREF
  int v169; // [rsp+1CCh] [rbp+4Ch] BYREF
  int v170; // [rsp+1D0h] [rbp+50h] BYREF
  int v171; // [rsp+1D4h] [rbp+54h] BYREF
  int v172; // [rsp+1D8h] [rbp+58h] BYREF
  int v173; // [rsp+1DCh] [rbp+5Ch] BYREF
  int v174; // [rsp+1E0h] [rbp+60h] BYREF
  __int64 *v175; // [rsp+1E8h] [rbp+68h]
  int v176; // [rsp+1F0h] [rbp+70h] BYREF
  int v177; // [rsp+1F4h] [rbp+74h] BYREF
  int v178; // [rsp+1F8h] [rbp+78h] BYREF
  DWORD LowPart; // [rsp+1FCh] [rbp+7Ch] BYREF
  int v180; // [rsp+200h] [rbp+80h] BYREF
  char v181[8]; // [rsp+208h] [rbp+88h] BYREF
  __int64 v182; // [rsp+210h] [rbp+90h]
  int v183; // [rsp+218h] [rbp+98h]
  __int128 v184; // [rsp+220h] [rbp+A0h]
  __int64 v185; // [rsp+230h] [rbp+B0h]
  unsigned __int64 v186; // [rsp+238h] [rbp+B8h]
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+240h] [rbp+C0h]
  __int128 v188; // [rsp+248h] [rbp+C8h]
  __int128 v189; // [rsp+258h] [rbp+D8h]
  PVOID Entry; // [rsp+268h] [rbp+E8h] BYREF
  __int64 v191; // [rsp+270h] [rbp+F0h]
  struct CRefCountedBuffer *v192; // [rsp+278h] [rbp+F8h] BYREF
  __int64 v193; // [rsp+280h] [rbp+100h] BYREF
  __int64 v194; // [rsp+288h] [rbp+108h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+290h] [rbp+110h] BYREF
  PVOID Object[2]; // [rsp+2A0h] [rbp+120h] BYREF
  __int64 v197; // [rsp+2B0h] [rbp+130h] BYREF
  PVOID P; // [rsp+2C0h] [rbp+140h]
  _BYTE v199[64]; // [rsp+2C8h] [rbp+148h] BYREF
  int v200; // [rsp+308h] [rbp+188h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+310h] [rbp+190h] BYREF
  void *v202; // [rsp+320h] [rbp+1A0h]
  int v203; // [rsp+328h] [rbp+1A8h]
  int v204; // [rsp+32Ch] [rbp+1ACh]
  __int16 *v205; // [rsp+330h] [rbp+1B0h]
  __int64 v206; // [rsp+338h] [rbp+1B8h]
  __int64 *v207; // [rsp+340h] [rbp+1C0h]
  __int64 v208; // [rsp+348h] [rbp+1C8h]
  struct CRefCountedBuffer **v209; // [rsp+350h] [rbp+1D0h]
  __int64 v210; // [rsp+358h] [rbp+1D8h]
  int *v211; // [rsp+360h] [rbp+1E0h]
  __int64 v212; // [rsp+368h] [rbp+1E8h]
  int *v213; // [rsp+370h] [rbp+1F0h]
  __int64 v214; // [rsp+378h] [rbp+1F8h]
  int *v215; // [rsp+380h] [rbp+200h]
  __int64 v216; // [rsp+388h] [rbp+208h]
  int *v217; // [rsp+390h] [rbp+210h]
  __int64 v218; // [rsp+398h] [rbp+218h]
  int *v219; // [rsp+3A0h] [rbp+220h]
  __int64 v220; // [rsp+3A8h] [rbp+228h]
  _WORD *v221; // [rsp+3B0h] [rbp+230h]
  int v222; // [rsp+3B8h] [rbp+238h]
  int v223; // [rsp+3BCh] [rbp+23Ch]
  __int64 *v224; // [rsp+3C0h] [rbp+240h]
  __int64 v225; // [rsp+3C8h] [rbp+248h]
  __int16 *v226; // [rsp+3D0h] [rbp+250h]
  __int64 v227; // [rsp+3D8h] [rbp+258h]
  DWORD *p_LowPart; // [rsp+3E0h] [rbp+260h]
  __int64 v229; // [rsp+3E8h] [rbp+268h]
  int *v230; // [rsp+3F0h] [rbp+270h]
  __int64 v231; // [rsp+3F8h] [rbp+278h]
  int *v232; // [rsp+400h] [rbp+280h]
  __int64 v233; // [rsp+408h] [rbp+288h]
  int *v234; // [rsp+410h] [rbp+290h]
  __int64 v235; // [rsp+418h] [rbp+298h]
  int *v236; // [rsp+420h] [rbp+2A0h]
  __int64 v237; // [rsp+428h] [rbp+2A8h]
  int *v238; // [rsp+430h] [rbp+2B0h]
  __int64 v239; // [rsp+438h] [rbp+2B8h]
  int *v240; // [rsp+440h] [rbp+2C0h]
  __int64 v241; // [rsp+448h] [rbp+2C8h]
  _BYTE v242[64]; // [rsp+450h] [rbp+2D0h] BYREF
  _BYTE v243[64]; // [rsp+490h] [rbp+310h] BYREF
  char v244[64]; // [rsp+4D0h] [rbp+350h] BYREF
  _DWORD v245[16]; // [rsp+510h] [rbp+390h] BYREF

  v12 = a8;
  v13 = 0;
  Current = a6;
  v150 = a7;
  Src = a1;
  v166 = a4;
  v175 = (__int64 *)a8;
  v152 = a9;
  v163 = a10;
  v159 = a11;
  if ( a9 )
  {
    if ( a10 )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      v15 = L"Context can not be with sync object, returning 0x%I64x";
      WdLogGlobalForLineNumber = 3040;
LABEL_4:
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v15, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
      return 3221225485LL;
    }
    v17 = *((_QWORD *)a9 + 2);
    v144 = 0;
    v153 = 0LL;
    v18 = *(DXGADAPTER **)(*(_QWORD *)(v17 + 16) + 16LL);
  }
  else
  {
    if ( !a10 || !*((_DWORD *)a10 + 2) || !*(_QWORD *)a10 )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      v15 = L"Sync Object and pPresentRedirected must be specified when context is null, returning 0x%I64x";
      WdLogGlobalForLineNumber = 3048;
      goto LABEL_4;
    }
    v18 = (DXGADAPTER *)*((_QWORD *)a10 + 2);
    v153 = *(_QWORD *)a10;
    v144 = *((_DWORD *)a10 + 2);
  }
  v19 = *((_QWORD *)v18 + 391);
  v167[0] = v18;
  v156 = (struct ADAPTER_RENDER *)v19;
  v20 = *(_QWORD *)(v19 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v20 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v20 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3069;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pRenderCore->IsCoreResourceSharedOwner()",
      3069LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v182 = v19 + 976;
  if ( v19 != -976 )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( *(struct _KTHREAD **)(v19 + 984) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1575;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1575LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v19 + 976));
  v183 = 1;
  CurrentProcess = PsGetCurrentProcess(v21);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  if ( ProcessSessionId >= *(_DWORD *)(v19 + 1008)
    || (v24 = 8LL * ProcessSessionId, !*(_QWORD *)(v24 + *(_QWORD *)(v19 + 1016)))
    || (_mm_lfence(), v25 = *(DXGPRESENTHISTORYTOKENQUEUE **)(v24 + *(_QWORD *)(v19 + 1016)), (v160 = v25) == 0LL) )
  {
    WdLogSingleEntry1(4LL, v18);
    WdLogGlobalForLineNumber = 3077;
    goto LABEL_256;
  }
  v26 = (void *)*((_QWORD *)v25 + 8);
  v146 = v26;
  ObfReferenceObject(v26);
  v183 = 0;
  _InterlockedDecrement((volatile signed __int32 *)(v19 + 992));
  ExReleasePushLockSharedEx(v19 + 976, 0LL);
  KeLeaveCriticalRegion();
  COREDEVICEACCESS::Release(a2);
  if ( *((_BYTE *)a3 + 16) )
  {
    v27 = *((_QWORD *)a3 + 1) + 136LL;
    *((_BYTE *)a3 + 16) = 0;
    _InterlockedDecrement((volatile signed __int32 *)(v27 + 16));
    ExReleasePushLockSharedEx(v27, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference(*((DXGADAPTER **)a3 + 1));
  }
  if ( v166 )
    CWin32kLocks::Unlock(v166);
  v28 = v167[0];
  Object[1] = v26;
  v29 = (union _LARGE_INTEGER *)&v194;
  v194 = -200000000LL;
  Object[0] = (char *)v167[0] + 3096;
  if ( Current )
    v29 = Current;
  v30 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, v29, 0LL);
  if ( !v30 )
  {
    WdLogSingleEntry1(4LL, v167[0]);
    WdLogGlobalForLineNumber = 3109;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a3);
LABEL_52:
    COREDEVICEACCESS::AcquireSharedUncheck(a2, v33);
    ObfDereferenceObject(v146);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v181);
    return 3221226166LL;
  }
  if ( v30 == 258 )
  {
    if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v167[0] + 1245) <= 2 )
    {
      v185 = 1LL;
      LiveDumpWithWdLogs2 = DxgCreateLiveDumpWithWdLogs2(403LL, 2068LL, 0LL, 0LL, 0LL, 1LL);
      LODWORD(v161) = *((_DWORD *)v167[0] + 103);
      v31 = *((unsigned int *)v167[0] + 104);
      HIDWORD(v161) = *((_DWORD *)v167[0] + 104);
      v140 = LiveDumpWithWdLogs2;
      if ( (unsigned int)dword_14015B660 > 5
        && (qword_14015B670 & 0x400000040000LL) != 0
        && (qword_14015B678 & 0x400000040000LL) == qword_14015B678 )
      {
        LOBYTE(v31) = 1;
        v168 = *((unsigned __int8 *)v167[0] + 209);
        IsDebuggerPresent = WdIsDebuggerPresent(v31);
        v36 = (_WORD *)*((_QWORD *)v28 + 250);
        v169 = IsDebuggerPresent;
        v170 = *((_DWORD *)v28 + 804);
        v171 = *((unsigned __int8 *)v28 + 3053);
        v172 = *((_DWORD *)v28 + 1245);
        v180 = v140;
        LowPart = v29->LowPart;
        v158 = *((_WORD *)v28 + 1502);
        v197 = *((_QWORD *)v28 + 251);
        v178 = *((_DWORD *)v28 + 109);
        v177 = *((_DWORD *)v28 + 108);
        v176 = *((_DWORD *)v28 + 107);
        v174 = *((_DWORD *)v28 + 106);
        v173 = *((_DWORD *)v28 + 105);
        v192 = v161;
        v240 = &v168;
        v238 = &v169;
        v236 = &v170;
        v234 = &v171;
        v232 = &v172;
        v230 = &v180;
        p_LowPart = &LowPart;
        v226 = &v158;
        v224 = &v197;
        v193 = 0x1000000LL;
        v157 = 1;
        v241 = 4LL;
        v239 = 4LL;
        v237 = 4LL;
        v235 = 4LL;
        v233 = 4LL;
        v231 = 4LL;
        v229 = 4LL;
        v227 = 2LL;
        v225 = 8LL;
        if ( v36 )
        {
          v37 = -1LL;
          do
            v38 = v36[++v37] == 0;
          while ( !v38 );
          v39 = 2 * v37 + 2;
        }
        else
        {
          v36 = &unk_1400C5C48;
          v39 = 2;
        }
        v222 = v39;
        v221 = v36;
        v219 = &v178;
        v223 = 0;
        v217 = &v177;
        v220 = 4LL;
        v215 = &v176;
        v213 = &v174;
        v211 = &v173;
        v209 = &v192;
        v207 = &v193;
        v205 = &v157;
        *(_DWORD *)&EventDescriptor.Level = 5;
        EventDescriptor.Keyword = 0x400000040000LL;
        UserData.Ptr = (ULONGLONG)off_14015B668;
        v218 = 4LL;
        v216 = 4LL;
        v214 = 4LL;
        v212 = 4LL;
        v210 = 8LL;
        v208 = 8LL;
        v206 = 2LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        UserData.Size = *(unsigned __int16 *)off_14015B668;
        v202 = &unk_14013B4C0;
        v204 = 1;
        UserData.Reserved = 2;
        v203 = 299;
        EtwWriteTransfer(qword_14015B680, &EventDescriptor, 0LL, 0LL, 0x14u, &UserData);
      }
    }
    if ( Current )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v31, (__int64)"h", v32, 19);
      WdLogSingleEntry1(4LL, 258LL);
      WdLogGlobalForLineNumber = 3174;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a3);
      v40 = COREDEVICEACCESS::AcquireShared(a2, v159);
      if ( v40 >= 0 )
      {
        ObfDereferenceObject(v146);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v181);
        return 258LL;
      }
      WdLogSingleEntry1(4LL, v40);
      WdLogGlobalForLineNumber = 3182;
      goto LABEL_52;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v31, (__int64)"h", v32, 19);
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3158;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Present token is not submitted due to default semaphore timeout of 20 seconds",
      3158LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) )
    {
      WdLogSingleEntry1(4LL, v28);
      WdLogGlobalForLineNumber = 3163;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a3);
      goto LABEL_52;
    }
  }
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a3);
  v41 = COREDEVICEACCESS::AcquireShared(a2, v159);
  v42 = v41;
  v138 = v41;
  if ( v41 < 0 )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)v146, 0, 1, 0);
    WdLogSingleEntry1(4LL, v42);
    WdLogGlobalForLineNumber = 3198;
    goto LABEL_52;
  }
  v43 = (union _SLIST_HEADER *)v160;
  v44 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v160 + 3);
  v162 = (struct DXG_VMBUS_CHANNEL_BASE *)v44;
  if ( !v44 )
  {
    if ( !DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer((DXGPRESENTHISTORYTOKENQUEUE *)v43)
      || (v44 = ExpInterlockedPopEntrySList(v43 + 3), (v162 = (struct DXG_VMBUS_CHANNEL_BASE *)v44) == 0LL) )
    {
LABEL_253:
      v130 = v146;
      LODWORD(v42) = -1073741801;
      KeReleaseSemaphore((PRKSEMAPHORE)v146, 0, 1, 0);
      WdLogSingleEntry2(6LL, v43, -1073741801LL);
      WdLogGlobalForLineNumber = 3598;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Present token is not submitted due to no memory, PresentHistoryTokenQueue: 0x%I64x, returning 0x%I64x",
        (__int64)v43,
        -1073741801LL,
        0LL,
        0LL,
        0LL);
LABEL_254:
      ObfDereferenceObject(v130);
      return (unsigned int)v42;
    }
  }
  v45 = (__int64)&v44[1];
  if ( v44 == (PSLIST_ENTRY)-16LL )
  {
    v43 = (union _SLIST_HEADER *)v160;
    goto LABEL_253;
  }
  CVidSchSubmitData::CVidSchSubmitData((CVidSchSubmitData *)&Entry, (struct ADAPTER_RENDER *)v19, a8 == 0LL);
  if ( !a8 )
  {
    v12 = (struct VIDSCH_SUBMIT_DATA_BASE *)Entry;
    v175 = (__int64 *)Entry;
    if ( !Entry )
    {
      KeReleaseSemaphore((PRKSEMAPHORE)v146, 0, 1, 0);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 3216;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate VidSchSubmitData",
        3216LL,
        0LL,
        0LL,
        0LL,
        0LL);
      ObfDereferenceObject(v146);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v181);
      return 3221225495LL;
    }
  }
  v149 = 1;
  SizeOfPresentToken = GetSizeOfPresentToken((const struct _D3DKMT_PRESENTHISTORYTOKEN *)Src);
  if ( SizeOfPresentToken - 1 <= 0x437 )
  {
    memmove((void *)v45, Src, SizeOfPresentToken);
    switch ( *(_DWORD *)v45 )
    {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 7:
      case 8:
      case 9:
        v47 = *(_DWORD *)v12;
        v48 = 0LL;
        v49 = 0LL;
        v50 = *(_DWORD *)v12 ^ (32 * a5);
        *((_QWORD *)v12 + 13) = v45;
        *((_DWORD *)v12 + 29) = -1;
        v51 = v47 ^ v50 & 0x20;
        v161 = 0LL;
        v52 = v160;
        *(_DWORD *)v12 = v51 | 0x40000;
        v53 = 0LL;
        *((_QWORD *)v12 + 12) = v52;
        v54 = *((_DWORD *)v28 + 684) < 0x2000;
        v151 = 0LL;
        v155 = 0LL;
        v166 = 0LL;
        if ( v54 && !*((_BYTE *)v28 + 3036) )
          goto LABEL_74;
        if ( v152 )
        {
          if ( !v150 || ((*(_DWORD *)Src - 1) & 0xFFFFFFFD) == 0 )
            goto LABEL_72;
          v55 = *((_DWORD *)v150 + 368);
          v56 = (void *)*((_QWORD *)v150 + 185);
        }
        else
        {
          v55 = *(_DWORD *)(v153 + 1104);
          v56 = *(void **)(v153 + 1112);
        }
        PresentPrivateDriverData = ReadPresentPrivateDriverData(v28, v55, v56, (struct CRefCountedBuffer **)&v155);
        v42 = PresentPrivateDriverData;
        v138 = PresentPrivateDriverData;
        if ( PresentPrivateDriverData < 0 )
        {
          WdLogSingleEntry1(2LL, PresentPrivateDriverData);
          WdLogGlobalForLineNumber = 3276;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to read private driver data. Returning 0x%I64x",
            v42,
            0LL,
            0LL,
            0LL,
            0LL);
          v138 = v42;
          goto LABEL_221;
        }
        v53 = (struct CRefCountedBuffer *)v155;
        v151 = (volatile signed __int32 *)v155;
LABEL_72:
        if ( v53 )
        {
          *((_QWORD *)v12 + 100) = v53;
          v48 = v53;
          *((_DWORD *)v12 + 1) |= 4u;
          v161 = v53;
        }
LABEL_74:
        if ( !*((_BYTE *)v28 + 209) )
        {
          if ( !v152 && !*((_BYTE *)v28 + 3057) )
            goto LABEL_79;
          v58 = PrepareIndependentFlipToken((struct _D3DKMT_PRESENTHISTORYTOKEN *)v45, v150, v12, v152, v163, v53);
          v49 = (volatile signed __int32 *)*((_QWORD *)v12 + 4);
          LODWORD(v42) = v58;
          v138 = v58;
          v166 = (CWin32kLocks *)v49;
        }
        if ( (int)v42 < 0 )
          goto LABEL_221;
LABEL_79:
        if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0LL )
        {
          v42 = (__int64)v156;
          goto LABEL_117;
        }
        v59 = *(_DWORD *)v45;
        LOBYTE(v60) = 0;
        v141 = *(_DWORD *)(v45 + 4);
        v61 = 0;
        v184 = 0LL;
        Current = 0LL;
        v145 = 0;
        v147 = 0;
        v189 = 0LL;
        v188 = 0LL;
        switch ( v59 )
        {
          case 1:
            v62 = *(_QWORD *)(v45 + 16);
            goto LABEL_83;
          case 2:
            v62 = *(_QWORD *)(v45 + 24);
            goto LABEL_88;
          case 3:
            v62 = *(_QWORD *)(v45 + 16);
            goto LABEL_91;
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
            v62 = *(_QWORD *)(v45 + 16);
            goto LABEL_96;
          default:
            v62 = 0LL;
            switch ( v59 )
            {
              case 1:
LABEL_83:
                v63 = (unsigned int *)(v45 + 56);
                break;
              case 2:
LABEL_88:
                v63 = (unsigned int *)(v45 + 812);
                goto LABEL_89;
              case 3:
LABEL_91:
                v63 = (unsigned int *)(v45 + 40);
                goto LABEL_85;
              default:
LABEL_96:
                v63 = 0LL;
                if ( v59 != 1 )
                {
                  if ( v59 != 2 )
                  {
                    v68 = 0;
                    goto LABEL_99;
                  }
LABEL_89:
                  v67 = *(_OWORD *)(v45 + 96);
                  v60 = *(union _LARGE_INTEGER **)(v45 + 112);
                  Current = v60;
                  v184 = v67;
                  v68 = *(_DWORD *)(v45 + 748);
                  v69 = *(_OWORD *)(v45 + 756);
                  v61 = *(_DWORD *)(v45 + 752);
                  v189 = *(_OWORD *)(v45 + 732);
                  v145 = v68;
                  v188 = v69;
                  v147 = v61;
LABEL_99:
                  LODWORD(v153) = v68;
                  if ( v59 != 2 )
                  {
                    v145 = v68;
                    v147 = v61;
                    if ( v59 == 6 )
                    {
                      LODWORD(Src) = *(_DWORD *)(v45 + 24);
                      v70 = v153;
                      goto LABEL_103;
                    }
                    if ( v59 == 9 )
                    {
                      LODWORD(Src) = *(_DWORD *)(v45 + 32);
                      v70 = v145;
LABEL_103:
                      v145 = v70;
                      v65 = (unsigned int)Src;
                      v147 = v61;
LABEL_104:
                      v66 = 0LL;
                      goto LABEL_105;
                    }
LABEL_85:
                    v65 = 0LL;
                    LODWORD(Src) = 0;
                    if ( v59 == 2 )
                    {
                      v66 = *(unsigned int *)(v45 + 796);
                      goto LABEL_105;
                    }
                    goto LABEL_104;
                  }
                  v65 = *(unsigned int *)(v45 + 60);
                  v66 = *(unsigned int *)(v45 + 796);
                  LODWORD(Src) = *(_DWORD *)(v45 + 60);
LABEL_105:
                  LODWORD(v153) = v66;
                  if ( v63 )
                  {
                    v71 = *v63;
                    if ( *v63 >= 0x10 )
                    {
                      v71 = 16;
                    }
                    else if ( !v71 )
                    {
LABEL_114:
                      v137 = v71;
                      v42 = (__int64)v156;
                      McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer(
                        HIDWORD(Current),
                        (__int64)v63,
                        v66,
                        (__int64)v156,
                        v45,
                        v59,
                        v141,
                        v62,
                        (char)Src,
                        v153,
                        v184,
                        SBYTE8(v184),
                        SBYTE4(v184),
                        SBYTE12(v184),
                        (char)v60,
                        SBYTE4(Current),
                        v137,
                        (__int64)v245,
                        (__int64)v244,
                        (__int64)v243,
                        (__int64)v242,
                        v189,
                        SBYTE8(v189),
                        SBYTE4(v189),
                        SBYTE12(v189),
                        v145,
                        v147,
                        v188,
                        SBYTE8(v188),
                        SBYTE4(v188),
                        SBYTE12(v188),
                        0);
                      goto LABEL_117;
                    }
                    v63 += 3;
                    v72 = v71;
                    v66 = 0LL;
                    do
                    {
                      v73 = *(v63 - 2);
                      v63 += 4;
                      *(_DWORD *)((char *)v245 + v66) = v73;
                      v66 += 4LL;
                      *(_DWORD *)&v243[v66 + 60] = *(v63 - 4);
                      *(_DWORD *)&v242[v66 + 60] = *(v63 - 5);
                      *(_DWORD *)&v242[v66 - 4] = *(v63 - 3);
                      --v72;
                    }
                    while ( v72 );
                    goto LABEL_114;
                  }
                  v42 = (__int64)v156;
                  LODWORD(v135) = v65;
                  LODWORD(Timeout) = v141;
                  *(_DWORD *)Alertable = v59;
                  McTemplateK0ppqqxdqp_EtwWriteTransfer(
                    v65,
                    &EventSubmitPresentHistory,
                    v66,
                    v156,
                    v45,
                    *(_QWORD *)Alertable,
                    Timeout,
                    v62,
                    v135,
                    v66,
                    0LL);
LABEL_117:
                  v74 = v152;
                  if ( !v152 )
                    goto LABEL_149;
                  v75 = v150;
                  if ( !v150 )
                  {
                    if ( !*((_BYTE *)v28 + 209) && (*((_DWORD *)v152 + 98) & 0x10) != 0 )
                      DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(v152, 0LL, 0, 1, v12, 0);
                    v149 = 1;
                    goto LABEL_149;
                  }
                  *((_BYTE *)v150 + 1512) = (*((_BYTE *)v12 + 3) & 1) == 0;
                  if ( !*((_BYTE *)v28 + 209) && (*((_DWORD *)v74 + 98) & 0x10) != 0 )
                  {
                    v76 = *((_DWORD *)v75 + 23);
                    v149 = v76 + 1;
                    DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(
                      v74,
                      *((struct DXGCONTEXT ***)v75 + 187),
                      v76,
                      1,
                      v12,
                      0);
                    goto LABEL_149;
                  }
                  if ( !*((_DWORD *)v75 + 23) || !DXGADAPTER::IsDxgmms2(v28) )
                    goto LABEL_149;
                  v79 = *(_QWORD *)(v78 + 16);
                  v149 = v77 + 1;
                  v186 = _InterlockedIncrement64((volatile signed __int64 *)(v79 + 1928));
                  BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(*(DXGDEVICE **)(v78 + 16));
                  if ( !BroadcastPresentSyncObject )
                  {
                    WdLogSingleEntry1(2LL, -1073741801LL);
                    WdLogGlobalForLineNumber = 3366;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      0xFFFFFFFFLL,
                      L"Failed to create present sync object. Returning 0x%I64x",
                      -1073741801LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    LODWORD(v42) = -1073741801;
                    v138 = -1073741801;
                    goto LABEL_221;
                  }
                  v80 = v150;
                  Pool2 = 0LL;
                  P = 0LL;
                  v200 = 0;
                  v82 = *((unsigned int *)v150 + 23);
                  v142 = v82;
                  if ( (unsigned int)v82 <= 8 )
                  {
                    Pool2 = v199;
                    P = v199;
                    if ( !(_DWORD)v82 )
                    {
LABEL_136:
                      v200 = v82;
                      goto LABEL_137;
                    }
                    memset(v199, 0, 8 * v82);
                    Pool2 = P;
                  }
                  else
                  {
                    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v82 < 8 )
                    {
LABEL_137:
                      if ( !Pool2 )
                      {
                        LODWORD(v42) = -1073741801;
                        v138 = -1073741801;
                        goto LABEL_221;
                      }
                      v83 = v149;
                      v84 = 1;
                      if ( v149 > 1 )
                      {
                        v85 = 8LL;
                        while ( 1 )
                        {
                          v86 = *(_QWORD *)(v85 + *((_QWORD *)v80 + 187));
                          if ( (*(_DWORD *)(v86 + 392) & 0x10) != 0 )
                            break;
                          v87 = *(_QWORD *)(v86 + 256);
                          v88 = v84 - 1;
                          v80 = v150;
                          ++v84;
                          v85 += 8LL;
                          *(_QWORD *)&Pool2[8 * v88] = v87;
                          if ( v84 >= v83 )
                            goto LABEL_143;
                        }
                        LODWORD(v42) = -1073741811;
                        v138 = -1073741811;
                        goto LABEL_161;
                      }
LABEL_143:
                      LODWORD(v42) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v42 + 736) + 8LL)
                                                                                       + 648LL))(
                                       0LL,
                                       0LL,
                                       *((unsigned int *)v150 + 23));
                      v138 = v42;
                      if ( (int)v42 < 0 )
                      {
LABEL_161:
                        v90 = P;
                        goto LABEL_162;
                      }
                      v89 = VIDSCH_EXPORT::VidSchWaitForSingleSyncObject(
                              *((VIDSCH_EXPORT **)v156 + 92),
                              *((struct _VIDSCH_CONTEXT **)v152 + 32),
                              BroadcastPresentSyncObject,
                              v186);
                      v90 = P;
                      LODWORD(v42) = v89;
                      v138 = v89;
                      if ( v89 < 0 )
                      {
LABEL_162:
                        if ( v90 != v199 && v90 )
                          ExFreePoolWithTag(v90, 0);
                        goto LABEL_221;
                      }
                      if ( P != v199 && P )
                        ExFreePoolWithTag(P, 0);
                      v151 = (volatile signed __int32 *)v155;
                      P = 0LL;
                      v200 = 0;
LABEL_149:
                      v139 = 0LL;
                      Current = 0LL;
                      Global = DXGGLOBAL::GetGlobal();
                      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v164, Global, 0);
                      if ( !v144 )
                      {
                        v42 = (__int64)v151;
                        QuadPart = 0LL;
                        goto LABEL_180;
                      }
                      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)&v164);
                      v93 = (v144 >> 6) & 0xFFFFFF;
                      if ( *((int *)v28 + 751) >= 2000 )
                      {
                        Current = (PLARGE_INTEGER)DXGPROCESS::GetCurrent(v92);
                        v94 = Current + 31;
                        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)&Current[31]);
                        if ( (unsigned int)v93 >= Current[37].LowPart )
                          goto LABEL_157;
                        v95 = Current[35].QuadPart + 16 * v93;
                        if ( ((v144 >> 25) & 0x60) != (*(_BYTE *)(v95 + 8) & 0x60) )
                          goto LABEL_157;
                        if ( (*(_DWORD *)(v95 + 8) & 0x2000) != 0 )
                          goto LABEL_157;
                        v96 = *(_DWORD *)(v95 + 8) & 0x1F;
                        if ( !v96 )
                          goto LABEL_157;
                        if ( v96 != 11 )
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
LABEL_157:
                          _InterlockedDecrement((volatile signed __int32 *)&Current[33]);
                          ExReleasePushLockSharedEx(v94, 0LL);
                          KeLeaveCriticalRegion();
                          goto LABEL_158;
                        }
                        v97 = *(union _LARGE_INTEGER **)v95;
                        _InterlockedDecrement((volatile signed __int32 *)&Current[33]);
                        Current = v97;
                        ExReleasePushLockSharedEx(v94, 0LL);
                        KeLeaveCriticalRegion();
                        if ( !v97 )
                        {
LABEL_158:
                          LODWORD(v42) = -1073741811;
                          WdLogSingleEntry2(2LL, v144, -1073741811LL);
                          WdLogGlobalForLineNumber = 3440;
                          DxgkLogInternalTriageEvent(
                            0LL,
                            0x40000,
                            0xFFFFFFFFLL,
                            L"hSyncObj (0x%I64x) destroyed, returning 0x%I64x",
                            v144,
                            -1073741811LL,
                            0LL,
                            0LL,
                            0LL);
                          v138 = -1073741811;
                          if ( v165 )
                          {
                            v165 = 0;
                            ExReleaseResourceLite(*(PERESOURCE *)(v164 + 600));
                            KeLeaveCriticalRegion();
                          }
                          goto LABEL_221;
                        }
                        QuadPart = (DXGSYNCOBJECT *)v97[4].QuadPart;
                        v42 = (__int64)v155;
                        v28 = v167[0];
                        v151 = (volatile signed __int32 *)v155;
                        v139 = QuadPart;
LABEL_180:
                        if ( !*((_BYTE *)v28 + 209) )
                        {
                          if ( v152 )
                          {
                            if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
                            {
                              if ( *((struct _KTHREAD **)v152 + 56) == KeGetCurrentThread() )
                              {
LABEL_187:
                                LODWORD(v42) = DXGCONTEXT::SubmitCommandToImplicitQueue(v152, v12);
                                v138 = v42;
                                goto LABEL_218;
                              }
                            }
                            else if ( *((struct _KTHREAD **)v152 + 56) == KeGetCurrentThread() )
                            {
                              goto LABEL_187;
                            }
                            WdLogSingleEntry0(1LL);
                            WdLogGlobalForLineNumber = 3465;
                            DxgkLogInternalTriageEvent(
                              0LL,
                              262146,
                              0xFFFFFFFFLL,
                              L"pContext->GetContextLock()->IsExclusiveOwner()",
                              3465LL,
                              0LL,
                              0LL,
                              0LL,
                              0LL);
                            goto LABEL_187;
                          }
                          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v167, (DXGSYNCOBJECT *)((char *)QuadPart + 32), 0);
                          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v167);
                          VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(v139, v156);
                          LODWORD(v42) = VIDSCH_EXPORT::VidSchSubmitCommandContextless(
                                           v107,
                                           v12,
                                           *(struct _VIDSCH_DEVICE **)(*((_QWORD *)v163 + 3) + 800LL),
                                           VidSchSyncObject);
                          v138 = v42;
                          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v167);
LABEL_218:
                          if ( v165 )
                          {
                            v165 = 0;
                            ExReleaseResourceLite(*(PERESOURCE *)(v164 + 600));
                            KeLeaveCriticalRegion();
                          }
                          if ( (int)v42 >= 0 )
                          {
LABEL_235:
                            if ( v49 && _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
                            {
                              if ( *(_QWORD *)v49 )
                                ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v49, (PVOID)v49);
                              else
                                ExFreePoolWithTag((PVOID)v49, 0);
                            }
                            if ( v48 && _InterlockedExchangeAdd((volatile signed __int32 *)v48 + 3, 0xFFFFFFFF) == 1 )
                            {
                              if ( *(_QWORD *)v48 )
                                ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v48, v48);
                              else
                                ExFreePoolWithTag(v48, 0);
                            }
                            v130 = v146;
LABEL_245:
                            if ( Entry )
                              ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v191 + 1424), Entry);
                            goto LABEL_254;
                          }
LABEL_221:
                          KeReleaseSemaphore((PRKSEMAPHORE)v146, 0, 1, 0);
                          if ( (*(_DWORD *)v12 & 0x1000000) != 0 )
                          {
                            v124 = v149;
                            if ( v149 )
                            {
                              v125 = v156;
                              if ( v152 )
                              {
                                v126 = v150;
                                v127 = 0LL;
                                do
                                {
                                  if ( *((_BYTE *)v12 + 356) )
                                    v128 = (struct VIDMM_ALLOC **)((char *)v12
                                                                 + 64 * (unsigned __int64)(v13 * *((_DWORD *)v12 + 151))
                                                                 + *((_DWORD *)v12 + 151)
                                                                 * ((8 * *((_DWORD *)v12 + 152) + 231) & 0xFFFFFFF8)
                                                                 + 648);
                                  else
                                    v128 = (struct VIDMM_ALLOC **)((char *)v12 + 504);
                                  VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
                                    *((VIDMM_EXPORT **)v125 + 95),
                                    *((struct VIDMM_GLOBAL **)v125 + 96),
                                    1 << *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v126 + 187) + v127) + 388LL),
                                    *v128);
                                  ++v13;
                                  v127 += 8LL;
                                }
                                while ( v13 < v124 );
                                v49 = (volatile signed __int32 *)v166;
                                LODWORD(v42) = v138;
                              }
                              else
                              {
                                do
                                {
                                  if ( *((_BYTE *)v12 + 356) )
                                    v129 = (struct VIDMM_ALLOC **)((char *)v12
                                                                 + 64 * (unsigned __int64)(v13 * *((_DWORD *)v12 + 151))
                                                                 + *((_DWORD *)v12 + 151)
                                                                 * ((8 * *((_DWORD *)v12 + 152) + 231) & 0xFFFFFFF8)
                                                                 + 648);
                                  else
                                    v129 = (struct VIDMM_ALLOC **)((char *)v12 + 504);
                                  VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
                                    *((VIDMM_EXPORT **)v125 + 95),
                                    *((struct VIDMM_GLOBAL **)v125 + 96),
                                    1u,
                                    *v129);
                                  ++v13;
                                }
                                while ( v13 < v124 );
                              }
                              v48 = v161;
                            }
                          }
                          goto LABEL_235;
                        }
                        if ( v42 )
                        {
                          _InterlockedIncrement((volatile signed __int32 *)(v42 + 12));
                          v42 = (__int64)v155;
                          v151 = (volatile signed __int32 *)v155;
                        }
                        if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 426) < 0x18u
                          || (v109 = DXGGLOBAL::GetGlobal(), !*((_DWORD *)DXGGLOBAL::GetSessionData(v109) + 4742))
                          || *(_DWORD *)v45 != 2
                          || !v152
                          || (v108 = *(_QWORD *)(*((_QWORD *)v152 + 2) + 40LL),
                              v153 = v108,
                              (*(_DWORD *)(v108 + 408) & 4) == 0)
                          || !v150
                          || (v143 = *((_DWORD *)v150 + 5)) == 0 )
                        {
                          v162 = (DXGADAPTER *)((char *)v28 + 4664);
                          if ( !v152 )
                          {
LABEL_214:
                            v121 = *(_QWORD *)v12;
                            v122 = DXGPROCESS::GetCurrent(v108);
                            v123 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitPresentHistoryToken(
                                     v162,
                                     v122,
                                     (__int64)v152,
                                     v121,
                                     (__int64)v160,
                                     v45,
                                     v42,
                                     (__int64)Current);
                            v120 = (PVOID)v151;
                            LODWORD(v42) = v123;
                            v138 = v123;
                            goto LABEL_215;
                          }
LABEL_213:
                          Current = 0LL;
                          goto LABEL_214;
                        }
                        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v108 + 248));
                        v110 = (v143 >> 6) & 0xFFFFFF;
                        if ( v110 < *(_DWORD *)(v153 + 296) )
                        {
                          v111 = *(_QWORD *)(v153 + 280) + 16LL * v110;
                          if ( ((v143 >> 25) & 0x60) == (*(_BYTE *)(v111 + 8) & 0x60)
                            && (*(_DWORD *)(v111 + 8) & 0x2000) == 0 )
                          {
                            v112 = *(_DWORD *)(v111 + 8) & 0x1F;
                            if ( v112 )
                            {
                              if ( v112 == 5 )
                              {
                                v113 = *(struct _EX_RUNDOWN_REF **)v111;
LABEL_205:
                                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v159, v113);
                                _InterlockedDecrement((volatile signed __int32 *)(v153 + 264));
                                ExReleasePushLockSharedEx(v153 + 248, 0LL);
                                KeLeaveCriticalRegion();
                                if ( v159 )
                                {
                                  v38 = *(_DWORD *)v45 == 2;
                                  v144 = 0;
                                  v163 = 0LL;
                                  if ( v38 )
                                  {
                                    v114 = *(void **)(v45 + 64);
                                    if ( v114 )
                                    {
                                      if ( (int)DxgkQueryHostCompSurfInfo(v114, &v144, (unsigned __int64 *)&v163) >= 0 )
                                      {
                                        v42 = (__int64)v163;
                                        v116 = v144;
                                        v117 = v159;
                                        v118 = *v175;
                                        v119 = DXGPROCESS::GetCurrent(v115);
                                        v136 = (__int64)v117;
                                        v120 = v155;
                                        LODWORD(v42) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitVailPresentHistoryToken(
                                                         (DXGADAPTER *)((char *)v167[0] + 4664),
                                                         (__int64)v119,
                                                         (__int64)v152,
                                                         v118,
                                                         (__int64)v160,
                                                         (__int64)v162 + 16,
                                                         (__int64)v155,
                                                         (__int64)v139,
                                                         v136,
                                                         v116,
                                                         v42);
                                        v138 = v42;
                                        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v159);
                                        v12 = (struct VIDSCH_SUBMIT_DATA_BASE *)v175;
LABEL_215:
                                        if ( (int)v42 < 0 && v120 )
                                          CRefCountedBuffer::RefCountedBufferRelease(v120);
                                        goto LABEL_218;
                                      }
                                    }
                                  }
                                }
                                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v159);
                                v42 = (__int64)v155;
                                v162 = (DXGADAPTER *)((char *)v28 + 4664);
                                v151 = (volatile signed __int32 *)v155;
                                goto LABEL_213;
                              }
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
                            }
                          }
                        }
                        v113 = 0LL;
                        goto LABEL_205;
                      }
                      v151 = (volatile signed __int32 *)DXGPROCESS::GetCurrent(v92);
                      v99 = (char *)(v151 + 62);
                      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v151 + 62));
                      if ( (unsigned int)v93 >= *((_DWORD *)v151 + 74) )
                      {
                        v101 = v144;
                      }
                      else
                      {
                        v100 = (unsigned int)v93;
                        v101 = v144;
                        v102 = *((_QWORD *)v151 + 35) + 16 * v100;
                        if ( ((v144 >> 25) & 0x60) == (*(_BYTE *)(v102 + 8) & 0x60)
                          && (*(_DWORD *)(v102 + 8) & 0x2000) == 0 )
                        {
                          v103 = *(_DWORD *)(v102 + 8) & 0x1F;
                          if ( v103 )
                          {
                            if ( v103 == 8 )
                            {
                              v104 = *(DXGSYNCOBJECT **)v102;
                              _InterlockedDecrement(v151 + 66);
                              v139 = v104;
                              ExReleasePushLockSharedEx(v99, 0LL);
                              KeLeaveCriticalRegion();
                              QuadPart = v139;
                              if ( v139 )
                              {
                                v42 = (__int64)v155;
                                v28 = v167[0];
                                v151 = (volatile signed __int32 *)v155;
                                goto LABEL_180;
                              }
LABEL_177:
                              v105 = v101;
                              LODWORD(v42) = -1073741811;
                              WdLogSingleEntry2(2LL, (unsigned int)v105, -1073741811LL);
                              WdLogGlobalForLineNumber = 3453;
                              DxgkLogInternalTriageEvent(
                                0LL,
                                0x40000,
                                0xFFFFFFFFLL,
                                L"hSyncObj (0x%I64x) destroyed, returning 0x%I64x",
                                v105,
                                -1073741811LL,
                                0LL,
                                0LL,
                                0LL);
                              v138 = -1073741811;
                              if ( v165 )
                                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v164);
                              goto LABEL_221;
                            }
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
                          }
                        }
                      }
                      _InterlockedDecrement(v151 + 66);
                      ExReleasePushLockSharedEx(v99, 0LL);
                      KeLeaveCriticalRegion();
                      goto LABEL_177;
                    }
                    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8LL * (unsigned int)v82, 1265072196LL, 0LL);
                    P = Pool2;
                  }
                  v80 = v150;
                  LODWORD(v82) = v142;
                  goto LABEL_136;
                }
                break;
            }
            v64 = *(_OWORD *)(v45 + 32);
            v60 = *(union _LARGE_INTEGER **)(v45 + 48);
            Current = v60;
            v184 = v64;
            goto LABEL_85;
        }
      default:
        LODWORD(v42) = -1071775733;
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v160 + 3, (PSLIST_ENTRY)(v45 - 16));
        v130 = v146;
        KeReleaseSemaphore((PRKSEMAPHORE)v146, 0, 1, 0);
        v132 = DXGPROCESS::GetCurrent(v131);
        WdLogSingleEntry1(3LL, v132);
        WdLogGlobalForLineNumber = 3588;
        goto LABEL_245;
    }
  }
  WdLogSingleEntry1(3LL, SizeOfPresentToken);
  WdLogGlobalForLineNumber = 3225;
  KeReleaseSemaphore((PRKSEMAPHORE)v146, 0, 1, 0);
  if ( Entry )
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v191 + 1424), Entry);
  ObfDereferenceObject(v146);
LABEL_256:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v181);
  return -1073741811LL;
}
