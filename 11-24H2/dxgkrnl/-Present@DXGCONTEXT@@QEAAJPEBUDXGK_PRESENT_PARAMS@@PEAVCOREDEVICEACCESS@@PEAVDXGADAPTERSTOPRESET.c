/*
 * XREFs of ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402ED810
 * Callers:
 *     DxgkPresent @ 0x1402EAC90 (DxgkPresent.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x140389364 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     DxgkSubmitPresentToHwQueue @ 0x14041D400 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14000E300 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140011084 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x140012FF8 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer @ 0x1400135BC (McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002BEA0 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsDisplayAdapter@DXGADAPTER@@QEBAEXZ @ 0x140031540 (-IsDisplayAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031B58 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x140033200 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140033C28 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x14003644C (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x140036924 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsFullWDDMDevice@DXGDEVICE@@QEBA?BEI@Z @ 0x140037214 (-IsFullWDDMDevice@DXGDEVICE@@QEBA-BEI@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1400375C0 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1400376D4 (-IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x140037A18 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     ?VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z @ 0x140038354 (-VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z.c)
 *     ?VidSchGetDeviceFlipMode@VIDSCH_EXPORT@@QEAA?AW4_VIDSCH_FLIP_MODE@@PEAU_VIDSCH_DEVICE@@IPEAW4D3DDDI_FLIPINTERVAL_TYPE@@@Z @ 0x14003B738 (-VidSchGetDeviceFlipMode@VIDSCH_EXPORT@@QEAA-AW4_VIDSCH_FLIP_MODE@@PEAU_VIDSCH_DEVICE@@IPEAW4D3D.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x140040510 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?VidSchGetMonitorPowerState@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_GLOBAL@@@Z @ 0x140041728 (-VidSchGetMonitorPowerState@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?GetWin32kInterface@DXGPROCESS@@QEBAQEBU_DXGKWIN32KENG_INTERFACE@@XZ @ 0x140042778 (-GetWin32kInterface@DXGPROCESS@@QEBAQEBU_DXGKWIN32KENG_INTERFACE@@XZ.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x140042BB4 (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ?ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE@@QEAAXI@Z @ 0x140044EEC (-ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE@@QEAAXI@Z.c)
 *     ?VidSchGetNumUnorderedWaitsInDevice@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_DEVICE@@@Z @ 0x140045738 (-VidSchGetNumUnorderedWaitsInDevice@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_DEVICE@@@Z.c)
 *     ?VidMmIsAllocationPinned@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x140047298 (-VidMmIsAllocationPinned@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     McTemplateK0pqpqtt_EtwWriteTransfer @ 0x140048390 (McTemplateK0pqpqtt_EtwWriteTransfer.c)
 *     ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x14004CEB0 (-VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004F4FC (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING.c)
 *     ?hDestDc@CWin32kLocks@@QEBAPEAUHDC__@@XZ @ 0x1400551B8 (-hDestDc@CWin32kLocks@@QEBAPEAUHDC__@@XZ.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x140059C6C (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1400631BC (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHHI@Z @ 0x140183270 (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHHI@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z @ 0x1401DCBEC (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@IIPEAUtagRECT@@3IPEBU5@IPEAE@Z @ 0x140227920 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1402A8BD4 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1402B67F4 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1402B6ED4 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1402C3898 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402C84A8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1402E0FA8 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402F57E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F5CF8 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1402F9470 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1TOKEN_BINDING_GUARD@@QEAA@XZ @ 0x1403008B8 (--1TOKEN_BINDING_GUARD@@QEAA@XZ.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x140301AA8 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140301EA0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x140308B08 (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x140309304 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x14030B30C (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x14030B6AC (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ??0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@@Z @ 0x140367864 (--0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     ?CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x14036DFB4 (-CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x140375F48 (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x140376424 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1403765D8 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x140380550 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x140387C88 (-ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?GetDdiSubRectCnt@DXGPRESENT@@QEBAII@Z @ 0x140397374 (-GetDdiSubRectCnt@DXGPRESENT@@QEBAII@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x140397394 (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 *     ?CheckOutput@DXGPRESENT@@QEAAXII@Z @ 0x140398E30 (-CheckOutput@DXGPRESENT@@QEAAXII@Z.c)
 *     ?GetDdiDstRect@DXGPRESENT@@QEBAXPEAUtagRECT@@QEBU2@@Z @ 0x14039986C (-GetDdiDstRect@DXGPRESENT@@QEBAXPEAUtagRECT@@QEBU2@@Z.c)
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1403A6FDC (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 *     ?IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1403B0794 (-IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1403BB8C4 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?RemoveAlphaChannel@@YA?AW4_D3DDDIFORMAT@@W41@@Z @ 0x1403E3604 (-RemoveAlphaChannel@@YA-AW4_D3DDDIFORMAT@@W41@@Z.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1403FAE8C (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1403FB920 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x14041F864 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x14041F9CC (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Present(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct CWin32kLocks *a5,
        struct DXGCONTEXT **a6,
        struct VIDSCH_SUBMIT_DATA_BASE *a7)
{
  struct VIDSCH_SUBMIT_DATA_BASE *v8; // rsi
  struct _D3DKMT_PRESENT *v9; // rdi
  __int64 v10; // rax
  ADAPTER_RENDER *v11; // rcx
  unsigned int v12; // r15d
  const struct _DXGKWIN32KENG_INTERFACE *Win32kInterface; // rax
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  UINT Width; // r12d
  D3DKMT_HANDLE v18; // ebx
  D3DKMT_HANDLE v19; // ebx
  __int64 v20; // r14
  unsigned int v21; // eax
  __int64 v22; // rdx
  int v23; // ecx
  struct _EX_RUNDOWN_REF *v24; // rdx
  struct _EX_RUNDOWN_REF *v25; // rdx
  __int64 v26; // r10
  int v27; // eax
  __int64 v28; // r14
  D3DKMT_HANDLE v29; // eax
  __int64 Value; // r9
  D3DKMT_PRESENT_MODEL Model; // eax
  struct COREDEVICEACCESS *v32; // r15
  struct DXGADAPTERSTOPRESETLOCKSHARED *v33; // r12
  int v34; // r12d
  struct _EX_RUNDOWN_REF *v35; // rbx
  __int64 result; // rax
  __int64 v37; // r14
  unsigned int v38; // eax
  __int64 v39; // rdx
  int v40; // ecx
  struct _EX_RUNDOWN_REF *v41; // rdx
  __int64 v42; // rdx
  int v43; // eax
  const RECT *v44; // r8
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rdx
  unsigned int v49; // r8d
  _OWORD *v50; // rcx
  D3DKMT_HANDLE *BroadcastContext; // rax
  __int128 v52; // xmm1
  int v53; // eax
  char v54; // r14
  const RECT *pSrcSubRects; // r8
  __int64 SubRectCnt; // rdx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v57; // r8d
  char v58; // dl
  UINT v59; // edx
  DXGPRESENT *v60; // rcx
  DXGADAPTER *v61; // rcx
  unsigned int v62; // ebx
  struct COREDEVICEACCESS *v63; // r15
  int v64; // eax
  struct COREDEVICEACCESS *v65; // r14
  BOOL v66; // ebx
  __int64 v67; // rcx
  int v68; // eax
  unsigned int v69; // r14d
  HANDLE CurrentThreadId; // r15
  __int64 v71; // rcx
  DXGADAPTERSTOPRESETLOCKSHARED *v72; // rbx
  COREDEVICEACCESS *v73; // r14
  int v74; // ebx
  HDC v75; // rbx
  HDEV v76; // r14
  __int64 v77; // rcx
  __int64 v78; // rax
  int v79; // ecx
  __int64 v80; // rcx
  __int64 v81; // r14
  DXGPROCESS *Current; // rax
  const struct _DXGKWIN32KENG_INTERFACE *v83; // rax
  const struct _DXGKWIN32KENG_INTERFACE *v84; // rbx
  COREDEVICEACCESS *v85; // r15
  unsigned int v86; // edx
  __int64 i; // r8
  int v88; // eax
  UINT v89; // ebx
  unsigned int j; // r14d
  unsigned int v91; // ecx
  unsigned int v92; // eax
  struct tagRECT *v93; // r8
  RECT *v94; // rcx
  __int64 v95; // r12
  struct _D3DKMT_PRESENT *v96; // rax
  const RECT *pDstSubRects; // r11
  UINT v98; // r15d
  const struct _DXGKWIN32KENG_INTERFACE *v99; // r12
  unsigned int v100; // r8d
  unsigned int v101; // r9d
  __int64 v102; // rdx
  __int64 v103; // rcx
  struct COREDEVICEACCESS *v104; // r15
  int v105; // eax
  UINT k; // edx
  __int64 v107; // rcx
  int v108; // eax
  int v109; // eax
  int v110; // ecx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v111; // r8d
  LONG top; // eax
  LONG left; // eax
  LONG bottom; // eax
  LONG right; // eax
  struct tagRECT *DdiSubRectList; // rax
  __int64 v117; // rcx
  int v118; // ebx
  __int64 v119; // rcx
  __int64 v120; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v121; // ecx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  COREDEVICEACCESS *v123; // rcx
  DXGPRESENTMUTEX *v124; // rcx
  int v125; // eax
  struct DXGALLOCATION *v126; // rax
  const wchar_t *v127; // r9
  struct VIDMM_DMA_BUFFER *v128; // rdx
  __int128 v129; // xmm0
  int v130; // ecx
  int v131; // eax
  int v132; // ecx
  int v133; // eax
  int v134; // ecx
  int v135; // edx
  UINT Duration; // eax
  UINT v137; // edx
  UINT v138; // ecx
  int v139; // ecx
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rdx
  int DeviceFlipMode; // eax
  const struct DXGALLOCATION *DisplayedPrimary; // rax
  int v143; // ecx
  __int64 v144; // rdx
  COREDEVICEACCESS *v145; // r15
  int v146; // eax
  UINT v147; // ebx
  __int64 v148; // rax
  __int64 v149; // rdx
  VIDMM_EXPORT *v150; // rcx
  struct VIDMM_GLOBAL *v151; // rdx
  __int64 v152; // rax
  __int64 v153; // rdx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v154; // eax
  UINT v155; // eax
  ULONG_PTR v156; // rcx
  unsigned int v157; // eax
  unsigned int v158; // r14d
  DXGADAPTER *v159; // rcx
  __int64 v160; // rdx
  int v161; // r8d
  ULONG_PTR Count; // rax
  DXGADAPTER *v163; // rcx
  __int64 v164; // rax
  struct DXGALLOCATION *v165; // rsi
  unsigned int v166; // edx
  __int128 v167; // xmm0
  int v168; // eax
  UINT v169; // ecx
  enum _D3DDDIFORMAT v170; // ebx
  int v171; // eax
  struct VIDMM_DMA_BUFFER *v172; // rdx
  UINT v173; // ebx
  unsigned int v174; // r8d
  int v175; // ebx
  DXGDEVICE *v176; // rbx
  unsigned __int8 v177; // r14
  DXGADAPTERSTOPRESETLOCKSHARED *v178; // r15
  COREDEVICEACCESS *v179; // rsi
  __int64 v180; // rcx
  D3DKMT_HANDLE v181; // eax
  const struct _DXGKWIN32KENG_INTERFACE *v182; // rbx
  int v183; // eax
  struct CWin32kLocks *v184; // r15
  struct DXGADAPTERSTOPRESETLOCKSHARED *v185; // r14
  __int64 v186; // rcx
  unsigned int (__fastcall *v187)(struct _D3DKMT_PRESENT *, HDC, _QWORD, const RECT *, void *, int, unsigned int, unsigned int, int, int, UINT, void (__fastcall *)(const struct tagRECT *, const struct tagRECT *, struct tagRECT *, const struct tagRECT *, unsigned int, unsigned int), __int64 (__fastcall *)(struct tagRECT *, struct tagRECT *, const struct tagRECT *, const struct tagRECT *)); // r15
  int v188; // ebx
  UINT v189; // esi
  bool v190; // r14
  HDC v191; // rax
  struct DXGDEVICE *v192; // rsi
  __int64 v193; // rbx
  struct DXGPROCESS *v194; // rax
  int v195; // eax
  struct DXGDEVICE *v196; // rsi
  __int64 v197; // rbx
  struct DXGPROCESS *v198; // rax
  __int64 v199; // r12
  __int64 v200; // rax
  const RECT *v201; // r15
  UINT v202; // r14d
  __int64 v203; // rsi
  unsigned int v204; // r8d
  unsigned int v205; // r9d
  __int64 v206; // rdx
  __int64 v207; // rcx
  signed int v208; // ebx
  __int64 v209; // rcx
  unsigned int v210; // r14d
  struct DXGALLOCATION *v211; // rax
  __int64 v212; // rax
  DXGADAPTER *v213; // rcx
  unsigned int v214; // ecx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v215; // eax
  unsigned __int64 v216; // rcx
  __int64 v217; // rcx
  int v218; // edx
  int v219; // r8d
  signed int v220; // eax
  unsigned int v221; // r10d
  __int64 v222; // rbx
  const struct tagRECT *v223; // rdx
  struct VIDSCH_SUBMIT_DATA_BASE *v224; // rsi
  int *v225; // r8
  __int64 v226; // r15
  int v227; // r9d
  __int64 v228; // r11
  int v229; // edx
  int v230; // ebx
  const RECT *v231; // rbx
  int v232; // r8d
  unsigned int v233; // r11d
  int v234; // r9d
  __int64 v235; // rdx
  RECT DstRect; // xmm0
  UINT v237; // edx
  __int64 v238; // r8
  __int64 v239; // rcx
  int v240; // eax
  const struct tagRECT *v241; // rdx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v242; // r8d
  unsigned int v243; // eax
  int v244; // ecx
  int v245; // r8d
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v246; // edx
  const struct _DXGKWIN32KENG_INTERFACE *v247; // r12
  int v248; // ebx
  int v249; // eax
  int v250; // ecx
  int v251; // eax
  __int64 v252; // rbx
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  int v254; // eax
  struct VIDMM_DMA_BUFFER *v255; // rdx
  bool IsFullWDDMDevice; // al
  DXGDEVICE *v257; // rcx
  int v258; // eax
  int v259; // eax
  int v260; // ecx
  __int64 v261; // r12
  struct VIDSCH_SUBMIT_DATA_BASE *v262; // rax
  _DWORD *p_left; // r11
  UINT v264; // r15d
  const struct _DXGKWIN32KENG_INTERFACE *v265; // r14
  unsigned int v266; // r10d
  unsigned int v267; // r8d
  unsigned int v268; // r9d
  __int64 v269; // rdx
  __int64 v270; // rcx
  __int64 v271; // rbx
  int v272; // eax
  unsigned __int8 v273; // r9
  unsigned int v274; // r15d
  char v275; // r14
  int v276; // ebx
  struct DXGPROCESS *v277; // rax
  unsigned int v278; // esi
  struct DXGPROCESS *v279; // rbx
  unsigned int v280; // ecx
  __int64 v281; // r8
  int v282; // edx
  struct _EX_RUNDOWN_REF *v283; // rdx
  struct _EX_RUNDOWN_REF *v284; // rax
  unsigned int Ptr_high; // r12d
  __int64 v286; // rcx
  unsigned __int8 *pPrivateDriverData; // r14
  unsigned int PrivateDriverDataSize; // r15d
  __int64 v289; // rdx
  struct DXGHWQUEUE **v290; // rax
  __int64 v291; // rbx
  struct DXGHWQUEUE *v292; // rsi
  struct DXGPROCESS *v293; // rax
  DXGDEVICE *v294; // rsi
  unsigned __int8 v295; // bl
  CWin32kLocks *v296; // rsi
  const struct _DXGKWIN32KENG_INTERFACE *v297; // r14
  bool v298; // zf
  int v299; // eax
  int v300; // eax
  unsigned int (__fastcall *v301)(HDC, _QWORD, const RECT *, _QWORD, UINT); // r15
  UINT v302; // ebx
  UINT v303; // esi
  const RECT *v304; // r14
  HDC v305; // rax
  int v306; // eax
  __int64 v307; // rax
  unsigned __int8 v308; // r8
  int CurrentOrientation; // eax
  int v310; // ecx
  __int64 v311; // rcx
  __int64 v312; // rbx
  unsigned int v313; // r12d
  struct DXGHWQUEUE **v314; // rax
  struct DXGHWQUEUE *v315; // r15
  struct DXGPROCESS *v316; // rax
  struct _DXGKARG_PRESENT *v317; // [rsp+20h] [rbp-100h]
  struct _DXGKARG_PRESENT *v318; // [rsp+20h] [rbp-100h]
  __int64 v319; // [rsp+20h] [rbp-100h]
  struct _DXGKARG_PRESENT *v320; // [rsp+20h] [rbp-100h]
  union _LARGE_INTEGER *v321; // [rsp+28h] [rbp-F8h]
  __int64 v322; // [rsp+28h] [rbp-F8h]
  __int64 v323; // [rsp+30h] [rbp-F0h]
  enum _D3DDDIFORMAT v324[2]; // [rsp+38h] [rbp-E8h]
  __int64 v325; // [rsp+38h] [rbp-E8h]
  struct _DXGKARG_PRESENT *v326; // [rsp+40h] [rbp-E0h]
  __int64 v327; // [rsp+40h] [rbp-E0h]
  int v328; // [rsp+40h] [rbp-E0h]
  struct tagRECT *v329; // [rsp+48h] [rbp-D8h]
  int v330; // [rsp+48h] [rbp-D8h]
  struct VIDMM_DMA_BUFFER *v331; // [rsp+50h] [rbp-D0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v332; // [rsp+58h] [rbp-C8h]
  enum _D3DDDIFORMAT v333[2]; // [rsp+60h] [rbp-C0h]
  enum _D3DDDIFORMAT v334; // [rsp+60h] [rbp-C0h]
  struct COREDEVICEACCESS *v335; // [rsp+68h] [rbp-B8h]
  struct COREDEVICEACCESS *v336; // [rsp+68h] [rbp-B8h]
  __int64 v337; // [rsp+70h] [rbp-B0h]
  __int64 v338; // [rsp+78h] [rbp-A8h]
  __int64 v339; // [rsp+80h] [rbp-A0h]
  __int64 v340; // [rsp+88h] [rbp-98h]
  __int64 v341; // [rsp+90h] [rbp-90h]
  __int64 v342; // [rsp+98h] [rbp-88h]
  struct DXGALLOCATION *v343; // [rsp+A0h] [rbp-80h] BYREF
  struct DXGALLOCATION *v344; // [rsp+A8h] [rbp-78h] BYREF
  struct _EX_RUNDOWN_REF *v345; // [rsp+B0h] [rbp-70h] BYREF
  struct COREDEVICEACCESS *v346; // [rsp+B8h] [rbp-68h]
  char v347; // [rsp+C0h] [rbp-60h]
  unsigned int hDestination; // [rsp+C4h] [rbp-5Ch] BYREF
  unsigned int Height; // [rsp+C8h] [rbp-58h]
  unsigned int v350; // [rsp+CCh] [rbp-54h]
  char v351; // [rsp+D0h] [rbp-50h]
  unsigned int v352[2]; // [rsp+D8h] [rbp-48h]
  DXGADAPTERSTOPRESETLOCKSHARED *v353; // [rsp+E0h] [rbp-40h]
  unsigned int hSource; // [rsp+E8h] [rbp-38h]
  CWin32kLocks *v355; // [rsp+F0h] [rbp-30h]
  unsigned int v356[2]; // [rsp+F8h] [rbp-28h]
  enum _D3DDDIFORMAT Color; // [rsp+100h] [rbp-20h]
  const struct _DXGKWIN32KENG_INTERFACE *v358; // [rsp+108h] [rbp-18h]
  struct VIDSCH_SUBMIT_DATA_BASE *v359; // [rsp+110h] [rbp-10h]
  unsigned int v360; // [rsp+118h] [rbp-8h]
  _BYTE v361[24]; // [rsp+120h] [rbp+0h] BYREF
  struct DXGCONTEXT **v362; // [rsp+138h] [rbp+18h]
  struct _EX_RUNDOWN_REF *v363; // [rsp+140h] [rbp+20h] BYREF
  HWND hWindow; // [rsp+148h] [rbp+28h]
  struct _D3DKMT_PRESENT *v365; // [rsp+150h] [rbp+30h]
  struct _EX_RUNDOWN_REF *v366; // [rsp+158h] [rbp+38h] BYREF
  struct _EX_RUNDOWN_REF *v367; // [rsp+160h] [rbp+40h] BYREF
  struct _EX_RUNDOWN_REF *v368; // [rsp+168h] [rbp+48h] BYREF
  struct _EX_RUNDOWN_REF *v369; // [rsp+170h] [rbp+50h] BYREF
  __int64 v370; // [rsp+178h] [rbp+58h] BYREF
  struct _D3DKMT_UNLOCK2 v371; // [rsp+180h] [rbp+60h] BYREF
  __int64 v372; // [rsp+188h] [rbp+68h]
  struct _D3DKMT_UNLOCK v373; // [rsp+190h] [rbp+70h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v374; // [rsp+1A0h] [rbp+80h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v375; // [rsp+1D0h] [rbp+B0h] BYREF
  _BYTE v376[24]; // [rsp+200h] [rbp+E0h] BYREF
  _BYTE v377[24]; // [rsp+218h] [rbp+F8h] BYREF
  struct _D3DKMT_LOCK2 v378; // [rsp+230h] [rbp+110h] BYREF
  _D3DKMT_LOCK v379; // [rsp+248h] [rbp+128h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v380; // [rsp+278h] [rbp+158h] BYREF
  enum _D3DDDIFORMAT v381[4]; // [rsp+2B0h] [rbp+190h]
  _DWORD v382[8]; // [rsp+300h] [rbp+1E0h] BYREF
  _QWORD v383[70]; // [rsp+320h] [rbp+200h] BYREF
  struct _DXGKARG_PRESENT v384; // [rsp+550h] [rbp+430h] BYREF
  struct tagRECT v385; // [rsp+600h] [rbp+4E0h] BYREF
  struct tagRECT Source1; // [rsp+610h] [rbp+4F0h] BYREF
  struct tagRECT v387; // [rsp+620h] [rbp+500h] BYREF
  __int128 v388; // [rsp+630h] [rbp+510h] BYREF
  struct tagRECT v389; // [rsp+640h] [rbp+520h] BYREF
  _OWORD v390[20]; // [rsp+650h] [rbp+530h] BYREF
  _BYTE v391[64]; // [rsp+790h] [rbp+670h] BYREF
  _BYTE v392[64]; // [rsp+7D0h] [rbp+6B0h] BYREF
  _BYTE v393[64]; // [rsp+810h] [rbp+6F0h] BYREF
  _BYTE v394[64]; // [rsp+850h] [rbp+730h] BYREF
  _BYTE v395[64]; // [rsp+890h] [rbp+770h] BYREF
  _BYTE v396[64]; // [rsp+8D0h] [rbp+7B0h] BYREF
  _BYTE v397[64]; // [rsp+910h] [rbp+7F0h] BYREF
  _BYTE v398[64]; // [rsp+950h] [rbp+830h] BYREF
  _BYTE v399[64]; // [rsp+990h] [rbp+870h] BYREF
  _BYTE v400[64]; // [rsp+9D0h] [rbp+8B0h] BYREF
  _BYTE v401[64]; // [rsp+A10h] [rbp+8F0h] BYREF
  char v402[64]; // [rsp+A50h] [rbp+930h] BYREF

  v8 = a7;
  v9 = a2;
  v355 = a5;
  v362 = a6;
  v10 = *((_QWORD *)this + 2);
  v353 = a4;
  v346 = a3;
  v365 = a2;
  v11 = *(ADAPTER_RENDER **)(v10 + 16);
  v359 = a7;
  v12 = 0;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(v11) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3974;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      3974LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this + 45) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3975;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pPresentDmaBuffer == NULL", 3975LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (v9->Flags.Value & 0x4000) != 0 )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 3981;
    return result;
  }
  Win32kInterface = DXGPROCESS::GetWin32kInterface(*(DXGPROCESS **)(*((_QWORD *)this + 2) + 40LL));
  v14 = v9->Flags.Value & 0x12000;
  v358 = Win32kInterface;
  if ( v14 == 73728 )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 3992;
    return result;
  }
  memset(&v384, 0, sizeof(v384));
  hSource = v9->hSource;
  hDestination = v9->hDestination;
  v15 = *(_DWORD *)a7 | 0x10020;
  *(_DWORD *)a7 = v15;
  if ( (v9->Flags.Value & 0x10000) == 0 )
    v15 |= 1u;
  v16 = v15 | 0x100;
  *(_DWORD *)a7 = v16;
  *(_DWORD *)a7 = v16 ^ (v16 ^ (32 * v9->Flags.Value)) & 0x20000;
  if ( (v9->Flags.Value & 0x1000) != 0 )
    *((_DWORD *)a7 + 28) = v9->PresentCount;
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
    *((_DWORD *)a7 + 29) = 0;
  v350 = 0;
  Height = 0;
  Width = 0;
  Color = D3DDDIFMT_UNKNOWN;
  v352[0] = 0;
  v356[0] = 0;
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v343, 0LL);
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v344, 0LL);
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v345, 0LL);
  v18 = v9->hDestination;
  v360 = 0;
  if ( v18 )
  {
    v37 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v37 + 248));
    v38 = (v18 >> 6) & 0xFFFFFF;
    if ( v38 < *(_DWORD *)(v37 + 296)
      && (v39 = *(_QWORD *)(v37 + 280) + 16LL * v38, ((v18 >> 25) & 0x60) == (*(_BYTE *)(v39 + 8) & 0x60))
      && (*(_DWORD *)(v39 + 8) & 0x2000) == 0
      && (v40 = *(_DWORD *)(v39 + 8) & 0x1F) != 0 )
    {
      if ( v40 == 5 )
      {
        v41 = *(struct _EX_RUNDOWN_REF **)v39;
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        v41 = 0LL;
      }
    }
    else
    {
      v41 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v366, v41);
    _InterlockedDecrement((volatile signed __int32 *)(v37 + 264));
    ExReleasePushLockSharedEx(v37 + 248, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign(&v344, &v366);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v366);
    if ( !v344 )
    {
      v34 = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, this, v9->hDestination);
      WdLogGlobalForLineNumber = 4047;
      goto LABEL_41;
    }
    v42 = *((_QWORD *)this + 2);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v344 + 1) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(v42 + 16) + 16LL) )
    {
      v34 = -1073741811;
      WdLogSingleEntry3(2LL, v42, v344, -1073741811LL);
      v126 = v344;
      v327 = 0LL;
      v325 = 0LL;
      WdLogGlobalForLineNumber = 4057;
      goto LABEL_248;
    }
    memset(&v380.Width, 0, 40);
    v380.hAllocation = *(HANDLE *)(*((_QWORD *)v344 + 6) + 16LL);
    v43 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), &v380);
    v28 = v43;
    if ( v43 < 0 )
    {
      WdLogSingleEntry4(2LL, v43, this, *(_QWORD *)(*((_QWORD *)v344 + 6) + 16LL), v344);
      v211 = v344;
      WdLogGlobalForLineNumber = 4070;
      goto LABEL_423;
    }
    Width = v380.Width;
    v352[0] = v380.Width;
    v356[0] = v380.Height;
  }
  if ( (v9->Flags.Value & 0x8002) == 0 )
  {
    v19 = v9->hSource;
    v20 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v20 + 248));
    v21 = (v19 >> 6) & 0xFFFFFF;
    if ( v21 < *(_DWORD *)(v20 + 296)
      && (v22 = *(_QWORD *)(v20 + 280) + 16LL * v21, ((v19 >> 25) & 0x60) == (*(_BYTE *)(v22 + 8) & 0x60))
      && (*(_DWORD *)(v22 + 8) & 0x2000) == 0
      && (v23 = *(_DWORD *)(v22 + 8) & 0x1F) != 0 )
    {
      if ( v23 == 5 )
      {
        v24 = *(struct _EX_RUNDOWN_REF **)v22;
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        v24 = 0LL;
      }
    }
    else
    {
      v24 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v367, v24);
    _InterlockedDecrement((volatile signed __int32 *)(v20 + 264));
    ExReleasePushLockSharedEx(v20 + 248, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign(&v343, &v367);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v367);
    v25 = (struct _EX_RUNDOWN_REF *)v343;
    if ( !v343 )
    {
      v34 = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, this, v9->hSource);
      WdLogGlobalForLineNumber = 4085;
      goto LABEL_41;
    }
    v12 = 0;
    memset(&v374.Width, 0, 40);
    v374.hAllocation = *(HANDLE *)(*((_QWORD *)v343 + 6) + 16LL);
    if ( (v9->Flags.Value & 0x10000000) != 0 )
    {
      v350 = v9[1].hSource;
      v374.Width = v350;
      Height = v9[1].hDestination;
      v374.Height = Height;
      Color = v9[1].Color;
      v374.Format = Color;
      goto LABEL_27;
    }
    v26 = *((_QWORD *)this + 2);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v343 + 1) + 16LL) + 16LL) == *(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) )
    {
      v27 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v26 + 16), &v374);
      v28 = v27;
      if ( v27 >= 0 )
      {
        Color = v374.Format;
        Height = v374.Height;
        v350 = v374.Width;
        goto LABEL_26;
      }
      WdLogSingleEntry4(2LL, v27, this, *(_QWORD *)(*((_QWORD *)v343 + 6) + 16LL), v343);
      v211 = v343;
      WdLogGlobalForLineNumber = 4124;
LABEL_423:
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x",
        v28,
        (__int64)this,
        *(_QWORD *)(*((_QWORD *)v211 + 6) + 16LL),
        (__int64)v211,
        0LL);
      goto LABEL_260;
    }
    v34 = -1073741811;
    WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v343, -1073741811LL);
    v126 = v343;
    v327 = 0LL;
    v325 = 0LL;
    WdLogGlobalForLineNumber = 4113;
LABEL_248:
    v323 = -1073741811LL;
    v127 = L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x";
    v322 = (__int64)v126;
    v319 = *((_QWORD *)this + 2);
    goto LABEL_250;
  }
LABEL_26:
  v25 = (struct _EX_RUNDOWN_REF *)v343;
LABEL_27:
  v29 = v9->hDestination;
  if ( !v29 || (LODWORD(Value) = v9->Flags.0, (Value & 0x10000) != 0) )
  {
    Value = v9->Flags.Value;
    if ( (Value & 4) == 0 )
    {
      if ( (Value & 3) == 0 )
      {
        if ( (Value & 0x8000) == 0 )
        {
          v34 = -1073741811;
          WdLogSingleEntry5(3LL, -1073741811LL, this, v9->pSrcSubRects, v9->SubRectCnt, v9->Flags.Value);
          WdLogGlobalForLineNumber = 6226;
          goto LABEL_38;
        }
        if ( (Value & 0x27EF) == 0 )
        {
          Model = v9->PresentHistoryToken.Model;
          if ( Model == D3DKMT_PM_REDIRECTED_FLIP )
          {
            if ( v9->PresentHistoryToken.Token.Flip.PlaneIndex <= 0x10 )
            {
LABEL_34:
              v32 = v346;
              v33 = v353;
              LODWORD(v28) = SubmitPresentHistoryTokenPreparation(
                               v353,
                               v346,
                               *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
                               &v9->PresentHistoryToken,
                               v9->PresentLimitSemaphore,
                               (v9->Flags.Value & 0x10) != 0);
              if ( (int)v28 < 0 )
              {
LABEL_260:
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v345);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v344);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v343);
                return (unsigned int)v28;
              }
              TOKEN_BINDING_GUARD::TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)v382, &v9->PresentHistoryToken, v33, v32);
              v382[0] = SubmitPresentHistoryToken(
                          &v9->PresentHistoryToken,
                          v32,
                          v33,
                          v355,
                          1,
                          0LL,
                          (struct DXGK_PRESENT_PARAMS *)v9,
                          a7,
                          this,
                          0LL,
                          0LL);
              v34 = v382[0];
              TOKEN_BINDING_GUARD::~TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)v382);
LABEL_36:
              if ( v34 >= 0 )
              {
LABEL_37:
                v35 = v345;
                if ( v345 )
                {
                  if ( (v9->Flags.Value & 0x10000000) == 0 )
                  {
                    v46 = *((_QWORD *)this + 2);
                    v47 = *(_QWORD *)(v46 + 1896);
                    if ( v47 )
                    {
                      if ( (*(_DWORD *)(*(_QWORD *)(v46 + 40) + 408LL) & 4) == 0 )
                      {
                        memset(v390, 0, 0x138uLL);
                        v48 = 2LL;
                        v49 = v360;
                        LODWORD(v390[0]) = v9->hDevice;
                        DWORD1(v390[0]) = v360;
                        DWORD2(v390[0]) = (*(_DWORD *)(v345[6].Count + 4) >> 6) & 0xF;
                        v50 = &v390[1];
                        HIDWORD(v390[0]) = v9->BroadcastContextCount;
                        BroadcastContext = v9->BroadcastContext;
                        do
                        {
                          *v50 = *(_OWORD *)BroadcastContext;
                          v50[1] = *((_OWORD *)BroadcastContext + 1);
                          v50[2] = *((_OWORD *)BroadcastContext + 2);
                          v50[3] = *((_OWORD *)BroadcastContext + 3);
                          v50[4] = *((_OWORD *)BroadcastContext + 4);
                          v50[5] = *((_OWORD *)BroadcastContext + 5);
                          v50[6] = *((_OWORD *)BroadcastContext + 6);
                          v50 += 8;
                          v52 = *((_OWORD *)BroadcastContext + 7);
                          BroadcastContext += 32;
                          *(v50 - 1) = v52;
                          --v48;
                        }
                        while ( v48 );
                        LODWORD(v390[19]) = 4;
                        LODWORD(v390[17]) = 0;
                        LODWORD(v390[18]) = 0;
                        v53 = OUTPUTDUPL_MGR::ProcessPresent(
                                *(OUTPUTDUPL_MGR **)(*(_QWORD *)(v47 + 3120) + 120LL),
                                this,
                                (struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS)4,
                                v49,
                                HIDWORD(v390[0]),
                                (struct _D3DKMT_PRESENT_RGNS *)&v390[17],
                                (const struct DXGK_PRESENT_PARAMS *)v9,
                                (*(_DWORD *)(v35[6].Count + 4) >> 6) & 0xF,
                                v362,
                                v346);
                        if ( v53 == 259 )
                          v53 = 0;
                        v34 = v53;
                      }
                    }
                  }
                }
                goto LABEL_38;
              }
              goto LABEL_38;
            }
          }
          else if ( ((Model - 7) & 0xFFFFFFFD) == 0 )
          {
            goto LABEL_34;
          }
        }
        v34 = -1073741811;
        WdLogSingleEntry3(3LL, this, v9->Flags.Value, -1073741811LL);
        WdLogGlobalForLineNumber = 6190;
        goto LABEL_41;
      }
      v54 = 0;
      v347 = 0;
      if ( (Value & 0x100) != 0 )
      {
        v120 = *((_QWORD *)this + 2);
        if ( !*(_QWORD *)(v120 + 1896) )
        {
          v34 = -1073741811;
          WdLogSingleEntry2(3LL, *((_QWORD *)this + 2), -1073741811LL);
          WdLogGlobalForLineNumber = 5139;
          goto LABEL_41;
        }
        v121 = *(_DWORD *)(v120 + 1904);
        VidPnSourceId = v9->VidPnSourceId;
        if ( v121 <= VidPnSourceId )
        {
          WdLogSingleEntry2(3LL, VidPnSourceId, v121);
          WdLogGlobalForLineNumber = 5145;
          goto LABEL_329;
        }
      }
      pSrcSubRects = v9->pSrcSubRects;
      if ( (Value & 2) != 0 )
      {
        if ( !pSrcSubRects || !v9->SubRectCnt || (Value & 0x86BD) != 0 )
        {
          v34 = -1073741811;
          WdLogSingleEntry5(3LL, this, pSrcSubRects, v9->SubRectCnt, Value, -1073741811LL);
          WdLogGlobalForLineNumber = 5167;
          goto LABEL_41;
        }
        hSource = 0;
      }
      else
      {
        if ( !pSrcSubRects
          || (SubRectCnt = v9->SubRectCnt, !(_DWORD)SubRectCnt)
          || !v350
          || !Height
          || (Value & 0x802E) != 0 )
        {
          v34 = -1073741811;
          WdLogSingleEntry5(3LL, this, pSrcSubRects, v9->SubRectCnt, Value, -1073741811LL);
          WdLogGlobalForLineNumber = 5187;
          goto LABEL_41;
        }
        if ( (((unsigned int)Value >> 9) & 1) != 0 || (Value & 0x400) != 0 )
        {
          if ( (((unsigned int)Value >> 9) & 1) == (((unsigned int)Value >> 10) & 1) )
          {
            v34 = -1073741811;
            WdLogSingleEntry5(3LL, -1073741811LL, this, pSrcSubRects, SubRectCnt, Value);
            WdLogGlobalForLineNumber = 5199;
            goto LABEL_41;
          }
          if ( (Value & 0x100) == 0
            || !ADAPTER_DISPLAY::IsVidPnSourceOwner(
                  *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3120LL),
                  *((const struct DXGDEVICE **)this + 2),
                  v9->VidPnSourceId) )
          {
            v34 = -1073741811;
            WdLogSingleEntry5(3LL, this, v9->pSrcSubRects, v9->SubRectCnt, v9->Flags.Value, -1073741811LL);
            WdLogGlobalForLineNumber = 5208;
            goto LABEL_41;
          }
        }
      }
      v57 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v9->Flags.Value;
      v58 = *(_BYTE *)&v57 ^ (*(_BYTE *)&v9->Flags.0 & 2 | *(_BYTE *)&v384.Flags.0 & 0xFD);
      v57 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)(*(unsigned int *)&v57 >> 5);
      v59 = (v9->Flags.Value & 2 | v384.Flags.Value & 0xFFFFFFFD) ^ v58 & 1;
      v384.Flags.Value = v59 ^ (*(_BYTE *)&v57 ^ (unsigned __int8)v59) & 0x10 ^ (*(_BYTE *)&v57 ^ (unsigned __int8)(v59 ^ (*(_BYTE *)&v57 ^ v59) & 0x10)) & 0x20 ^ ((unsigned __int8)(v59 ^ (*(_BYTE *)&v57 ^ v59) & 0x10 ^ (*(_BYTE *)&v57 ^ v59 ^ (*(_BYTE *)&v57 ^ v59) & 0x10) & 0x20) ^ *(_BYTE *)&v57) & 0x40;
      v384.Color = v9->Color;
      v34 = DXGPRESENT::CheckInput(*((DXGPRESENT **)this + 19), v9, v350, Height);
      if ( v34 < 0 )
        goto LABEL_38;
      v60 = (DXGPRESENT *)*((_QWORD *)this + 19);
      if ( (*((_DWORD *)v60 + 1) & 4) != 0 )
      {
LABEL_158:
        if ( bTracingEnabled && !v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
          McTemplateK0p_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventBlitCancel, 0LL, v9->hWindow);
        goto LABEL_37;
      }
      DXGPRESENT::CheckOutput(v60, v352[0], v356[0]);
      v61 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1896LL);
      if ( !v61 || DXGADAPTER::IsDisplayOnlyAdapter(v61) )
      {
        v65 = v346;
        v108 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, (v9->Flags.Value & 0x10) == 0, v346);
        v74 = v108;
        if ( v108 < 0 )
        {
          WdLogSingleEntry2(4LL, v108, this);
          WdLogGlobalForLineNumber = 5257;
          goto LABEL_234;
        }
      }
      else
      {
        if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 5233;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"GetDisplayAdapter() == GetRenderAdapter()",
            5233LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v62 = 0;
        v63 = v346;
        while ( v62 < *(_DWORD *)(*((_QWORD *)this + 2) + 1904LL) )
        {
          v64 = DXGCONTEXT::WaitForQueuedPresentLimit(this, v62, (v9->Flags.Value & 0x10) == 0, v63);
          LODWORD(v28) = v64;
          if ( v64 < 0 )
          {
            WdLogSingleEntry2(4LL, v64, this);
            WdLogGlobalForLineNumber = 5243;
            goto LABEL_260;
          }
          ++v62;
        }
        v65 = v63;
      }
      v34 = DXGCONTEXT::AcquireDmaBuffer(this, (struct VIDMM_DMA_BUFFER **)this + 45, v65, 0);
      if ( v34 < 0 )
        goto LABEL_38;
      if ( !*((_QWORD *)this + 45) && !*((_BYTE *)this + 434) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5271;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"m_pPresentDmaBuffer || IsParavirtualized()",
          5271LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGPRESENTMUTEX::DXGPRESENTMUTEX(
        (DXGPRESENTMUTEX *)v361,
        *(struct ADAPTER_RENDER *const *)(*((_QWORD *)this + 2) + 16LL));
      v66 = 0;
      if ( (v9->Flags.Value & 0x10000) != 0 )
      {
        if ( v9->hDestination )
        {
          v67 = *((_QWORD *)v344 + 6);
          v68 = *(_DWORD *)(v67 + 4);
          *(_DWORD *)(v67 + 4) = v68 | 0x400;
          v66 = (v68 & 0x400) == 0;
        }
      }
      else
      {
        COREDEVICEACCESS::Release(v65);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v353);
        DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v361);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v353);
        v272 = COREDEVICEACCESS::AcquireShared(v65, 0LL);
        v34 = v272;
        if ( v272 < 0 )
        {
          WdLogSingleEntry2(4LL, v272, this);
          WdLogGlobalForLineNumber = 5292;
          COREDEVICEACCESS::AcquireSharedUncheck(v65, 0LL);
          DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v361);
          goto LABEL_41;
        }
      }
      v69 = (*((__int64 (**)(void))v358 + 1))();
      v352[0] = v69;
      CurrentThreadId = PsGetCurrentThreadId();
      if ( !*((_BYTE *)this + 434) )
        VIDSCH_EXPORT::VidSchGetMonitorPowerState(
          *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
          *(struct _VIDSCH_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 744LL));
      v71 = *((_QWORD *)this + 19);
      if ( *(_DWORD *)(v71 + 8) != v69
        || *(HANDLE *)(v71 + 56) != CurrentThreadId
        || *(HWND *)(v71 + 48) != v9->hWindow
        || *(_DWORD *)(v71 + 64)
        || v66
        || (v109 = *(_DWORD *)(v71 + 4), (v109 & 0x108) != 0) )
      {
        DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v361);
        v72 = v353;
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v353);
        v73 = v346;
        COREDEVICEACCESS::Release(v346);
        v34 = CWin32kLocks::Lock(v355, v9->hWindow, HIWORD(v9->Flags.Value) & 1, 1, 0);
        if ( (v9->Flags.Value & 0x10000) == 0
          || (v370 = 0LL,
              (*((void (__fastcall **)(_QWORD, __int64 *))v358 + 31))(*(_QWORD *)v355, &v370),
              *(_QWORD *)(*((_QWORD *)this + 19) + 440LL) = v370,
              (v9->Flags.Value & 0x10000) == 0) )
        {
          DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v361);
        }
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v72);
        v74 = COREDEVICEACCESS::AcquireShared(v73, 0LL);
        if ( v74 < 0 )
          goto LABEL_595;
        if ( v34 < 0 )
        {
LABEL_104:
          v78 = *((_QWORD *)this + 19);
          v351 = 0;
          v79 = *(_DWORD *)(v78 + 4);
          if ( (v79 & 0x10) == 0 )
          {
            if ( v34 < 0 || (v79 & 2) != 0 )
            {
LABEL_153:
              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v361);
              if ( v351 )
              {
                CWin32kLocks::Unlock(v355);
                COREDEVICEACCESS::Release(v346);
                DXGDEVICE::FlushScheduler(*((_QWORD *)this + 2), 7LL, 4294967293LL, 0LL);
                v34 = COREDEVICEACCESS::AcquireShared(v346, 0LL);
              }
LABEL_155:
              v54 = v347;
              if ( *((_QWORD *)this + 45) )
              {
                if ( v34 >= 0 )
                {
                  v110 = *(_DWORD *)(*((_QWORD *)this + 19) + 4LL);
                  if ( (v110 & 0x10) != 0 && ((*(_BYTE *)&v9->Flags.0 | (unsigned __int8)v110) & 2) == 0 )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 6150;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146LL,
                      0xFFFFFFFFLL,
                      L"!NT_SUCCESS(ntStatus) || !m_pPresent->BltViaGDI() || m_pPresent->IsBltEmpty() || pPresent->Flags.ColorFill",
                      6150LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                }
                VIDMM_EXPORT::VidMmReleaseDmaBuffer(
                  *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                  *((struct VIDMM_DMA_BUFFER **)this + 45));
                *((_QWORD *)this + 45) = 0LL;
              }
              if ( (*(_DWORD *)(*((_QWORD *)this + 19) + 4LL) & 0x80) != 0 )
              {
                if ( (unsigned int)(v34 + 1071775738) > 1 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 6158;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146LL,
                    0xFFFFFFFFLL,
                    L"ntStatus == STATUS_GRAPHICS_PRESENT_OCCLUDED || ntStatus == STATUS_GRAPHICS_PRESENT_DENIED",
                    6158LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                v34 = 0;
              }
              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v361);
              if ( v34 < 0 )
                goto LABEL_38;
              goto LABEL_158;
            }
            if ( (*((unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))v358 + 30))(0LL, 0LL, 0LL) )
            {
              if ( (v9->Flags.Value & 0x12100) != 0x10000 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 5904;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146LL,
                  0xFFFFFFFFLL,
                  L"((pPresent->Flags.RedirectedBlt) && (!pPresent->Flags.RestrictVidPnSource) && (!pPresent->Flags.Rotate))",
                  5904LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            else if ( !*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) && (v9->Flags.Value & 0x4000000) == 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5909;
              DxgkLogInternalTriageEvent(
                0LL,
                262146LL,
                0xFFFFFFFFLL,
                L"GetDisplayAdapter() != NULL || pPresent->Flags.CrossAdapter",
                5909LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( (v9->Flags.Value & 0x10000) == 0 )
              goto LABEL_118;
            v81 = *(_QWORD *)v355;
            Current = DXGPROCESS::GetCurrent(v80);
            v83 = DXGPROCESS::GetWin32kInterface(Current);
            v84 = v83;
            if ( !v81
              || !v83
              || *(_DWORD *)(*((_QWORD *)this + 19) + 440LL) != v9->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags )
            {
              goto LABEL_118;
            }
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v353);
            v85 = v346;
            COREDEVICEACCESS::Release(v346);
            memset(v383, 0, 0x228uLL);
            LODWORD(v383[0]) = DXGPRESENT::GetDdiSubRectCnt(*((DXGPRESENT **)this + 19), 0);
            v383[1] = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), 0);
            v86 = 1;
            v383[3] = *((unsigned int *)this + 6);
            LODWORD(v383[2]) = 1;
            for ( i = 0LL; (unsigned int)i < v9->BroadcastContextCount; ++LODWORD(v383[2]) )
            {
              v307 = (unsigned int)i;
              i = (unsigned int)(i + 1);
              v383[v86 + 3] = v9->BroadcastContext[v307];
              v86 = LODWORD(v383[2]) + 1;
            }
            if ( !*((_BYTE *)this + 434)
              && (unsigned int)VIDSCH_EXPORT::VidSchGetNumUnorderedWaitsInDevice(
                                 *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
                                 *(struct _VIDSCH_DEVICE **)(*((_QWORD *)this + 2) + 800LL)) )
            {
              v351 = 1;
              LOBYTE(v383[68]) = 1;
            }
            (*((void (__fastcall **)(__int64, _QWORD *, __int64))v84 + 32))(v81, v383, i);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v353);
            v88 = COREDEVICEACCESS::AcquireShared(v85, 0LL);
            v74 = v88;
            if ( v88 >= 0 )
            {
LABEL_118:
              v89 = 0;
              for ( j = 0; ; ++j )
              {
                v91 = (v9->Flags.Value & 0x10000) != 0 ? 1 : *(_DWORD *)(*((_QWORD *)this + 2) + 1904LL);
                if ( j >= v91 )
                  break;
                v384.SubRectCnt = DXGPRESENT::GetDdiSubRectCnt(*((DXGPRESENT **)this + 19), j);
                if ( v384.SubRectCnt )
                {
                  if ( (v9->Flags.Value & 0x10000) != 0 )
                  {
                    v92 = hDestination;
                  }
                  else
                  {
                    v308 = *((_BYTE *)this + 432) || *((_BYTE *)this + 433);
                    v92 = DXGDEVICE::OpenCddPrimaryHandle(*((DXGDEVICE **)this + 2), j, v308, *((_DWORD *)this + 97));
                    hDestination = v92;
                  }
                  if ( v92 )
                  {
                    v384.pDstSubRects = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), j);
                    if ( (v9->Flags.Value & 0x2000) != 0 )
                    {
                      CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(
                                             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3120LL),
                                             j,
                                             1);
                      v310 = 0;
                      if ( CurrentOrientation != 1 )
                        v310 = 128;
                      v384.Flags.Value = v310 | v384.Flags.Value & 0xFFFFFF7F;
                    }
                    v389 = 0LL;
                    if ( (v9->Flags.Value & 0x10000) != 0 )
                      v93 = &v389;
                    else
                      v93 = (struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL)
                                                                     + 3120LL)
                                                         + 128LL)
                                             + 628LL
                                             + 4024LL * j);
                    v94 = (RECT *)*((_QWORD *)this + 19);
                    v384.SrcRect = v94[9];
                    DXGPRESENT::GetDdiDstRect((DXGPRESENT *)v94, &v384.DstRect, v93);
                    if ( bTracingEnabled && *((_QWORD *)this + 45) )
                    {
                      v95 = VIDMM_EXPORT::VidMmETWAllocationHandle(
                              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                              *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
                              hDestination);
                      v96 = (struct _D3DKMT_PRESENT *)VIDMM_EXPORT::VidMmETWAllocationHandle(
                                                        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 760LL),
                                                        *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 16LL)
                                                                                + 768LL),
                                                        hSource);
                      pDstSubRects = v384.pDstSubRects;
                      v98 = v384.SubRectCnt;
                      v365 = v96;
                      v358 = (const struct _DXGKWIN32KENG_INTERFACE *)*((_QWORD *)this + 45);
                      hWindow = v9->hWindow;
                      *(_QWORD *)v356 = v384.pDstSubRects;
                      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                      {
                        LODWORD(v342) = v384.SubRectCnt;
                        LODWORD(v341) = v384.DstRect.bottom;
                        LODWORD(v340) = v384.DstRect.top;
                        LODWORD(v339) = v384.DstRect.right;
                        LODWORD(v338) = v384.DstRect.left;
                        LODWORD(v337) = v384.SrcRect.bottom;
                        LODWORD(v335) = v384.SrcRect.top;
                        v333[0] = (enum _D3DDDIFORMAT)v384.SrcRect.right;
                        LODWORD(v332) = v384.SrcRect.left;
                        v89 = 0;
                        LODWORD(v331) = v384.Flags.0;
                        LODWORD(v329) = 0;
                        LODWORD(v326) = 1;
                        *(_QWORD *)v324 = v95;
                        v99 = v358;
                        McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
                          (__int64)&DxgkControlGuid_Context,
                          (__int64)&EventBlit,
                          0LL,
                          hWindow,
                          v358,
                          0LL,
                          v365,
                          *(_QWORD *)v324,
                          v326,
                          v329,
                          v331,
                          v332,
                          *(_QWORD *)v333,
                          v335,
                          v337,
                          v338,
                          v339,
                          v340,
                          v341,
                          v342);
                        pDstSubRects = *(const RECT **)v356;
                      }
                      else
                      {
                        v99 = v358;
                      }
                      if ( v98 )
                      {
                        while ( 1 )
                        {
                          v100 = 0;
                          if ( v98 - v89 > 0x10 )
                            break;
                          v101 = v98 - v89;
                          if ( v98 != v89 )
                            goto LABEL_136;
LABEL_138:
                          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                          {
                            LODWORD(v321) = v101;
                            LODWORD(v317) = v98 - v89 <= 0x10;
                            McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
                              (__int64)&DxgkControlGuid_Context,
                              (__int64)&EventBlitRect,
                              0LL,
                              v99,
                              v317,
                              v321,
                              v401,
                              v400,
                              v399,
                              v402);
                          }
                          pDstSubRects = *(const RECT **)v356;
                          v89 += 16;
                          if ( v89 >= v98 )
                          {
                            v8 = v359;
                            goto LABEL_142;
                          }
                        }
                        v101 = 16;
LABEL_136:
                        v102 = 0LL;
                        do
                        {
                          v103 = v100 + v89;
                          ++v100;
                          v103 *= 2LL;
                          v102 += 4LL;
                          *(_DWORD *)&v400[v102 + 60] = *(&pDstSubRects->left + 2 * v103);
                          *(_DWORD *)&v399[v102 + 60] = *(&pDstSubRects->right + 2 * v103);
                          *(_DWORD *)&v398[v102 + 60] = *(&pDstSubRects->top + 2 * v103);
                          *(_DWORD *)&v401[v102 + 60] = *(&pDstSubRects->bottom + 2 * v103);
                        }
                        while ( v100 < v101 );
                        goto LABEL_138;
                      }
LABEL_142:
                      v347 = 1;
                      v89 = 0;
                    }
                    if ( *((_BYTE *)this + 434) )
                    {
                      v311 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                      v312 = *(_QWORD *)(v311 + 16);
                      v313 = *((_DWORD *)v344 + 5);
                      v352[0] = *((_DWORD *)v343 + 5);
                      v314 = (struct DXGHWQUEUE **)v9[1].hWindow;
                      if ( v314 )
                        v315 = *v314;
                      else
                        v315 = 0LL;
                      v316 = DXGPROCESS::GetCurrent(v311);
                      v105 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                               (DXG_GUEST_VIRTUALGPU_VMBUS *)(v312 + 4664),
                               v316,
                               this,
                               v315,
                               v352[0],
                               v313,
                               &v384.SrcRect,
                               &v384.DstRect,
                               v384.SubRectCnt,
                               (struct tagRECT *)v384.pDstSubRects,
                               v384.PrivateDriverDataSize,
                               (unsigned __int8 *)v384.pPrivateDriverData);
                      v104 = v346;
                      v89 = 0;
                    }
                    else
                    {
                      v104 = v346;
                      v336 = v346;
                      v334 = Color;
                      *((_DWORD *)v8 + 29) = j;
                      v105 = DXGCONTEXT::SubmitPresent(
                               this,
                               v9,
                               (struct DXGHWQUEUE **)v9[1].hWindow,
                               v9->BroadcastContextCount,
                               v362,
                               v343,
                               hSource,
                               hDestination,
                               &v384,
                               0LL,
                               *((struct VIDMM_DMA_BUFFER **)this + 45),
                               v8,
                               v334,
                               v336);
                    }
                    *((_QWORD *)this + 45) = 0LL;
                    v34 = v105;
                    if ( (v9->Flags.Value & 0x10000) != 0
                      && *(_DWORD *)(*((_QWORD *)this + 19) + 440LL) == v9->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags )
                    {
                      v9->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
                      v9->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)this + 19) + 440LL);
                      if ( v384.SubRectCnt > 0x10 )
                      {
                        v9->PresentHistoryToken.Token.Flip.VidPnSourceId = 1;
                        *(RECT *)((char *)&v9->PresentHistoryToken.Token.SurfaceComplete + 28) = v384.DstRect;
                      }
                      else
                      {
                        v9->PresentHistoryToken.Token.Flip.VidPnSourceId = v384.SubRectCnt;
                        for ( k = 0;
                              k < v384.SubRectCnt;
                              *(RECT *)((char *)&v9->PresentHistoryToken.Token.SurfaceComplete + 16 * v107 + 28) = v384.pDstSubRects[v107] )
                        {
                          v107 = k++;
                        }
                      }
                      v9->PresentHistoryToken.TokenSize = 16 * (v9->PresentHistoryToken.Token.Flip.VidPnSourceId + 3);
                      DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v361);
                      v34 = SubmitPresentHistoryToken(
                              &v9->PresentHistoryToken,
                              v104,
                              v353,
                              v355,
                              0,
                              0LL,
                              (struct DXGK_PRESENT_PARAMS *)v9,
                              0LL,
                              this,
                              0LL,
                              0LL);
                      v89 = 0;
                    }
                    if ( v34 < 0 )
                      break;
                  }
                }
              }
              goto LABEL_153;
            }
            WdLogSingleEntry2(4LL, v88, this);
            v123 = v85;
            WdLogGlobalForLineNumber = 5959;
LABEL_231:
            COREDEVICEACCESS::AcquireSharedUncheck(v123, 0LL);
            v124 = (DXGPRESENTMUTEX *)v361;
            goto LABEL_232;
          }
          DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v361);
          if ( v34 < 0 || (*(_DWORD *)(*((_QWORD *)this + 19) + 4LL) & 2) != 0 )
            goto LABEL_222;
          if ( v9->BroadcastContextCount )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 5553;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Present via GDI cannot be broadcasted",
              5553LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v34 = -1071774910;
            goto LABEL_222;
          }
          if ( (v9->Flags.Value & 0x10000) != 0 && v9->hDestination )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 5559;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"!pPresent->Flags.RedirectedBlt || pPresent->hDestination == NULL",
              5559LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v388 = 0LL;
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)"h", 0LL, 0);
          v111 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v9->Flags.Value;
          if ( (*(_WORD *)&v111 & 0x100) != 0 )
          {
            v129 = *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3120LL) + 128LL)
                             + 4024LL * v9->VidPnSourceId
                             + 628);
            *(_QWORD *)v356 = &v388;
            v388 = v129;
          }
          else
          {
            *(_QWORD *)v356 = 0LL;
          }
          if ( (*(_BYTE *)&v111 & 1) != 0 )
          {
            if ( *(_BYTE *)&v111 >= 0 )
            {
              v384.SrcRect.bottom = Height;
              right = v350;
              *(_QWORD *)&v384.SrcRect.left = 0LL;
            }
            else
            {
              top = v9->SrcRect.top;
              if ( top < 0 )
                top = 0;
              v384.SrcRect.top = top;
              left = v9->SrcRect.left;
              if ( left < 0 )
                left = 0;
              v384.SrcRect.left = left;
              bottom = v9->SrcRect.bottom;
              if ( (int)Height < bottom )
                bottom = Height;
              v384.SrcRect.bottom = bottom;
              right = v9->SrcRect.right;
              if ( (int)v350 < right )
                right = v350;
            }
            v384.SrcRect.right = right;
            v384.DstRect = v384.SrcRect;
            v384.Flags.Value = v384.Flags.Value & 0xFFFFF7FF | (v9->Flags.Value >> 9) & 0x800;
            if ( !v9->SubRectCnt )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5606;
              DxgkLogInternalTriageEvent(
                0LL,
                262146LL,
                0xFFFFFFFFLL,
                L"pPresent->SubRectCnt",
                5606LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( !v9->pSrcSubRects )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5607;
              DxgkLogInternalTriageEvent(
                0LL,
                262146LL,
                0xFFFFFFFFLL,
                L"pPresent->pSrcSubRects",
                5607LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v34 = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 19), v9->SubRectCnt);
            if ( v34 < 0 )
              goto LABEL_222;
            DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), 0);
            v117 = 0LL;
            v118 = 0;
            v384.SubRectCnt = 0;
            v384.pDstSubRects = DdiSubRectList;
            if ( !v9->SubRectCnt )
              goto LABEL_222;
            while ( 1 )
            {
              if ( DXGPRESENT::IntersectRect(&DdiSubRectList[v117], &v9->pSrcSubRects[v118], &v384.SrcRect) )
                v117 = ++v384.SubRectCnt;
              else
                v117 = v384.SubRectCnt;
              if ( ++v118 >= v9->SubRectCnt )
                break;
              DdiSubRectList = (struct tagRECT *)v384.pDstSubRects;
            }
            if ( !(_DWORD)v117 )
              goto LABEL_222;
            if ( DXGPRESENT::PrepareStagingBuffer(
                   *((DXGPRESENT **)this + 19),
                   *((struct DXGDEVICE **)this + 2),
                   v9->hSource,
                   v73,
                   &hDestination) < 0 )
              goto LABEL_221;
            if ( !*((_BYTE *)this + 434) )
            {
              v174 = hDestination;
              if ( !hDestination )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 5654;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146LL,
                  0xFFFFFFFFLL,
                  L"hDestinationAllocation",
                  5654LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v174 = hDestination;
              }
              if ( bTracingEnabled )
              {
                v199 = VIDMM_EXPORT::VidMmETWAllocationHandle(
                         *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                         *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
                         v174);
                v200 = VIDMM_EXPORT::VidMmETWAllocationHandle(
                         *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                         *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
                         hSource);
                v201 = v384.pDstSubRects;
                v202 = v384.SubRectCnt;
                v372 = v200;
                *(_QWORD *)v352 = *((_QWORD *)this + 45);
                hWindow = v9->hWindow;
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                {
                  LODWORD(v326) = 1;
                  McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
                    (__int64)&DxgkControlGuid_Context,
                    (__int64)&EventBlit,
                    0LL,
                    hWindow,
                    *(_QWORD *)v352,
                    0LL,
                    v372,
                    v199,
                    v326,
                    0,
                    v384.Flags.Value,
                    v384.SrcRect.left,
                    v384.SrcRect.right,
                    v384.SrcRect.top,
                    v384.SrcRect.bottom,
                    v384.DstRect.left,
                    v384.DstRect.right,
                    v384.DstRect.top,
                    v384.DstRect.bottom,
                    v384.SubRectCnt);
                }
                v173 = 0;
                if ( v202 )
                {
                  v203 = *(_QWORD *)v352;
                  while ( 1 )
                  {
                    v204 = 0;
                    if ( v202 - v173 > 0x10 )
                      break;
                    v205 = v202 - v173;
                    if ( v202 != v173 )
                      goto LABEL_407;
LABEL_361:
                    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    {
                      LODWORD(v321) = v205;
                      LODWORD(v318) = v202 - v173 <= 0x10;
                      McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
                        (__int64)&DxgkControlGuid_Context,
                        (__int64)&EventBlitRect,
                        0LL,
                        v203,
                        v318,
                        v321,
                        v397,
                        v396,
                        v395,
                        v394);
                    }
                    v173 += 16;
                    if ( v173 >= v202 )
                    {
                      v9 = v365;
                      v8 = v359;
                      goto LABEL_365;
                    }
                  }
                  v205 = 16;
LABEL_407:
                  v206 = 0LL;
                  do
                  {
                    v207 = v204 + v173;
                    ++v204;
                    v207 *= 2LL;
                    v206 += 4LL;
                    *(_DWORD *)&v396[v206 + 60] = *(&v201->left + 2 * v207);
                    *(_DWORD *)&v395[v206 + 60] = *(&v201->right + 2 * v207);
                    *(_DWORD *)&v394[v206 + 60] = *(&v201->top + 2 * v207);
                    *(_DWORD *)&v393[v206 + 60] = *(&v201->bottom + 2 * v207);
                  }
                  while ( v204 < v205 );
                  goto LABEL_361;
                }
LABEL_365:
                v174 = hDestination;
                v73 = v346;
                v347 = 1;
              }
              v175 = DXGCONTEXT::SubmitPresent(
                       this,
                       v9,
                       (struct DXGHWQUEUE **)v9[1].hWindow,
                       v9->BroadcastContextCount,
                       v362,
                       v343,
                       hSource,
                       v174,
                       &v384,
                       0LL,
                       *((struct VIDMM_DMA_BUFFER **)this + 45),
                       v8,
                       Color,
                       v73);
              *((_QWORD *)this + 45) = 0LL;
LABEL_367:
              if ( v175 < 0 )
              {
LABEL_221:
                WdLogSingleEntry2(3LL, -1071775738LL, this);
                WdLogGlobalForLineNumber = 5836;
                v34 = -1071775738;
                goto LABEL_222;
              }
              v176 = (DXGDEVICE *)*((_QWORD *)this + 2);
              v177 = 0;
              if ( (v9->Flags.Value & 0x100) != 0
                && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                     *(ADAPTER_DISPLAY **)(*((_QWORD *)v176 + 237) + 3120LL),
                     *((const struct DXGDEVICE **)this + 2),
                     v9->VidPnSourceId) )
              {
                v177 = 1;
              }
              else if ( !DXGDEVICE::AllowLegacyPresent(v176, 0) )
              {
                v178 = v353;
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v353);
                v179 = v346;
                COREDEVICEACCESS::Release(v346);
                if ( DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
                {
                  COREDEVICEACCESS::AcquireSharedUncheck(v179, 0LL);
                  v34 = -1071775738;
                  goto LABEL_222;
                }
                goto LABEL_371;
              }
              v178 = v353;
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v353);
              v179 = v346;
              COREDEVICEACCESS::Release(v346);
LABEL_371:
              CWin32kLocks::Unlock(v355);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v178);
              v74 = COREDEVICEACCESS::AcquireShared(v179, 0LL);
              if ( v74 < 0 )
                goto LABEL_580;
              memset(&v379, 0, sizeof(v379));
              if ( *((_BYTE *)this + 434) )
              {
                memset(&v378, 0, sizeof(v378));
                v378.hAllocation = hDestination;
                v192 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
                v193 = *(_QWORD *)(*((_QWORD *)v192 + 2) + 16LL);
                v194 = DXGPROCESS::GetCurrent(v180);
                v195 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                         (DXG_GUEST_VIRTUALGPU_VMBUS *)(v193 + 4664),
                         v194,
                         v192,
                         &v378,
                         0,
                         0,
                         0);
                v179 = v346;
                v34 = v195;
                v379.pData = v378.pData;
              }
              else
              {
                v181 = hDestination;
                if ( !hDestination )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 5732;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146LL,
                    0xFFFFFFFFLL,
                    L"hDestinationAllocation",
                    5732LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v181 = hDestination;
                }
                v379.hAllocation = v181;
                v34 = DXGDEVICE::Lock(*((DXGDEVICE **)this + 2), &v379, v179, 0);
              }
              if ( v34 < 0 )
                goto LABEL_222;
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v178);
              COREDEVICEACCESS::Release(v179);
              if ( !v379.pData )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 5745;
                DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"LockData.pData", 5745LL, 0LL, 0LL, 0LL, 0LL);
              }
              if ( (v9->Flags.Value & 0x10000) != 0 && v9->hDestination )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 5746;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146LL,
                  0xFFFFFFFFLL,
                  L"!pPresent->Flags.RedirectedBlt || pPresent->hDestination == NULL",
                  5746LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              v182 = v358;
              if ( (*((unsigned int (__fastcall **)(_QWORD))v358 + 40))(0LL) )
                v183 = v177;
              else
                v183 = 0;
              v184 = v355;
              v34 = CWin32kLocks::Lock(v355, v9->hWindow, 0, 0, v183);
              if ( v34 >= 0 )
              {
                v187 = (unsigned int (__fastcall *)(struct _D3DKMT_PRESENT *, HDC, _QWORD, const RECT *, void *, int, unsigned int, unsigned int, int, int, UINT, void (__fastcall *)(const struct tagRECT *, const struct tagRECT *, struct tagRECT *, const struct tagRECT *, unsigned int, unsigned int), __int64 (__fastcall *)(struct tagRECT *, struct tagRECT *, const struct tagRECT *, const struct tagRECT *)))*((_QWORD *)v182 + 18);
                v188 = *(_DWORD *)(*((_QWORD *)this + 19) + 424LL);
                v189 = v9->Color;
                v190 = (v9->Flags.Value & 0x200) != 0;
                v191 = CWin32kLocks::hDestDc(v355);
                LOBYTE(v330) = v190;
                LOBYTE(v328) = 0;
                if ( !v187(
                        v9,
                        v191,
                        *(_QWORD *)v356,
                        v384.pDstSubRects,
                        v379.pData,
                        v188,
                        v350,
                        Height,
                        v328,
                        v330,
                        v189,
                        DXGPRESENT::XformRect,
                        DXGPRESENT::ClipRects) )
                {
                  WdLogSingleEntry2(4LL, -1071775737LL, this);
                  WdLogGlobalForLineNumber = 5757;
                  v34 = -1071775737;
                }
                v184 = v355;
                v179 = v346;
              }
              v185 = v353;
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v353);
              v74 = COREDEVICEACCESS::AcquireShared(v179, 0LL);
              if ( v74 < 0 )
              {
LABEL_580:
                v123 = v179;
                goto LABEL_231;
              }
              if ( *((_BYTE *)this + 434) )
              {
                v371.hDevice = 0;
                v371.hAllocation = hDestination;
                v196 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
                v197 = *(_QWORD *)(*((_QWORD *)v196 + 2) + 16LL);
                v198 = DXGPROCESS::GetCurrent(v186);
                DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
                  (DXG_GUEST_VIRTUALGPU_VMBUS *)(v197 + 4664),
                  v198,
                  v196,
                  &v371,
                  0);
                v179 = v346;
              }
              else
              {
                v373.hDevice = 0;
                v373.NumAllocations = 1;
                v373.phAllocations = &v379.hAllocation;
                DXGDEVICE::Unlock(*((DXGDEVICE **)this + 2), &v373, 0);
              }
              if ( v34 >= 0 && (v9->Flags.Value & 0x10000) != 0 )
              {
                v9->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
                v9->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)this + 19) + 440LL);
                v9->PresentHistoryToken.Token.Flip.VidPnSourceId = 0;
                v9->PresentHistoryToken.TokenSize = 48;
                DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v361);
                v34 = SubmitPresentHistoryToken(
                        &v9->PresentHistoryToken,
                        v179,
                        v185,
                        v184,
                        0,
                        0LL,
                        (struct DXGK_PRESENT_PARAMS *)v9,
                        0LL,
                        this,
                        0LL,
                        0LL);
                DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v361);
                goto LABEL_155;
              }
LABEL_222:
              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v361);
              goto LABEL_155;
            }
            v277 = DXGPROCESS::GetCurrent(v119);
            v278 = hDestination;
            v279 = v277;
            DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v277 + 248));
            v280 = (v278 >> 6) & 0xFFFFFF;
            if ( v280 < *((_DWORD *)v279 + 74) )
            {
              v281 = *((_QWORD *)v279 + 35);
              v282 = *(_DWORD *)(v281 + 16LL * v280 + 8);
              if ( ((v278 >> 25) & 0x60) == (v282 & 0x60) && (v282 & 0x2000) == 0 && (v282 & 0x1F) != 0 )
              {
                if ( (*(_BYTE *)(v281 + 16LL * ((v278 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 5 )
                {
                  v283 = *(struct _EX_RUNDOWN_REF **)(v281 + 16LL * ((v278 >> 6) & 0xFFFFFF));
                  goto LABEL_569;
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
            v283 = 0LL;
LABEL_569:
            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v363, v283);
            _InterlockedDecrement((volatile signed __int32 *)v279 + 66);
            ExReleasePushLockSharedEx((char *)v279 + 248, 0LL);
            KeLeaveCriticalRegion();
            v284 = v363;
            if ( !v363 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5639;
              DxgkLogInternalTriageEvent(
                0LL,
                262146LL,
                0xFFFFFFFFLL,
                L"AllocRef.m_pAllocation != NULL",
                5639LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v284 = v363;
            }
            Ptr_high = HIDWORD(v284[2].Ptr);
            v286 = *((_QWORD *)this + 2);
            pPrivateDriverData = (unsigned __int8 *)v9->pPrivateDriverData;
            PrivateDriverDataSize = v9->PrivateDriverDataSize;
            v289 = *(_QWORD *)(v286 + 16);
            v352[0] = *((_DWORD *)v343 + 5);
            v290 = (struct DXGHWQUEUE **)v9[1].hWindow;
            v291 = *(_QWORD *)(v289 + 16);
            if ( v290 )
              v292 = *v290;
            else
              v292 = 0LL;
            v293 = DXGPROCESS::GetCurrent(v286);
            v175 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(v291 + 4664),
                     v293,
                     this,
                     v292,
                     v352[0],
                     Ptr_high,
                     &v384.SrcRect,
                     &v384.DstRect,
                     v384.SubRectCnt,
                     (struct tagRECT *)v384.pDstSubRects,
                     PrivateDriverDataSize,
                     pPrivateDriverData);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v363);
            goto LABEL_367;
          }
          if ( (*(_BYTE *)&v111 & 2) == 0 )
            goto LABEL_222;
          v294 = (DXGDEVICE *)*((_QWORD *)this + 2);
          v295 = 0;
          if ( (*(_WORD *)&v111 & 0x100) != 0
            && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                 *(ADAPTER_DISPLAY **)(*((_QWORD *)v294 + 237) + 3120LL),
                 *((const struct DXGDEVICE **)this + 2),
                 v9->VidPnSourceId) )
          {
            v295 = 1;
          }
          else if ( !DXGDEVICE::AllowLegacyPresent(v294, 0) )
          {
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v353);
            COREDEVICEACCESS::Release(v73);
            if ( DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
            {
              v34 = -1071775738;
LABEL_593:
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v353);
              v306 = COREDEVICEACCESS::AcquireShared(v73, 0LL);
              v74 = v306;
              if ( v306 >= 0 )
                goto LABEL_222;
              WdLogSingleEntry2(4LL, v306, this);
              WdLogGlobalForLineNumber = 5885;
LABEL_595:
              v123 = v73;
              goto LABEL_231;
            }
LABEL_586:
            if ( (v9->Flags.Value & 0x10000) != 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5866;
              DxgkLogInternalTriageEvent(
                0LL,
                262146LL,
                0xFFFFFFFFLL,
                L"!pPresent->Flags.RedirectedBlt",
                5866LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v296 = v355;
            CWin32kLocks::Unlock(v355);
            v297 = v358;
            v298 = (*((unsigned int (__fastcall **)(_QWORD))v358 + 40))(0LL) == 0;
            v299 = v295;
            if ( v298 )
              v299 = 0;
            v300 = CWin32kLocks::Lock(v296, v9->hWindow, 0, 0, v299);
            v301 = (unsigned int (__fastcall *)(HDC, _QWORD, const RECT *, _QWORD, UINT))*((_QWORD *)v297 + 19);
            v34 = v300;
            v302 = v9->Color;
            v303 = v9->SubRectCnt;
            v304 = v9->pSrcSubRects;
            v305 = CWin32kLocks::hDestDc(v355);
            if ( !v301(v305, *(_QWORD *)v356, v304, v303, v302) )
            {
              WdLogSingleEntry2(4LL, -1071775737LL, this);
              WdLogGlobalForLineNumber = 5876;
              v34 = -1071775737;
            }
            v73 = v346;
            goto LABEL_593;
          }
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v353);
          COREDEVICEACCESS::Release(v73);
          goto LABEL_586;
        }
        if ( (v9->Flags.Value & 0x10000) != 0 && v9->hDestination && !*(_QWORD *)(*((_QWORD *)this + 19) + 440LL) )
        {
          WdLogSingleEntry2(4LL, 0LL, this);
          WdLogGlobalForLineNumber = 5415;
          v128 = (struct VIDMM_DMA_BUFFER *)*((_QWORD *)this + 45);
          if ( v128 )
          {
            VIDMM_EXPORT::VidMmReleaseDmaBuffer(
              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
              v128);
            *((_QWORD *)this + 45) = 0LL;
          }
          DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v361);
          goto LABEL_255;
        }
        v75 = *(HDC *)v355;
        v76 = (HDEV)*((_QWORD *)v355 + 2);
        v34 = DXGPRESENT::CheckVisRgn(
                *((DXGPRESENT **)this + 19),
                v9,
                *(HDC *)v355,
                v76,
                *((const struct DXGDEVICE **)this + 2),
                v350,
                Height,
                Color,
                1);
        if ( v34 == 261 )
        {
          DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v361);
          COREDEVICEACCESS::Release(v346);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v353);
          if ( DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
            v34 = -1071775738;
          if ( (v9->Flags.Value & 0x10000) == 0 )
            DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v361);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v353);
          v125 = COREDEVICEACCESS::AcquireShared(v346, 0LL);
          v356[0] = v125;
          if ( v125 < 0 )
          {
            WdLogSingleEntry1(4LL, v125);
            WdLogGlobalForLineNumber = 5458;
            COREDEVICEACCESS::AcquireSharedUncheck(v346, 0LL);
            DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v361);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v345);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v344);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v343);
            return v356[0];
          }
          if ( v34 != -1071775738 )
            v34 = DXGPRESENT::CheckVisRgn(
                    *((DXGPRESENT **)this + 19),
                    v9,
                    v75,
                    v76,
                    *((const struct DXGDEVICE **)this + 2),
                    v350,
                    Height,
                    Color,
                    0);
        }
        v77 = *((_QWORD *)this + 19);
        if ( v34 < 0 )
        {
          if ( (*(_BYTE *)(v77 + 4) & 1) != 0 )
          {
            *(_QWORD *)(v77 + 56) = CurrentThreadId;
            *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = v352[0];
          }
          goto LABEL_103;
        }
        *(_QWORD *)(v77 + 56) = CurrentThreadId;
        if ( (v9->Flags.Value & 0x10000) != 0 )
        {
LABEL_103:
          v73 = v346;
          goto LABEL_104;
        }
        v274 = v352[0];
        *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = v352[0];
        DXGDEVICE::FlushScheduler(*((_QWORD *)this + 2), 2LL, 4294967293LL, 0LL);
        v275 = 0;
        v276 = *(_DWORD *)(*((_QWORD *)this + 19) + 8LL);
        if ( v276 != (*((unsigned int (**)(void))v358 + 1))() )
        {
          *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = v274;
          ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL), 3, 0xFFFFFFFFLL, 0);
          v275 = 1;
        }
        v273 = v275;
      }
      else
      {
        if ( (v109 & 1) != 0 )
        {
          v34 = -1071775738;
          goto LABEL_103;
        }
        if ( (v9->Flags.Value & 0x10000) != 0 || (v109 & 0x10) != 0 )
          goto LABEL_103;
        v273 = 0;
      }
      DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, (struct DXGPRESENTMUTEX *)v361, v273);
      goto LABEL_103;
    }
    if ( v29 )
      goto LABEL_53;
    if ( (Value & 0x10A7C3) != 0 )
    {
      v34 = -1073741811;
      WdLogSingleEntry3(3LL, this, v9->Flags.Value, -1073741811LL);
      WdLogGlobalForLineNumber = 4467;
      goto LABEL_41;
    }
    if ( (Value & 0x10000000) != 0 )
    {
      Count = v25[5].Count;
      if ( !Count || !*(_QWORD *)(Count + 56) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4477;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Expecting indirect display presents to be a shared surface",
          4477LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_329;
      }
      v163 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1896LL);
      if ( !v163
        || !DXGADAPTER::IsDisplayAdapter(v163)
        || (v164 = *((_QWORD *)this + 2),
            v158 = v9->VidPnSourceId,
            v352[0] = v158,
            v158 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v164 + 1896) + 3120LL) + 96LL)) )
      {
        WdLogSingleEntry1(2LL, v9->VidPnSourceId);
        WdLogGlobalForLineNumber = 4502;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"An invalid VidPn source ID was supplied to an indirect present (%I64d)",
          v9->VidPnSourceId,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_329;
      }
      v25 = (struct _EX_RUNDOWN_REF *)v343;
    }
    else
    {
      v156 = v25[6].Count;
      v157 = *(_DWORD *)(v156 + 4);
      if ( (v157 & 0x2003) == 0 )
      {
        v34 = -1073741811;
        WdLogSingleEntry5(2LL, -1073741811LL, this, v25, v156, v9->hSource);
        WdLogGlobalForLineNumber = 4487;
        v127 = L"0x%I64x 0x%I64x Source of Flip must be primary 0x%I64x 0x%I64x 0x%I64x";
        v327 = v9->hSource;
        v325 = *((_QWORD *)v343 + 6);
        v323 = (__int64)v343;
        v322 = (__int64)this;
        v319 = -1073741811LL;
        goto LABEL_250;
      }
      v158 = (v157 >> 6) & 0xF;
      v352[0] = v158;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v369, v25);
    DXGALLOCATIONREFERENCE::MoveAssign(&v345, &v369);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v369);
    v360 = v9->hSource;
    v159 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1896LL);
    if ( !v159
      || !DXGADAPTER::IsDisplayAdapter(v159)
      || !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL)
                                                                         + 3120LL)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4518;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"(GetDisplayAdapter(VidPnSourceId) == GetDisplayAdapter(0)) && (GetDisplayAdapter(VidPnSourceId) != NULL) && GetD"
         "isplayAdapter(VidPnSourceId)->IsDisplayAdapter() && GetDisplayAdapter(VidPnSourceId)->GetDisplayCore()->IsCoreR"
         "esourceSharedOwner()",
        4518LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v160 = *((_QWORD *)v343 + 6);
    v161 = *(_DWORD *)(v160 + 4);
    if ( (v161 & 0x2000) != 0 && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 408LL) & 4) == 0 )
    {
      v34 = -1073741811;
      WdLogSingleEntry5(2LL, -1073741811LL, this, v343, v160, v9->hSource);
      WdLogGlobalForLineNumber = 4526;
      v127 = L"0x%I64x 0x%I64x DirectFlip Presents are only supported from the DWM process 0x%I64x 0x%I64x 0x%I64x";
      v327 = v9->hSource;
      v325 = *((_QWORD *)v343 + 6);
      v323 = (__int64)v343;
      v322 = (__int64)this;
      v319 = -1073741811LL;
      goto LABEL_250;
    }
    if ( (v9->Flags.Value & 0x60000) != 0 )
    {
      if ( (v9->Flags.Value & 0x60000) == 0x60000 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4537;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"FlipStereoTemporaryMono and FlipStereo cannot be set together. STATUS_INVALID_PARAMETER",
          4537LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_329;
      }
      if ( (v161 & 0x1000) == 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4543;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"FlipStereoTemporaryMono and FlipStereo can only be used with stereo primary allocations. STATUS_INVALID_PARAMETER",
          4543LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_329;
      }
      v245 = *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                           *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3120LL),
                           v158)
             + 10);
      if ( (v245 & 0x10) == 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 4550;
        goto LABEL_308;
      }
      v246 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v9->Flags.Value;
      if ( (*(_DWORD *)&v246 & 0x40000) != 0 && (v245 & 0x20) == 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 4556;
        goto LABEL_308;
      }
      if ( (*(_DWORD *)&v246 & 0xC0000) == 0xC0000 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4562;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"FlipStereoTemporaryMono cannot be used with FlipStereoPreferRight. STATUS_INVALID_PARAMETER",
          4562LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_329;
      }
    }
    if ( !DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2)) )
      goto LABEL_278;
    v130 = *(_DWORD *)a7 ^ (v9->Flags.Value ^ *(_DWORD *)a7) & 4;
    *(_DWORD *)a7 = v130;
    v131 = v130 ^ (v9->Flags.Value ^ v130) & 8;
    *(_DWORD *)a7 = v131;
    v132 = v131 ^ ((unsigned __int8)v131 ^ (unsigned __int8)(v9->Flags.Value >> 1)) & 0x10;
    *(_DWORD *)a7 = v132;
    v133 = v132 ^ (v132 ^ (4 * v9->Flags.Value)) & 0x80000;
    *(_DWORD *)a7 = v133;
    v134 = v133 ^ (v133 ^ (4 * v9->Flags.Value)) & 0x100000;
    *(_DWORD *)a7 = v134;
    v135 = v134 ^ (v134 ^ (4 * v9->Flags.Value)) & 0x200000;
    *(_DWORD *)a7 = v135;
    if ( (v9->Flags.Value & 0x8000000) != 0 )
      Duration = v9->Duration;
    else
      Duration = 0;
    *((_DWORD *)a7 + 36) = Duration;
    *((_DWORD *)a7 + 38) = 1;
    *(_DWORD *)a7 = v135 ^ (v9->Flags.Value ^ v135) & 0x20000000;
    v137 = v9->Flags.Value >> 9;
    v138 = v384.Flags.Value & 0xFFFFFFFB | v9->Flags.Value & 4;
    v139 = v138 ^ ((unsigned __int16)v138 ^ (unsigned __int16)v137) & 0x100 ^ ((unsigned __int16)v137 ^ (unsigned __int16)(v138 ^ (v138 ^ v137) & 0x100)) & 0x200;
    v384.Flags.Value = v139 ^ ((unsigned __int16)v137 ^ (unsigned __int16)v139) & 0x400;
    pPresentRegions = v9->pPresentRegions;
    if ( pPresentRegions
      && !pPresentRegions->MoveRectCount
      && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 408LL) & 4) != 0 )
    {
      v384.SubRectCnt = pPresentRegions->DirtyRectCount;
      v384.pDstSubRects = pPresentRegions->pDirtyRects;
    }
    DeviceFlipMode = VIDSCH_EXPORT::VidSchGetDeviceFlipMode(
                       *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
                       *(_QWORD *)(*((_QWORD *)this + 2) + 800LL),
                       v158,
                       (__int64)&v9->FlipInterval);
    *((_DWORD *)a7 + 30) = DeviceFlipMode;
    if ( !DeviceFlipMode )
    {
      v34 = -1073741811;
      WdLogSingleEntry3(3LL, this, v9->FlipInterval, -1073741811LL);
      WdLogGlobalForLineNumber = 4609;
      goto LABEL_41;
    }
    if ( ((DeviceFlipMode - 1) & 0xFFFFFFFD) != 0 )
    {
      v384.FlipInterval = v9->FlipInterval;
      if ( DeviceFlipMode == 2 )
        goto LABEL_274;
    }
    else
    {
      v384.FlipInterval = D3DDDI_FLIPINTERVAL_IMMEDIATE;
    }
    v384.Flags.Value |= 8u;
LABEL_274:
    *((_DWORD *)a7 + 31) = v9->FlipInterval;
    *((_DWORD *)a7 + 29) = v158;
    DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary(*((struct _KTHREAD ***)this + 2), v158);
    if ( DisplayedPrimary )
    {
      v152 = *((_QWORD *)DisplayedPrimary + 6);
      if ( (*(_DWORD *)(*((_QWORD *)v343 + 6) + 4LL) & 0x2000) != 0 )
      {
        if ( (*(_DWORD *)(v152 + 4) & 0x2000) == 0 )
        {
          *(_DWORD *)a7 |= 0x400000u;
          goto LABEL_276;
        }
      }
      else if ( (*(_DWORD *)(v152 + 4) & 0x2000) != 0 )
      {
        *(_DWORD *)a7 |= 0x400000u;
        goto LABEL_276;
      }
    }
    *(_DWORD *)a7 &= ~0x400000u;
LABEL_276:
    v143 = *((_DWORD *)a7 + 30);
    if ( v143 )
    {
      v144 = *((_QWORD *)this + 2);
      if ( v143 != *(_DWORD *)(v144 + 4LL * v158 + 1832) )
      {
        WdLogSingleEntry1(4LL, v144);
        v145 = v346;
        WdLogGlobalForLineNumber = 4665;
        COREDEVICEACCESS::Release(v346);
        DXGDEVICE::FlushScheduler(*((_QWORD *)this + 2), 3LL, 4294967293LL, 0LL);
        v171 = COREDEVICEACCESS::AcquireShared(v145, 0LL);
        v74 = v171;
        if ( v171 < 0 )
        {
          WdLogSingleEntry1(4LL, v171);
          WdLogGlobalForLineNumber = 4673;
          COREDEVICEACCESS::AcquireSharedUncheck(v145, 0LL);
          goto LABEL_234;
        }
        goto LABEL_279;
      }
    }
LABEL_278:
    v145 = v346;
LABEL_279:
    v74 = DXGCONTEXT::CheckDevicePresentSettings(
            (DXGDEVICE **)this,
            (v9->Flags.Value >> 2) & 1,
            (v9->Flags.Value >> 28) & 1,
            0,
            v158);
    if ( v74 < 0 )
    {
      if ( v74 == -1071774920 )
      {
LABEL_517:
        if ( (v9->Flags.Value & 4) != 0 )
        {
          IsFullWDDMDevice = DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2));
          v257 = (DXGDEVICE *)*((_QWORD *)this + 2);
          if ( IsFullWDDMDevice )
          {
            DXGDEVICE::ClearDisplayedAllMultiPlaneOverlaysUnsafe(v257, v158);
            DXGDEVICE::SetDisplayedPrimary(*((struct _KTHREAD ***)this + 2), v158, v343, *((_DWORD *)a7 + 34), 1u);
            *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * v158 + 1832) = *((_DWORD *)a7 + 30);
          }
          else
          {
            DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v257, v158, v343, 0, 1u);
          }
        }
LABEL_255:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v345);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v344);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v343);
        return 0LL;
      }
LABEL_234:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v345);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v344);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v343);
      return (unsigned int)v74;
    }
    if ( (v9->Flags.Value & 4) != 0 )
    {
      if ( v9->pPresentRegions )
      {
        v74 = DXGCONTEXT::ValidatePresentRegions(this, v9, v350, Height);
        if ( v74 < 0 )
          goto LABEL_234;
      }
    }
    if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(
            *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3120LL),
            v158,
            0) )
    {
      if ( !_bittest((const signed __int32 *)(*((_QWORD *)this + 2) + 4LL * v158 + 1240), 9u)
        && (v9->Flags.Value & 0x10000000) == 0 )
      {
        WdLogSingleEntry5(3LL, -1071775739LL, this, v9->hSource, v343, v158);
        WdLogGlobalForLineNumber = 4808;
        goto LABEL_308;
      }
LABEL_285:
      if ( DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2)) )
      {
        v146 = DXGCONTEXT::WaitForQueuedPresentLimit(this, v158, (v9->Flags.Value & 0x10) == 0, v145);
        v74 = v146;
        if ( v146 >= 0 )
        {
          if ( ((*((_DWORD *)a7 + 30) - 3) & 0xFFFFFFFD) == 0 )
            goto LABEL_288;
          v34 = DXGCONTEXT::AcquireDmaBuffer(this, (struct VIDMM_DMA_BUFFER **)this + 45, v145, 0);
          if ( v34 < 0 )
            goto LABEL_38;
          if ( *((_QWORD *)this + 45) )
          {
LABEL_288:
            v147 = 0;
          }
          else
          {
            WdLogSingleEntry0(1LL);
            v147 = 0;
            WdLogGlobalForLineNumber = 4841;
            DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pPresentDmaBuffer", 4841LL, 0LL, 0LL, 0LL, 0LL);
          }
          v34 = DXGCONTEXT::CheckDevicePresentSettings(
                  (DXGDEVICE **)this,
                  (v9->Flags.Value >> 2) & 1,
                  (v9->Flags.Value >> 28) & 1,
                  0,
                  v158);
          if ( v34 >= 0 )
          {
            if ( (v9->Flags.Value & 4) == 0 )
              goto LABEL_294;
            if ( !v343 )
              goto LABEL_294;
            v148 = *((_QWORD *)v343 + 6);
            if ( !v148 || (*(_DWORD *)(v148 + 4) & 0x2000) == 0 )
              goto LABEL_294;
            if ( DXGDEVICE::IsDirectFlipAllocationRequestedPinned(*((DXGDEVICE **)this + 2), v343) )
            {
              if ( (unsigned __int8)VIDMM_EXPORT::VidMmIsAllocationPinned(
                                      *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                                      *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
                                      *((struct VIDMM_MULTI_ALLOC **)v343 + 3))
                || (v258 = VIDMM_EXPORT::VidMmPinAllocation(
                             *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                             *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
                             *((struct VIDMM_MULTI_ALLOC **)v343 + 3),
                             0LL,
                             0LL,
                             0LL,
                             0LL),
                    v258 >= 0) )
              {
LABEL_294:
                if ( (v9->Flags.Value & 0x2000) != 0 )
                {
                  v259 = ADAPTER_DISPLAY::GetCurrentOrientation(
                           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3120LL),
                           v158,
                           1);
                  v260 = 0;
                  if ( v259 != 1 )
                    v260 = 128;
                  v384.Flags.Value = v260 | v384.Flags.Value & 0xFFFFFF7F;
                }
                if ( !bTracingEnabled )
                  goto LABEL_299;
                v149 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                v150 = *(VIDMM_EXPORT **)(v149 + 760);
                v151 = *(struct VIDMM_GLOBAL **)(v149 + 768);
                if ( (v9->Flags.Value & 4) != 0 )
                {
                  VIDMM_EXPORT::VidMmETWAllocationHandle(v150, v151, hSource);
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
                    McTemplateK0pqpqtt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventFlip, 0LL);
                  goto LABEL_299;
                }
                v261 = VIDMM_EXPORT::VidMmETWAllocationHandle(v150, v151, hDestination);
                v262 = (struct VIDSCH_SUBMIT_DATA_BASE *)VIDMM_EXPORT::VidMmETWAllocationHandle(
                                                           *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 760LL),
                                                           *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                               + 16LL)
                                                                                   + 768LL),
                                                           hSource);
                p_left = &v384.pDstSubRects->left;
                v264 = v384.SubRectCnt;
                v359 = v262;
                v358 = (const struct _DXGKWIN32KENG_INTERFACE *)*((_QWORD *)this + 45);
                v353 = (DXGADAPTERSTOPRESETLOCKSHARED *)v9->hWindow;
                v355 = (CWin32kLocks *)v384.pDstSubRects;
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                {
                  v147 = 0;
                  LODWORD(v326) = 1;
                  McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
                    (__int64)&DxgkControlGuid_Context,
                    (__int64)&EventBlit,
                    0LL,
                    v353,
                    v358,
                    0LL,
                    v359,
                    v261,
                    v326,
                    0,
                    v384.Flags.Value,
                    v384.SrcRect.left,
                    v384.SrcRect.right,
                    v384.SrcRect.top,
                    v384.SrcRect.bottom,
                    v384.DstRect.left,
                    v384.DstRect.right,
                    v384.DstRect.top,
                    v384.DstRect.bottom,
                    v384.SubRectCnt);
                  p_left = v355;
                }
                if ( !v264 )
                {
LABEL_541:
                  v145 = v346;
LABEL_299:
                  v34 = DXGCONTEXT::SubmitPresent(
                          this,
                          v9,
                          (struct DXGHWQUEUE **)v9[1].hWindow,
                          v9->BroadcastContextCount,
                          v362,
                          v343,
                          hSource,
                          hDestination,
                          &v384,
                          v9->pPresentRegions,
                          *((struct VIDMM_DMA_BUFFER **)this + 45),
                          a7,
                          Color,
                          v145);
                  if ( v34 >= 0
                    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3120LL) + 128LL)
                                 + 4024LL * v158
                                 + 1072) == -1 )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 4986;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146LL,
                      0xFFFFFFFFLL,
                      L"!NT_SUCCESS(ntStatus) || (GetDisplayAdapter(VidPnSourceId)->GetDisplayCore()->MapVidPnSourceToVidP"
                       "nTarget(VidPnSourceId) != D3DDDI_ID_UNINITIALIZED)",
                      4986LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    *((_QWORD *)this + 45) = 0LL;
                  }
                  else
                  {
                    *((_QWORD *)this + 45) = 0LL;
                    if ( v34 < 0 )
                      goto LABEL_38;
                  }
                  if ( (v9->Flags.Value & 4) != 0 )
                  {
                    DXGDEVICE::ClearDisplayedAllMultiPlaneOverlaysUnsafe(*((DXGDEVICE **)this + 2), v158);
                    DXGDEVICE::SetDisplayedPrimary(
                      *((struct _KTHREAD ***)this + 2),
                      v158,
                      v343,
                      *((_DWORD *)a7 + 34),
                      1u);
                    *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * v158 + 1832) = *((_DWORD *)a7 + 30);
                    UpdatePostComposition(
                      v158,
                      0,
                      0,
                      0,
                      *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3120LL));
                  }
                  goto LABEL_36;
                }
                v265 = v358;
                while ( 1 )
                {
                  v266 = 0;
                  v267 = v264 - v147;
                  if ( v264 - v147 > 0x10 )
                    break;
                  v268 = v264 - v147;
                  if ( v267 )
                    goto LABEL_535;
LABEL_537:
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  {
                    LODWORD(v321) = v268;
                    LODWORD(v320) = v267 <= 0x10;
                    McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
                      (__int64)&DxgkControlGuid_Context,
                      (__int64)&EventBlitRect,
                      0LL,
                      v265,
                      v320,
                      v321,
                      v393,
                      v392,
                      v398,
                      v391);
                    p_left = v355;
                  }
                  v147 += 16;
                  if ( v147 >= v264 )
                  {
                    v158 = v352[0];
                    goto LABEL_541;
                  }
                }
                v268 = 16;
LABEL_535:
                v269 = 0LL;
                do
                {
                  v270 = v266 + v147;
                  ++v266;
                  v270 *= 2LL;
                  v269 += 4LL;
                  *(_DWORD *)&v392[v269 + 60] = p_left[2 * v270];
                  *(_DWORD *)&v391[v269 + 60] = p_left[2 * v270 + 2];
                  *(_DWORD *)&v397[v269 + 60] = p_left[2 * v270 + 1];
                  *(_DWORD *)((char *)&v390[19] + v269 + 12) = p_left[2 * v270 + 3];
                }
                while ( v266 < v268 );
                goto LABEL_537;
              }
              WdLogSingleEntry3(4LL, v343, *((_QWORD *)v343 + 6), v258);
              WdLogGlobalForLineNumber = 4917;
              v172 = (struct VIDMM_DMA_BUFFER *)*((_QWORD *)this + 45);
              if ( v172 )
                goto LABEL_355;
            }
            else
            {
              WdLogSingleEntry3(4LL, -1071775739LL, this, v343);
              WdLogGlobalForLineNumber = 4893;
              v172 = (struct VIDMM_DMA_BUFFER *)*((_QWORD *)this + 45);
              if ( v172 )
              {
LABEL_355:
                VIDMM_EXPORT::VidMmReleaseDmaBuffer(
                  *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                  v172);
                *((_QWORD *)this + 45) = 0LL;
              }
            }
LABEL_308:
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v345);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v344);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v343);
            return 3223191557LL;
          }
          v255 = (struct VIDMM_DMA_BUFFER *)*((_QWORD *)this + 45);
          if ( v255 )
          {
            VIDMM_EXPORT::VidMmReleaseDmaBuffer(
              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
              v255);
            *((_QWORD *)this + 45) = 0LL;
          }
          if ( v34 != -1071774920 )
            goto LABEL_38;
          goto LABEL_517;
        }
        WdLogSingleEntry2(4LL, v146, this);
        WdLogGlobalForLineNumber = 4823;
        goto LABEL_234;
      }
      v153 = *((_QWORD *)this + 2);
      if ( *(_QWORD *)(v153 + 1896) )
      {
        *(_QWORD *)&v385.left = 0LL;
        v154 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v9->Flags.Value;
        if ( (*(_DWORD *)&v154 & 0x10000000) != 0 )
        {
          v385.right = v9[1].hSource;
          v155 = v9[1].hDestination;
          goto LABEL_313;
        }
        v165 = v344;
        if ( (*(_BYTE *)&v154 & 4) != 0 )
          v165 = v343;
        v166 = *(_DWORD *)(*((_QWORD *)v165 + 6) + 4LL);
        if ( (v166 & 0x10) != 0 )
        {
          WdLogSingleEntry3(4LL, -1071775482LL, this, v165);
          WdLogGlobalForLineNumber = 5038;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v345);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v344);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v343);
          return 3223191814LL;
        }
        v167 = *(_OWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                            *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3120LL),
                            (v166 >> 6) & 0xF);
        v375.Flags.Value = 1;
        memset(&v375.Width, 0, 32);
        v375.Rotation = -1;
        *(_OWORD *)v381 = v167;
        v375.hAllocation = *(HANDLE *)(*((_QWORD *)v165 + 6) + 16LL);
        v168 = ADAPTER_RENDER::DdiDescribeAllocation(
                 *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3128LL),
                 &v375);
        if ( v168 >= 0 )
        {
          v169 = v375.Width;
          if ( v375.Width != v381[0] || (v155 = v375.Height, v375.Height != v381[1]) )
          {
            WdLogSingleEntry3(4LL, -1071775482LL, this, v165);
            WdLogGlobalForLineNumber = 5069;
            goto LABEL_308;
          }
          if ( !*((_BYTE *)this + 434) )
          {
            v170 = RemoveAlphaChannel(v381[2]);
            if ( RemoveAlphaChannel(v375.Format) != v170 )
            {
              WdLogSingleEntry3(4LL, -1071775482LL, this, v165);
              WdLogGlobalForLineNumber = 5083;
              goto LABEL_308;
            }
            v155 = v375.Height;
            v169 = v375.Width;
          }
          v385.right = v169;
LABEL_313:
          v385.bottom = v155;
          v34 = ADAPTER_DISPLAY::PresentDisplayOnly(
                  *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3120LL),
                  this,
                  v158,
                  v9,
                  &v384,
                  v145,
                  &v385);
          if ( v34 >= 0 )
          {
            if ( (v9->Flags.Value & 4) != 0 )
            {
              DXGDEVICE::ClearDisplayedAllMultiPlaneOverlaysUnsafe(*((DXGDEVICE **)this + 2), v158);
              DXGDEVICE::SetDisplayedPrimary(*((struct _KTHREAD ***)this + 2), v158, v343, 0, 1u);
              UpdatePostComposition(
                v158,
                0,
                0,
                0,
                *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3120LL));
            }
            goto LABEL_37;
          }
LABEL_38:
          if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL))
            && v34 != -1073741130 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 6274;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"GetRenderCore()->IsCoreResourceSharedOwner() || ntStatus == STATUS_DEVICE_REMOVED",
              6274LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( *((_QWORD *)this + 45) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 6275;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"m_pPresentDmaBuffer == NULL",
              6275LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          goto LABEL_41;
        }
        v271 = v168;
        WdLogSingleEntry5(
          2LL,
          v168,
          this,
          *((unsigned int *)v165 + 4),
          v165,
          (*(_DWORD *)(*((_QWORD *)v165 + 6) + 4LL) >> 6) & 0xF);
        WdLogGlobalForLineNumber = 5060;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"ret = 0x%I64x Device 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x 0x%I64x",
          v271,
          (__int64)this,
          *((unsigned int *)v165 + 4),
          (__int64)v165,
          (*(_DWORD *)(*((_QWORD *)v165 + 6) + 4LL) >> 6) & 0xF);
      }
      else
      {
        WdLogSingleEntry2(1LL, v153, -1073741822LL);
        WdLogGlobalForLineNumber = 5118;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"DxgkPresent is called for flip on a render only device 0x%I64x, returning 0x%I64x.",
          *((_QWORD *)this + 2),
          -1073741822LL,
          0LL,
          0LL,
          0LL);
      }
LABEL_329:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v345);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v344);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v343);
      return -1073741811LL;
    }
    v247 = v358;
    v248 = *(_DWORD *)(*((_QWORD *)this + 19) + 8LL);
    v249 = (*((__int64 (**)(void))v358 + 1))();
    v250 = v9->Flags.Value & 4;
    if ( v248 != v249 )
    {
      if ( !v250 )
      {
        DXGDEVICE::FlushScheduler(*((_QWORD *)this + 2), 2LL, 4294967293LL, 0LL);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v353);
        COREDEVICEACCESS::Release(v145);
        DXGPRESENTMUTEX::DXGPRESENTMUTEX(
          (DXGPRESENTMUTEX *)v376,
          *(struct ADAPTER_RENDER *const *)(*((_QWORD *)this + 2) + 16LL));
        DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v376);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v353);
        v251 = COREDEVICEACCESS::AcquireShared(v145, 0LL);
        v74 = v251;
        if ( v251 < 0 )
        {
          WdLogSingleEntry2(4LL, v251, this);
          WdLogGlobalForLineNumber = 4758;
          COREDEVICEACCESS::AcquireSharedUncheck(v145, 0LL);
          v124 = (DXGPRESENTMUTEX *)v376;
          goto LABEL_232;
        }
        DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, (struct DXGPRESENTMUTEX *)v376, 1u);
        DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v376);
      }
      v252 = *((_QWORD *)this + 19);
      *(_DWORD *)(v252 + 8) = (*((__int64 (**)(void))v247 + 1))();
      CddInterface = ADAPTER_DISPLAY::GetCddInterface(
                       *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3120LL),
                       v158);
      if ( CddInterface )
        (*((void (__fastcall **)(_QWORD, _QWORD))CddInterface + 1))(*(_QWORD *)CddInterface, 0LL);
      goto LABEL_285;
    }
    if ( v250 )
      goto LABEL_285;
    COREDEVICEACCESS::Release(v145);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v353);
    DXGPRESENTMUTEX::DXGPRESENTMUTEX(
      (DXGPRESENTMUTEX *)v377,
      *(struct ADAPTER_RENDER *const *)(*((_QWORD *)this + 2) + 16LL));
    DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v377);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v353);
    v254 = COREDEVICEACCESS::AcquireShared(v145, 0LL);
    v74 = v254;
    if ( v254 >= 0 )
    {
      DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, (struct DXGPRESENTMUTEX *)v377, 0);
      DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v377);
      goto LABEL_285;
    }
    WdLogSingleEntry2(4LL, v254, this);
    WdLogGlobalForLineNumber = 4791;
    COREDEVICEACCESS::AcquireSharedUncheck(v145, 0LL);
    v124 = (DXGPRESENTMUTEX *)v377;
LABEL_232:
    DXGPRESENTMUTEX::Release(v124);
    goto LABEL_234;
  }
LABEL_53:
  v44 = v9->pSrcSubRects;
  if ( !v44 || (v45 = v9->SubRectCnt, !(_DWORD)v45) || (Value & 3) == 0 || (Value & 0x100E803C) != 0 )
  {
    v34 = -1073741811;
    WdLogSingleEntry5(3LL, this, v44, v9->SubRectCnt, (unsigned int)Value, -1073741811LL);
    WdLogGlobalForLineNumber = 4165;
    goto LABEL_41;
  }
  if ( (Value & 2) != 0 )
  {
    if ( (Value & 0x100681) != 0 )
    {
      v34 = -1073741811;
      WdLogSingleEntry5(3LL, this, v44, v9->SubRectCnt, (unsigned int)Value, -1073741811LL);
      WdLogGlobalForLineNumber = 4180;
      goto LABEL_41;
    }
    v208 = v350;
  }
  else
  {
    v208 = v350;
    if ( !v350 || !Height || (Value & 0x82) != 0x80 )
    {
      v34 = -1073741811;
      WdLogSingleEntry5(3LL, this, v44, v9->SubRectCnt, (unsigned int)Value, -1073741811LL);
      WdLogGlobalForLineNumber = 4194;
      goto LABEL_41;
    }
    if ( (Value & 0x600) == 0x600 )
    {
      v34 = -1073741811;
      WdLogSingleEntry5(3LL, -1073741811LL, this, v44, v45, (unsigned int)Value);
      WdLogGlobalForLineNumber = 4203;
      goto LABEL_41;
    }
  }
  v209 = *((_QWORD *)v344 + 6);
  v210 = *(_DWORD *)(v209 + 4);
  if ( (v210 & 3) == 0 )
  {
    v34 = -1073741811;
    WdLogSingleEntry5(2LL, -1073741811LL, this, v344, v209, v9->hDestination);
    WdLogGlobalForLineNumber = 4214;
    v127 = L"0x%I64x 0x%I64x destination must be primary 0x%I64x 0x%I64x 0x%I64x";
    v327 = v9->hDestination;
    v325 = *((_QWORD *)v344 + 6);
    v323 = (__int64)v344;
    v322 = (__int64)this;
    v319 = -1073741811LL;
    goto LABEL_250;
  }
  v212 = *((_QWORD *)this + 2);
  v158 = (v210 >> 6) & 0xF;
  v352[0] = v158;
  v213 = *(DXGADAPTER **)(v212 + 1896);
  if ( !v213
    || !DXGADAPTER::IsDisplayAdapter(v213)
    || !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL)
                                                                       + 3120LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4226;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(GetDisplayAdapter(VidPnSourceId) == GetDisplayAdapter(0)) && (GetDisplayAdapter(VidPnSourceId) != NULL) && GetDis"
       "playAdapter(VidPnSourceId)->IsDisplayAdapter() && GetDisplayAdapter(VidPnSourceId)->GetDisplayCore()->IsCoreResou"
       "rceSharedOwner()",
      4226LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_DWORD *)a7 + 29) = v158;
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v368, (struct _EX_RUNDOWN_REF *)v344);
  DXGALLOCATIONREFERENCE::MoveAssign(&v345, &v368);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v368);
  v214 = v9->hDestination;
  v215 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v9->Flags.Value;
  v360 = v214;
  if ( (*(_BYTE *)&v215 & 1) != 0 )
  {
    if ( v344 == v343 )
    {
      v34 = -1073741811;
      WdLogSingleEntry5(2LL, -1073741811LL, this, v343, v9->hSource, v214);
      WdLogGlobalForLineNumber = 4238;
      v127 = L"0x%I64x 0x%I64x Source and destination must be different 0x%I64x 0x%I64x 0x%I64x";
      v327 = v9->hDestination;
      v325 = v9->hSource;
      v323 = (__int64)v343;
      v322 = (__int64)this;
      v319 = -1073741811LL;
      goto LABEL_250;
    }
    v216 = *(unsigned int *)(*((_QWORD *)v343 + 6) + 4LL);
    if ( (v216 & 3) != 0 && (((unsigned int)v216 >> 6) & 0xF) != v158 )
    {
      v34 = -1073741811;
      WdLogSingleEntry5(2LL, -1073741811LL, this, v343, (v216 >> 6) & 0xF, v158);
      v127 = L"0x%I64x 0x%I64x primary source has different VidPnSourceId 0x%I64x 0x%I64x != 0x%I64x";
      v327 = v158;
      WdLogGlobalForLineNumber = 4251;
      v325 = (*(_DWORD *)(*((_QWORD *)v343 + 6) + 4LL) >> 6) & 0xF;
      v323 = (__int64)v343;
      v322 = (__int64)this;
      v319 = -1073741811LL;
      goto LABEL_250;
    }
    v217 = v9->SrcRect.right;
    v218 = v9->SrcRect.left;
    if ( (int)v217 <= v218
      || (v219 = v9->SrcRect.bottom, v220 = v9->SrcRect.top, v219 <= v220)
      || v218 >= v208
      || v220 >= (int)Height
      || (int)v217 <= 0
      || v219 <= 0 )
    {
      v34 = -1073741811;
      WdLogSingleEntry5(2LL, -1073741811LL, v9->SrcRect.left, v9->SrcRect.top, v217, v9->SrcRect.bottom);
      WdLogGlobalForLineNumber = 4271;
      v127 = L"0x%I64x Invalid Source Rect [0x%I64x 0x%I64x 0x%I64x 0x%I64x]";
      v327 = v9->SrcRect.bottom;
      v325 = v9->SrcRect.right;
      v323 = v9->SrcRect.top;
      v322 = v9->SrcRect.left;
      v319 = -1073741811LL;
      goto LABEL_250;
    }
    while ( 1 )
    {
      v221 = v9->SubRectCnt;
      if ( v12 >= v221 )
        break;
      Source1 = 0LL;
      v222 = v12;
      v223 = &v9->pSrcSubRects[v222];
      v359 = (struct VIDSCH_SUBMIT_DATA_BASE *)v12;
      if ( !DXGPRESENT::IntersectRect(&Source1, v223, &v9->SrcRect)
        || RtlCompareMemory(&Source1, &v9->pSrcSubRects[v222], 0x10uLL) != 16 )
      {
        v34 = -1073741811;
        WdLogSingleEntry5(2LL, -1073741811LL, v9->SrcRect.left, v9->SrcRect.top, v9->SrcRect.right, v9->SrcRect.bottom);
        WdLogGlobalForLineNumber = 4289;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"0x%I64x Source Rect [0x%I64x 0x%I64x 0x%I64x 0x%I64x] contains an invalid subrect",
          -1073741811LL,
          v9->SrcRect.left,
          v9->SrcRect.top,
          v9->SrcRect.right,
          v9->SrcRect.bottom);
        v224 = v359;
        WdLogSingleEntry5(
          2LL,
          v359,
          v9->pSrcSubRects[v222].left,
          v9->pSrcSubRects[v222].top,
          v9->pSrcSubRects[v222].right,
          v9->pSrcSubRects[v222].bottom);
        WdLogGlobalForLineNumber = 4297;
        goto LABEL_452;
      }
      ++v12;
    }
    v226 = v9->Flags.Value;
    if ( (v226 & 0x40) != 0 )
    {
      v227 = v9->DstRect.right;
      v228 = v9->DstRect.left;
      if ( v227 <= (int)v228
        || (v229 = v9->DstRect.bottom, v230 = v9->DstRect.top, v229 <= v230)
        || (int)v228 >= (int)Width
        || v230 >= (int)v356[0]
        || v227 <= 0
        || v229 <= 0 )
      {
        v34 = -1073741811;
        WdLogSingleEntry5(3LL, -1073741811LL, v228, v9->DstRect.top, v9->DstRect.right, v9->DstRect.bottom);
        WdLogGlobalForLineNumber = 4319;
        goto LABEL_41;
      }
      if ( v9->SrcRect.right - v9->SrcRect.left != v227 - (_DWORD)v228
        || v9->SrcRect.bottom - v9->SrcRect.top != v229 - v230 )
      {
        v34 = -1073741811;
        WdLogSingleEntry5(2LL, -1073741811LL, this, v226, v344, v158);
        v127 = L"0x%I64x 0x%I64x specified destination RECT has different size from source RECT 0x%I64x 0x%I64x 0x%I64x";
        v327 = v158;
        v325 = (__int64)v344;
        WdLogGlobalForLineNumber = 4331;
        v323 = v9->Flags.Value;
        v322 = (__int64)this;
        v319 = -1073741811LL;
        goto LABEL_250;
      }
      v74 = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 19), v221);
      if ( v74 < 0 )
        goto LABEL_234;
      v231 = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), 0);
      v232 = v9->DstRect.left - v9->SrcRect.left;
      v233 = 0;
      v234 = v9->DstRect.top - v9->SrcRect.top;
      v221 = v9->SubRectCnt;
      if ( v221 )
      {
        do
        {
          v235 = v233++;
          v235 *= 2LL;
          *(&v231->left + 2 * v235) = v232 + *(&v9->pSrcSubRects->left + 2 * v235);
          *(&v231->right + 2 * v235) = v232 + *(&v9->pSrcSubRects->right + 2 * v235);
          *(&v231->top + 2 * v235) = v234 + *(&v9->pSrcSubRects->top + 2 * v235);
          *(&v231->bottom + 2 * v235) = v234 + *(&v9->pSrcSubRects->bottom + 2 * v235);
          v221 = v9->SubRectCnt;
        }
        while ( v233 < v221 );
      }
      DstRect = v9->DstRect;
      v384.pDstSubRects = v231;
      v384.DstRect = DstRect;
    }
    else
    {
      if ( Width != v350 || v356[0] != Height )
      {
        WdLogSingleEntry5(3LL, this, Width, v356[0], v350, Height);
        WdLogGlobalForLineNumber = 4367;
        goto LABEL_329;
      }
      v384.DstRect = v9->SrcRect;
      v384.pDstSubRects = v9->pSrcSubRects;
    }
    v384.SrcRect = v9->SrcRect;
    v237 = v384.Flags.Value & 0xFFFFF7FF | (v9->Flags.Value >> 9) & 0x800;
    v384.Flags.Value = v237;
    goto LABEL_486;
  }
  v384.DstRect.bottom = v356[0];
  v384.DstRect.right = Width;
  if ( (*(_BYTE *)&v215 & 0x40) == 0 )
    goto LABEL_480;
  v238 = v9->DstRect.left;
  v239 = v9->DstRect.right;
  if ( (int)v239 <= (int)v238 || (v240 = v9->DstRect.bottom, v240 <= v9->DstRect.top) || (int)v239 <= 0 || v240 <= 0 )
  {
    v34 = -1073741811;
    WdLogSingleEntry5(3LL, -1073741811LL, v238, v9->DstRect.top, v239, v9->DstRect.bottom);
    WdLogGlobalForLineNumber = 4400;
    goto LABEL_41;
  }
  if ( !DXGPRESENT::IntersectRect(&v384.DstRect, &v9->DstRect, &v384.DstRect) )
    goto LABEL_255;
  while ( 1 )
  {
LABEL_480:
    v221 = v9->SubRectCnt;
    if ( v12 >= v221 )
    {
      v237 = v384.Flags.Value;
      v384.SrcRect = v384.DstRect;
      v384.pDstSubRects = v9->pSrcSubRects;
LABEL_486:
      v384.SubRectCnt = v221;
      v242 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v9->Flags.Value;
      v243 = (*(_BYTE *)&v242 & 1 | v237 & 0xFFFFFFFE) ^ (*(_BYTE *)&v242 ^ (*(_BYTE *)&v242 & 1 | v237 & 0xFE)) & 2 ^ ((*(_BYTE *)&v242 & 1 | v237 & 0xFE) ^ (*(_BYTE *)&v242 ^ (*(_BYTE *)&v242 & 1 | v237 & 0xFE)) & 2 ^ (unsigned __int8)(*(unsigned int *)&v242 >> 5)) & 0x10;
      v244 = v243 ^ ((unsigned __int8)v243 ^ (unsigned __int8)(*(unsigned int *)&v242 >> 5)) & 0x20;
      v384.Color = v9->Color;
      v384.Flags.Value = v244 ^ ((unsigned __int8)v244 ^ (unsigned __int8)(*(unsigned int *)&v242 >> 5)) & 0x40 ^ ((unsigned __int16)(v244 ^ ((unsigned __int8)v244 ^ (unsigned __int8)(*(unsigned int *)&v242 >> 5)) & 0x40) ^ (unsigned __int16)(*(unsigned int *)&v242 >> 9)) & 0x800;
      goto LABEL_278;
    }
    v387 = 0LL;
    v222 = v12;
    v241 = &v9->pSrcSubRects[v222];
    v359 = (struct VIDSCH_SUBMIT_DATA_BASE *)v12;
    if ( !DXGPRESENT::IntersectRect(&v387, v241, &v384.DstRect)
      || RtlCompareMemory(&v387, &v9->pSrcSubRects[v222], 0x10uLL) != 16 )
    {
      break;
    }
    ++v12;
  }
  v34 = -1073741811;
  WdLogSingleEntry5(2LL, -1073741811LL, v9->DstRect.left, v9->DstRect.top, v9->DstRect.right, v9->DstRect.bottom);
  WdLogGlobalForLineNumber = 4424;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"0x%I64x Dest Rect [0x%I64x 0x%I64x 0x%I64x 0x%I64x] contains an invalid subrect",
    -1073741811LL,
    v9->DstRect.left,
    v9->DstRect.top,
    v9->DstRect.right,
    v9->DstRect.bottom);
  v224 = v359;
  WdLogSingleEntry5(
    2LL,
    v359,
    v9->pSrcSubRects[v222].left,
    v9->pSrcSubRects[v222].top,
    v9->pSrcSubRects[v222].right,
    v9->pSrcSubRects[v222].bottom);
  WdLogGlobalForLineNumber = 4432;
LABEL_452:
  v127 = L"SubRect 0x%I64x is invalid 0x%I64x 0x%I64x 0x%I64x 0x%I64x";
  v225 = &v9->pSrcSubRects[v222].left;
  v327 = v225[3];
  v325 = v225[2];
  v323 = v225[1];
  v322 = *v225;
  v319 = (__int64)v224;
LABEL_250:
  DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v127, v319, v322, v323, v325, v327);
LABEL_41:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v345);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v344);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v343);
  return (unsigned int)v34;
}
