/*
 * XREFs of ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402F3D20
 * Callers:
 *     DxgkPresent @ 0x1402F11A0 (DxgkPresent.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1403CDEF0 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     DxgkSubmitPresentToHwQueue @ 0x140420F70 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14001428C (McTemplateK0p_EtwWriteTransfer.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x1400161F8 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer @ 0x1400167BC (McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsDisplayAdapter@DXGADAPTER@@QEBAEXZ @ 0x140031620 (-IsDisplayAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1400332CC (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140033D08 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034400 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x14003645C (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1400369D4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x140037374 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsFullWDDMDevice@DXGDEVICE@@QEBA?BEI@Z @ 0x140037974 (-IsFullWDDMDevice@DXGDEVICE@@QEBA-BEI@Z.c)
 *     ?IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x140037A54 (-IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x140037D84 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     ?VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z @ 0x1400386C8 (-VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z.c)
 *     ?VidSchGetDeviceFlipMode@VIDSCH_EXPORT@@QEAA?AW4_VIDSCH_FLIP_MODE@@PEAU_VIDSCH_DEVICE@@IPEAW4D3DDDI_FLIPINTERVAL_TYPE@@@Z @ 0x14003BD78 (-VidSchGetDeviceFlipMode@VIDSCH_EXPORT@@QEAA-AW4_VIDSCH_FLIP_MODE@@PEAU_VIDSCH_DEVICE@@IPEAW4D3D.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x14003E4E0 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?VidSchGetMonitorPowerState@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_GLOBAL@@@Z @ 0x140041D98 (-VidSchGetMonitorPowerState@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?GetWin32kInterface@DXGPROCESS@@QEBAQEBU_DXGKWIN32KENG_INTERFACE@@XZ @ 0x140042CB8 (-GetWin32kInterface@DXGPROCESS@@QEBAQEBU_DXGKWIN32KENG_INTERFACE@@XZ.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x140043530 (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ?ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE@@QEAAXI@Z @ 0x14004520C (-ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE@@QEAAXI@Z.c)
 *     ?VidSchGetNumUnorderedWaitsInDevice@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_DEVICE@@@Z @ 0x140045D44 (-VidSchGetNumUnorderedWaitsInDevice@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_DEVICE@@@Z.c)
 *     ?VidMmIsAllocationPinned@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x140047878 (-VidMmIsAllocationPinned@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     McTemplateK0pqpqtt_EtwWriteTransfer @ 0x140048AA0 (McTemplateK0pqpqtt_EtwWriteTransfer.c)
 *     ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x14004D530 (-VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004FA7C (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING.c)
 *     ?hDestDc@CWin32kLocks@@QEBAPEAUHDC__@@XZ @ 0x140055A08 (-hDestDc@CWin32kLocks@@QEBAPEAUHDC__@@XZ.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x14005A26C (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1400628CC (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHHI@Z @ 0x140180F4C (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHHI@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z @ 0x1401D795C (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@IIPEAUtagRECT@@3IPEBU5@IPEAE@Z @ 0x140221230 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402A2AD0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1402B6018 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402BAC68 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1402CAA10 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1402E0C5C (-IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1402FFB70 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x140300250 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1403062A4 (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x140307940 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x140310DD0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ??1TOKEN_BINDING_GUARD@@QEAA@XZ @ 0x140316718 (--1TOKEN_BINDING_GUARD@@QEAA@XZ.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x140317908 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140317D20 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x140326388 (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x140326C50 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x140328C5C (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x140328FFC (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x140348530 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14034E19C (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ??0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@@Z @ 0x14037F0F4 (--0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1403808B0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1403865DC (-CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x140389E64 (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x14038A344 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x14038A500 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ?ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x140394080 (-ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?GetDdiSubRectCnt@DXGPRESENT@@QEBAII@Z @ 0x1403A0D0C (-GetDdiSubRectCnt@DXGPRESENT@@QEBAII@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1403A0D2C (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 *     ?CheckOutput@DXGPRESENT@@QEAAXII@Z @ 0x1403A1870 (-CheckOutput@DXGPRESENT@@QEAAXII@Z.c)
 *     ?GetDdiDstRect@DXGPRESENT@@QEBAXPEAUtagRECT@@QEBU2@@Z @ 0x1403A293C (-GetDdiDstRect@DXGPRESENT@@QEBAXPEAUtagRECT@@QEBU2@@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1403C7274 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?RemoveAlphaChannel@@YA?AW4_D3DDDIFORMAT@@W41@@Z @ 0x1403E9D44 (-RemoveAlphaChannel@@YA-AW4_D3DDDIFORMAT@@W41@@Z.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x140401008 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x140401AA0 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x14040674C (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
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
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // r14
  D3DKMT_HANDLE v30; // eax
  __int64 Value; // r9
  D3DKMT_PRESENT_MODEL Model; // eax
  struct COREDEVICEACCESS *v33; // r15
  struct DXGADAPTERSTOPRESETLOCKSHARED *v34; // r12
  int v35; // r12d
  struct _EX_RUNDOWN_REF *v36; // rbx
  __int64 result; // rax
  __int64 v38; // r14
  unsigned int v39; // eax
  __int64 v40; // rdx
  int v41; // ecx
  struct _EX_RUNDOWN_REF *v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // r8
  int v45; // eax
  const RECT *v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rdx
  unsigned int v51; // r8d
  _OWORD *v52; // rcx
  D3DKMT_HANDLE *BroadcastContext; // rax
  __int128 v54; // xmm1
  int v55; // eax
  char v56; // r14
  const RECT *pSrcSubRects; // r8
  __int64 SubRectCnt; // rdx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v59; // r8d
  char v60; // dl
  UINT v61; // edx
  DXGPRESENT *v62; // rcx
  DXGADAPTER *v63; // rcx
  unsigned int v64; // ebx
  struct COREDEVICEACCESS *v65; // r15
  int v66; // eax
  struct COREDEVICEACCESS *v67; // r14
  BOOL v68; // ebx
  __int64 v69; // rcx
  int v70; // eax
  unsigned int v71; // r14d
  HANDLE CurrentThreadId; // r15
  __int64 v73; // rcx
  DXGADAPTERSTOPRESETLOCKSHARED *v74; // rbx
  COREDEVICEACCESS *v75; // r14
  int v76; // ebx
  HDC v77; // rbx
  HDEV v78; // r14
  __int64 v79; // rcx
  __int64 v80; // rax
  int v81; // ecx
  __int64 v82; // rcx
  __int64 v83; // r14
  DXGPROCESS *Current; // rax
  const struct _DXGKWIN32KENG_INTERFACE *v85; // rax
  const struct _DXGKWIN32KENG_INTERFACE *v86; // rbx
  COREDEVICEACCESS *v87; // r15
  unsigned int v88; // edx
  __int64 i; // r8
  int v90; // eax
  UINT v91; // ebx
  unsigned int j; // r14d
  unsigned int v93; // ecx
  unsigned int v94; // eax
  struct tagRECT *v95; // r8
  RECT *v96; // rcx
  __int64 v97; // r12
  struct _D3DKMT_PRESENT *v98; // rax
  const RECT *pDstSubRects; // r11
  UINT v100; // r15d
  const struct _DXGKWIN32KENG_INTERFACE *v101; // r12
  unsigned int v102; // r8d
  unsigned int v103; // r9d
  __int64 v104; // rdx
  __int64 v105; // rcx
  struct COREDEVICEACCESS *v106; // r15
  int v107; // eax
  UINT k; // edx
  __int64 v109; // rcx
  int v110; // eax
  int v111; // eax
  int v112; // ecx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v113; // r8d
  LONG top; // eax
  LONG left; // eax
  LONG bottom; // eax
  LONG right; // eax
  struct tagRECT *DdiSubRectList; // rax
  __int64 v119; // rcx
  int v120; // ebx
  __int64 v121; // rcx
  __int64 v122; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v123; // ecx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  COREDEVICEACCESS *v125; // rcx
  DXGPRESENTMUTEX *v126; // rcx
  int v127; // eax
  struct DXGALLOCATION *v128; // rax
  const wchar_t *v129; // r9
  struct VIDMM_DMA_BUFFER *v130; // rdx
  __int128 v131; // xmm0
  int v132; // ecx
  int v133; // eax
  int v134; // ecx
  int v135; // eax
  int v136; // ecx
  int v137; // edx
  UINT Duration; // eax
  UINT v139; // edx
  UINT v140; // ecx
  int v141; // ecx
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rdx
  int DeviceFlipMode; // eax
  const struct DXGALLOCATION *DisplayedPrimary; // rax
  int v145; // ecx
  __int64 v146; // rdx
  COREDEVICEACCESS *v147; // r15
  int v148; // eax
  UINT v149; // ebx
  __int64 v150; // rax
  __int64 v151; // rdx
  VIDMM_EXPORT *v152; // rcx
  struct VIDMM_GLOBAL *v153; // rdx
  __int64 v154; // rax
  __int64 v155; // rdx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v156; // eax
  UINT v157; // eax
  ULONG_PTR v158; // rcx
  unsigned int v159; // eax
  unsigned int v160; // r14d
  DXGADAPTER *v161; // rcx
  __int64 v162; // rdx
  int v163; // r8d
  ULONG_PTR Count; // rax
  DXGADAPTER *v165; // rcx
  __int64 v166; // rax
  struct DXGALLOCATION *v167; // rsi
  unsigned int v168; // edx
  __int128 v169; // xmm0
  __int64 v170; // r8
  int v171; // eax
  UINT v172; // ecx
  enum _D3DDDIFORMAT v173; // ebx
  int v174; // eax
  struct VIDMM_DMA_BUFFER *v175; // rdx
  UINT v176; // ebx
  unsigned int v177; // r8d
  int v178; // ebx
  DXGDEVICE *v179; // rbx
  unsigned __int8 v180; // r14
  DXGADAPTERSTOPRESETLOCKSHARED *v181; // r15
  COREDEVICEACCESS *v182; // rsi
  __int64 v183; // rcx
  D3DKMT_HANDLE v184; // eax
  const struct _DXGKWIN32KENG_INTERFACE *v185; // rbx
  int v186; // eax
  struct CWin32kLocks *v187; // r15
  struct DXGADAPTERSTOPRESETLOCKSHARED *v188; // r14
  __int64 v189; // rcx
  unsigned int (__fastcall *v190)(struct _D3DKMT_PRESENT *, HDC, _QWORD, const RECT *, void *, int, unsigned int, unsigned int, int, int, UINT, void (__fastcall *)(const struct tagRECT *, const struct tagRECT *, struct tagRECT *, const struct tagRECT *, unsigned int, unsigned int), __int64 (__fastcall *)(struct tagRECT *, struct tagRECT *, const struct tagRECT *, const struct tagRECT *)); // r15
  int v191; // ebx
  UINT v192; // esi
  bool v193; // r14
  HDC v194; // rax
  struct DXGDEVICE *v195; // rsi
  __int64 v196; // rbx
  struct DXGPROCESS *v197; // rax
  int v198; // eax
  struct DXGDEVICE *v199; // rsi
  __int64 v200; // rbx
  struct DXGPROCESS *v201; // rax
  __int64 v202; // r12
  __int64 v203; // rax
  const RECT *v204; // r15
  UINT v205; // r14d
  __int64 v206; // rsi
  unsigned int v207; // r8d
  unsigned int v208; // r9d
  __int64 v209; // rdx
  __int64 v210; // rcx
  signed int v211; // ebx
  __int64 v212; // rcx
  unsigned int v213; // r14d
  struct DXGALLOCATION *v214; // rax
  __int64 v215; // rax
  DXGADAPTER *v216; // rcx
  unsigned int v217; // ecx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v218; // eax
  unsigned __int64 v219; // rcx
  __int64 v220; // rcx
  int v221; // edx
  int v222; // r8d
  signed int v223; // eax
  unsigned int v224; // r10d
  __int64 v225; // rbx
  const struct tagRECT *v226; // rdx
  struct VIDSCH_SUBMIT_DATA_BASE *v227; // rsi
  int *v228; // r8
  __int64 v229; // r15
  int v230; // r9d
  __int64 v231; // r11
  int v232; // edx
  int v233; // ebx
  const RECT *v234; // rbx
  int v235; // r8d
  unsigned int v236; // r11d
  int v237; // r9d
  __int64 v238; // rdx
  RECT DstRect; // xmm0
  UINT v240; // edx
  __int64 v241; // r8
  __int64 v242; // rcx
  int v243; // eax
  const struct tagRECT *v244; // rdx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v245; // r8d
  unsigned int v246; // eax
  int v247; // ecx
  int v248; // r8d
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v249; // edx
  const struct _DXGKWIN32KENG_INTERFACE *v250; // r12
  int v251; // ebx
  int v252; // eax
  int v253; // ecx
  int v254; // eax
  __int64 v255; // rbx
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  int v257; // eax
  struct VIDMM_DMA_BUFFER *v258; // rdx
  bool IsFullWDDMDevice; // al
  DXGDEVICE *v260; // rcx
  int v261; // eax
  int v262; // eax
  int v263; // ecx
  __int64 v264; // r12
  struct VIDSCH_SUBMIT_DATA_BASE *v265; // rax
  _DWORD *p_left; // r11
  UINT v267; // r15d
  const struct _DXGKWIN32KENG_INTERFACE *v268; // r14
  unsigned int v269; // r10d
  unsigned int v270; // r8d
  unsigned int v271; // r9d
  __int64 v272; // rdx
  __int64 v273; // rcx
  __int64 v274; // rbx
  int v275; // eax
  unsigned __int8 v276; // r9
  unsigned int v277; // r15d
  char v278; // r14
  int v279; // ebx
  struct DXGPROCESS *v280; // rax
  unsigned int v281; // esi
  struct DXGPROCESS *v282; // rbx
  unsigned int v283; // ecx
  __int64 v284; // r8
  int v285; // edx
  struct _EX_RUNDOWN_REF *v286; // rdx
  struct _EX_RUNDOWN_REF *v287; // rax
  unsigned int Ptr_high; // r12d
  __int64 v289; // rcx
  unsigned __int8 *pPrivateDriverData; // r14
  unsigned int PrivateDriverDataSize; // r15d
  __int64 v292; // rdx
  struct DXGHWQUEUE **v293; // rax
  __int64 v294; // rbx
  struct DXGHWQUEUE *v295; // rsi
  struct DXGPROCESS *v296; // rax
  DXGDEVICE *v297; // rsi
  unsigned __int8 v298; // bl
  CWin32kLocks *v299; // rsi
  const struct _DXGKWIN32KENG_INTERFACE *v300; // r14
  bool v301; // zf
  int v302; // eax
  int v303; // eax
  unsigned int (__fastcall *v304)(HDC, _QWORD, const RECT *, _QWORD, UINT); // r15
  UINT v305; // ebx
  UINT v306; // esi
  const RECT *v307; // r14
  HDC v308; // rax
  int v309; // eax
  __int64 v310; // rax
  unsigned __int8 v311; // r8
  int CurrentOrientation; // eax
  int v313; // ecx
  __int64 v314; // rcx
  __int64 v315; // rbx
  unsigned int v316; // r12d
  struct DXGHWQUEUE **v317; // rax
  struct DXGHWQUEUE *v318; // r15
  struct DXGPROCESS *v319; // rax
  struct _DXGKARG_PRESENT *v320; // [rsp+20h] [rbp-100h]
  struct _DXGKARG_PRESENT *v321; // [rsp+20h] [rbp-100h]
  __int64 v322; // [rsp+20h] [rbp-100h]
  struct _DXGKARG_PRESENT *v323; // [rsp+20h] [rbp-100h]
  union _LARGE_INTEGER *v324; // [rsp+28h] [rbp-F8h]
  __int64 v325; // [rsp+28h] [rbp-F8h]
  __int64 v326; // [rsp+30h] [rbp-F0h]
  enum _D3DDDIFORMAT v327[2]; // [rsp+38h] [rbp-E8h]
  __int64 v328; // [rsp+38h] [rbp-E8h]
  struct _DXGKARG_PRESENT *v329; // [rsp+40h] [rbp-E0h]
  __int64 v330; // [rsp+40h] [rbp-E0h]
  int v331; // [rsp+40h] [rbp-E0h]
  struct tagRECT *v332; // [rsp+48h] [rbp-D8h]
  int v333; // [rsp+48h] [rbp-D8h]
  struct VIDMM_DMA_BUFFER *v334; // [rsp+50h] [rbp-D0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v335; // [rsp+58h] [rbp-C8h]
  enum _D3DDDIFORMAT v336[2]; // [rsp+60h] [rbp-C0h]
  enum _D3DDDIFORMAT v337; // [rsp+60h] [rbp-C0h]
  struct COREDEVICEACCESS *v338; // [rsp+68h] [rbp-B8h]
  struct COREDEVICEACCESS *v339; // [rsp+68h] [rbp-B8h]
  __int64 v340; // [rsp+70h] [rbp-B0h]
  __int64 v341; // [rsp+78h] [rbp-A8h]
  __int64 v342; // [rsp+80h] [rbp-A0h]
  __int64 v343; // [rsp+88h] [rbp-98h]
  __int64 v344; // [rsp+90h] [rbp-90h]
  __int64 v345; // [rsp+98h] [rbp-88h]
  struct DXGALLOCATION *v346; // [rsp+A0h] [rbp-80h] BYREF
  struct DXGALLOCATION *v347; // [rsp+A8h] [rbp-78h] BYREF
  struct _EX_RUNDOWN_REF *v348; // [rsp+B0h] [rbp-70h] BYREF
  struct COREDEVICEACCESS *v349; // [rsp+B8h] [rbp-68h]
  char v350; // [rsp+C0h] [rbp-60h]
  unsigned int hDestination; // [rsp+C4h] [rbp-5Ch] BYREF
  unsigned int Height; // [rsp+C8h] [rbp-58h]
  unsigned int v353; // [rsp+CCh] [rbp-54h]
  char v354; // [rsp+D0h] [rbp-50h]
  unsigned int v355[2]; // [rsp+D8h] [rbp-48h]
  DXGADAPTERSTOPRESETLOCKSHARED *v356; // [rsp+E0h] [rbp-40h]
  unsigned int hSource; // [rsp+E8h] [rbp-38h]
  CWin32kLocks *v358; // [rsp+F0h] [rbp-30h]
  unsigned int v359[2]; // [rsp+F8h] [rbp-28h]
  enum _D3DDDIFORMAT Color; // [rsp+100h] [rbp-20h]
  const struct _DXGKWIN32KENG_INTERFACE *v361; // [rsp+108h] [rbp-18h]
  struct VIDSCH_SUBMIT_DATA_BASE *v362; // [rsp+110h] [rbp-10h]
  unsigned int v363; // [rsp+118h] [rbp-8h]
  _BYTE v364[24]; // [rsp+120h] [rbp+0h] BYREF
  struct DXGCONTEXT **v365; // [rsp+138h] [rbp+18h]
  struct _EX_RUNDOWN_REF *v366; // [rsp+140h] [rbp+20h] BYREF
  HWND hWindow; // [rsp+148h] [rbp+28h]
  struct _D3DKMT_PRESENT *v368; // [rsp+150h] [rbp+30h]
  struct _EX_RUNDOWN_REF *v369; // [rsp+158h] [rbp+38h] BYREF
  struct _EX_RUNDOWN_REF *v370; // [rsp+160h] [rbp+40h] BYREF
  struct _EX_RUNDOWN_REF *v371; // [rsp+168h] [rbp+48h] BYREF
  struct _EX_RUNDOWN_REF *v372; // [rsp+170h] [rbp+50h] BYREF
  __int64 v373; // [rsp+178h] [rbp+58h] BYREF
  struct _D3DKMT_UNLOCK2 v374; // [rsp+180h] [rbp+60h] BYREF
  __int64 v375; // [rsp+188h] [rbp+68h]
  _D3DKMT_UNLOCK v376; // [rsp+190h] [rbp+70h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v377; // [rsp+1A0h] [rbp+80h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v378; // [rsp+1D0h] [rbp+B0h] BYREF
  _BYTE v379[24]; // [rsp+200h] [rbp+E0h] BYREF
  _BYTE v380[24]; // [rsp+218h] [rbp+F8h] BYREF
  struct _D3DKMT_LOCK2 v381; // [rsp+230h] [rbp+110h] BYREF
  _D3DKMT_LOCK v382; // [rsp+248h] [rbp+128h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v383; // [rsp+278h] [rbp+158h] BYREF
  enum _D3DDDIFORMAT v384[4]; // [rsp+2B0h] [rbp+190h]
  _DWORD v385[8]; // [rsp+300h] [rbp+1E0h] BYREF
  _QWORD v386[70]; // [rsp+320h] [rbp+200h] BYREF
  struct _DXGKARG_PRESENT v387; // [rsp+550h] [rbp+430h] BYREF
  struct tagRECT v388; // [rsp+600h] [rbp+4E0h] BYREF
  struct tagRECT Source1; // [rsp+610h] [rbp+4F0h] BYREF
  struct tagRECT v390; // [rsp+620h] [rbp+500h] BYREF
  __int128 v391; // [rsp+630h] [rbp+510h] BYREF
  struct tagRECT v392; // [rsp+640h] [rbp+520h] BYREF
  _OWORD v393[20]; // [rsp+650h] [rbp+530h] BYREF
  _BYTE v394[64]; // [rsp+790h] [rbp+670h] BYREF
  _BYTE v395[64]; // [rsp+7D0h] [rbp+6B0h] BYREF
  _BYTE v396[64]; // [rsp+810h] [rbp+6F0h] BYREF
  _BYTE v397[64]; // [rsp+850h] [rbp+730h] BYREF
  _BYTE v398[64]; // [rsp+890h] [rbp+770h] BYREF
  _BYTE v399[64]; // [rsp+8D0h] [rbp+7B0h] BYREF
  _BYTE v400[64]; // [rsp+910h] [rbp+7F0h] BYREF
  _BYTE v401[64]; // [rsp+950h] [rbp+830h] BYREF
  _BYTE v402[64]; // [rsp+990h] [rbp+870h] BYREF
  _BYTE v403[64]; // [rsp+9D0h] [rbp+8B0h] BYREF
  _BYTE v404[64]; // [rsp+A10h] [rbp+8F0h] BYREF
  char v405[64]; // [rsp+A50h] [rbp+930h] BYREF

  v8 = a7;
  v9 = a2;
  v358 = a5;
  v365 = a6;
  v10 = *((_QWORD *)this + 2);
  v356 = a4;
  v349 = a3;
  v368 = a2;
  v11 = *(ADAPTER_RENDER **)(v10 + 16);
  v362 = a7;
  v12 = 0;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(v11) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3939;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      3939LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this + 45) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3940;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pPresentDmaBuffer == NULL", 3940LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (v9->Flags.Value & 0x4000) != 0 )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 3946;
    return result;
  }
  Win32kInterface = DXGPROCESS::GetWin32kInterface(*(DXGPROCESS **)(*((_QWORD *)this + 2) + 40LL));
  v14 = v9->Flags.Value & 0x12000;
  v361 = Win32kInterface;
  if ( v14 == 73728 )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 3957;
    return result;
  }
  memset(&v387, 0, sizeof(v387));
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
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
    *((_DWORD *)a7 + 29) = 0;
  v353 = 0;
  Height = 0;
  Width = 0;
  Color = D3DDDIFMT_UNKNOWN;
  v355[0] = 0;
  v359[0] = 0;
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v346, 0LL);
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v347, 0LL);
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v348, 0LL);
  v18 = v9->hDestination;
  v363 = 0;
  if ( v18 )
  {
    v38 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v38 + 248));
    v39 = (v18 >> 6) & 0xFFFFFF;
    if ( v39 < *(_DWORD *)(v38 + 296)
      && (v40 = *(_QWORD *)(v38 + 280) + 16LL * v39, ((v18 >> 25) & 0x60) == (*(_BYTE *)(v40 + 8) & 0x60))
      && (*(_DWORD *)(v40 + 8) & 0x2000) == 0
      && (v41 = *(_DWORD *)(v40 + 8) & 0x1F) != 0 )
    {
      if ( v41 == 5 )
      {
        v42 = *(struct _EX_RUNDOWN_REF **)v40;
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        v42 = 0LL;
      }
    }
    else
    {
      v42 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v369, v42);
    _InterlockedDecrement((volatile signed __int32 *)(v38 + 264));
    ExReleasePushLockSharedEx(v38 + 248, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign(&v347, &v369);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v369);
    if ( !v347 )
    {
      v35 = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, this, v9->hDestination);
      WdLogGlobalForLineNumber = 4012;
      goto LABEL_41;
    }
    v43 = *((_QWORD *)this + 2);
    v44 = *(_QWORD *)(*(_QWORD *)(v43 + 16) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v347 + 1) + 16LL) + 16LL) != v44 )
    {
      v35 = -1073741811;
      WdLogSingleEntry3(2LL, v43, v347, -1073741811LL);
      v128 = v347;
      v330 = 0LL;
      v328 = 0LL;
      WdLogGlobalForLineNumber = 4022;
      goto LABEL_248;
    }
    memset(&v383.Width, 0, 40);
    v383.hAllocation = *(HANDLE *)(*((_QWORD *)v347 + 6) + 16LL);
    v45 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), &v383, v44);
    v29 = v45;
    if ( v45 < 0 )
    {
      WdLogSingleEntry4(2LL, v45, this, *(_QWORD *)(*((_QWORD *)v347 + 6) + 16LL), v347);
      v214 = v347;
      WdLogGlobalForLineNumber = 4035;
      goto LABEL_423;
    }
    Width = v383.Width;
    v355[0] = v383.Width;
    v359[0] = v383.Height;
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
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        v24 = 0LL;
      }
    }
    else
    {
      v24 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v370, v24);
    _InterlockedDecrement((volatile signed __int32 *)(v20 + 264));
    ExReleasePushLockSharedEx(v20 + 248, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign(&v346, &v370);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v370);
    v25 = (struct _EX_RUNDOWN_REF *)v346;
    if ( !v346 )
    {
      v35 = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, this, v9->hSource);
      WdLogGlobalForLineNumber = 4050;
      goto LABEL_41;
    }
    v12 = 0;
    memset(&v377.Width, 0, 40);
    v377.hAllocation = *(HANDLE *)(*((_QWORD *)v346 + 6) + 16LL);
    if ( (v9->Flags.Value & 0x10000000) != 0 )
    {
      v353 = v9[1].hSource;
      v377.Width = v353;
      Height = v9[1].hDestination;
      v377.Height = Height;
      Color = v9[1].Color;
      v377.Format = Color;
      goto LABEL_27;
    }
    v26 = *((_QWORD *)this + 2);
    v27 = *(_QWORD *)(v26 + 16);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v346 + 1) + 16LL) + 16LL) == *(_QWORD *)(v27 + 16) )
    {
      v28 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v26 + 16), &v377, v27);
      v29 = v28;
      if ( v28 >= 0 )
      {
        Color = v377.Format;
        Height = v377.Height;
        v353 = v377.Width;
        goto LABEL_26;
      }
      WdLogSingleEntry4(2LL, v28, this, *(_QWORD *)(*((_QWORD *)v346 + 6) + 16LL), v346);
      v214 = v346;
      WdLogGlobalForLineNumber = 4089;
LABEL_423:
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x",
        v29,
        (__int64)this,
        *(_QWORD *)(*((_QWORD *)v214 + 6) + 16LL),
        (__int64)v214,
        0LL);
      goto LABEL_260;
    }
    v35 = -1073741811;
    WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v346, -1073741811LL);
    v128 = v346;
    v330 = 0LL;
    v328 = 0LL;
    WdLogGlobalForLineNumber = 4078;
LABEL_248:
    v326 = -1073741811LL;
    v129 = L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x";
    v325 = (__int64)v128;
    v322 = *((_QWORD *)this + 2);
    goto LABEL_250;
  }
LABEL_26:
  v25 = (struct _EX_RUNDOWN_REF *)v346;
LABEL_27:
  v30 = v9->hDestination;
  if ( !v30 || (LODWORD(Value) = v9->Flags.0, (Value & 0x10000) != 0) )
  {
    Value = v9->Flags.Value;
    if ( (Value & 4) == 0 )
    {
      if ( (Value & 3) == 0 )
      {
        if ( (Value & 0x8000) == 0 )
        {
          v35 = -1073741811;
          WdLogSingleEntry5(3LL, -1073741811LL, this, v9->pSrcSubRects, v9->SubRectCnt, v9->Flags.Value);
          WdLogGlobalForLineNumber = 6191;
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
              v33 = v349;
              v34 = v356;
              LODWORD(v29) = SubmitPresentHistoryTokenPreparation(
                               v356,
                               v349,
                               *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
                               &v9->PresentHistoryToken,
                               v9->PresentLimitSemaphore,
                               (v9->Flags.Value & 0x10) != 0);
              if ( (int)v29 < 0 )
              {
LABEL_260:
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v348);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v347);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v346);
                return (unsigned int)v29;
              }
              TOKEN_BINDING_GUARD::TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)v385, &v9->PresentHistoryToken, v34, v33);
              v385[0] = SubmitPresentHistoryToken(
                          &v9->PresentHistoryToken,
                          v33,
                          v34,
                          v358,
                          1,
                          0LL,
                          (struct DXGK_PRESENT_PARAMS *)v9,
                          a7,
                          this,
                          0LL,
                          0LL);
              v35 = v385[0];
              TOKEN_BINDING_GUARD::~TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)v385);
LABEL_36:
              if ( v35 >= 0 )
              {
LABEL_37:
                v36 = v348;
                if ( v348 )
                {
                  if ( (v9->Flags.Value & 0x10000000) == 0 )
                  {
                    v48 = *((_QWORD *)this + 2);
                    v49 = *(_QWORD *)(v48 + 1880);
                    if ( v49 )
                    {
                      if ( (*(_DWORD *)(*(_QWORD *)(v48 + 40) + 408LL) & 4) == 0 )
                      {
                        memset(v393, 0, 0x138uLL);
                        v50 = 2LL;
                        v51 = v363;
                        LODWORD(v393[0]) = v9->hDevice;
                        DWORD1(v393[0]) = v363;
                        DWORD2(v393[0]) = (*(_DWORD *)(v348[6].Count + 4) >> 6) & 0xF;
                        v52 = &v393[1];
                        HIDWORD(v393[0]) = v9->BroadcastContextCount;
                        BroadcastContext = v9->BroadcastContext;
                        do
                        {
                          *v52 = *(_OWORD *)BroadcastContext;
                          v52[1] = *((_OWORD *)BroadcastContext + 1);
                          v52[2] = *((_OWORD *)BroadcastContext + 2);
                          v52[3] = *((_OWORD *)BroadcastContext + 3);
                          v52[4] = *((_OWORD *)BroadcastContext + 4);
                          v52[5] = *((_OWORD *)BroadcastContext + 5);
                          v52[6] = *((_OWORD *)BroadcastContext + 6);
                          v52 += 8;
                          v54 = *((_OWORD *)BroadcastContext + 7);
                          BroadcastContext += 32;
                          *(v52 - 1) = v54;
                          --v50;
                        }
                        while ( v50 );
                        LODWORD(v393[19]) = 4;
                        LODWORD(v393[17]) = 0;
                        LODWORD(v393[18]) = 0;
                        v55 = OUTPUTDUPL_MGR::ProcessPresent(
                                *(OUTPUTDUPL_MGR **)(*(_QWORD *)(v49 + 3120) + 120LL),
                                this,
                                (struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS)4,
                                v51,
                                HIDWORD(v393[0]),
                                (struct _D3DKMT_PRESENT_RGNS *)&v393[17],
                                (const struct DXGK_PRESENT_PARAMS *)v9,
                                (*(_DWORD *)(v36[6].Count + 4) >> 6) & 0xF,
                                v365,
                                v349);
                        if ( v55 == 259 )
                          v55 = 0;
                        v35 = v55;
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
        v35 = -1073741811;
        WdLogSingleEntry3(3LL, this, v9->Flags.Value, -1073741811LL);
        WdLogGlobalForLineNumber = 6155;
        goto LABEL_41;
      }
      v56 = 0;
      v350 = 0;
      if ( (Value & 0x100) != 0 )
      {
        v122 = *((_QWORD *)this + 2);
        if ( !*(_QWORD *)(v122 + 1880) )
        {
          v35 = -1073741811;
          WdLogSingleEntry2(3LL, *((_QWORD *)this + 2), -1073741811LL);
          WdLogGlobalForLineNumber = 5104;
          goto LABEL_41;
        }
        v123 = *(_DWORD *)(v122 + 1888);
        VidPnSourceId = v9->VidPnSourceId;
        if ( v123 <= VidPnSourceId )
        {
          WdLogSingleEntry2(3LL, VidPnSourceId, v123);
          WdLogGlobalForLineNumber = 5110;
          goto LABEL_329;
        }
      }
      pSrcSubRects = v9->pSrcSubRects;
      if ( (Value & 2) != 0 )
      {
        if ( !pSrcSubRects || !v9->SubRectCnt || (Value & 0x86BD) != 0 )
        {
          v35 = -1073741811;
          WdLogSingleEntry5(3LL, this, pSrcSubRects, v9->SubRectCnt, Value, -1073741811LL);
          WdLogGlobalForLineNumber = 5132;
          goto LABEL_41;
        }
        hSource = 0;
      }
      else
      {
        if ( !pSrcSubRects
          || (SubRectCnt = v9->SubRectCnt, !(_DWORD)SubRectCnt)
          || !v353
          || !Height
          || (Value & 0x802E) != 0 )
        {
          v35 = -1073741811;
          WdLogSingleEntry5(3LL, this, pSrcSubRects, v9->SubRectCnt, Value, -1073741811LL);
          WdLogGlobalForLineNumber = 5152;
          goto LABEL_41;
        }
        if ( (((unsigned int)Value >> 9) & 1) != 0 || (Value & 0x400) != 0 )
        {
          if ( (((unsigned int)Value >> 9) & 1) == (((unsigned int)Value >> 10) & 1) )
          {
            v35 = -1073741811;
            WdLogSingleEntry5(3LL, -1073741811LL, this, pSrcSubRects, SubRectCnt, Value);
            WdLogGlobalForLineNumber = 5164;
            goto LABEL_41;
          }
          if ( (Value & 0x100) == 0
            || !ADAPTER_DISPLAY::IsVidPnSourceOwner(
                  *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 3120LL),
                  *((const struct DXGDEVICE **)this + 2),
                  v9->VidPnSourceId) )
          {
            v35 = -1073741811;
            WdLogSingleEntry5(3LL, this, v9->pSrcSubRects, v9->SubRectCnt, v9->Flags.Value, -1073741811LL);
            WdLogGlobalForLineNumber = 5173;
            goto LABEL_41;
          }
        }
      }
      v59 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v9->Flags.Value;
      v60 = *(_BYTE *)&v59 ^ (*(_BYTE *)&v9->Flags.0 & 2 | *(_BYTE *)&v387.Flags.0 & 0xFD);
      v59 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)(*(unsigned int *)&v59 >> 5);
      v61 = (v9->Flags.Value & 2 | v387.Flags.Value & 0xFFFFFFFD) ^ v60 & 1;
      v387.Flags.Value = v61 ^ (*(_BYTE *)&v59 ^ (unsigned __int8)v61) & 0x10 ^ (*(_BYTE *)&v59 ^ (unsigned __int8)(v61 ^ (*(_BYTE *)&v59 ^ v61) & 0x10)) & 0x20 ^ ((unsigned __int8)(v61 ^ (*(_BYTE *)&v59 ^ v61) & 0x10 ^ (*(_BYTE *)&v59 ^ v61 ^ (*(_BYTE *)&v59 ^ v61) & 0x10) & 0x20) ^ *(_BYTE *)&v59) & 0x40;
      v387.Color = v9->Color;
      v35 = DXGPRESENT::CheckInput(*((DXGPRESENT **)this + 19), v9, v353, Height);
      if ( v35 < 0 )
        goto LABEL_38;
      v62 = (DXGPRESENT *)*((_QWORD *)this + 19);
      if ( (*((_DWORD *)v62 + 1) & 4) != 0 )
      {
LABEL_158:
        if ( bTracingEnabled && !v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
          McTemplateK0p_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventBlitCancel, 0LL, v9->hWindow);
        goto LABEL_37;
      }
      DXGPRESENT::CheckOutput(v62, v355[0], v359[0]);
      v63 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1880LL);
      if ( !v63 || DXGADAPTER::IsDisplayOnlyAdapter(v63) )
      {
        v67 = v349;
        v110 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, (v9->Flags.Value & 0x10) == 0, v349);
        v76 = v110;
        if ( v110 < 0 )
        {
          WdLogSingleEntry2(4LL, v110, this);
          WdLogGlobalForLineNumber = 5222;
          goto LABEL_234;
        }
      }
      else
      {
        if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 5198;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"GetDisplayAdapter() == GetRenderAdapter()",
            5198LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v64 = 0;
        v65 = v349;
        while ( v64 < *(_DWORD *)(*((_QWORD *)this + 2) + 1888LL) )
        {
          v66 = DXGCONTEXT::WaitForQueuedPresentLimit(this, v64, (v9->Flags.Value & 0x10) == 0, v65);
          LODWORD(v29) = v66;
          if ( v66 < 0 )
          {
            WdLogSingleEntry2(4LL, v66, this);
            WdLogGlobalForLineNumber = 5208;
            goto LABEL_260;
          }
          ++v64;
        }
        v67 = v65;
      }
      v35 = DXGCONTEXT::AcquireDmaBuffer(this, (struct VIDMM_DMA_BUFFER **)this + 45, v67, 0);
      if ( v35 < 0 )
        goto LABEL_38;
      if ( !*((_QWORD *)this + 45) && !*((_BYTE *)this + 434) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5236;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"m_pPresentDmaBuffer || IsParavirtualized()",
          5236LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGPRESENTMUTEX::DXGPRESENTMUTEX(
        (DXGPRESENTMUTEX *)v364,
        *(struct ADAPTER_RENDER *const *)(*((_QWORD *)this + 2) + 16LL));
      v68 = 0;
      if ( (v9->Flags.Value & 0x10000) != 0 )
      {
        if ( v9->hDestination )
        {
          v69 = *((_QWORD *)v347 + 6);
          v70 = *(_DWORD *)(v69 + 4);
          *(_DWORD *)(v69 + 4) = v70 | 0x400;
          v68 = (v70 & 0x400) == 0;
        }
      }
      else
      {
        COREDEVICEACCESS::Release(v67);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v356);
        DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v364);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v356);
        v275 = COREDEVICEACCESS::AcquireShared(v67, 0LL);
        v35 = v275;
        if ( v275 < 0 )
        {
          WdLogSingleEntry2(4LL, v275, this);
          WdLogGlobalForLineNumber = 5257;
          COREDEVICEACCESS::AcquireSharedUncheck(v67, 0LL);
          DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v364);
          goto LABEL_41;
        }
      }
      v71 = (*((__int64 (**)(void))v361 + 1))();
      v355[0] = v71;
      CurrentThreadId = PsGetCurrentThreadId();
      if ( !*((_BYTE *)this + 434) )
        VIDSCH_EXPORT::VidSchGetMonitorPowerState(
          *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
          *(struct _VIDSCH_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 744LL));
      v73 = *((_QWORD *)this + 19);
      if ( *(_DWORD *)(v73 + 8) != v71
        || *(HANDLE *)(v73 + 56) != CurrentThreadId
        || *(HWND *)(v73 + 48) != v9->hWindow
        || *(_DWORD *)(v73 + 64)
        || v68
        || (v111 = *(_DWORD *)(v73 + 4), (v111 & 0x108) != 0) )
      {
        DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v364);
        v74 = v356;
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v356);
        v75 = v349;
        COREDEVICEACCESS::Release(v349);
        v35 = CWin32kLocks::Lock(v358, v9->hWindow, HIWORD(v9->Flags.Value) & 1, 1, 0);
        if ( (v9->Flags.Value & 0x10000) == 0
          || (v373 = 0LL,
              (*((void (__fastcall **)(_QWORD, __int64 *))v361 + 31))(*(_QWORD *)v358, &v373),
              *(_QWORD *)(*((_QWORD *)this + 19) + 440LL) = v373,
              (v9->Flags.Value & 0x10000) == 0) )
        {
          DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v364);
        }
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v74);
        v76 = COREDEVICEACCESS::AcquireShared(v75, 0LL);
        if ( v76 < 0 )
          goto LABEL_595;
        if ( v35 < 0 )
        {
LABEL_104:
          v80 = *((_QWORD *)this + 19);
          v354 = 0;
          v81 = *(_DWORD *)(v80 + 4);
          if ( (v81 & 0x10) == 0 )
          {
            if ( v35 < 0 || (v81 & 2) != 0 )
            {
LABEL_153:
              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v364);
              if ( v354 )
              {
                CWin32kLocks::Unlock(v358);
                COREDEVICEACCESS::Release(v349);
                DXGDEVICE::FlushScheduler(*((_QWORD *)this + 2), 7LL, 4294967293LL, 0LL);
                v35 = COREDEVICEACCESS::AcquireShared(v349, 0LL);
              }
LABEL_155:
              v56 = v350;
              if ( *((_QWORD *)this + 45) )
              {
                if ( v35 >= 0 )
                {
                  v112 = *(_DWORD *)(*((_QWORD *)this + 19) + 4LL);
                  if ( (v112 & 0x10) != 0 && ((*(_BYTE *)&v9->Flags.0 | (unsigned __int8)v112) & 2) == 0 )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 6115;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      0xFFFFFFFFLL,
                      L"!NT_SUCCESS(ntStatus) || !m_pPresent->BltViaGDI() || m_pPresent->IsBltEmpty() || pPresent->Flags.ColorFill",
                      6115LL,
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
                if ( (unsigned int)(v35 + 1071775738) > 1 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 6123;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"ntStatus == STATUS_GRAPHICS_PRESENT_OCCLUDED || ntStatus == STATUS_GRAPHICS_PRESENT_DENIED",
                    6123LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                v35 = 0;
              }
              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v364);
              if ( v35 < 0 )
                goto LABEL_38;
              goto LABEL_158;
            }
            if ( (*((unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))v361 + 30))(0LL, 0LL, 0LL) )
            {
              if ( (v9->Flags.Value & 0x12100) != 0x10000 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 5869;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  0xFFFFFFFFLL,
                  L"((pPresent->Flags.RedirectedBlt) && (!pPresent->Flags.RestrictVidPnSource) && (!pPresent->Flags.Rotate))",
                  5869LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            else if ( !*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) && (v9->Flags.Value & 0x4000000) == 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5874;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"GetDisplayAdapter() != NULL || pPresent->Flags.CrossAdapter",
                5874LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( (v9->Flags.Value & 0x10000) == 0 )
              goto LABEL_118;
            v83 = *(_QWORD *)v358;
            Current = DXGPROCESS::GetCurrent(v82);
            v85 = DXGPROCESS::GetWin32kInterface(Current);
            v86 = v85;
            if ( !v83
              || !v85
              || *(_DWORD *)(*((_QWORD *)this + 19) + 440LL) != v9->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags )
            {
              goto LABEL_118;
            }
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v356);
            v87 = v349;
            COREDEVICEACCESS::Release(v349);
            memset(v386, 0, 0x228uLL);
            LODWORD(v386[0]) = DXGPRESENT::GetDdiSubRectCnt(*((DXGPRESENT **)this + 19), 0);
            v386[1] = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), 0);
            v88 = 1;
            v386[3] = *((unsigned int *)this + 6);
            LODWORD(v386[2]) = 1;
            for ( i = 0LL; (unsigned int)i < v9->BroadcastContextCount; ++LODWORD(v386[2]) )
            {
              v310 = (unsigned int)i;
              i = (unsigned int)(i + 1);
              v386[v88 + 3] = v9->BroadcastContext[v310];
              v88 = LODWORD(v386[2]) + 1;
            }
            if ( !*((_BYTE *)this + 434)
              && (unsigned int)VIDSCH_EXPORT::VidSchGetNumUnorderedWaitsInDevice(
                                 *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
                                 *(struct _VIDSCH_DEVICE **)(*((_QWORD *)this + 2) + 800LL)) )
            {
              v354 = 1;
              LOBYTE(v386[68]) = 1;
            }
            (*((void (__fastcall **)(__int64, _QWORD *, __int64))v86 + 32))(v83, v386, i);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v356);
            v90 = COREDEVICEACCESS::AcquireShared(v87, 0LL);
            v76 = v90;
            if ( v90 >= 0 )
            {
LABEL_118:
              v91 = 0;
              for ( j = 0; ; ++j )
              {
                v93 = (v9->Flags.Value & 0x10000) != 0 ? 1 : *(_DWORD *)(*((_QWORD *)this + 2) + 1888LL);
                if ( j >= v93 )
                  break;
                v387.SubRectCnt = DXGPRESENT::GetDdiSubRectCnt(*((DXGPRESENT **)this + 19), j);
                if ( v387.SubRectCnt )
                {
                  if ( (v9->Flags.Value & 0x10000) != 0 )
                  {
                    v94 = hDestination;
                  }
                  else
                  {
                    v311 = *((_BYTE *)this + 432) || *((_BYTE *)this + 433);
                    v94 = DXGDEVICE::OpenCddPrimaryHandle(*((DXGDEVICE **)this + 2), j, v311, *((_DWORD *)this + 97));
                    hDestination = v94;
                  }
                  if ( v94 )
                  {
                    v387.pDstSubRects = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), j);
                    if ( (v9->Flags.Value & 0x2000) != 0 )
                    {
                      CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(
                                             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 3120LL),
                                             j,
                                             1);
                      v313 = 0;
                      if ( CurrentOrientation != 1 )
                        v313 = 128;
                      v387.Flags.Value = v313 | v387.Flags.Value & 0xFFFFFF7F;
                    }
                    v392 = 0LL;
                    if ( (v9->Flags.Value & 0x10000) != 0 )
                      v95 = &v392;
                    else
                      v95 = (struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL)
                                                                     + 3120LL)
                                                         + 128LL)
                                             + 628LL
                                             + 3984LL * j);
                    v96 = (RECT *)*((_QWORD *)this + 19);
                    v387.SrcRect = v96[9];
                    DXGPRESENT::GetDdiDstRect((DXGPRESENT *)v96, &v387.DstRect, v95);
                    if ( bTracingEnabled && *((_QWORD *)this + 45) )
                    {
                      v97 = VIDMM_EXPORT::VidMmETWAllocationHandle(
                              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                              *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
                              hDestination);
                      v98 = (struct _D3DKMT_PRESENT *)VIDMM_EXPORT::VidMmETWAllocationHandle(
                                                        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 760LL),
                                                        *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 16LL)
                                                                                + 768LL),
                                                        hSource);
                      pDstSubRects = v387.pDstSubRects;
                      v100 = v387.SubRectCnt;
                      v368 = v98;
                      v361 = (const struct _DXGKWIN32KENG_INTERFACE *)*((_QWORD *)this + 45);
                      hWindow = v9->hWindow;
                      *(_QWORD *)v359 = v387.pDstSubRects;
                      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                      {
                        LODWORD(v345) = v387.SubRectCnt;
                        LODWORD(v344) = v387.DstRect.bottom;
                        LODWORD(v343) = v387.DstRect.top;
                        LODWORD(v342) = v387.DstRect.right;
                        LODWORD(v341) = v387.DstRect.left;
                        LODWORD(v340) = v387.SrcRect.bottom;
                        LODWORD(v338) = v387.SrcRect.top;
                        v336[0] = (enum _D3DDDIFORMAT)v387.SrcRect.right;
                        LODWORD(v335) = v387.SrcRect.left;
                        v91 = 0;
                        LODWORD(v334) = v387.Flags.0;
                        LODWORD(v332) = 0;
                        LODWORD(v329) = 1;
                        *(_QWORD *)v327 = v97;
                        v101 = v361;
                        McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
                          (__int64)&DxgkControlGuid_Context,
                          (__int64)&EventBlit,
                          0LL,
                          hWindow,
                          v361,
                          0LL,
                          v368,
                          *(_QWORD *)v327,
                          v329,
                          v332,
                          v334,
                          v335,
                          *(_QWORD *)v336,
                          v338,
                          v340,
                          v341,
                          v342,
                          v343,
                          v344,
                          v345);
                        pDstSubRects = *(const RECT **)v359;
                      }
                      else
                      {
                        v101 = v361;
                      }
                      if ( v100 )
                      {
                        while ( 1 )
                        {
                          v102 = 0;
                          if ( v100 - v91 > 0x10 )
                            break;
                          v103 = v100 - v91;
                          if ( v100 != v91 )
                            goto LABEL_136;
LABEL_138:
                          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                          {
                            LODWORD(v324) = v103;
                            LODWORD(v320) = v100 - v91 <= 0x10;
                            McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
                              (__int64)&DxgkControlGuid_Context,
                              (__int64)&EventBlitRect,
                              0LL,
                              v101,
                              v320,
                              v324,
                              v404,
                              v403,
                              v402,
                              v405);
                          }
                          pDstSubRects = *(const RECT **)v359;
                          v91 += 16;
                          if ( v91 >= v100 )
                          {
                            v8 = v362;
                            goto LABEL_142;
                          }
                        }
                        v103 = 16;
LABEL_136:
                        v104 = 0LL;
                        do
                        {
                          v105 = v102 + v91;
                          ++v102;
                          v105 *= 2LL;
                          v104 += 4LL;
                          *(_DWORD *)&v403[v104 + 60] = *(&pDstSubRects->left + 2 * v105);
                          *(_DWORD *)&v402[v104 + 60] = *(&pDstSubRects->right + 2 * v105);
                          *(_DWORD *)&v401[v104 + 60] = *(&pDstSubRects->top + 2 * v105);
                          *(_DWORD *)&v404[v104 + 60] = *(&pDstSubRects->bottom + 2 * v105);
                        }
                        while ( v102 < v103 );
                        goto LABEL_138;
                      }
LABEL_142:
                      v350 = 1;
                      v91 = 0;
                    }
                    if ( *((_BYTE *)this + 434) )
                    {
                      v314 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                      v315 = *(_QWORD *)(v314 + 16);
                      v316 = *((_DWORD *)v347 + 5);
                      v355[0] = *((_DWORD *)v346 + 5);
                      v317 = (struct DXGHWQUEUE **)v9[1].hWindow;
                      if ( v317 )
                        v318 = *v317;
                      else
                        v318 = 0LL;
                      v319 = DXGPROCESS::GetCurrent(v314);
                      v107 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                               (DXG_GUEST_VIRTUALGPU_VMBUS *)(v315 + 4664),
                               v319,
                               this,
                               v318,
                               v355[0],
                               v316,
                               &v387.SrcRect,
                               &v387.DstRect,
                               v387.SubRectCnt,
                               (struct tagRECT *)v387.pDstSubRects,
                               v387.PrivateDriverDataSize,
                               (unsigned __int8 *)v387.pPrivateDriverData);
                      v106 = v349;
                      v91 = 0;
                    }
                    else
                    {
                      v106 = v349;
                      v339 = v349;
                      v337 = Color;
                      *((_DWORD *)v8 + 29) = j;
                      v107 = DXGCONTEXT::SubmitPresent(
                               this,
                               v9,
                               (struct DXGHWQUEUE **)v9[1].hWindow,
                               v9->BroadcastContextCount,
                               v365,
                               v346,
                               hSource,
                               hDestination,
                               &v387,
                               0LL,
                               *((struct VIDMM_DMA_BUFFER **)this + 45),
                               v8,
                               v337,
                               v339);
                    }
                    *((_QWORD *)this + 45) = 0LL;
                    v35 = v107;
                    if ( (v9->Flags.Value & 0x10000) != 0
                      && *(_DWORD *)(*((_QWORD *)this + 19) + 440LL) == v9->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags )
                    {
                      v9->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
                      v9->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)this + 19) + 440LL);
                      if ( v387.SubRectCnt > 0x10 )
                      {
                        v9->PresentHistoryToken.Token.Flip.VidPnSourceId = 1;
                        *(RECT *)((char *)&v9->PresentHistoryToken.Token.SurfaceComplete + 28) = v387.DstRect;
                      }
                      else
                      {
                        v9->PresentHistoryToken.Token.Flip.VidPnSourceId = v387.SubRectCnt;
                        for ( k = 0;
                              k < v387.SubRectCnt;
                              *(RECT *)((char *)&v9->PresentHistoryToken.Token.SurfaceComplete + 16 * v109 + 28) = v387.pDstSubRects[v109] )
                        {
                          v109 = k++;
                        }
                      }
                      v9->PresentHistoryToken.TokenSize = 16 * (v9->PresentHistoryToken.Token.Flip.VidPnSourceId + 3);
                      DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v364);
                      v35 = SubmitPresentHistoryToken(
                              &v9->PresentHistoryToken,
                              v106,
                              v356,
                              v358,
                              0,
                              0LL,
                              (struct DXGK_PRESENT_PARAMS *)v9,
                              0LL,
                              this,
                              0LL,
                              0LL);
                      v91 = 0;
                    }
                    if ( v35 < 0 )
                      break;
                  }
                }
              }
              goto LABEL_153;
            }
            WdLogSingleEntry2(4LL, v90, this);
            v125 = v87;
            WdLogGlobalForLineNumber = 5924;
LABEL_231:
            COREDEVICEACCESS::AcquireSharedUncheck(v125, 0LL);
            v126 = (DXGPRESENTMUTEX *)v364;
            goto LABEL_232;
          }
          DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v364);
          if ( v35 < 0 || (*(_DWORD *)(*((_QWORD *)this + 19) + 4LL) & 2) != 0 )
            goto LABEL_222;
          if ( v9->BroadcastContextCount )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 5518;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Present via GDI cannot be broadcasted",
              5518LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v35 = -1071774910;
            goto LABEL_222;
          }
          if ( (v9->Flags.Value & 0x10000) != 0 && v9->hDestination )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 5524;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"!pPresent->Flags.RedirectedBlt || pPresent->hDestination == NULL",
              5524LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v391 = 0LL;
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)"h", 0LL, 0);
          v113 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v9->Flags.Value;
          if ( (*(_WORD *)&v113 & 0x100) != 0 )
          {
            v131 = *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 3120LL) + 128LL)
                             + 3984LL * v9->VidPnSourceId
                             + 628);
            *(_QWORD *)v359 = &v391;
            v391 = v131;
          }
          else
          {
            *(_QWORD *)v359 = 0LL;
          }
          if ( (*(_BYTE *)&v113 & 1) != 0 )
          {
            if ( *(_BYTE *)&v113 >= 0 )
            {
              v387.SrcRect.bottom = Height;
              right = v353;
              *(_QWORD *)&v387.SrcRect.left = 0LL;
            }
            else
            {
              top = v9->SrcRect.top;
              if ( top < 0 )
                top = 0;
              v387.SrcRect.top = top;
              left = v9->SrcRect.left;
              if ( left < 0 )
                left = 0;
              v387.SrcRect.left = left;
              bottom = v9->SrcRect.bottom;
              if ( (int)Height < bottom )
                bottom = Height;
              v387.SrcRect.bottom = bottom;
              right = v9->SrcRect.right;
              if ( (int)v353 < right )
                right = v353;
            }
            v387.SrcRect.right = right;
            v387.DstRect = v387.SrcRect;
            v387.Flags.Value = v387.Flags.Value & 0xFFFFF7FF | (v9->Flags.Value >> 9) & 0x800;
            if ( !v9->SubRectCnt )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5571;
              DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pPresent->SubRectCnt", 5571LL, 0LL, 0LL, 0LL, 0LL);
            }
            if ( !v9->pSrcSubRects )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5572;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"pPresent->pSrcSubRects",
                5572LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v35 = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 19), v9->SubRectCnt);
            if ( v35 < 0 )
              goto LABEL_222;
            DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), 0);
            v119 = 0LL;
            v120 = 0;
            v387.SubRectCnt = 0;
            v387.pDstSubRects = DdiSubRectList;
            if ( !v9->SubRectCnt )
              goto LABEL_222;
            while ( 1 )
            {
              if ( DXGPRESENT::IntersectRect(&DdiSubRectList[v119], &v9->pSrcSubRects[v120], &v387.SrcRect) )
                v119 = ++v387.SubRectCnt;
              else
                v119 = v387.SubRectCnt;
              if ( ++v120 >= v9->SubRectCnt )
                break;
              DdiSubRectList = (struct tagRECT *)v387.pDstSubRects;
            }
            if ( !(_DWORD)v119 )
              goto LABEL_222;
            if ( DXGPRESENT::PrepareStagingBuffer(
                   *((DXGPRESENT **)this + 19),
                   *((struct DXGDEVICE **)this + 2),
                   v9->hSource,
                   v75,
                   &hDestination) < 0 )
              goto LABEL_221;
            if ( !*((_BYTE *)this + 434) )
            {
              v177 = hDestination;
              if ( !hDestination )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 5619;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  0xFFFFFFFFLL,
                  L"hDestinationAllocation",
                  5619LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v177 = hDestination;
              }
              if ( bTracingEnabled )
              {
                v202 = VIDMM_EXPORT::VidMmETWAllocationHandle(
                         *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                         *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
                         v177);
                v203 = VIDMM_EXPORT::VidMmETWAllocationHandle(
                         *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                         *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
                         hSource);
                v204 = v387.pDstSubRects;
                v205 = v387.SubRectCnt;
                v375 = v203;
                *(_QWORD *)v355 = *((_QWORD *)this + 45);
                hWindow = v9->hWindow;
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                {
                  LODWORD(v329) = 1;
                  McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
                    (__int64)&DxgkControlGuid_Context,
                    (__int64)&EventBlit,
                    0LL,
                    hWindow,
                    *(_QWORD *)v355,
                    0LL,
                    v375,
                    v202,
                    v329,
                    0,
                    v387.Flags.Value,
                    v387.SrcRect.left,
                    v387.SrcRect.right,
                    v387.SrcRect.top,
                    v387.SrcRect.bottom,
                    v387.DstRect.left,
                    v387.DstRect.right,
                    v387.DstRect.top,
                    v387.DstRect.bottom,
                    v387.SubRectCnt);
                }
                v176 = 0;
                if ( v205 )
                {
                  v206 = *(_QWORD *)v355;
                  while ( 1 )
                  {
                    v207 = 0;
                    if ( v205 - v176 > 0x10 )
                      break;
                    v208 = v205 - v176;
                    if ( v205 != v176 )
                      goto LABEL_407;
LABEL_361:
                    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    {
                      LODWORD(v324) = v208;
                      LODWORD(v321) = v205 - v176 <= 0x10;
                      McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
                        (__int64)&DxgkControlGuid_Context,
                        (__int64)&EventBlitRect,
                        0LL,
                        v206,
                        v321,
                        v324,
                        v400,
                        v399,
                        v398,
                        v397);
                    }
                    v176 += 16;
                    if ( v176 >= v205 )
                    {
                      v9 = v368;
                      v8 = v362;
                      goto LABEL_365;
                    }
                  }
                  v208 = 16;
LABEL_407:
                  v209 = 0LL;
                  do
                  {
                    v210 = v207 + v176;
                    ++v207;
                    v210 *= 2LL;
                    v209 += 4LL;
                    *(_DWORD *)&v399[v209 + 60] = *(&v204->left + 2 * v210);
                    *(_DWORD *)&v398[v209 + 60] = *(&v204->right + 2 * v210);
                    *(_DWORD *)&v397[v209 + 60] = *(&v204->top + 2 * v210);
                    *(_DWORD *)&v396[v209 + 60] = *(&v204->bottom + 2 * v210);
                  }
                  while ( v207 < v208 );
                  goto LABEL_361;
                }
LABEL_365:
                v177 = hDestination;
                v75 = v349;
                v350 = 1;
              }
              v178 = DXGCONTEXT::SubmitPresent(
                       this,
                       v9,
                       (struct DXGHWQUEUE **)v9[1].hWindow,
                       v9->BroadcastContextCount,
                       v365,
                       v346,
                       hSource,
                       v177,
                       &v387,
                       0LL,
                       *((struct VIDMM_DMA_BUFFER **)this + 45),
                       v8,
                       Color,
                       v75);
              *((_QWORD *)this + 45) = 0LL;
LABEL_367:
              if ( v178 < 0 )
              {
LABEL_221:
                WdLogSingleEntry2(3LL, -1071775738LL, this);
                WdLogGlobalForLineNumber = 5801;
                v35 = -1071775738;
                goto LABEL_222;
              }
              v179 = (DXGDEVICE *)*((_QWORD *)this + 2);
              v180 = 0;
              if ( (v9->Flags.Value & 0x100) != 0
                && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                     *(ADAPTER_DISPLAY **)(*((_QWORD *)v179 + 235) + 3120LL),
                     *((const struct DXGDEVICE **)this + 2),
                     v9->VidPnSourceId) )
              {
                v180 = 1;
              }
              else if ( !DXGDEVICE::AllowLegacyPresent(v179, 0) )
              {
                v181 = v356;
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v356);
                v182 = v349;
                COREDEVICEACCESS::Release(v349);
                if ( DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
                {
                  COREDEVICEACCESS::AcquireSharedUncheck(v182, 0LL);
                  v35 = -1071775738;
                  goto LABEL_222;
                }
                goto LABEL_371;
              }
              v181 = v356;
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v356);
              v182 = v349;
              COREDEVICEACCESS::Release(v349);
LABEL_371:
              CWin32kLocks::Unlock(v358);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v181);
              v76 = COREDEVICEACCESS::AcquireShared(v182, 0LL);
              if ( v76 < 0 )
                goto LABEL_580;
              memset(&v382, 0, sizeof(v382));
              if ( *((_BYTE *)this + 434) )
              {
                memset(&v381, 0, sizeof(v381));
                v381.hAllocation = hDestination;
                v195 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
                v196 = *(_QWORD *)(*((_QWORD *)v195 + 2) + 16LL);
                v197 = DXGPROCESS::GetCurrent(v183);
                v198 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                         (DXG_GUEST_VIRTUALGPU_VMBUS *)(v196 + 4664),
                         v197,
                         v195,
                         &v381,
                         0,
                         0,
                         0);
                v182 = v349;
                v35 = v198;
                v382.pData = v381.pData;
              }
              else
              {
                v184 = hDestination;
                if ( !hDestination )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 5697;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"hDestinationAllocation",
                    5697LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v184 = hDestination;
                }
                v382.hAllocation = v184;
                v35 = DXGDEVICE::Lock(*((DXGDEVICE **)this + 2), &v382, v182, 0);
              }
              if ( v35 < 0 )
                goto LABEL_222;
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v181);
              COREDEVICEACCESS::Release(v182);
              if ( !v382.pData )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 5710;
                DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"LockData.pData", 5710LL, 0LL, 0LL, 0LL, 0LL);
              }
              if ( (v9->Flags.Value & 0x10000) != 0 && v9->hDestination )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 5711;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  0xFFFFFFFFLL,
                  L"!pPresent->Flags.RedirectedBlt || pPresent->hDestination == NULL",
                  5711LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              v185 = v361;
              if ( (*((unsigned int (__fastcall **)(_QWORD))v361 + 40))(0LL) )
                v186 = v180;
              else
                v186 = 0;
              v187 = v358;
              v35 = CWin32kLocks::Lock(v358, v9->hWindow, 0, 0, v186);
              if ( v35 >= 0 )
              {
                v190 = (unsigned int (__fastcall *)(struct _D3DKMT_PRESENT *, HDC, _QWORD, const RECT *, void *, int, unsigned int, unsigned int, int, int, UINT, void (__fastcall *)(const struct tagRECT *, const struct tagRECT *, struct tagRECT *, const struct tagRECT *, unsigned int, unsigned int), __int64 (__fastcall *)(struct tagRECT *, struct tagRECT *, const struct tagRECT *, const struct tagRECT *)))*((_QWORD *)v185 + 18);
                v191 = *(_DWORD *)(*((_QWORD *)this + 19) + 424LL);
                v192 = v9->Color;
                v193 = (v9->Flags.Value & 0x200) != 0;
                v194 = CWin32kLocks::hDestDc(v358);
                LOBYTE(v333) = v193;
                LOBYTE(v331) = 0;
                if ( !v190(
                        v9,
                        v194,
                        *(_QWORD *)v359,
                        v387.pDstSubRects,
                        v382.pData,
                        v191,
                        v353,
                        Height,
                        v331,
                        v333,
                        v192,
                        DXGPRESENT::XformRect,
                        DXGPRESENT::ClipRects) )
                {
                  WdLogSingleEntry2(4LL, -1071775737LL, this);
                  WdLogGlobalForLineNumber = 5722;
                  v35 = -1071775737;
                }
                v187 = v358;
                v182 = v349;
              }
              v188 = v356;
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v356);
              v76 = COREDEVICEACCESS::AcquireShared(v182, 0LL);
              if ( v76 < 0 )
              {
LABEL_580:
                v125 = v182;
                goto LABEL_231;
              }
              if ( *((_BYTE *)this + 434) )
              {
                v374.hDevice = 0;
                v374.hAllocation = hDestination;
                v199 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
                v200 = *(_QWORD *)(*((_QWORD *)v199 + 2) + 16LL);
                v201 = DXGPROCESS::GetCurrent(v189);
                DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
                  (DXG_GUEST_VIRTUALGPU_VMBUS *)(v200 + 4664),
                  v201,
                  v199,
                  &v374,
                  0);
                v182 = v349;
              }
              else
              {
                v376.hDevice = 0;
                v376.NumAllocations = 1;
                v376.phAllocations = &v382.hAllocation;
                DXGDEVICE::Unlock(*((DXGDEVICE **)this + 2), &v376, 0);
              }
              if ( v35 >= 0 && (v9->Flags.Value & 0x10000) != 0 )
              {
                v9->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
                v9->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)this + 19) + 440LL);
                v9->PresentHistoryToken.Token.Flip.VidPnSourceId = 0;
                v9->PresentHistoryToken.TokenSize = 48;
                DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v364);
                v35 = SubmitPresentHistoryToken(
                        &v9->PresentHistoryToken,
                        v182,
                        v188,
                        v187,
                        0,
                        0LL,
                        (struct DXGK_PRESENT_PARAMS *)v9,
                        0LL,
                        this,
                        0LL,
                        0LL);
                DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v364);
                goto LABEL_155;
              }
LABEL_222:
              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v364);
              goto LABEL_155;
            }
            v280 = DXGPROCESS::GetCurrent(v121);
            v281 = hDestination;
            v282 = v280;
            DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v280 + 248));
            v283 = (v281 >> 6) & 0xFFFFFF;
            if ( v283 < *((_DWORD *)v282 + 74) )
            {
              v284 = *((_QWORD *)v282 + 35);
              v285 = *(_DWORD *)(v284 + 16LL * v283 + 8);
              if ( ((v281 >> 25) & 0x60) == (v285 & 0x60) && (v285 & 0x2000) == 0 && (v285 & 0x1F) != 0 )
              {
                if ( (*(_BYTE *)(v284 + 16LL * ((v281 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 5 )
                {
                  v286 = *(struct _EX_RUNDOWN_REF **)(v284 + 16LL * ((v281 >> 6) & 0xFFFFFF));
                  goto LABEL_569;
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
            v286 = 0LL;
LABEL_569:
            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v366, v286);
            _InterlockedDecrement((volatile signed __int32 *)v282 + 66);
            ExReleasePushLockSharedEx((char *)v282 + 248, 0LL);
            KeLeaveCriticalRegion();
            v287 = v366;
            if ( !v366 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5604;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"AllocRef.m_pAllocation != NULL",
                5604LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v287 = v366;
            }
            Ptr_high = HIDWORD(v287[2].Ptr);
            v289 = *((_QWORD *)this + 2);
            pPrivateDriverData = (unsigned __int8 *)v9->pPrivateDriverData;
            PrivateDriverDataSize = v9->PrivateDriverDataSize;
            v292 = *(_QWORD *)(v289 + 16);
            v355[0] = *((_DWORD *)v346 + 5);
            v293 = (struct DXGHWQUEUE **)v9[1].hWindow;
            v294 = *(_QWORD *)(v292 + 16);
            if ( v293 )
              v295 = *v293;
            else
              v295 = 0LL;
            v296 = DXGPROCESS::GetCurrent(v289);
            v178 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(v294 + 4664),
                     v296,
                     this,
                     v295,
                     v355[0],
                     Ptr_high,
                     &v387.SrcRect,
                     &v387.DstRect,
                     v387.SubRectCnt,
                     (struct tagRECT *)v387.pDstSubRects,
                     PrivateDriverDataSize,
                     pPrivateDriverData);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v366);
            goto LABEL_367;
          }
          if ( (*(_BYTE *)&v113 & 2) == 0 )
            goto LABEL_222;
          v297 = (DXGDEVICE *)*((_QWORD *)this + 2);
          v298 = 0;
          if ( (*(_WORD *)&v113 & 0x100) != 0
            && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                 *(ADAPTER_DISPLAY **)(*((_QWORD *)v297 + 235) + 3120LL),
                 *((const struct DXGDEVICE **)this + 2),
                 v9->VidPnSourceId) )
          {
            v298 = 1;
          }
          else if ( !DXGDEVICE::AllowLegacyPresent(v297, 0) )
          {
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v356);
            COREDEVICEACCESS::Release(v75);
            if ( DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
            {
              v35 = -1071775738;
LABEL_593:
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v356);
              v309 = COREDEVICEACCESS::AcquireShared(v75, 0LL);
              v76 = v309;
              if ( v309 >= 0 )
                goto LABEL_222;
              WdLogSingleEntry2(4LL, v309, this);
              WdLogGlobalForLineNumber = 5850;
LABEL_595:
              v125 = v75;
              goto LABEL_231;
            }
LABEL_586:
            if ( (v9->Flags.Value & 0x10000) != 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5831;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"!pPresent->Flags.RedirectedBlt",
                5831LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v299 = v358;
            CWin32kLocks::Unlock(v358);
            v300 = v361;
            v301 = (*((unsigned int (__fastcall **)(_QWORD))v361 + 40))(0LL) == 0;
            v302 = v298;
            if ( v301 )
              v302 = 0;
            v303 = CWin32kLocks::Lock(v299, v9->hWindow, 0, 0, v302);
            v304 = (unsigned int (__fastcall *)(HDC, _QWORD, const RECT *, _QWORD, UINT))*((_QWORD *)v300 + 19);
            v35 = v303;
            v305 = v9->Color;
            v306 = v9->SubRectCnt;
            v307 = v9->pSrcSubRects;
            v308 = CWin32kLocks::hDestDc(v358);
            if ( !v304(v308, *(_QWORD *)v359, v307, v306, v305) )
            {
              WdLogSingleEntry2(4LL, -1071775737LL, this);
              WdLogGlobalForLineNumber = 5841;
              v35 = -1071775737;
            }
            v75 = v349;
            goto LABEL_593;
          }
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v356);
          COREDEVICEACCESS::Release(v75);
          goto LABEL_586;
        }
        if ( (v9->Flags.Value & 0x10000) != 0 && v9->hDestination && !*(_QWORD *)(*((_QWORD *)this + 19) + 440LL) )
        {
          WdLogSingleEntry2(4LL, 0LL, this);
          WdLogGlobalForLineNumber = 5380;
          v130 = (struct VIDMM_DMA_BUFFER *)*((_QWORD *)this + 45);
          if ( v130 )
          {
            VIDMM_EXPORT::VidMmReleaseDmaBuffer(
              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
              v130);
            *((_QWORD *)this + 45) = 0LL;
          }
          DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v364);
          goto LABEL_255;
        }
        v77 = *(HDC *)v358;
        v78 = (HDEV)*((_QWORD *)v358 + 2);
        v35 = DXGPRESENT::CheckVisRgn(
                *((DXGPRESENT **)this + 19),
                v9,
                *(HDC *)v358,
                v78,
                *((const struct DXGDEVICE **)this + 2),
                v353,
                Height,
                Color,
                1);
        if ( v35 == 261 )
        {
          DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v364);
          COREDEVICEACCESS::Release(v349);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v356);
          if ( DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
            v35 = -1071775738;
          if ( (v9->Flags.Value & 0x10000) == 0 )
            DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v364);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v356);
          v127 = COREDEVICEACCESS::AcquireShared(v349, 0LL);
          v359[0] = v127;
          if ( v127 < 0 )
          {
            WdLogSingleEntry1(4LL, v127);
            WdLogGlobalForLineNumber = 5423;
            COREDEVICEACCESS::AcquireSharedUncheck(v349, 0LL);
            DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v364);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v348);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v347);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v346);
            return v359[0];
          }
          if ( v35 != -1071775738 )
            v35 = DXGPRESENT::CheckVisRgn(
                    *((DXGPRESENT **)this + 19),
                    v9,
                    v77,
                    v78,
                    *((const struct DXGDEVICE **)this + 2),
                    v353,
                    Height,
                    Color,
                    0);
        }
        v79 = *((_QWORD *)this + 19);
        if ( v35 < 0 )
        {
          if ( (*(_BYTE *)(v79 + 4) & 1) != 0 )
          {
            *(_QWORD *)(v79 + 56) = CurrentThreadId;
            *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = v355[0];
          }
          goto LABEL_103;
        }
        *(_QWORD *)(v79 + 56) = CurrentThreadId;
        if ( (v9->Flags.Value & 0x10000) != 0 )
        {
LABEL_103:
          v75 = v349;
          goto LABEL_104;
        }
        v277 = v355[0];
        *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = v355[0];
        DXGDEVICE::FlushScheduler(*((_QWORD *)this + 2), 2LL, 4294967293LL, 0LL);
        v278 = 0;
        v279 = *(_DWORD *)(*((_QWORD *)this + 19) + 8LL);
        if ( v279 != (*((unsigned int (**)(void))v361 + 1))() )
        {
          *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = v277;
          ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL), 3, 0xFFFFFFFFLL, 0);
          v278 = 1;
        }
        v276 = v278;
      }
      else
      {
        if ( (v111 & 1) != 0 )
        {
          v35 = -1071775738;
          goto LABEL_103;
        }
        if ( (v9->Flags.Value & 0x10000) != 0 || (v111 & 0x10) != 0 )
          goto LABEL_103;
        v276 = 0;
      }
      DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, (struct DXGPRESENTMUTEX *)v364, v276);
      goto LABEL_103;
    }
    if ( v30 )
      goto LABEL_53;
    if ( (Value & 0x10A7C3) != 0 )
    {
      v35 = -1073741811;
      WdLogSingleEntry3(3LL, this, v9->Flags.Value, -1073741811LL);
      WdLogGlobalForLineNumber = 4432;
      goto LABEL_41;
    }
    if ( (Value & 0x10000000) != 0 )
    {
      Count = v25[5].Count;
      if ( !Count || !*(_QWORD *)(Count + 56) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4442;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Expecting indirect display presents to be a shared surface",
          4442LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_329;
      }
      v165 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1880LL);
      if ( !v165
        || !DXGADAPTER::IsDisplayAdapter(v165)
        || (v166 = *((_QWORD *)this + 2),
            v160 = v9->VidPnSourceId,
            v355[0] = v160,
            v160 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v166 + 1880) + 3120LL) + 96LL)) )
      {
        WdLogSingleEntry1(2LL, v9->VidPnSourceId);
        WdLogGlobalForLineNumber = 4467;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"An invalid VidPn source ID was supplied to an indirect present (%I64d)",
          v9->VidPnSourceId,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_329;
      }
      v25 = (struct _EX_RUNDOWN_REF *)v346;
    }
    else
    {
      v158 = v25[6].Count;
      v159 = *(_DWORD *)(v158 + 4);
      if ( (v159 & 0x2003) == 0 )
      {
        v35 = -1073741811;
        WdLogSingleEntry5(2LL, -1073741811LL, this, v25, v158, v9->hSource);
        WdLogGlobalForLineNumber = 4452;
        v129 = L"0x%I64x 0x%I64x Source of Flip must be primary 0x%I64x 0x%I64x 0x%I64x";
        v330 = v9->hSource;
        v328 = *((_QWORD *)v346 + 6);
        v326 = (__int64)v346;
        v325 = (__int64)this;
        v322 = -1073741811LL;
        goto LABEL_250;
      }
      v160 = (v159 >> 6) & 0xF;
      v355[0] = v160;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v372, v25);
    DXGALLOCATIONREFERENCE::MoveAssign(&v348, &v372);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v372);
    v363 = v9->hSource;
    v161 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1880LL);
    if ( !v161
      || !DXGADAPTER::IsDisplayAdapter(v161)
      || !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL)
                                                                         + 3120LL)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4483;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"(GetDisplayAdapter(VidPnSourceId) == GetDisplayAdapter(0)) && (GetDisplayAdapter(VidPnSourceId) != NULL) && GetD"
         "isplayAdapter(VidPnSourceId)->IsDisplayAdapter() && GetDisplayAdapter(VidPnSourceId)->GetDisplayCore()->IsCoreR"
         "esourceSharedOwner()",
        4483LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v162 = *((_QWORD *)v346 + 6);
    v163 = *(_DWORD *)(v162 + 4);
    if ( (v163 & 0x2000) != 0 && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 408LL) & 4) == 0 )
    {
      v35 = -1073741811;
      WdLogSingleEntry5(2LL, -1073741811LL, this, v346, v162, v9->hSource);
      WdLogGlobalForLineNumber = 4491;
      v129 = L"0x%I64x 0x%I64x DirectFlip Presents are only supported from the DWM process 0x%I64x 0x%I64x 0x%I64x";
      v330 = v9->hSource;
      v328 = *((_QWORD *)v346 + 6);
      v326 = (__int64)v346;
      v325 = (__int64)this;
      v322 = -1073741811LL;
      goto LABEL_250;
    }
    if ( (v9->Flags.Value & 0x60000) != 0 )
    {
      if ( (v9->Flags.Value & 0x60000) == 0x60000 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4502;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"FlipStereoTemporaryMono and FlipStereo cannot be set together. STATUS_INVALID_PARAMETER",
          4502LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_329;
      }
      if ( (v163 & 0x1000) == 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4508;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"FlipStereoTemporaryMono and FlipStereo can only be used with stereo primary allocations. STATUS_INVALID_PARAMETER",
          4508LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_329;
      }
      v248 = *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                           *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 3120LL),
                           v160)
             + 10);
      if ( (v248 & 0x10) == 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 4515;
        goto LABEL_308;
      }
      v249 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v9->Flags.Value;
      if ( (*(_DWORD *)&v249 & 0x40000) != 0 && (v248 & 0x20) == 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 4521;
        goto LABEL_308;
      }
      if ( (*(_DWORD *)&v249 & 0xC0000) == 0xC0000 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4527;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"FlipStereoTemporaryMono cannot be used with FlipStereoPreferRight. STATUS_INVALID_PARAMETER",
          4527LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_329;
      }
    }
    if ( !DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2)) )
      goto LABEL_278;
    v132 = *(_DWORD *)a7 ^ (v9->Flags.Value ^ *(_DWORD *)a7) & 4;
    *(_DWORD *)a7 = v132;
    v133 = v132 ^ (v9->Flags.Value ^ v132) & 8;
    *(_DWORD *)a7 = v133;
    v134 = v133 ^ ((unsigned __int8)v133 ^ (unsigned __int8)(v9->Flags.Value >> 1)) & 0x10;
    *(_DWORD *)a7 = v134;
    v135 = v134 ^ (v134 ^ (4 * v9->Flags.Value)) & 0x80000;
    *(_DWORD *)a7 = v135;
    v136 = v135 ^ (v135 ^ (4 * v9->Flags.Value)) & 0x100000;
    *(_DWORD *)a7 = v136;
    v137 = v136 ^ (v136 ^ (4 * v9->Flags.Value)) & 0x200000;
    *(_DWORD *)a7 = v137;
    if ( (v9->Flags.Value & 0x8000000) != 0 )
      Duration = v9->Duration;
    else
      Duration = 0;
    *((_DWORD *)a7 + 36) = Duration;
    *((_DWORD *)a7 + 38) = 1;
    *(_DWORD *)a7 = v137 ^ (v9->Flags.Value ^ v137) & 0x20000000;
    v139 = v9->Flags.Value >> 9;
    v140 = v387.Flags.Value & 0xFFFFFFFB | v9->Flags.Value & 4;
    v141 = v140 ^ ((unsigned __int16)v140 ^ (unsigned __int16)v139) & 0x100 ^ ((unsigned __int16)v139 ^ (unsigned __int16)(v140 ^ (v140 ^ v139) & 0x100)) & 0x200;
    v387.Flags.Value = v141 ^ ((unsigned __int16)v139 ^ (unsigned __int16)v141) & 0x400;
    pPresentRegions = v9->pPresentRegions;
    if ( pPresentRegions
      && !pPresentRegions->MoveRectCount
      && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 408LL) & 4) != 0 )
    {
      v387.SubRectCnt = pPresentRegions->DirtyRectCount;
      v387.pDstSubRects = pPresentRegions->pDirtyRects;
    }
    DeviceFlipMode = VIDSCH_EXPORT::VidSchGetDeviceFlipMode(
                       *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
                       *(_QWORD *)(*((_QWORD *)this + 2) + 800LL),
                       v160,
                       (__int64)&v9->FlipInterval);
    *((_DWORD *)a7 + 30) = DeviceFlipMode;
    if ( !DeviceFlipMode )
    {
      v35 = -1073741811;
      WdLogSingleEntry3(3LL, this, v9->FlipInterval, -1073741811LL);
      WdLogGlobalForLineNumber = 4574;
      goto LABEL_41;
    }
    if ( ((DeviceFlipMode - 1) & 0xFFFFFFFD) != 0 )
    {
      v387.FlipInterval = v9->FlipInterval;
      if ( DeviceFlipMode == 2 )
        goto LABEL_274;
    }
    else
    {
      v387.FlipInterval = D3DDDI_FLIPINTERVAL_IMMEDIATE;
    }
    v387.Flags.Value |= 8u;
LABEL_274:
    *((_DWORD *)a7 + 31) = v9->FlipInterval;
    *((_DWORD *)a7 + 29) = v160;
    DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary(*((DXGDEVICE **)this + 2), v160);
    if ( DisplayedPrimary )
    {
      v154 = *((_QWORD *)DisplayedPrimary + 6);
      if ( (*(_DWORD *)(*((_QWORD *)v346 + 6) + 4LL) & 0x2000) != 0 )
      {
        if ( (*(_DWORD *)(v154 + 4) & 0x2000) == 0 )
        {
          *(_DWORD *)a7 |= 0x400000u;
          goto LABEL_276;
        }
      }
      else if ( (*(_DWORD *)(v154 + 4) & 0x2000) != 0 )
      {
        *(_DWORD *)a7 |= 0x400000u;
        goto LABEL_276;
      }
    }
    *(_DWORD *)a7 &= ~0x400000u;
LABEL_276:
    v145 = *((_DWORD *)a7 + 30);
    if ( v145 )
    {
      v146 = *((_QWORD *)this + 2);
      if ( v145 != *(_DWORD *)(v146 + 4LL * v160 + 1816) )
      {
        WdLogSingleEntry1(4LL, v146);
        v147 = v349;
        WdLogGlobalForLineNumber = 4630;
        COREDEVICEACCESS::Release(v349);
        DXGDEVICE::FlushScheduler(*((_QWORD *)this + 2), 3LL, 4294967293LL, 0LL);
        v174 = COREDEVICEACCESS::AcquireShared(v147, 0LL);
        v76 = v174;
        if ( v174 < 0 )
        {
          WdLogSingleEntry1(4LL, v174);
          WdLogGlobalForLineNumber = 4638;
          COREDEVICEACCESS::AcquireSharedUncheck(v147, 0LL);
          goto LABEL_234;
        }
        goto LABEL_279;
      }
    }
LABEL_278:
    v147 = v349;
LABEL_279:
    v76 = DXGCONTEXT::CheckDevicePresentSettings(
            (DXGDEVICE **)this,
            (v9->Flags.Value >> 2) & 1,
            (v9->Flags.Value >> 28) & 1,
            0,
            v160);
    if ( v76 < 0 )
    {
      if ( v76 == -1071774920 )
      {
LABEL_517:
        if ( (v9->Flags.Value & 4) != 0 )
        {
          IsFullWDDMDevice = DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2));
          v260 = (DXGDEVICE *)*((_QWORD *)this + 2);
          if ( IsFullWDDMDevice )
          {
            DXGDEVICE::ClearDisplayedAllMultiPlaneOverlaysUnsafe(v260, v160);
            DXGDEVICE::SetDisplayedPrimary(*((DXGDEVICE **)this + 2), v160, v346, *((_DWORD *)a7 + 34), 1u);
            *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * v160 + 1816) = *((_DWORD *)a7 + 30);
          }
          else
          {
            DXGDEVICE::SetDisplayedPrimary(v260, v160, v346, 0, 1u);
          }
        }
LABEL_255:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v348);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v347);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v346);
        return 0LL;
      }
LABEL_234:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v348);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v347);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v346);
      return (unsigned int)v76;
    }
    if ( (v9->Flags.Value & 4) != 0 )
    {
      if ( v9->pPresentRegions )
      {
        v76 = DXGCONTEXT::ValidatePresentRegions(this, v9, v353, Height);
        if ( v76 < 0 )
          goto LABEL_234;
      }
    }
    if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(
            *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 3120LL),
            v160,
            0) )
    {
      if ( !_bittest((const signed __int32 *)(*((_QWORD *)this + 2) + 4LL * v160 + 1240), 9u)
        && (v9->Flags.Value & 0x10000000) == 0 )
      {
        WdLogSingleEntry5(3LL, -1071775739LL, this, v9->hSource, v346, v160);
        WdLogGlobalForLineNumber = 4773;
        goto LABEL_308;
      }
LABEL_285:
      if ( DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2)) )
      {
        v148 = DXGCONTEXT::WaitForQueuedPresentLimit(this, v160, (v9->Flags.Value & 0x10) == 0, v147);
        v76 = v148;
        if ( v148 >= 0 )
        {
          if ( ((*((_DWORD *)a7 + 30) - 3) & 0xFFFFFFFD) == 0 )
            goto LABEL_288;
          v35 = DXGCONTEXT::AcquireDmaBuffer(this, (struct VIDMM_DMA_BUFFER **)this + 45, v147, 0);
          if ( v35 < 0 )
            goto LABEL_38;
          if ( *((_QWORD *)this + 45) )
          {
LABEL_288:
            v149 = 0;
          }
          else
          {
            WdLogSingleEntry0(1LL);
            v149 = 0;
            WdLogGlobalForLineNumber = 4806;
            DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pPresentDmaBuffer", 4806LL, 0LL, 0LL, 0LL, 0LL);
          }
          v35 = DXGCONTEXT::CheckDevicePresentSettings(
                  (DXGDEVICE **)this,
                  (v9->Flags.Value >> 2) & 1,
                  (v9->Flags.Value >> 28) & 1,
                  0,
                  v160);
          if ( v35 >= 0 )
          {
            if ( (v9->Flags.Value & 4) == 0 )
              goto LABEL_294;
            if ( !v346 )
              goto LABEL_294;
            v150 = *((_QWORD *)v346 + 6);
            if ( !v150 || (*(_DWORD *)(v150 + 4) & 0x2000) == 0 )
              goto LABEL_294;
            if ( DXGDEVICE::IsDirectFlipAllocationRequestedPinned(*((DXGDEVICE **)this + 2), v346) )
            {
              if ( (unsigned __int8)VIDMM_EXPORT::VidMmIsAllocationPinned(
                                      *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                                      *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
                                      *((struct VIDMM_MULTI_ALLOC **)v346 + 3))
                || (v261 = VIDMM_EXPORT::VidMmPinAllocation(
                             *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                             *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
                             *((struct VIDMM_MULTI_ALLOC **)v346 + 3),
                             0LL,
                             0LL,
                             0LL,
                             0LL),
                    v261 >= 0) )
              {
LABEL_294:
                if ( (v9->Flags.Value & 0x2000) != 0 )
                {
                  v262 = ADAPTER_DISPLAY::GetCurrentOrientation(
                           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 3120LL),
                           v160,
                           1);
                  v263 = 0;
                  if ( v262 != 1 )
                    v263 = 128;
                  v387.Flags.Value = v263 | v387.Flags.Value & 0xFFFFFF7F;
                }
                if ( !bTracingEnabled )
                  goto LABEL_299;
                v151 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                v152 = *(VIDMM_EXPORT **)(v151 + 760);
                v153 = *(struct VIDMM_GLOBAL **)(v151 + 768);
                if ( (v9->Flags.Value & 4) != 0 )
                {
                  VIDMM_EXPORT::VidMmETWAllocationHandle(v152, v153, hSource);
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
                    McTemplateK0pqpqtt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventFlip, 0LL);
                  goto LABEL_299;
                }
                v264 = VIDMM_EXPORT::VidMmETWAllocationHandle(v152, v153, hDestination);
                v265 = (struct VIDSCH_SUBMIT_DATA_BASE *)VIDMM_EXPORT::VidMmETWAllocationHandle(
                                                           *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 760LL),
                                                           *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                               + 16LL)
                                                                                   + 768LL),
                                                           hSource);
                p_left = &v387.pDstSubRects->left;
                v267 = v387.SubRectCnt;
                v362 = v265;
                v361 = (const struct _DXGKWIN32KENG_INTERFACE *)*((_QWORD *)this + 45);
                v356 = (DXGADAPTERSTOPRESETLOCKSHARED *)v9->hWindow;
                v358 = (CWin32kLocks *)v387.pDstSubRects;
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                {
                  v149 = 0;
                  LODWORD(v329) = 1;
                  McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
                    (__int64)&DxgkControlGuid_Context,
                    (__int64)&EventBlit,
                    0LL,
                    v356,
                    v361,
                    0LL,
                    v362,
                    v264,
                    v329,
                    0,
                    v387.Flags.Value,
                    v387.SrcRect.left,
                    v387.SrcRect.right,
                    v387.SrcRect.top,
                    v387.SrcRect.bottom,
                    v387.DstRect.left,
                    v387.DstRect.right,
                    v387.DstRect.top,
                    v387.DstRect.bottom,
                    v387.SubRectCnt);
                  p_left = v358;
                }
                if ( !v267 )
                {
LABEL_541:
                  v147 = v349;
LABEL_299:
                  v35 = DXGCONTEXT::SubmitPresent(
                          this,
                          v9,
                          (struct DXGHWQUEUE **)v9[1].hWindow,
                          v9->BroadcastContextCount,
                          v365,
                          v346,
                          hSource,
                          hDestination,
                          &v387,
                          v9->pPresentRegions,
                          *((struct VIDMM_DMA_BUFFER **)this + 45),
                          a7,
                          Color,
                          v147);
                  if ( v35 >= 0
                    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 3120LL) + 128LL)
                                 + 3984LL * v160
                                 + 1072) == -1 )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 4951;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      0xFFFFFFFFLL,
                      L"!NT_SUCCESS(ntStatus) || (GetDisplayAdapter(VidPnSourceId)->GetDisplayCore()->MapVidPnSourceToVidP"
                       "nTarget(VidPnSourceId) != D3DDDI_ID_UNINITIALIZED)",
                      4951LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    *((_QWORD *)this + 45) = 0LL;
                  }
                  else
                  {
                    *((_QWORD *)this + 45) = 0LL;
                    if ( v35 < 0 )
                      goto LABEL_38;
                  }
                  if ( (v9->Flags.Value & 4) != 0 )
                  {
                    DXGDEVICE::ClearDisplayedAllMultiPlaneOverlaysUnsafe(*((DXGDEVICE **)this + 2), v160);
                    DXGDEVICE::SetDisplayedPrimary(*((DXGDEVICE **)this + 2), v160, v346, *((_DWORD *)a7 + 34), 1u);
                    *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * v160 + 1816) = *((_DWORD *)a7 + 30);
                    UpdatePostComposition(
                      v160,
                      0,
                      0,
                      0,
                      *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 3120LL));
                  }
                  goto LABEL_36;
                }
                v268 = v361;
                while ( 1 )
                {
                  v269 = 0;
                  v270 = v267 - v149;
                  if ( v267 - v149 > 0x10 )
                    break;
                  v271 = v267 - v149;
                  if ( v270 )
                    goto LABEL_535;
LABEL_537:
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  {
                    LODWORD(v324) = v271;
                    LODWORD(v323) = v270 <= 0x10;
                    McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
                      (__int64)&DxgkControlGuid_Context,
                      (__int64)&EventBlitRect,
                      0LL,
                      v268,
                      v323,
                      v324,
                      v396,
                      v395,
                      v401,
                      v394);
                    p_left = v358;
                  }
                  v149 += 16;
                  if ( v149 >= v267 )
                  {
                    v160 = v355[0];
                    goto LABEL_541;
                  }
                }
                v271 = 16;
LABEL_535:
                v272 = 0LL;
                do
                {
                  v273 = v269 + v149;
                  ++v269;
                  v273 *= 2LL;
                  v272 += 4LL;
                  *(_DWORD *)&v395[v272 + 60] = p_left[2 * v273];
                  *(_DWORD *)&v394[v272 + 60] = p_left[2 * v273 + 2];
                  *(_DWORD *)&v400[v272 + 60] = p_left[2 * v273 + 1];
                  *(_DWORD *)((char *)&v393[19] + v272 + 12) = p_left[2 * v273 + 3];
                }
                while ( v269 < v271 );
                goto LABEL_537;
              }
              WdLogSingleEntry3(4LL, v346, *((_QWORD *)v346 + 6), v261);
              WdLogGlobalForLineNumber = 4882;
              v175 = (struct VIDMM_DMA_BUFFER *)*((_QWORD *)this + 45);
              if ( v175 )
                goto LABEL_355;
            }
            else
            {
              WdLogSingleEntry3(4LL, -1071775739LL, this, v346);
              WdLogGlobalForLineNumber = 4858;
              v175 = (struct VIDMM_DMA_BUFFER *)*((_QWORD *)this + 45);
              if ( v175 )
              {
LABEL_355:
                VIDMM_EXPORT::VidMmReleaseDmaBuffer(
                  *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                  v175);
                *((_QWORD *)this + 45) = 0LL;
              }
            }
LABEL_308:
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v348);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v347);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v346);
            return 3223191557LL;
          }
          v258 = (struct VIDMM_DMA_BUFFER *)*((_QWORD *)this + 45);
          if ( v258 )
          {
            VIDMM_EXPORT::VidMmReleaseDmaBuffer(
              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
              v258);
            *((_QWORD *)this + 45) = 0LL;
          }
          if ( v35 != -1071774920 )
            goto LABEL_38;
          goto LABEL_517;
        }
        WdLogSingleEntry2(4LL, v148, this);
        WdLogGlobalForLineNumber = 4788;
        goto LABEL_234;
      }
      v155 = *((_QWORD *)this + 2);
      if ( *(_QWORD *)(v155 + 1880) )
      {
        *(_QWORD *)&v388.left = 0LL;
        v156 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v9->Flags.Value;
        if ( (*(_DWORD *)&v156 & 0x10000000) != 0 )
        {
          v388.right = v9[1].hSource;
          v157 = v9[1].hDestination;
          goto LABEL_313;
        }
        v167 = v347;
        if ( (*(_BYTE *)&v156 & 4) != 0 )
          v167 = v346;
        v168 = *(_DWORD *)(*((_QWORD *)v167 + 6) + 4LL);
        if ( (v168 & 0x10) != 0 )
        {
          WdLogSingleEntry3(4LL, -1071775482LL, this, v167);
          WdLogGlobalForLineNumber = 5003;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v348);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v347);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v346);
          return 3223191814LL;
        }
        v169 = *(_OWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                            *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 3120LL),
                            (v168 >> 6) & 0xF);
        v378.Flags.Value = 1;
        memset(&v378.Width, 0, 32);
        v378.Rotation = -1;
        *(_OWORD *)v384 = v169;
        v378.hAllocation = *(HANDLE *)(*((_QWORD *)v167 + 6) + 16LL);
        v171 = ADAPTER_RENDER::DdiDescribeAllocation(
                 *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3128LL),
                 &v378,
                 v170);
        if ( v171 >= 0 )
        {
          v172 = v378.Width;
          if ( v378.Width != v384[0] || (v157 = v378.Height, v378.Height != v384[1]) )
          {
            WdLogSingleEntry3(4LL, -1071775482LL, this, v167);
            WdLogGlobalForLineNumber = 5034;
            goto LABEL_308;
          }
          if ( !*((_BYTE *)this + 434) )
          {
            v173 = RemoveAlphaChannel(v384[2]);
            if ( RemoveAlphaChannel(v378.Format) != v173 )
            {
              WdLogSingleEntry3(4LL, -1071775482LL, this, v167);
              WdLogGlobalForLineNumber = 5048;
              goto LABEL_308;
            }
            v157 = v378.Height;
            v172 = v378.Width;
          }
          v388.right = v172;
LABEL_313:
          v388.bottom = v157;
          v35 = ADAPTER_DISPLAY::PresentDisplayOnly(
                  *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 3120LL),
                  this,
                  v160,
                  v9,
                  &v387,
                  v147,
                  &v388);
          if ( v35 >= 0 )
          {
            if ( (v9->Flags.Value & 4) != 0 )
            {
              DXGDEVICE::ClearDisplayedAllMultiPlaneOverlaysUnsafe(*((DXGDEVICE **)this + 2), v160);
              DXGDEVICE::SetDisplayedPrimary(*((DXGDEVICE **)this + 2), v160, v346, 0, 1u);
              UpdatePostComposition(
                v160,
                0,
                0,
                0,
                *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 3120LL));
            }
            goto LABEL_37;
          }
LABEL_38:
          if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL))
            && v35 != -1073741130 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 6239;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"GetRenderCore()->IsCoreResourceSharedOwner() || ntStatus == STATUS_DEVICE_REMOVED",
              6239LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( *((_QWORD *)this + 45) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 6240;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"m_pPresentDmaBuffer == NULL",
              6240LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          goto LABEL_41;
        }
        v274 = v171;
        WdLogSingleEntry5(
          2LL,
          v171,
          this,
          *((unsigned int *)v167 + 4),
          v167,
          (*(_DWORD *)(*((_QWORD *)v167 + 6) + 4LL) >> 6) & 0xF);
        WdLogGlobalForLineNumber = 5025;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"ret = 0x%I64x Device 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x 0x%I64x",
          v274,
          (__int64)this,
          *((unsigned int *)v167 + 4),
          (__int64)v167,
          (*(_DWORD *)(*((_QWORD *)v167 + 6) + 4LL) >> 6) & 0xF);
      }
      else
      {
        WdLogSingleEntry2(1LL, v155, -1073741822LL);
        WdLogGlobalForLineNumber = 5083;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"DxgkPresent is called for flip on a render only device 0x%I64x, returning 0x%I64x.",
          *((_QWORD *)this + 2),
          -1073741822LL,
          0LL,
          0LL,
          0LL);
      }
LABEL_329:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v348);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v347);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v346);
      return -1073741811LL;
    }
    v250 = v361;
    v251 = *(_DWORD *)(*((_QWORD *)this + 19) + 8LL);
    v252 = (*((__int64 (**)(void))v361 + 1))();
    v253 = v9->Flags.Value & 4;
    if ( v251 != v252 )
    {
      if ( !v253 )
      {
        DXGDEVICE::FlushScheduler(*((_QWORD *)this + 2), 2LL, 4294967293LL, 0LL);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v356);
        COREDEVICEACCESS::Release(v147);
        DXGPRESENTMUTEX::DXGPRESENTMUTEX(
          (DXGPRESENTMUTEX *)v379,
          *(struct ADAPTER_RENDER *const *)(*((_QWORD *)this + 2) + 16LL));
        DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v379);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v356);
        v254 = COREDEVICEACCESS::AcquireShared(v147, 0LL);
        v76 = v254;
        if ( v254 < 0 )
        {
          WdLogSingleEntry2(4LL, v254, this);
          WdLogGlobalForLineNumber = 4723;
          COREDEVICEACCESS::AcquireSharedUncheck(v147, 0LL);
          v126 = (DXGPRESENTMUTEX *)v379;
          goto LABEL_232;
        }
        DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, (struct DXGPRESENTMUTEX *)v379, 1u);
        DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v379);
      }
      v255 = *((_QWORD *)this + 19);
      *(_DWORD *)(v255 + 8) = (*((__int64 (**)(void))v250 + 1))();
      CddInterface = ADAPTER_DISPLAY::GetCddInterface(
                       *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 3120LL),
                       v160);
      if ( CddInterface )
        (*((void (__fastcall **)(_QWORD, _QWORD))CddInterface + 1))(*(_QWORD *)CddInterface, 0LL);
      goto LABEL_285;
    }
    if ( v253 )
      goto LABEL_285;
    COREDEVICEACCESS::Release(v147);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v356);
    DXGPRESENTMUTEX::DXGPRESENTMUTEX(
      (DXGPRESENTMUTEX *)v380,
      *(struct ADAPTER_RENDER *const *)(*((_QWORD *)this + 2) + 16LL));
    DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v380);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v356);
    v257 = COREDEVICEACCESS::AcquireShared(v147, 0LL);
    v76 = v257;
    if ( v257 >= 0 )
    {
      DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, (struct DXGPRESENTMUTEX *)v380, 0);
      DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v380);
      goto LABEL_285;
    }
    WdLogSingleEntry2(4LL, v257, this);
    WdLogGlobalForLineNumber = 4756;
    COREDEVICEACCESS::AcquireSharedUncheck(v147, 0LL);
    v126 = (DXGPRESENTMUTEX *)v380;
LABEL_232:
    DXGPRESENTMUTEX::Release(v126);
    goto LABEL_234;
  }
LABEL_53:
  v46 = v9->pSrcSubRects;
  if ( !v46 || (v47 = v9->SubRectCnt, !(_DWORD)v47) || (Value & 3) == 0 || (Value & 0x100E803C) != 0 )
  {
    v35 = -1073741811;
    WdLogSingleEntry5(3LL, this, v46, v9->SubRectCnt, (unsigned int)Value, -1073741811LL);
    WdLogGlobalForLineNumber = 4130;
    goto LABEL_41;
  }
  if ( (Value & 2) != 0 )
  {
    if ( (Value & 0x100681) != 0 )
    {
      v35 = -1073741811;
      WdLogSingleEntry5(3LL, this, v46, v9->SubRectCnt, (unsigned int)Value, -1073741811LL);
      WdLogGlobalForLineNumber = 4145;
      goto LABEL_41;
    }
    v211 = v353;
  }
  else
  {
    v211 = v353;
    if ( !v353 || !Height || (Value & 0x82) != 0x80 )
    {
      v35 = -1073741811;
      WdLogSingleEntry5(3LL, this, v46, v9->SubRectCnt, (unsigned int)Value, -1073741811LL);
      WdLogGlobalForLineNumber = 4159;
      goto LABEL_41;
    }
    if ( (Value & 0x600) == 0x600 )
    {
      v35 = -1073741811;
      WdLogSingleEntry5(3LL, -1073741811LL, this, v46, v47, (unsigned int)Value);
      WdLogGlobalForLineNumber = 4168;
      goto LABEL_41;
    }
  }
  v212 = *((_QWORD *)v347 + 6);
  v213 = *(_DWORD *)(v212 + 4);
  if ( (v213 & 3) == 0 )
  {
    v35 = -1073741811;
    WdLogSingleEntry5(2LL, -1073741811LL, this, v347, v212, v9->hDestination);
    WdLogGlobalForLineNumber = 4179;
    v129 = L"0x%I64x 0x%I64x destination must be primary 0x%I64x 0x%I64x 0x%I64x";
    v330 = v9->hDestination;
    v328 = *((_QWORD *)v347 + 6);
    v326 = (__int64)v347;
    v325 = (__int64)this;
    v322 = -1073741811LL;
    goto LABEL_250;
  }
  v215 = *((_QWORD *)this + 2);
  v160 = (v213 >> 6) & 0xF;
  v355[0] = v160;
  v216 = *(DXGADAPTER **)(v215 + 1880);
  if ( !v216
    || !DXGADAPTER::IsDisplayAdapter(v216)
    || !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL)
                                                                       + 3120LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4191;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(GetDisplayAdapter(VidPnSourceId) == GetDisplayAdapter(0)) && (GetDisplayAdapter(VidPnSourceId) != NULL) && GetDis"
       "playAdapter(VidPnSourceId)->IsDisplayAdapter() && GetDisplayAdapter(VidPnSourceId)->GetDisplayCore()->IsCoreResou"
       "rceSharedOwner()",
      4191LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_DWORD *)a7 + 29) = v160;
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v371, (struct _EX_RUNDOWN_REF *)v347);
  DXGALLOCATIONREFERENCE::MoveAssign(&v348, &v371);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v371);
  v217 = v9->hDestination;
  v218 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v9->Flags.Value;
  v363 = v217;
  if ( (*(_BYTE *)&v218 & 1) != 0 )
  {
    if ( v347 == v346 )
    {
      v35 = -1073741811;
      WdLogSingleEntry5(2LL, -1073741811LL, this, v346, v9->hSource, v217);
      WdLogGlobalForLineNumber = 4203;
      v129 = L"0x%I64x 0x%I64x Source and destination must be different 0x%I64x 0x%I64x 0x%I64x";
      v330 = v9->hDestination;
      v328 = v9->hSource;
      v326 = (__int64)v346;
      v325 = (__int64)this;
      v322 = -1073741811LL;
      goto LABEL_250;
    }
    v219 = *(unsigned int *)(*((_QWORD *)v346 + 6) + 4LL);
    if ( (v219 & 3) != 0 && (((unsigned int)v219 >> 6) & 0xF) != v160 )
    {
      v35 = -1073741811;
      WdLogSingleEntry5(2LL, -1073741811LL, this, v346, (v219 >> 6) & 0xF, v160);
      v129 = L"0x%I64x 0x%I64x primary source has different VidPnSourceId 0x%I64x 0x%I64x != 0x%I64x";
      v330 = v160;
      WdLogGlobalForLineNumber = 4216;
      v328 = (*(_DWORD *)(*((_QWORD *)v346 + 6) + 4LL) >> 6) & 0xF;
      v326 = (__int64)v346;
      v325 = (__int64)this;
      v322 = -1073741811LL;
      goto LABEL_250;
    }
    v220 = v9->SrcRect.right;
    v221 = v9->SrcRect.left;
    if ( (int)v220 <= v221
      || (v222 = v9->SrcRect.bottom, v223 = v9->SrcRect.top, v222 <= v223)
      || v221 >= v211
      || v223 >= (int)Height
      || (int)v220 <= 0
      || v222 <= 0 )
    {
      v35 = -1073741811;
      WdLogSingleEntry5(2LL, -1073741811LL, v9->SrcRect.left, v9->SrcRect.top, v220, v9->SrcRect.bottom);
      WdLogGlobalForLineNumber = 4236;
      v129 = L"0x%I64x Invalid Source Rect [0x%I64x 0x%I64x 0x%I64x 0x%I64x]";
      v330 = v9->SrcRect.bottom;
      v328 = v9->SrcRect.right;
      v326 = v9->SrcRect.top;
      v325 = v9->SrcRect.left;
      v322 = -1073741811LL;
      goto LABEL_250;
    }
    while ( 1 )
    {
      v224 = v9->SubRectCnt;
      if ( v12 >= v224 )
        break;
      Source1 = 0LL;
      v225 = v12;
      v226 = &v9->pSrcSubRects[v225];
      v362 = (struct VIDSCH_SUBMIT_DATA_BASE *)v12;
      if ( !DXGPRESENT::IntersectRect(&Source1, v226, &v9->SrcRect)
        || RtlCompareMemory(&Source1, &v9->pSrcSubRects[v225], 0x10uLL) != 16 )
      {
        v35 = -1073741811;
        WdLogSingleEntry5(2LL, -1073741811LL, v9->SrcRect.left, v9->SrcRect.top, v9->SrcRect.right, v9->SrcRect.bottom);
        WdLogGlobalForLineNumber = 4254;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"0x%I64x Source Rect [0x%I64x 0x%I64x 0x%I64x 0x%I64x] contains an invalid subrect",
          -1073741811LL,
          v9->SrcRect.left,
          v9->SrcRect.top,
          v9->SrcRect.right,
          v9->SrcRect.bottom);
        v227 = v362;
        WdLogSingleEntry5(
          2LL,
          v362,
          v9->pSrcSubRects[v225].left,
          v9->pSrcSubRects[v225].top,
          v9->pSrcSubRects[v225].right,
          v9->pSrcSubRects[v225].bottom);
        WdLogGlobalForLineNumber = 4262;
        goto LABEL_452;
      }
      ++v12;
    }
    v229 = v9->Flags.Value;
    if ( (v229 & 0x40) != 0 )
    {
      v230 = v9->DstRect.right;
      v231 = v9->DstRect.left;
      if ( v230 <= (int)v231
        || (v232 = v9->DstRect.bottom, v233 = v9->DstRect.top, v232 <= v233)
        || (int)v231 >= (int)Width
        || v233 >= (int)v359[0]
        || v230 <= 0
        || v232 <= 0 )
      {
        v35 = -1073741811;
        WdLogSingleEntry5(3LL, -1073741811LL, v231, v9->DstRect.top, v9->DstRect.right, v9->DstRect.bottom);
        WdLogGlobalForLineNumber = 4284;
        goto LABEL_41;
      }
      if ( v9->SrcRect.right - v9->SrcRect.left != v230 - (_DWORD)v231
        || v9->SrcRect.bottom - v9->SrcRect.top != v232 - v233 )
      {
        v35 = -1073741811;
        WdLogSingleEntry5(2LL, -1073741811LL, this, v229, v347, v160);
        v129 = L"0x%I64x 0x%I64x specified destination RECT has different size from source RECT 0x%I64x 0x%I64x 0x%I64x";
        v330 = v160;
        v328 = (__int64)v347;
        WdLogGlobalForLineNumber = 4296;
        v326 = v9->Flags.Value;
        v325 = (__int64)this;
        v322 = -1073741811LL;
        goto LABEL_250;
      }
      v76 = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 19), v224);
      if ( v76 < 0 )
        goto LABEL_234;
      v234 = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), 0);
      v235 = v9->DstRect.left - v9->SrcRect.left;
      v236 = 0;
      v237 = v9->DstRect.top - v9->SrcRect.top;
      v224 = v9->SubRectCnt;
      if ( v224 )
      {
        do
        {
          v238 = v236++;
          v238 *= 2LL;
          *(&v234->left + 2 * v238) = v235 + *(&v9->pSrcSubRects->left + 2 * v238);
          *(&v234->right + 2 * v238) = v235 + *(&v9->pSrcSubRects->right + 2 * v238);
          *(&v234->top + 2 * v238) = v237 + *(&v9->pSrcSubRects->top + 2 * v238);
          *(&v234->bottom + 2 * v238) = v237 + *(&v9->pSrcSubRects->bottom + 2 * v238);
          v224 = v9->SubRectCnt;
        }
        while ( v236 < v224 );
      }
      DstRect = v9->DstRect;
      v387.pDstSubRects = v234;
      v387.DstRect = DstRect;
    }
    else
    {
      if ( Width != v353 || v359[0] != Height )
      {
        WdLogSingleEntry5(3LL, this, Width, v359[0], v353, Height);
        WdLogGlobalForLineNumber = 4332;
        goto LABEL_329;
      }
      v387.DstRect = v9->SrcRect;
      v387.pDstSubRects = v9->pSrcSubRects;
    }
    v387.SrcRect = v9->SrcRect;
    v240 = v387.Flags.Value & 0xFFFFF7FF | (v9->Flags.Value >> 9) & 0x800;
    v387.Flags.Value = v240;
    goto LABEL_486;
  }
  v387.DstRect.bottom = v359[0];
  v387.DstRect.right = Width;
  if ( (*(_BYTE *)&v218 & 0x40) == 0 )
    goto LABEL_480;
  v241 = v9->DstRect.left;
  v242 = v9->DstRect.right;
  if ( (int)v242 <= (int)v241 || (v243 = v9->DstRect.bottom, v243 <= v9->DstRect.top) || (int)v242 <= 0 || v243 <= 0 )
  {
    v35 = -1073741811;
    WdLogSingleEntry5(3LL, -1073741811LL, v241, v9->DstRect.top, v242, v9->DstRect.bottom);
    WdLogGlobalForLineNumber = 4365;
    goto LABEL_41;
  }
  if ( !DXGPRESENT::IntersectRect(&v387.DstRect, &v9->DstRect, &v387.DstRect) )
    goto LABEL_255;
  while ( 1 )
  {
LABEL_480:
    v224 = v9->SubRectCnt;
    if ( v12 >= v224 )
    {
      v240 = v387.Flags.Value;
      v387.SrcRect = v387.DstRect;
      v387.pDstSubRects = v9->pSrcSubRects;
LABEL_486:
      v387.SubRectCnt = v224;
      v245 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v9->Flags.Value;
      v246 = (*(_BYTE *)&v245 & 1 | v240 & 0xFFFFFFFE) ^ (*(_BYTE *)&v245 ^ (*(_BYTE *)&v245 & 1 | v240 & 0xFE)) & 2 ^ ((*(_BYTE *)&v245 & 1 | v240 & 0xFE) ^ (*(_BYTE *)&v245 ^ (*(_BYTE *)&v245 & 1 | v240 & 0xFE)) & 2 ^ (unsigned __int8)(*(unsigned int *)&v245 >> 5)) & 0x10;
      v247 = v246 ^ ((unsigned __int8)v246 ^ (unsigned __int8)(*(unsigned int *)&v245 >> 5)) & 0x20;
      v387.Color = v9->Color;
      v387.Flags.Value = v247 ^ ((unsigned __int8)v247 ^ (unsigned __int8)(*(unsigned int *)&v245 >> 5)) & 0x40 ^ ((unsigned __int16)(v247 ^ ((unsigned __int8)v247 ^ (unsigned __int8)(*(unsigned int *)&v245 >> 5)) & 0x40) ^ (unsigned __int16)(*(unsigned int *)&v245 >> 9)) & 0x800;
      goto LABEL_278;
    }
    v390 = 0LL;
    v225 = v12;
    v244 = &v9->pSrcSubRects[v225];
    v362 = (struct VIDSCH_SUBMIT_DATA_BASE *)v12;
    if ( !DXGPRESENT::IntersectRect(&v390, v244, &v387.DstRect)
      || RtlCompareMemory(&v390, &v9->pSrcSubRects[v225], 0x10uLL) != 16 )
    {
      break;
    }
    ++v12;
  }
  v35 = -1073741811;
  WdLogSingleEntry5(2LL, -1073741811LL, v9->DstRect.left, v9->DstRect.top, v9->DstRect.right, v9->DstRect.bottom);
  WdLogGlobalForLineNumber = 4389;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"0x%I64x Dest Rect [0x%I64x 0x%I64x 0x%I64x 0x%I64x] contains an invalid subrect",
    -1073741811LL,
    v9->DstRect.left,
    v9->DstRect.top,
    v9->DstRect.right,
    v9->DstRect.bottom);
  v227 = v362;
  WdLogSingleEntry5(
    2LL,
    v362,
    v9->pSrcSubRects[v225].left,
    v9->pSrcSubRects[v225].top,
    v9->pSrcSubRects[v225].right,
    v9->pSrcSubRects[v225].bottom);
  WdLogGlobalForLineNumber = 4397;
LABEL_452:
  v129 = L"SubRect 0x%I64x is invalid 0x%I64x 0x%I64x 0x%I64x 0x%I64x";
  v228 = &v9->pSrcSubRects[v225].left;
  v330 = v228[3];
  v328 = v228[2];
  v326 = v228[1];
  v325 = *v228;
  v322 = (__int64)v227;
LABEL_250:
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v129, v322, v325, v326, v328, v330);
LABEL_41:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v348);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v347);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v346);
  return (unsigned int)v35;
}
