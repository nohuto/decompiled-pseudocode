/*
 * XREFs of ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140301EA0
 * Callers:
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAUVIDMM_MULTI_ALLOC@@IE@Z @ 0x1402A6890 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     DxgkPresent @ 0x1402EAC90 (DxgkPresent.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402ED810 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkPresentRedirected @ 0x140300910 (DxgkPresentRedirected.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1403337AC (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEBD@Z @ 0x140366670 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEBD@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x140374788 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     DxgkSubmitPresentToHwQueue @ 0x14041D400 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14000E300 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer @ 0x140011548 (McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0ppqqxdqp_EtwWriteTransfer @ 0x14001277C (McTemplateK0ppqqxdqp_EtwWriteTransfer.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x140021DDC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x14002BA80 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002BEF0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DD50 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DE40 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x140033200 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?VidSchWaitForSingleSyncObject@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x14003641C (-VidSchWaitForSingleSyncObject@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?VidSchSubmitCommandContextless@VIDSCH_EXPORT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x140051404 (-VidSchSubmitCommandContextless@VIDSCH_EXPORT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAU_VIDSCH_DEV.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z @ 0x140056FA4 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?DxgkQueryHostCompSurfInfo@@YAJ_JAEAIAEA_K@Z @ 0x140062140 (-DxgkQueryHostCompSurfInfo@@YAJ_JAEAIAEA_K@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGDEVICESYNCOBJECT@@@Z @ 0x140185054 (-VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONT.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x140189868 (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAUDXGK_PRESENT_PARAMS@@1@Z @ 0x1401EB208 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1402B3760 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetSizeOfPresentToken@@YAIPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x140336D50 (-GetSizeOfPresentToken@@YAIPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x14034EF30 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x14035EFA0 (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ @ 0x14036DED0 (-GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1403D3668 (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 *     ?VmBusSendSubmitVailPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGSYNCOBJECT@@PEAVDXGALLOCATION_VGPU@@I_K@Z @ 0x1403DFA58 (-VmBusSendSubmitVailPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXG.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1404201A0 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
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
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v23; // rcx
  PVOID *v24; // rax
  __int64 v25; // rcx
  union _LARGE_INTEGER *v26; // rsi
  NTSTATUS v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  const char *v30; // rdx
  int LiveDumpWithWdLogs2; // eax
  unsigned __int8 IsDebuggerPresent; // al
  _WORD *v33; // rcx
  __int64 v34; // rax
  bool v35; // zf
  int v36; // eax
  int v37; // eax
  int v38; // eax
  __int64 v39; // r14
  union _SLIST_HEADER *v40; // r12
  PSLIST_ENTRY v41; // rax
  __int64 v42; // r12
  unsigned int SizeOfPresentToken; // eax
  int v44; // eax
  struct CRefCountedBuffer *v45; // rdi
  volatile signed __int32 *v46; // rsi
  char v47; // cl
  int v48; // ecx
  DXGPRESENTHISTORYTOKENQUEUE *v49; // rax
  struct CRefCountedBuffer *v50; // rcx
  bool v51; // cc
  unsigned int v52; // edx
  void *v53; // r8
  int PresentPrivateDriverData; // eax
  int v55; // eax
  int v56; // r11d
  union _LARGE_INTEGER *v57; // rax
  int v58; // r14d
  __int64 v59; // r9
  unsigned int *v60; // rdx
  __int128 v61; // xmm0
  __int64 v62; // rcx
  __int64 v63; // r8
  __int128 v64; // xmm0
  int v65; // ecx
  __int128 v66; // xmm1
  int v67; // ecx
  unsigned int v68; // r14d
  __int64 v69; // r10
  int v70; // ecx
  DXGCONTEXT *v71; // r10
  struct DXGK_PRESENT_PARAMS *v72; // rcx
  unsigned int v73; // r8d
  int v74; // edx
  __int64 v75; // r10
  __int64 v76; // rax
  struct DXGK_PRESENT_PARAMS *v77; // r11
  _BYTE *Pool2; // r9
  __int64 v79; // rax
  unsigned int v80; // r10d
  unsigned int v81; // edx
  __int64 v82; // r8
  __int64 v83; // rcx
  int v84; // eax
  _BYTE *v85; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v87; // rcx
  __int64 v88; // r14
  __int64 v89; // rbx
  __int64 v90; // r14
  int v91; // edx
  __int64 v92; // r14
  DXGSYNCOBJECT *v93; // rax
  PLARGE_INTEGER v94; // rbx
  __int64 v95; // r8
  unsigned int v96; // r14d
  LONGLONG v97; // r8
  int v98; // edx
  DXGSYNCOBJECT *v99; // r8
  __int64 v100; // rbx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  VIDSCH_EXPORT *v102; // r10
  union _LARGE_INTEGER *v103; // rcx
  DXGGLOBAL *v104; // rax
  DWORD v105; // eax
  LONGLONG v106; // r8
  int v107; // ecx
  struct _EX_RUNDOWN_REF *v108; // rdx
  void *v109; // rcx
  __int64 v110; // rcx
  unsigned int v111; // r15d
  char *v112; // r12
  __int64 v113; // rbx
  struct DXGPROCESS *v114; // rax
  PVOID v115; // r12
  __int64 v116; // rbx
  DXGPROCESS *v117; // rax
  int v118; // eax
  unsigned int v119; // r12d
  struct ADAPTER_RENDER *v120; // rdi
  struct DXGK_PRESENT_PARAMS *v121; // rsi
  __int64 v122; // rbx
  struct VIDMM_ALLOC **v123; // r9
  struct VIDMM_ALLOC **v124; // r9
  PVOID v125; // rdi
  __int64 v126; // rcx
  struct DXGPROCESS *v127; // rax
  BOOLEAN Alertable[8]; // [rsp+28h] [rbp-158h]
  PLARGE_INTEGER Timeout; // [rsp+30h] [rbp-150h]
  __int64 v130; // [rsp+40h] [rbp-140h]
  char *v131; // [rsp+40h] [rbp-140h]
  int v132; // [rsp+80h] [rbp-100h]
  int v133; // [rsp+100h] [rbp-80h]
  DXGSYNCOBJECT *v134; // [rsp+100h] [rbp-80h]
  int v135; // [rsp+108h] [rbp-78h]
  int v136; // [rsp+108h] [rbp-78h]
  int v137; // [rsp+108h] [rbp-78h]
  unsigned int v138; // [rsp+108h] [rbp-78h]
  unsigned int v139; // [rsp+10Ch] [rbp-74h] BYREF
  int v140; // [rsp+110h] [rbp-70h]
  PVOID v141; // [rsp+118h] [rbp-68h]
  int v142; // [rsp+120h] [rbp-60h]
  unsigned int v143; // [rsp+124h] [rbp-5Ch]
  DXGCONTEXT *v144; // [rsp+128h] [rbp-58h]
  PLARGE_INTEGER v145; // [rsp+130h] [rbp-50h]
  void *Src; // [rsp+138h] [rbp-48h]
  PVOID v147; // [rsp+140h] [rbp-40h] BYREF
  __int64 Current; // [rsp+148h] [rbp-38h]
  PVOID v149; // [rsp+150h] [rbp-30h]
  struct DXGK_PRESENT_PARAMS *v150; // [rsp+158h] [rbp-28h]
  struct ADAPTER_RENDER *v151; // [rsp+160h] [rbp-20h]
  __int16 v152; // [rsp+168h] [rbp-18h] BYREF
  __int16 v153; // [rsp+16Ah] [rbp-16h] BYREF
  __int64 v154; // [rsp+170h] [rbp-10h]
  char *v155; // [rsp+178h] [rbp-8h] BYREF
  DXGPRESENTHISTORYTOKENQUEUE *v156; // [rsp+180h] [rbp+0h]
  struct CRefCountedBuffer *v157; // [rsp+188h] [rbp+8h]
  struct _PRESENT_REDIRECTED_PARAMS *v158; // [rsp+190h] [rbp+10h] BYREF
  struct DXG_VMBUS_CHANNEL_BASE *v159; // [rsp+198h] [rbp+18h]
  CWin32kLocks *v160; // [rsp+1A0h] [rbp+20h]
  __int64 v161; // [rsp+1A8h] [rbp+28h] BYREF
  char v162; // [rsp+1B0h] [rbp+30h]
  int v163; // [rsp+1B8h] [rbp+38h] BYREF
  int v164; // [rsp+1BCh] [rbp+3Ch] BYREF
  int v165; // [rsp+1C0h] [rbp+40h] BYREF
  int v166; // [rsp+1C4h] [rbp+44h] BYREF
  _QWORD v167[2]; // [rsp+1C8h] [rbp+48h] BYREF
  int v168; // [rsp+1D8h] [rbp+58h] BYREF
  int v169; // [rsp+1DCh] [rbp+5Ch] BYREF
  int v170; // [rsp+1E0h] [rbp+60h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v171; // [rsp+1E8h] [rbp+68h]
  int v172; // [rsp+1F0h] [rbp+70h] BYREF
  int v173; // [rsp+1F4h] [rbp+74h] BYREF
  int v174; // [rsp+1F8h] [rbp+78h] BYREF
  DWORD LowPart; // [rsp+1FCh] [rbp+7Ch] BYREF
  int v176; // [rsp+200h] [rbp+80h] BYREF
  char v177[8]; // [rsp+208h] [rbp+88h] BYREF
  __int64 v178; // [rsp+210h] [rbp+90h]
  int v179; // [rsp+218h] [rbp+98h]
  __int128 v180; // [rsp+220h] [rbp+A0h]
  unsigned __int64 v181; // [rsp+230h] [rbp+B0h]
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+238h] [rbp+B8h]
  __int64 v183; // [rsp+240h] [rbp+C0h]
  __int128 v184; // [rsp+248h] [rbp+C8h]
  __int128 v185; // [rsp+258h] [rbp+D8h]
  PVOID Entry; // [rsp+268h] [rbp+E8h] BYREF
  __int64 v187; // [rsp+270h] [rbp+F0h]
  __int64 v188; // [rsp+278h] [rbp+F8h] BYREF
  __int64 v189; // [rsp+280h] [rbp+100h] BYREF
  struct CRefCountedBuffer *v190; // [rsp+288h] [rbp+108h] BYREF
  __int64 v191; // [rsp+290h] [rbp+110h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+298h] [rbp+118h] BYREF
  PVOID Object[3]; // [rsp+2A8h] [rbp+128h] BYREF
  PVOID P; // [rsp+2C0h] [rbp+140h]
  _BYTE v195[64]; // [rsp+2C8h] [rbp+148h] BYREF
  int v196; // [rsp+308h] [rbp+188h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+310h] [rbp+190h] BYREF
  void *v198; // [rsp+320h] [rbp+1A0h]
  int v199; // [rsp+328h] [rbp+1A8h]
  int v200; // [rsp+32Ch] [rbp+1ACh]
  __int16 *v201; // [rsp+330h] [rbp+1B0h]
  __int64 v202; // [rsp+338h] [rbp+1B8h]
  __int64 *v203; // [rsp+340h] [rbp+1C0h]
  __int64 v204; // [rsp+348h] [rbp+1C8h]
  struct CRefCountedBuffer **v205; // [rsp+350h] [rbp+1D0h]
  __int64 v206; // [rsp+358h] [rbp+1D8h]
  int *v207; // [rsp+360h] [rbp+1E0h]
  __int64 v208; // [rsp+368h] [rbp+1E8h]
  int *v209; // [rsp+370h] [rbp+1F0h]
  __int64 v210; // [rsp+378h] [rbp+1F8h]
  int *v211; // [rsp+380h] [rbp+200h]
  __int64 v212; // [rsp+388h] [rbp+208h]
  int *v213; // [rsp+390h] [rbp+210h]
  __int64 v214; // [rsp+398h] [rbp+218h]
  int *v215; // [rsp+3A0h] [rbp+220h]
  __int64 v216; // [rsp+3A8h] [rbp+228h]
  _WORD *v217; // [rsp+3B0h] [rbp+230h]
  int v218; // [rsp+3B8h] [rbp+238h]
  int v219; // [rsp+3BCh] [rbp+23Ch]
  __int64 *v220; // [rsp+3C0h] [rbp+240h]
  __int64 v221; // [rsp+3C8h] [rbp+248h]
  __int16 *v222; // [rsp+3D0h] [rbp+250h]
  __int64 v223; // [rsp+3D8h] [rbp+258h]
  DWORD *p_LowPart; // [rsp+3E0h] [rbp+260h]
  __int64 v225; // [rsp+3E8h] [rbp+268h]
  int *v226; // [rsp+3F0h] [rbp+270h]
  __int64 v227; // [rsp+3F8h] [rbp+278h]
  int *v228; // [rsp+400h] [rbp+280h]
  __int64 v229; // [rsp+408h] [rbp+288h]
  int *v230; // [rsp+410h] [rbp+290h]
  __int64 v231; // [rsp+418h] [rbp+298h]
  int *v232; // [rsp+420h] [rbp+2A0h]
  __int64 v233; // [rsp+428h] [rbp+2A8h]
  int *v234; // [rsp+430h] [rbp+2B0h]
  __int64 v235; // [rsp+438h] [rbp+2B8h]
  int *v236; // [rsp+440h] [rbp+2C0h]
  __int64 v237; // [rsp+448h] [rbp+2C8h]
  _BYTE v238[64]; // [rsp+450h] [rbp+2D0h] BYREF
  _BYTE v239[64]; // [rsp+490h] [rbp+310h] BYREF
  char v240[64]; // [rsp+4D0h] [rbp+350h] BYREF
  _DWORD v241[16]; // [rsp+510h] [rbp+390h] BYREF

  v12 = a8;
  v13 = 0;
  v145 = a6;
  v150 = a7;
  Src = a1;
  v160 = a4;
  v171 = a8;
  v144 = a9;
  v158 = a10;
  v155 = a11;
  if ( a9 )
  {
    if ( a10 )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      v15 = L"Context can not be with sync object, returning 0x%I64x";
      WdLogGlobalForLineNumber = 3073;
LABEL_4:
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v15, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
      return 3221225485LL;
    }
    v17 = *((_QWORD *)a9 + 2);
    v139 = 0;
    v154 = 0LL;
    v18 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL);
  }
  else
  {
    if ( !a10 || !*((_DWORD *)a10 + 2) || !*(_QWORD *)a10 )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      v15 = L"Sync Object and pPresentRedirected must be specified when context is null, returning 0x%I64x";
      WdLogGlobalForLineNumber = 3081;
      goto LABEL_4;
    }
    v18 = *((_QWORD *)a10 + 2);
    v154 = *(_QWORD *)a10;
    v139 = *((_DWORD *)a10 + 2);
  }
  v19 = *(_QWORD *)(v18 + 3128);
  v167[0] = v18;
  v151 = (struct ADAPTER_RENDER *)v19;
  v20 = *(_QWORD *)(v19 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v20 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v20 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3102;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pRenderCore->IsCoreResourceSharedOwner()",
      3102LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v178 = v19 + 976;
  if ( v19 != -976 && *(struct _KTHREAD **)(v19 + 984) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1512LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v19 + 976));
  v179 = 1;
  CurrentProcess = PsGetCurrentProcess(1LL);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  if ( ProcessSessionId >= *(_DWORD *)(v19 + 1008)
    || (v23 = 8LL * ProcessSessionId, !*(_QWORD *)(v23 + *(_QWORD *)(v19 + 1016)))
    || (_mm_lfence(),
        v24 = *(PVOID **)(v23 + *(_QWORD *)(v19 + 1016)),
        (v156 = (DXGPRESENTHISTORYTOKENQUEUE *)v24) == 0LL) )
  {
    WdLogSingleEntry1(4LL, v18);
    WdLogGlobalForLineNumber = 3110;
    goto LABEL_252;
  }
  v141 = v24[8];
  ObfReferenceObject(v141);
  v179 = 0;
  _InterlockedDecrement((volatile signed __int32 *)(v19 + 992));
  ExReleasePushLockSharedEx(v19 + 976, 0LL);
  KeLeaveCriticalRegion();
  COREDEVICEACCESS::Release(a2);
  if ( *((_BYTE *)a3 + 16) )
  {
    v25 = *((_QWORD *)a3 + 1) + 136LL;
    *((_BYTE *)a3 + 16) = 0;
    _InterlockedDecrement((volatile signed __int32 *)(v25 + 16));
    ExReleasePushLockSharedEx(v25, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference(*((DXGADAPTER **)a3 + 1));
  }
  if ( v160 )
    CWin32kLocks::Unlock(v160);
  Object[0] = (PVOID)(v18 + 3096);
  v26 = (union _LARGE_INTEGER *)&v188;
  Object[1] = v141;
  v188 = -200000000LL;
  if ( v145 )
    v26 = v145;
  v27 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, v26, 0LL);
  if ( !v27 )
  {
    WdLogSingleEntry1(4LL, v18);
    WdLogGlobalForLineNumber = 3142;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a3);
LABEL_52:
    COREDEVICEACCESS::AcquireSharedUncheck(a2, v30);
    ObfDereferenceObject(v141);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v177);
    return 3221226166LL;
  }
  Current = 8LL;
  if ( v27 == 258 )
  {
    if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v18 + 4980)) <= 2 )
    {
      v183 = 1LL;
      LiveDumpWithWdLogs2 = DxgCreateLiveDumpWithWdLogs2(403LL, 2068LL, 0LL, 0LL, 0LL, 1LL);
      LODWORD(v157) = *(_DWORD *)(v18 + 412);
      v28 = *(unsigned int *)(v18 + 416);
      HIDWORD(v157) = *(_DWORD *)(v18 + 416);
      v135 = LiveDumpWithWdLogs2;
      if ( (unsigned int)dword_14015E650 > 5
        && (qword_14015E660 & 0x400000040000LL) != 0
        && (qword_14015E668 & 0x400000040000LL) == qword_14015E668 )
      {
        LOBYTE(v28) = 1;
        v168 = *(unsigned __int8 *)(v18 + 209);
        IsDebuggerPresent = WdIsDebuggerPresent(v28);
        v33 = *(_WORD **)(v18 + 2000);
        v169 = IsDebuggerPresent;
        v170 = *(_DWORD *)(v18 + 3216);
        v172 = *(unsigned __int8 *)(v18 + 3053);
        v173 = *(_DWORD *)(v18 + 4980);
        v174 = v135;
        LowPart = v26->LowPart;
        v152 = *(_WORD *)(v18 + 3004);
        v189 = *(_QWORD *)(v18 + 2008);
        v176 = *(_DWORD *)(v18 + 436);
        v163 = *(_DWORD *)(v18 + 432);
        v164 = *(_DWORD *)(v18 + 428);
        v165 = *(_DWORD *)(v18 + 424);
        v166 = *(_DWORD *)(v18 + 420);
        v190 = v157;
        v236 = &v168;
        v234 = &v169;
        v232 = &v170;
        v230 = &v172;
        v228 = &v173;
        v226 = &v174;
        p_LowPart = &LowPart;
        v222 = &v152;
        v220 = &v189;
        v191 = 0x1000000LL;
        v153 = 1;
        v237 = 4LL;
        v235 = 4LL;
        v233 = 4LL;
        v231 = 4LL;
        v229 = 4LL;
        v227 = 4LL;
        v225 = 4LL;
        v223 = 2LL;
        v221 = 8LL;
        if ( v33 )
        {
          v34 = -1LL;
          do
            v35 = v33[++v34] == 0;
          while ( !v35 );
          v36 = 2 * v34 + 2;
        }
        else
        {
          v33 = &unk_1400C6B88;
          v36 = 2;
        }
        v218 = v36;
        v217 = v33;
        v215 = &v176;
        v219 = 0;
        v213 = &v163;
        v216 = 4LL;
        v211 = &v164;
        v209 = &v165;
        v207 = &v166;
        v205 = &v190;
        v203 = &v191;
        v201 = &v153;
        *(_DWORD *)&EventDescriptor.Level = 5;
        EventDescriptor.Keyword = 0x400000040000LL;
        UserData.Ptr = (ULONGLONG)off_14015E658;
        v214 = 4LL;
        v212 = 4LL;
        v210 = 4LL;
        v208 = 4LL;
        v206 = 8LL;
        v204 = 8LL;
        v202 = 2LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        UserData.Size = *(unsigned __int16 *)off_14015E658;
        v198 = &unk_14013E098;
        v200 = 1;
        UserData.Reserved = 2;
        v199 = 299;
        EtwWriteTransfer(qword_14015E670, &EventDescriptor, 0LL, 0LL, 0x14u, &UserData);
      }
    }
    if ( v145 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, (__int64)"h", v29, 19);
      WdLogSingleEntry1(4LL, 258LL);
      WdLogGlobalForLineNumber = 3207;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a3);
      v37 = COREDEVICEACCESS::AcquireShared(a2, v155);
      if ( v37 >= 0 )
      {
        ObfDereferenceObject(v141);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v177);
        return 258LL;
      }
      WdLogSingleEntry1(4LL, v37);
      WdLogGlobalForLineNumber = 3215;
      goto LABEL_52;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, (__int64)"h", v29, 19);
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3191;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Present token is not submitted due to default semaphore timeout of 20 seconds",
      3191LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) )
    {
      WdLogSingleEntry1(4LL, v18);
      WdLogGlobalForLineNumber = 3196;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a3);
      goto LABEL_52;
    }
  }
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a3);
  v38 = COREDEVICEACCESS::AcquireShared(a2, v155);
  v39 = v38;
  v133 = v38;
  if ( v38 < 0 )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)v141, 0, 1, 0);
    WdLogSingleEntry1(4LL, v39);
    WdLogGlobalForLineNumber = 3231;
    goto LABEL_52;
  }
  v40 = (union _SLIST_HEADER *)v156;
  v41 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v156 + 3);
  v159 = (struct DXG_VMBUS_CHANNEL_BASE *)v41;
  if ( !v41 )
  {
    if ( !DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer((DXGPRESENTHISTORYTOKENQUEUE *)v40)
      || (v41 = ExpInterlockedPopEntrySList(v40 + 3), (v159 = (struct DXG_VMBUS_CHANNEL_BASE *)v41) == 0LL) )
    {
LABEL_249:
      v125 = v141;
      LODWORD(v39) = -1073741801;
      KeReleaseSemaphore((PRKSEMAPHORE)v141, 0, 1, 0);
      WdLogSingleEntry2(6LL, v40, -1073741801LL);
      WdLogGlobalForLineNumber = 3633;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Present token is not submitted due to no memory, PresentHistoryTokenQueue: 0x%I64x, returning 0x%I64x",
        (__int64)v40,
        -1073741801LL,
        0LL,
        0LL,
        0LL);
LABEL_250:
      ObfDereferenceObject(v125);
      return (unsigned int)v39;
    }
  }
  v42 = (__int64)&v41[1];
  if ( v41 == (PSLIST_ENTRY)-16LL )
  {
    v40 = (union _SLIST_HEADER *)v156;
    goto LABEL_249;
  }
  CVidSchSubmitData::CVidSchSubmitData((CVidSchSubmitData *)&Entry, (struct ADAPTER_RENDER *)v19, a8 == 0LL);
  if ( !a8 )
  {
    v12 = (struct VIDSCH_SUBMIT_DATA_BASE *)Entry;
    v171 = (struct VIDSCH_SUBMIT_DATA_BASE *)Entry;
    if ( !Entry )
    {
      KeReleaseSemaphore((PRKSEMAPHORE)v141, 0, 1, 0);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 3249;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to allocate VidSchSubmitData",
        3249LL,
        0LL,
        0LL,
        0LL,
        0LL);
      ObfDereferenceObject(v141);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v177);
      return 3221225495LL;
    }
  }
  v143 = 1;
  SizeOfPresentToken = GetSizeOfPresentToken((const struct _D3DKMT_PRESENTHISTORYTOKEN *)Src);
  if ( SizeOfPresentToken - 1 <= 0x437 )
  {
    memmove((void *)v42, Src, SizeOfPresentToken);
    switch ( *(_DWORD *)v42 )
    {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 7:
      case 8:
      case 9:
        v44 = *(_DWORD *)v12;
        v45 = 0LL;
        v46 = 0LL;
        v47 = *(_DWORD *)v12 ^ (32 * a5);
        *((_QWORD *)v12 + 13) = v42;
        *((_DWORD *)v12 + 29) = -1;
        v48 = v44 ^ v47 & 0x20;
        v157 = 0LL;
        v49 = v156;
        *(_DWORD *)v12 = v48 | 0x40000;
        v50 = 0LL;
        *((_QWORD *)v12 + 12) = v49;
        v51 = *(_DWORD *)(v18 + 2736) < 0x2000;
        v149 = 0LL;
        v147 = 0LL;
        v160 = 0LL;
        if ( v51 && !*(_BYTE *)(v18 + 3036) )
          goto LABEL_74;
        if ( v144 )
        {
          if ( !v150 || ((*(_DWORD *)Src - 1) & 0xFFFFFFFD) == 0 )
            goto LABEL_72;
          v52 = *((_DWORD *)v150 + 368);
          v53 = (void *)*((_QWORD *)v150 + 185);
        }
        else
        {
          v52 = *(_DWORD *)(v154 + 1104);
          v53 = *(void **)(v154 + 1112);
        }
        PresentPrivateDriverData = ReadPresentPrivateDriverData(
                                     (struct DXGADAPTER *)v18,
                                     v52,
                                     v53,
                                     (struct CRefCountedBuffer **)&v147);
        v39 = PresentPrivateDriverData;
        v133 = PresentPrivateDriverData;
        if ( PresentPrivateDriverData < 0 )
        {
          WdLogSingleEntry1(2LL, PresentPrivateDriverData);
          WdLogGlobalForLineNumber = 3309;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed to read private driver data. Returning 0x%I64x",
            v39,
            0LL,
            0LL,
            0LL,
            0LL);
          v133 = v39;
          goto LABEL_217;
        }
        v50 = (struct CRefCountedBuffer *)v147;
        v149 = v147;
LABEL_72:
        if ( v50 )
        {
          *((_QWORD *)v12 + 100) = v50;
          v45 = v50;
          *((_DWORD *)v12 + 1) |= 4u;
          v157 = v50;
        }
LABEL_74:
        if ( !*(_BYTE *)(v18 + 209) )
        {
          if ( !v144 && !*(_BYTE *)(v18 + 3057) )
            goto LABEL_79;
          v55 = PrepareIndependentFlipToken((struct _D3DKMT_PRESENTHISTORYTOKEN *)v42, v150, v12, v144, v158, v50);
          v46 = (volatile signed __int32 *)*((_QWORD *)v12 + 4);
          LODWORD(v39) = v55;
          v133 = v55;
          v160 = (CWin32kLocks *)v46;
        }
        if ( (int)v39 < 0 )
          goto LABEL_217;
LABEL_79:
        if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0LL )
        {
          v39 = (__int64)v151;
          goto LABEL_117;
        }
        v56 = *(_DWORD *)v42;
        LOBYTE(v57) = 0;
        v136 = *(_DWORD *)(v42 + 4);
        v58 = 0;
        v180 = 0LL;
        v145 = 0LL;
        v140 = 0;
        v142 = 0;
        v185 = 0LL;
        v184 = 0LL;
        switch ( v56 )
        {
          case 1:
            v59 = *(_QWORD *)(v42 + 16);
            goto LABEL_83;
          case 2:
            v59 = *(_QWORD *)(v42 + 24);
            goto LABEL_88;
          case 3:
            v59 = *(_QWORD *)(v42 + 16);
            goto LABEL_91;
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
            v59 = *(_QWORD *)(v42 + 16);
            goto LABEL_96;
          default:
            v59 = 0LL;
            switch ( v56 )
            {
              case 1:
LABEL_83:
                v60 = (unsigned int *)(v42 + 56);
                break;
              case 2:
LABEL_88:
                v60 = (unsigned int *)(v42 + 812);
                goto LABEL_89;
              case 3:
LABEL_91:
                v60 = (unsigned int *)(v42 + 40);
                goto LABEL_85;
              default:
LABEL_96:
                v60 = 0LL;
                if ( v56 != 1 )
                {
                  if ( v56 != 2 )
                  {
                    v65 = 0;
                    goto LABEL_99;
                  }
LABEL_89:
                  v64 = *(_OWORD *)(v42 + 96);
                  v57 = *(union _LARGE_INTEGER **)(v42 + 112);
                  v145 = v57;
                  v180 = v64;
                  v65 = *(_DWORD *)(v42 + 748);
                  v66 = *(_OWORD *)(v42 + 756);
                  v58 = *(_DWORD *)(v42 + 752);
                  v185 = *(_OWORD *)(v42 + 732);
                  v140 = v65;
                  v184 = v66;
                  v142 = v58;
LABEL_99:
                  LODWORD(v154) = v65;
                  if ( v56 != 2 )
                  {
                    v140 = v65;
                    v142 = v58;
                    if ( v56 == 6 )
                    {
                      LODWORD(Src) = *(_DWORD *)(v42 + 24);
                      v67 = v154;
                      goto LABEL_103;
                    }
                    if ( v56 == 9 )
                    {
                      LODWORD(Src) = *(_DWORD *)(v42 + 32);
                      v67 = v140;
LABEL_103:
                      v140 = v67;
                      v62 = (unsigned int)Src;
                      v142 = v58;
LABEL_104:
                      v63 = 0LL;
                      goto LABEL_105;
                    }
LABEL_85:
                    v62 = 0LL;
                    LODWORD(Src) = 0;
                    if ( v56 == 2 )
                    {
                      v63 = *(unsigned int *)(v42 + 796);
                      goto LABEL_105;
                    }
                    goto LABEL_104;
                  }
                  v62 = *(unsigned int *)(v42 + 60);
                  v63 = *(unsigned int *)(v42 + 796);
                  LODWORD(Src) = *(_DWORD *)(v42 + 60);
LABEL_105:
                  LODWORD(v154) = v63;
                  if ( v60 )
                  {
                    v68 = *v60;
                    if ( *v60 >= 0x10 )
                    {
                      v68 = 16;
                    }
                    else if ( !v68 )
                    {
LABEL_114:
                      v132 = v68;
                      v39 = (__int64)v151;
                      McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer(
                        HIDWORD(v145),
                        (__int64)v60,
                        v63,
                        (__int64)v151,
                        v42,
                        v56,
                        v136,
                        v59,
                        (char)Src,
                        v154,
                        v180,
                        SBYTE8(v180),
                        SBYTE4(v180),
                        SBYTE12(v180),
                        (char)v57,
                        SBYTE4(v145),
                        v132,
                        (__int64)v241,
                        (__int64)v240,
                        (__int64)v239,
                        (__int64)v238,
                        v185,
                        SBYTE8(v185),
                        SBYTE4(v185),
                        SBYTE12(v185),
                        v140,
                        v142,
                        v184,
                        SBYTE8(v184),
                        SBYTE4(v184),
                        SBYTE12(v184),
                        0);
                      goto LABEL_117;
                    }
                    v60 += 3;
                    v69 = v68;
                    v63 = 0LL;
                    do
                    {
                      v70 = *(v60 - 2);
                      v60 += 4;
                      *(_DWORD *)((char *)v241 + v63) = v70;
                      v63 += 4LL;
                      *(_DWORD *)&v239[v63 + 60] = *(v60 - 4);
                      *(_DWORD *)&v238[v63 + 60] = *(v60 - 5);
                      *(_DWORD *)&v238[v63 - 4] = *(v60 - 3);
                      --v69;
                    }
                    while ( v69 );
                    goto LABEL_114;
                  }
                  v39 = (__int64)v151;
                  LODWORD(v130) = v62;
                  LODWORD(Timeout) = v136;
                  *(_DWORD *)Alertable = v56;
                  McTemplateK0ppqqxdqp_EtwWriteTransfer(
                    v62,
                    &EventSubmitPresentHistory,
                    v63,
                    v151,
                    v42,
                    *(_QWORD *)Alertable,
                    Timeout,
                    v59,
                    v130,
                    v63,
                    0LL);
LABEL_117:
                  v71 = v144;
                  if ( !v144 )
                    goto LABEL_148;
                  v72 = v150;
                  if ( !v150 )
                  {
                    if ( !*(_BYTE *)(v18 + 209) && (*((_DWORD *)v144 + 98) & 0x10) != 0 )
                      DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(v144, 0LL, 0, 1, v12, 0LL, 0);
                    v143 = 1;
                    goto LABEL_148;
                  }
                  *((_BYTE *)v150 + 1512) = (*((_BYTE *)v12 + 3) & 1) == 0;
                  if ( !*(_BYTE *)(v18 + 209) && (*((_DWORD *)v71 + 98) & 0x10) != 0 )
                  {
                    v73 = *((_DWORD *)v72 + 23);
                    v143 = v73 + 1;
                    DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(
                      v71,
                      *((struct DXGCONTEXT ***)v72 + 187),
                      v73,
                      1,
                      v12,
                      v72,
                      0);
                    goto LABEL_148;
                  }
                  if ( !*((_DWORD *)v72 + 23) || !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v18) )
                    goto LABEL_148;
                  v76 = *(_QWORD *)(v75 + 16);
                  v143 = v74 + 1;
                  v181 = _InterlockedIncrement64((volatile signed __int64 *)(v76 + 1944));
                  BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(*(DXGDEVICE **)(v75 + 16));
                  if ( !BroadcastPresentSyncObject )
                  {
                    WdLogSingleEntry1(2LL, -1073741801LL);
                    WdLogGlobalForLineNumber = 3401;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000LL,
                      0xFFFFFFFFLL,
                      L"Failed to create present sync object. Returning 0x%I64x",
                      -1073741801LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    LODWORD(v39) = -1073741801;
                    v133 = -1073741801;
                    goto LABEL_217;
                  }
                  v77 = v150;
                  Pool2 = 0LL;
                  P = 0LL;
                  v196 = 0;
                  v79 = *((unsigned int *)v150 + 23);
                  v137 = v79;
                  if ( (unsigned int)v79 <= 8 )
                  {
                    Pool2 = v195;
                    P = v195;
                    if ( !(_DWORD)v79 )
                    {
LABEL_136:
                      v196 = v79;
                      goto LABEL_137;
                    }
                    memset(v195, 0, 8 * v79);
                    Pool2 = P;
                  }
                  else
                  {
                    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v79 < 8 )
                    {
LABEL_137:
                      if ( !Pool2 )
                      {
                        LODWORD(v39) = -1073741801;
                        v133 = -1073741801;
                        goto LABEL_217;
                      }
                      v80 = v143;
                      v81 = 1;
                      if ( v143 > 1 )
                      {
                        while ( 1 )
                        {
                          v82 = *(_QWORD *)(Current + *((_QWORD *)v77 + 187));
                          if ( (*(_DWORD *)(v82 + 392) & 0x10) != 0 )
                            break;
                          Current += 8LL;
                          v83 = v81++ - 1;
                          *(_QWORD *)&Pool2[8 * v83] = *(_QWORD *)(v82 + 256);
                          if ( v81 >= v80 )
                            goto LABEL_142;
                        }
                        LODWORD(v39) = -1073741811;
                        v133 = -1073741811;
                        goto LABEL_160;
                      }
LABEL_142:
                      LODWORD(v39) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v39 + 736) + 8LL)
                                                                                       + 648LL))(
                                       0LL,
                                       0LL,
                                       *((unsigned int *)v77 + 23));
                      v133 = v39;
                      if ( (int)v39 < 0 )
                      {
LABEL_160:
                        v85 = P;
                        goto LABEL_161;
                      }
                      v84 = VIDSCH_EXPORT::VidSchWaitForSingleSyncObject(
                              *((VIDSCH_EXPORT **)v151 + 92),
                              *((struct _VIDSCH_CONTEXT **)v144 + 32),
                              BroadcastPresentSyncObject,
                              v181);
                      v85 = P;
                      LODWORD(v39) = v84;
                      v133 = v84;
                      if ( v84 < 0 )
                      {
LABEL_161:
                        if ( v85 != v195 && v85 )
                          ExFreePoolWithTag(v85, 0);
                        goto LABEL_217;
                      }
                      if ( P != v195 && P )
                        ExFreePoolWithTag(P, 0);
                      v149 = v147;
                      P = 0LL;
                      v196 = 0;
LABEL_148:
                      v134 = 0LL;
                      Current = 0LL;
                      Global = DXGGLOBAL::GetGlobal();
                      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v161, Global, 0);
                      if ( !v139 )
                      {
                        v39 = (__int64)v149;
                        v93 = 0LL;
                        goto LABEL_179;
                      }
                      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)&v161);
                      v88 = (v139 >> 6) & 0xFFFFFF;
                      if ( *(int *)(v18 + 3004) >= 2000 )
                      {
                        Current = (__int64)DXGPROCESS::GetCurrent(v87);
                        v89 = Current + 248;
                        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(Current + 248));
                        if ( (unsigned int)v88 >= *(_DWORD *)(Current + 296) )
                          goto LABEL_156;
                        v90 = *(_QWORD *)(Current + 280) + 16 * v88;
                        if ( ((v139 >> 25) & 0x60) != (*(_BYTE *)(v90 + 8) & 0x60) )
                          goto LABEL_156;
                        if ( (*(_DWORD *)(v90 + 8) & 0x2000) != 0 )
                          goto LABEL_156;
                        v91 = *(_DWORD *)(v90 + 8) & 0x1F;
                        if ( !v91 )
                          goto LABEL_156;
                        if ( v91 != 11 )
                        {
                          WdLogSingleEntry0(2LL);
                          WdLogGlobalForLineNumber = 318;
                          DxgkLogInternalTriageEvent(
                            0LL,
                            0x40000LL,
                            0xFFFFFFFFLL,
                            L"Handle type mismatch",
                            318LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
LABEL_156:
                          _InterlockedDecrement((volatile signed __int32 *)(v89 + 16));
                          ExReleasePushLockSharedEx(v89, 0LL);
                          KeLeaveCriticalRegion();
                          goto LABEL_157;
                        }
                        v92 = *(_QWORD *)v90;
                        _InterlockedDecrement((volatile signed __int32 *)(v89 + 16));
                        Current = v92;
                        ExReleasePushLockSharedEx(v89, 0LL);
                        KeLeaveCriticalRegion();
                        if ( !v92 )
                        {
LABEL_157:
                          LODWORD(v39) = -1073741811;
                          WdLogSingleEntry2(2LL, v139, -1073741811LL);
                          WdLogGlobalForLineNumber = 3475;
                          DxgkLogInternalTriageEvent(
                            0LL,
                            0x40000LL,
                            0xFFFFFFFFLL,
                            L"hSyncObj (0x%I64x) destroyed, returning 0x%I64x",
                            v139,
                            -1073741811LL,
                            0LL,
                            0LL,
                            0LL);
                          v133 = -1073741811;
                          if ( v162 )
                          {
                            v162 = 0;
                            ExReleaseResourceLite(*(PERESOURCE *)(v161 + 600));
                            KeLeaveCriticalRegion();
                          }
                          goto LABEL_217;
                        }
                        v93 = *(DXGSYNCOBJECT **)(v92 + 32);
                        v39 = (__int64)v147;
                        v18 = v167[0];
                        v149 = v147;
                        v134 = v93;
LABEL_179:
                        if ( !*(_BYTE *)(v18 + 209) )
                        {
                          if ( v144 )
                          {
                            if ( *((struct _KTHREAD **)v144 + 56) != KeGetCurrentThread() )
                            {
                              WdLogSingleEntry0(1LL);
                              WdLogGlobalForLineNumber = 3500;
                              DxgkLogInternalTriageEvent(
                                0LL,
                                262146LL,
                                0xFFFFFFFFLL,
                                L"pContext->GetContextLock()->IsExclusiveOwner()",
                                3500LL,
                                0LL,
                                0LL,
                                0LL,
                                0LL);
                            }
                            LODWORD(v39) = DXGCONTEXT::SubmitCommandToImplicitQueue(v144, v12);
                            v133 = v39;
                          }
                          else
                          {
                            DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v167, (DXGSYNCOBJECT *)((char *)v93 + 32), 0);
                            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v167);
                            VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(v134, v151);
                            LODWORD(v39) = VIDSCH_EXPORT::VidSchSubmitCommandContextless(
                                             v102,
                                             v12,
                                             *(struct _VIDSCH_DEVICE **)(*((_QWORD *)v158 + 3) + 800LL),
                                             VidSchSyncObject);
                            v133 = v39;
                            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v167);
                          }
                          goto LABEL_214;
                        }
                        if ( v39 )
                        {
                          _InterlockedIncrement((volatile signed __int32 *)(v39 + 12));
                          v39 = (__int64)v147;
                          v149 = v147;
                        }
                        if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 434) < 0x18u
                          || (v104 = DXGGLOBAL::GetGlobal(), !*((_DWORD *)DXGGLOBAL::GetSessionData(v104) + 4742))
                          || *(_DWORD *)v42 != 2
                          || !v144
                          || (v103 = *(union _LARGE_INTEGER **)(*((_QWORD *)v144 + 2) + 40LL),
                              v145 = v103,
                              (v103[51].LowPart & 4) == 0)
                          || !v150
                          || (v138 = *((_DWORD *)v150 + 5)) == 0 )
                        {
                          v159 = (struct DXG_VMBUS_CHANNEL_BASE *)(v18 + 4664);
                          if ( !v144 )
                          {
LABEL_210:
                            v116 = *(_QWORD *)v12;
                            v117 = DXGPROCESS::GetCurrent((__int64)v103);
                            v118 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitPresentHistoryToken(
                                     v159,
                                     v117,
                                     (__int64)v144,
                                     v116,
                                     (__int64)v156,
                                     v42,
                                     v39,
                                     Current);
                            v115 = v149;
                            LODWORD(v39) = v118;
                            v133 = v118;
                            goto LABEL_211;
                          }
LABEL_209:
                          Current = 0LL;
                          goto LABEL_210;
                        }
                        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)&v103[31]);
                        v105 = (v138 >> 6) & 0xFFFFFF;
                        if ( v105 < v145[37].LowPart )
                        {
                          v106 = v145[35].QuadPart + 16LL * v105;
                          if ( ((v138 >> 25) & 0x60) == (*(_BYTE *)(v106 + 8) & 0x60)
                            && (*(_DWORD *)(v106 + 8) & 0x2000) == 0 )
                          {
                            v107 = *(_DWORD *)(v106 + 8) & 0x1F;
                            if ( v107 )
                            {
                              if ( v107 == 5 )
                              {
                                v108 = *(struct _EX_RUNDOWN_REF **)v106;
LABEL_201:
                                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v155, v108);
                                _InterlockedDecrement((volatile signed __int32 *)&v145[33]);
                                ExReleasePushLockSharedEx(&v145[31], 0LL);
                                KeLeaveCriticalRegion();
                                if ( v155 )
                                {
                                  v35 = *(_DWORD *)v42 == 2;
                                  v139 = 0;
                                  v158 = 0LL;
                                  if ( v35 )
                                  {
                                    v109 = *(void **)(v42 + 64);
                                    if ( v109 )
                                    {
                                      if ( (int)DxgkQueryHostCompSurfInfo(v109, &v139, (unsigned __int64 *)&v158) >= 0 )
                                      {
                                        v39 = (__int64)v158;
                                        v111 = v139;
                                        v112 = v155;
                                        v113 = *(_QWORD *)v171;
                                        v114 = DXGPROCESS::GetCurrent(v110);
                                        v131 = v112;
                                        v115 = v147;
                                        LODWORD(v39) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitVailPresentHistoryToken(
                                                         v167[0] + 4664LL,
                                                         v114,
                                                         v144,
                                                         v113,
                                                         v156,
                                                         (char *)v159 + 16,
                                                         v147,
                                                         v134,
                                                         v131,
                                                         v111,
                                                         v39);
                                        v133 = v39;
                                        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v155);
                                        v12 = v171;
LABEL_211:
                                        if ( (int)v39 < 0 && v115 )
                                          CRefCountedBuffer::RefCountedBufferRelease(v115);
LABEL_214:
                                        if ( v162 )
                                        {
                                          v162 = 0;
                                          ExReleaseResourceLite(*(PERESOURCE *)(v161 + 600));
                                          KeLeaveCriticalRegion();
                                        }
                                        if ( (int)v39 >= 0 )
                                        {
LABEL_231:
                                          if ( v46 && _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
                                          {
                                            if ( *(_QWORD *)v46 )
                                              ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v46, (PVOID)v46);
                                            else
                                              ExFreePoolWithTag((PVOID)v46, 0);
                                          }
                                          if ( v45
                                            && _InterlockedExchangeAdd((volatile signed __int32 *)v45 + 3, 0xFFFFFFFF) == 1 )
                                          {
                                            if ( *(_QWORD *)v45 )
                                              ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v45, v45);
                                            else
                                              ExFreePoolWithTag(v45, 0);
                                          }
                                          v125 = v141;
LABEL_241:
                                          if ( Entry )
                                            ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v187 + 1424), Entry);
                                          goto LABEL_250;
                                        }
LABEL_217:
                                        KeReleaseSemaphore((PRKSEMAPHORE)v141, 0, 1, 0);
                                        if ( (*(_DWORD *)v12 & 0x1000000) != 0 )
                                        {
                                          v119 = v143;
                                          if ( v143 )
                                          {
                                            v120 = v151;
                                            if ( v144 )
                                            {
                                              v121 = v150;
                                              v122 = 0LL;
                                              do
                                              {
                                                if ( *((_BYTE *)v12 + 356) )
                                                  v123 = (struct VIDMM_ALLOC **)((char *)v12
                                                                               + 64
                                                                               * (unsigned __int64)(v13
                                                                                                  * *((_DWORD *)v12 + 151))
                                                                               + *((_DWORD *)v12 + 151)
                                                                               * ((8 * *((_DWORD *)v12 + 152) + 231) & 0xFFFFFFF8)
                                                                               + 648);
                                                else
                                                  v123 = (struct VIDMM_ALLOC **)((char *)v12 + 504);
                                                VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
                                                  *((VIDMM_EXPORT **)v120 + 95),
                                                  *((struct VIDMM_GLOBAL **)v120 + 96),
                                                  1 << *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v121 + 187) + v122) + 388LL),
                                                  *v123);
                                                ++v13;
                                                v122 += 8LL;
                                              }
                                              while ( v13 < v119 );
                                              v46 = (volatile signed __int32 *)v160;
                                              LODWORD(v39) = v133;
                                            }
                                            else
                                            {
                                              do
                                              {
                                                if ( *((_BYTE *)v12 + 356) )
                                                  v124 = (struct VIDMM_ALLOC **)((char *)v12
                                                                               + 64
                                                                               * (unsigned __int64)(v13
                                                                                                  * *((_DWORD *)v12 + 151))
                                                                               + *((_DWORD *)v12 + 151)
                                                                               * ((8 * *((_DWORD *)v12 + 152) + 231) & 0xFFFFFFF8)
                                                                               + 648);
                                                else
                                                  v124 = (struct VIDMM_ALLOC **)((char *)v12 + 504);
                                                VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
                                                  *((VIDMM_EXPORT **)v120 + 95),
                                                  *((struct VIDMM_GLOBAL **)v120 + 96),
                                                  1u,
                                                  *v124);
                                                ++v13;
                                              }
                                              while ( v13 < v119 );
                                            }
                                            v45 = v157;
                                          }
                                        }
                                        goto LABEL_231;
                                      }
                                    }
                                  }
                                }
                                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v155);
                                v39 = (__int64)v147;
                                v159 = (struct DXG_VMBUS_CHANNEL_BASE *)(v18 + 4664);
                                v149 = v147;
                                goto LABEL_209;
                              }
                              WdLogSingleEntry0(2LL);
                              WdLogGlobalForLineNumber = 318;
                              DxgkLogInternalTriageEvent(
                                0LL,
                                0x40000LL,
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
                        v108 = 0LL;
                        goto LABEL_201;
                      }
                      v145 = (PLARGE_INTEGER)DXGPROCESS::GetCurrent(v87);
                      v94 = v145 + 31;
                      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)&v145[31]);
                      if ( (unsigned int)v88 >= v145[37].LowPart )
                      {
                        v96 = v139;
                      }
                      else
                      {
                        v95 = (unsigned int)v88;
                        v96 = v139;
                        v97 = v145[35].QuadPart + 16 * v95;
                        if ( ((v139 >> 25) & 0x60) == (*(_BYTE *)(v97 + 8) & 0x60)
                          && (*(_DWORD *)(v97 + 8) & 0x2000) == 0 )
                        {
                          v98 = *(_DWORD *)(v97 + 8) & 0x1F;
                          if ( v98 )
                          {
                            if ( v98 == 8 )
                            {
                              v99 = *(DXGSYNCOBJECT **)v97;
                              _InterlockedDecrement((volatile signed __int32 *)&v145[33]);
                              v134 = v99;
                              ExReleasePushLockSharedEx(v94, 0LL);
                              KeLeaveCriticalRegion();
                              v93 = v134;
                              if ( v134 )
                              {
                                v39 = (__int64)v147;
                                v18 = v167[0];
                                v149 = v147;
                                goto LABEL_179;
                              }
LABEL_176:
                              v100 = v96;
                              LODWORD(v39) = -1073741811;
                              WdLogSingleEntry2(2LL, (unsigned int)v100, -1073741811LL);
                              WdLogGlobalForLineNumber = 3488;
                              DxgkLogInternalTriageEvent(
                                0LL,
                                0x40000LL,
                                0xFFFFFFFFLL,
                                L"hSyncObj (0x%I64x) destroyed, returning 0x%I64x",
                                v100,
                                -1073741811LL,
                                0LL,
                                0LL,
                                0LL);
                              v133 = -1073741811;
                              if ( v162 )
                                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v161);
                              goto LABEL_217;
                            }
                            WdLogSingleEntry0(2LL);
                            WdLogGlobalForLineNumber = 318;
                            DxgkLogInternalTriageEvent(
                              0LL,
                              0x40000LL,
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
                      _InterlockedDecrement((volatile signed __int32 *)&v145[33]);
                      ExReleasePushLockSharedEx(v94, 0LL);
                      KeLeaveCriticalRegion();
                      goto LABEL_176;
                    }
                    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8LL * (unsigned int)v79, 1265072196LL);
                    P = Pool2;
                  }
                  v77 = v150;
                  LODWORD(v79) = v137;
                  goto LABEL_136;
                }
                break;
            }
            v61 = *(_OWORD *)(v42 + 32);
            v57 = *(union _LARGE_INTEGER **)(v42 + 48);
            v145 = v57;
            v180 = v61;
            goto LABEL_85;
        }
      default:
        LODWORD(v39) = -1071775733;
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v156 + 3, (PSLIST_ENTRY)(v42 - 16));
        v125 = v141;
        KeReleaseSemaphore((PRKSEMAPHORE)v141, 0, 1, 0);
        v127 = DXGPROCESS::GetCurrent(v126);
        WdLogSingleEntry1(3LL, v127);
        WdLogGlobalForLineNumber = 3623;
        goto LABEL_241;
    }
  }
  WdLogSingleEntry1(3LL, SizeOfPresentToken);
  WdLogGlobalForLineNumber = 3258;
  KeReleaseSemaphore((PRKSEMAPHORE)v141, 0, 1, 0);
  if ( Entry )
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v187 + 1424), Entry);
  ObfDereferenceObject(v141);
LABEL_252:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v177);
  return -1073741811LL;
}
