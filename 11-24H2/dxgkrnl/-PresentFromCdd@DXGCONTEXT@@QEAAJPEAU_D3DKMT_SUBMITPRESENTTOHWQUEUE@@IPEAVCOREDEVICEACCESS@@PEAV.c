/*
 * XREFs of ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x140374788
 * Callers:
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEBD@Z @ 0x1401B3D50 (-DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEBD@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1403F49F0 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x14040F280 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14000E300 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x14000EB90 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x140012FF8 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer @ 0x1400135BC (McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x14002BA80 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14002BC70 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002BEA0 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031B58 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1400338A0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x140035AC0 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x14003644C (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z @ 0x140038354 (-VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140040288 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x140042BB4 (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x14004CEB0 (-VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x140059C6C (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1402E0FA8 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1402EA4B0 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F5CF8 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140301EA0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x140375E08 (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x140375F48 (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     _DXGADAPTER::SubmitPresentHistoryTokenFromVm_::_45_::ENSURE_DELETE::_ENSURE_DELETE @ 0x14037605C (_DXGADAPTER--SubmitPresentHistoryTokenFromVm_--_45_--ENSURE_DELETE--_ENSURE_DELETE.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x140376424 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1403765D8 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x140397394 (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DXGCONTEXT::PresentFromCdd(
        DXGCONTEXT *this,
        struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a5,
        struct DXGCONTEXT **a6)
{
  DXGCONTEXT *v7; // rsi
  struct DXGGLOBAL *Global; // rax
  unsigned int *v9; // rax
  unsigned int *v10; // rdi
  int v11; // r14d
  D3DKMT_HANDLE v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rax
  ADAPTER_DISPLAY *v15; // rcx
  __int64 v16; // r9
  unsigned int v17; // ecx
  unsigned int v18; // r13d
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // edx
  struct _EX_RUNDOWN_REF *v23; // rdx
  unsigned int v24; // r13d
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // r8
  int v28; // edx
  struct _EX_RUNDOWN_REF *v29; // rdx
  DXGPRESENT *v30; // rax
  DXGPRESENT *v31; // rax
  __int64 v32; // r8
  int *v33; // rdx
  int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rcx
  COREDEVICEACCESS *v37; // r12
  int v38; // eax
  struct DXGPRESENTMUTEX *v39; // r8
  const char *v40; // rdx
  __int64 v41; // rax
  __int64 v42; // r12
  unsigned __int8 v43; // r14
  __int64 v44; // r13
  ADAPTER_DISPLAY *v45; // r13
  unsigned int v46; // r12d
  int updated; // eax
  __int64 v48; // rcx
  PVOID v49; // rdx
  struct DXGGLOBAL *v50; // rax
  __int64 v51; // rax
  int CurrentOrientation; // eax
  UINT Value; // eax
  unsigned int v54; // ecx
  __int64 v55; // rax
  const RECT *DdiSubRectList; // r14
  __int64 v57; // r15
  UINT v58; // r15d
  int v59; // r13d
  int v60; // esi
  __int64 v61; // r12
  LONG v62; // r8d
  LONG v63; // edx
  UINT i; // r15d
  __int64 v65; // r8
  const RECT *pDstSubRects; // r15
  UINT SubRectCnt; // r14d
  UINT v68; // ebx
  struct VIDMM_DMA_BUFFER *v69; // rsi
  unsigned int v70; // r10d
  __int64 v71; // rdx
  unsigned int v72; // r9d
  __int64 v73; // rcx
  struct COREDEVICEACCESS *v74; // r15
  PVOID v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  struct DXGCONTEXT **v80; // [rsp+20h] [rbp-100h]
  union _LARGE_INTEGER *v81; // [rsp+28h] [rbp-F8h]
  struct DXGK_PRESENT_PARAMS *v82; // [rsp+30h] [rbp-F0h]
  __int64 v83; // [rsp+30h] [rbp-F0h]
  struct DXGK_PRESENT_PARAMS *v84; // [rsp+30h] [rbp-F0h]
  __int64 v85; // [rsp+38h] [rbp-E8h]
  __int64 v86; // [rsp+38h] [rbp-E8h]
  __int64 v87; // [rsp+40h] [rbp-E0h]
  __int64 v88; // [rsp+40h] [rbp-E0h]
  struct VIDMM_DMA_BUFFER *v90; // [rsp+A8h] [rbp-78h] BYREF
  struct _EX_RUNDOWN_REF *v91; // [rsp+B0h] [rbp-70h] BYREF
  struct VIDMM_DMA_BUFFER *v92; // [rsp+B8h] [rbp-68h] BYREF
  ADAPTER_DISPLAY *v93; // [rsp+C0h] [rbp-60h]
  PVOID Entry; // [rsp+C8h] [rbp-58h]
  struct _EX_RUNDOWN_REF *v95; // [rsp+D0h] [rbp-50h] BYREF
  union _LARGE_INTEGER v96; // [rsp+D8h] [rbp-48h] BYREF
  _QWORD v97[2]; // [rsp+E0h] [rbp-40h] BYREF
  struct DXGHWQUEUE *v98; // [rsp+F0h] [rbp-30h] BYREF
  DXGCONTEXT *v99; // [rsp+F8h] [rbp-28h]
  COREDEVICEACCESS *v100; // [rsp+100h] [rbp-20h]
  DXGADAPTERSTOPRESETLOCKSHARED *v101; // [rsp+108h] [rbp-18h]
  _BYTE v102[16]; // [rsp+110h] [rbp-10h] BYREF
  _BYTE v103[24]; // [rsp+120h] [rbp+0h] BYREF
  __int64 v104; // [rsp+138h] [rbp+18h]
  struct _DXGKARG_PRESENT v105; // [rsp+140h] [rbp+20h] BYREF
  _BYTE v107[64]; // [rsp+1F0h] [rbp+D0h] BYREF
  _BYTE v108[64]; // [rsp+230h] [rbp+110h] BYREF
  _BYTE v109[64]; // [rsp+270h] [rbp+150h] BYREF
  _BYTE v110[64]; // [rsp+2B0h] [rbp+190h] BYREF

  v101 = a5;
  v7 = this;
  v96.QuadPart = (LONGLONG)a6;
  v100 = a4;
  v99 = this;
  Global = DXGGLOBAL::GetGlobal();
  v9 = (unsigned int *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 1136));
  v10 = v9;
  if ( v9 )
  {
    memset(v9, 0, 0x5F8uLL);
    v92 = (struct VIDMM_DMA_BUFFER *)v10;
    v98 = 0LL;
    memmove(v10, &a2->PrivatePresentData, 0x5D8uLL);
    *((_QWORD *)v10 + 188) = &v98;
    if ( a2->hHwQueues )
      v12 = *a2->hHwQueues;
    else
      v12 = 0;
    DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
      (DXGHWQUEUEBYHANDLE *)v102,
      v12,
      *(struct _KTHREAD ***)(*((_QWORD *)v7 + 2) + 40LL),
      &v98,
      1,
      1);
    v13 = *((_QWORD *)v7 + 2);
    v14 = *(_QWORD *)(v13 + 1896);
    v104 = *(_QWORD *)(*(_QWORD *)(v13 + 40) + 88LL);
    v15 = *(ADAPTER_DISPLAY **)(v14 + 3120);
    v93 = v15;
    if ( !v15 || !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(v15) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7034;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"(pDisplayCore != NULL) && pDisplayCore->IsCoreResourceSharedOwner()",
        7034LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)v7 + 2) + 16LL)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7035;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"GetRenderCore()->IsCoreResourceSharedOwner()",
        7035LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v16 = *((_QWORD *)v10 + 9);
    if ( !v16
      || !v10[16]
      || (v17 = v10[22], (((unsigned __int8)v17 ^ (unsigned __int8)(v17 >> 1)) & 1) == 0)
      || (v17 & 0x63C) != 0 )
    {
      v11 = -1073741811;
      WdLogSingleEntry5(2LL, -1073741811LL, v7, v16, v10[16], v10[22]);
      v88 = v10[22];
      v86 = v10[16];
      v84 = (struct DXGK_PRESENT_PARAMS *)*((_QWORD *)v10 + 9);
      WdLogGlobalForLineNumber = 7050;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"ret = 0x%I64x 0x%I64x failed with invalid parameters 0x%I64x 0x%I64x 0x%I64x",
        -1073741811LL,
        (__int64)v7,
        (__int64)v84,
        v86,
        v88);
      goto LABEL_151;
    }
    memset(&v105, 0, sizeof(v105));
    v18 = v10[6];
    v19 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v19 + 248));
    v20 = (v18 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v20 < *(_DWORD *)(v19 + 296) )
    {
      v21 = *(_QWORD *)(v19 + 280);
      v22 = *(_DWORD *)(v21 + 16 * v20 + 8);
      if ( ((v18 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60) && (v22 & 0x2000) == 0 && (v22 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(v21 + 16 * (((unsigned __int64)v18 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 5 )
        {
          v23 = *(struct _EX_RUNDOWN_REF **)(v21 + 16 * (((unsigned __int64)v18 >> 6) & 0xFFFFFF));
          goto LABEL_23;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v23 = 0LL;
LABEL_23:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v91, v23);
    _InterlockedDecrement((volatile signed __int32 *)(v19 + 264));
    ExReleasePushLockSharedEx(v19 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( !v91 )
    {
      v11 = -1073741811;
      WdLogSingleEntry5(2LL, -1073741811LL, v7, *((_QWORD *)v10 + 9), v10[16], v10[6]);
      v87 = v10[6];
      v85 = v10[16];
      v82 = (struct DXGK_PRESENT_PARAMS *)*((_QWORD *)v10 + 9);
      WdLogGlobalForLineNumber = 7063;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"0x%I64x 0x%I64x fails Present invalid parameters 0x%I64x 0x%I64x 0x%I64x",
        -1073741811LL,
        (__int64)v7,
        (__int64)v82,
        v85,
        v87);
LABEL_25:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v91);
LABEL_151:
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v102);
      DXGADAPTER::SubmitPresentHistoryTokenFromVm_::_45_::ENSURE_DELETE::_ENSURE_DELETE(&v92, v76, v77, v78);
      return (unsigned int)v11;
    }
    if ( (v10[22] & 1) == 0 )
    {
LABEL_38:
      if ( *((_QWORD *)v7 + 19) )
        goto LABEL_41;
      v30 = (DXGPRESENT *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(1648LL);
      if ( v30 )
      {
        v31 = DXGPRESENT::DXGPRESENT(v30, 1);
        *((_QWORD *)v7 + 19) = v31;
        if ( v31 )
        {
LABEL_41:
          CVidSchSubmitData::CVidSchSubmitData(
            (CVidSchSubmitData *)v97,
            *(struct ADAPTER_RENDER **)(*((_QWORD *)v7 + 2) + 16LL),
            1);
          v33 = (int *)v97[0];
          Entry = (PVOID)v97[0];
          if ( !v97[0] )
          {
            WdLogSingleEntry0(6LL);
            WdLogGlobalForLineNumber = 7099;
            DxgkLogInternalTriageEvent(
              0LL,
              262145LL,
              0xFFFFFFFFLL,
              L"Failed to allocate VidSchSubmitData",
              7099LL,
              0LL,
              0LL,
              0LL,
              0LL);
            CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v97);
            v11 = -1073741801;
            goto LABEL_25;
          }
          v34 = *(_DWORD *)v97[0] | 0x10000;
          *(_DWORD *)v97[0] = v34;
          if ( !_bittest((const signed __int32 *)v10 + 22, 0xEu) )
          {
            v34 |= 1u;
            *v33 = v34;
          }
          *v33 = v34 | 0x100;
          LOBYTE(v32) = 1;
          v35 = *((_QWORD *)v7 + 2);
          v36 = *((_QWORD *)v7 + 29);
          v90 = 0LL;
          v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, struct VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 16) + 760LL) + 8LL)
                                                                                                + 464LL))(
                  v36,
                  0LL,
                  v32,
                  &v90);
          if ( v11 < 0 )
          {
            v75 = Entry;
            goto LABEL_148;
          }
          if ( !v90 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 7117;
            DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pVidMmDmaBuffer", 7117LL, 0LL, 0LL, 0LL, 0LL);
          }
          DXGPRESENTMUTEX::DXGPRESENTMUTEX(
            (DXGPRESENTMUTEX *)v103,
            *(struct ADAPTER_RENDER *const *)(*((_QWORD *)v7 + 2) + 16LL));
          if ( !_bittest((const signed __int32 *)v10 + 22, 0xEu) )
          {
            v37 = v100;
            COREDEVICEACCESS::Release(v100);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v101);
            DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v103);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v101);
            v38 = COREDEVICEACCESS::AcquireShared(v37, 0LL);
            v11 = v38;
            if ( v38 < 0 )
            {
              WdLogSingleEntry2(4LL, v38, v7);
              WdLogGlobalForLineNumber = 7135;
              COREDEVICEACCESS::AcquireSharedUncheck(v37, v40);
              VIDMM_EXPORT::VidMmReleaseDmaBuffer(
                *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 760LL),
                v90);
LABEL_50:
              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v103);
              CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v97);
              goto LABEL_25;
            }
            v42 = v104;
            v43 = 0;
            if ( v104 )
            {
              v44 = *((_QWORD *)v7 + 19);
              if ( *(_DWORD *)(v44 + 8) != (*(unsigned int (**)(void))(v104 + 8))() )
              {
                *(_DWORD *)(v44 + 8) = (*(__int64 (**)(void))(v42 + 8))();
                DXGDEVICE::FlushScheduler(*((_QWORD *)v7 + 2), 2LL, 4294967293LL, 0LL);
                v43 = 1;
              }
            }
            DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)v7 + 2), v7, v39, v43);
          }
          if ( (v10[22] & 1) == 0 || v10[5] == v10[6] )
          {
            v45 = v93;
          }
          else
          {
            v45 = v93;
            if ( (*(_DWORD *)(v91[6].Count + 4) & 2) != 0 )
            {
              v46 = a3;
              updated = DxgkCddUpdatePresentRects(v93, a3, (const struct tagRECT **)v10 + 9, v10 + 16);
              v11 = updated;
              if ( updated < 0 )
              {
                WdLogSingleEntry3(4LL, updated, *((_QWORD *)v7 + 2), a3);
                v48 = *((_QWORD *)v7 + 2);
                WdLogGlobalForLineNumber = 7173;
                VIDMM_EXPORT::VidMmReleaseDmaBuffer(*(VIDMM_EXPORT **)(*(_QWORD *)(v48 + 16) + 760LL), v90);
                v90 = 0LL;
                DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v103);
                v49 = Entry;
LABEL_62:
                ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v97[1] + 1424LL), v49);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v91);
                DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v102);
                v50 = DXGGLOBAL::GetGlobal();
                ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v50 + 1136), v10);
                return (unsigned int)v11;
              }
              if ( !v10[16] )
              {
                WdLogSingleEntry4(4LL, 0LL, *((_QWORD *)v7 + 2), v10[6], a3);
                v51 = *((_QWORD *)v7 + 2);
                WdLogGlobalForLineNumber = 7188;
                VIDMM_EXPORT::VidMmReleaseDmaBuffer(*(VIDMM_EXPORT **)(*(_QWORD *)(v51 + 16) + 760LL), v90);
                v90 = 0LL;
                DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v103);
                CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v97);
                v11 = 0;
                goto LABEL_25;
              }
              goto LABEL_67;
            }
          }
          v46 = a3;
LABEL_67:
          v11 = DXGPRESENT::GrowRectList(*((DXGPRESENT **)v7 + 19), v10[16]);
          if ( v11 < 0 )
          {
            VIDMM_EXPORT::VidMmReleaseDmaBuffer(
              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 760LL),
              v90);
            v90 = 0LL;
            v75 = Entry;
          }
          else
          {
            v105.DstRect = (RECT)*((_OWORD *)v10 + 2);
            v105.SubRectCnt = v10[16];
            if ( (v10[22] & 0x4000) != 0 )
            {
              Value = v105.Flags.Value;
            }
            else
            {
              CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation((__int64)v45, v46, 1);
              Value = (CurrentOrientation != 1 ? 0x80 : 0) | v105.Flags.Value & 0xFFFFFF7F;
              v105.Flags.Value = Value;
            }
            v54 = v10[22];
            if ( (v54 & 1) != 0 )
            {
              v105.Flags.Value = Value | 1;
              v105.SrcRect = (RECT)*((_OWORD *)v10 + 3);
              if ( v10[5] == v10[6] )
              {
                if ( (v10[22] & 0x4000) == 0 && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v45, v46) )
                {
                  v11 = -1071774910;
                  WdLogSingleEntry4(4LL, -1071774910LL, *((_QWORD *)v7 + 2), v10[6], v46);
                  v55 = *((_QWORD *)v7 + 2);
                  WdLogGlobalForLineNumber = 7246;
                  VIDMM_EXPORT::VidMmReleaseDmaBuffer(*(VIDMM_EXPORT **)(*(_QWORD *)(v55 + 16) + 760LL), v90);
                  v90 = 0LL;
                  goto LABEL_50;
                }
                DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)v7 + 19), 0);
                v105.pDstSubRects = DdiSubRectList;
                if ( v105.DstRect.right - v105.DstRect.left != v105.SrcRect.right - v105.SrcRect.left )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 7265;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146LL,
                    0xFFFFFFFFLL,
                    L"PresentDdiArg.DstRect.right - PresentDdiArg.DstRect.left == PresentDdiArg.SrcRect.right - PresentDdi"
                     "Arg.SrcRect.left",
                    7265LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( v105.DstRect.bottom - v105.DstRect.top != v105.SrcRect.bottom - v105.SrcRect.top )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 7268;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146LL,
                    0xFFFFFFFFLL,
                    L"PresentDdiArg.DstRect.bottom - PresentDdiArg.DstRect.top == PresentDdiArg.SrcRect.bottom - PresentDd"
                     "iArg.SrcRect.top",
                    7268LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( v105.SrcRect.left >= v105.SrcRect.right )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 7270;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146LL,
                    0xFFFFFFFFLL,
                    L"PresentDdiArg.SrcRect.left < PresentDdiArg.SrcRect.right",
                    7270LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( v105.SrcRect.left < 0 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 7271;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146LL,
                    0xFFFFFFFFLL,
                    L"PresentDdiArg.SrcRect.left >= 0",
                    7271LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                v57 = 4024LL * v46;
                if ( v105.SrcRect.right > *(_DWORD *)(v57 + *((_QWORD *)v45 + 16) + 636)
                                        - *(_DWORD *)(v57 + *((_QWORD *)v45 + 16) + 628) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 7272;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146LL,
                    0xFFFFFFFFLL,
                    L"PresentDdiArg.SrcRect.right <= pDisplayCore->GetContentRect(VidPnSourceId)->right - pDisplayCore->Ge"
                     "tContentRect(VidPnSourceId)->left",
                    7272LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( v105.DstRect.top >= v105.DstRect.bottom )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 7274;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146LL,
                    0xFFFFFFFFLL,
                    L"PresentDdiArg.DstRect.top < PresentDdiArg.DstRect.bottom",
                    7274LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( v105.DstRect.top < 0 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 7275;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146LL,
                    0xFFFFFFFFLL,
                    L"PresentDdiArg.DstRect.top >= 0",
                    7275LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( v105.SrcRect.bottom > *(_DWORD *)(v57 + *((_QWORD *)v45 + 16) + 640)
                                         - *(_DWORD *)(v57 + *((_QWORD *)v45 + 16) + 632) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 7276;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146LL,
                    0xFFFFFFFFLL,
                    L"PresentDdiArg.SrcRect.bottom <= pDisplayCore->GetContentRect(VidPnSourceId)->bottom - pDisplayCore->"
                     "GetContentRect(VidPnSourceId)->top",
                    7276LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                v58 = 0;
                v59 = v105.DstRect.left - v105.SrcRect.left;
                if ( v105.SubRectCnt )
                {
                  v60 = v105.DstRect.top - v105.SrcRect.top;
                  do
                  {
                    v61 = v58;
                    v62 = v59 + *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * v58);
                    DdiSubRectList[v61].left = v62;
                    v63 = v59 + *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * v58 + 8);
                    DdiSubRectList[v61].right = v63;
                    DdiSubRectList[v61].top = v60 + *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * v58 + 4);
                    DdiSubRectList[v61].bottom = v60 + *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * v58 + 12);
                    if ( v62 >= v63 )
                    {
                      WdLogSingleEntry0(1LL);
                      WdLogGlobalForLineNumber = 7288;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146LL,
                        0xFFFFFFFFLL,
                        L"pDstSubRects[i].left < pDstSubRects[i].right",
                        7288LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    if ( DdiSubRectList[v58].left < v105.DstRect.left )
                    {
                      WdLogSingleEntry0(1LL);
                      WdLogGlobalForLineNumber = 7289;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146LL,
                        0xFFFFFFFFLL,
                        L"pDstSubRects[i].left >= PresentDdiArg.DstRect.left",
                        7289LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    if ( DdiSubRectList[v58].right > v105.DstRect.right )
                    {
                      WdLogSingleEntry0(1LL);
                      WdLogGlobalForLineNumber = 7290;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146LL,
                        0xFFFFFFFFLL,
                        L"pDstSubRects[i].right <= PresentDdiArg.DstRect.right",
                        7290LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    if ( DdiSubRectList[v58].top >= DdiSubRectList[v58].bottom )
                    {
                      WdLogSingleEntry0(1LL);
                      WdLogGlobalForLineNumber = 7291;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146LL,
                        0xFFFFFFFFLL,
                        L"pDstSubRects[i].top < pDstSubRects[i].bottom",
                        7291LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    if ( DdiSubRectList[v58].top < v105.DstRect.top )
                    {
                      WdLogSingleEntry0(1LL);
                      WdLogGlobalForLineNumber = 7292;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146LL,
                        0xFFFFFFFFLL,
                        L"pDstSubRects[i].top >= PresentDdiArg.DstRect.top",
                        7292LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    if ( DdiSubRectList[v58].bottom > v105.DstRect.bottom )
                    {
                      WdLogSingleEntry0(1LL);
                      WdLogGlobalForLineNumber = 7293;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146LL,
                        0xFFFFFFFFLL,
                        L"pDstSubRects[i].bottom <= PresentDdiArg.DstRect.bottom",
                        7293LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    ++v58;
                  }
                  while ( v58 < v105.SubRectCnt );
                  v7 = v99;
                }
              }
              else
              {
                v105.pDstSubRects = (const RECT *)*((_QWORD *)v10 + 9);
              }
              for ( i = 0; i < v105.SubRectCnt; ++i )
              {
                if ( *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * i) >= *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * i + 8) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 7304;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146LL,
                    0xFFFFFFFFLL,
                    L"pPresent->pSrcSubRects[i].left < pPresent->pSrcSubRects[i].right",
                    7304LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * i + 4) >= *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * i + 12) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 7305;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146LL,
                    0xFFFFFFFFLL,
                    L"pPresent->pSrcSubRects[i].top < pPresent->pSrcSubRects[i].bottom",
                    7305LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( (v10[22] & 0x4000) == 0 )
                {
                  if ( *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * i) < v105.SrcRect.left )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 7310;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146LL,
                      0xFFFFFFFFLL,
                      L"pPresent->pSrcSubRects[i].left >= PresentDdiArg.SrcRect.left",
                      7310LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * i + 8) > v105.SrcRect.right )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 7311;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146LL,
                      0xFFFFFFFFLL,
                      L"pPresent->pSrcSubRects[i].right <= PresentDdiArg.SrcRect.right",
                      7311LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * i + 4) < v105.SrcRect.top )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 7312;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146LL,
                      0xFFFFFFFFLL,
                      L"pPresent->pSrcSubRects[i].top >= PresentDdiArg.SrcRect.top",
                      7312LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * i + 12) > v105.SrcRect.bottom )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 7313;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146LL,
                      0xFFFFFFFFLL,
                      L"pPresent->pSrcSubRects[i].bottom <= PresentDdiArg.SrcRect.bottom",
                      7313LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                }
              }
            }
            else
            {
              if ( (v54 & 2) == 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 7320;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146LL,
                  0xFFFFFFFFLL,
                  L"pPresent->Flags.ColorFill",
                  7320LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                Value = v105.Flags.Value;
              }
              v105.Flags.Value = Value | 2;
              v105.Color = v10[7];
              v105.pDstSubRects = (const RECT *)*((_QWORD *)v10 + 9);
            }
            if ( bTracingEnabled )
            {
              VIDMM_EXPORT::VidMmETWAllocationHandle(
                *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 760LL),
                *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 768LL),
                v10[6]);
              VIDMM_EXPORT::VidMmETWAllocationHandle(
                *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 760LL),
                *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 768LL),
                v10[5]);
              pDstSubRects = v105.pDstSubRects;
              SubRectCnt = v105.SubRectCnt;
              v92 = v90;
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
                  HIDWORD(*(_QWORD *)&v105.DstRect.left),
                  HIDWORD(*(_QWORD *)&v105.DstRect.right),
                  HIDWORD(*(_QWORD *)&v105.SrcRect.right),
                  0LL,
                  v92);
              v68 = 0;
              if ( SubRectCnt )
              {
                v69 = v92;
                while ( 1 )
                {
                  v70 = 0;
                  v71 = SubRectCnt - v68;
                  if ( (unsigned int)v71 > 0x10 )
                    break;
                  v72 = SubRectCnt - v68;
                  if ( (_DWORD)v71 )
                    goto LABEL_136;
LABEL_138:
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  {
                    LODWORD(v81) = v72;
                    LODWORD(v80) = SubRectCnt - v68 <= 0x10;
                    McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
                      (__int64)v110,
                      v71,
                      v65,
                      v69,
                      v80,
                      v81,
                      v110,
                      v109,
                      v108,
                      v107);
                  }
                  v68 += 16;
                  if ( v68 >= SubRectCnt )
                  {
                    v7 = v99;
                    goto LABEL_142;
                  }
                }
                v72 = 16;
LABEL_136:
                v65 = 0LL;
                do
                {
                  v73 = v70 + v68;
                  ++v70;
                  v73 *= 2LL;
                  v65 += 4LL;
                  *(_DWORD *)&v109[v65 + 60] = *(&pDstSubRects->left + 2 * v73);
                  *(_DWORD *)&v108[v65 + 60] = *(&pDstSubRects->right + 2 * v73);
                  *(_DWORD *)&v107[v65 + 60] = *(&pDstSubRects->top + 2 * v73);
                  *(_DWORD *)&v107[v65 - 4] = *(&pDstSubRects->bottom + 2 * v73);
                }
                while ( v70 < v72 );
                goto LABEL_138;
              }
            }
LABEL_142:
            v74 = v100;
            v75 = Entry;
            v11 = DXGCONTEXT::SubmitPresent(
                    v7,
                    (struct _D3DKMT_PRESENT *)v10,
                    *((struct DXGHWQUEUE ***)v10 + 188),
                    v10[23],
                    (struct DXGCONTEXT **)v96.QuadPart,
                    0LL,
                    v10[5],
                    v10[6],
                    &v105,
                    0LL,
                    v90,
                    (struct VIDSCH_SUBMIT_DATA_BASE *)Entry,
                    D3DDDIFMT_A8B8G8R8,
                    v100);
            if ( v11 >= 0 && v10[90] == 1 )
            {
              v96.QuadPart = -100000LL;
              v11 = SubmitPresentHistoryToken(
                      (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v10 + 90),
                      v74,
                      v101,
                      0LL,
                      0,
                      &v96,
                      (struct DXGK_PRESENT_PARAMS *)v10,
                      0LL,
                      v7,
                      0LL,
                      0LL);
            }
          }
          DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v103);
LABEL_148:
          v49 = v75;
          goto LABEL_62;
        }
      }
      else
      {
        *((_QWORD *)v7 + 19) = 0LL;
      }
      v11 = -1073741801;
      WdLogSingleEntry4(
        6LL,
        -1073741801LL,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL),
        *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL),
        v7);
      v41 = *((_QWORD *)v7 + 2);
      WdLogGlobalForLineNumber = 7090;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"0x%I64x Out of memory allocating DXGPRESENT, 0x%I64x 0x%I64x 0x%I64x",
        -1073741801LL,
        *(_QWORD *)(*(_QWORD *)(v41 + 16) + 16LL),
        *(_QWORD *)(v41 + 40),
        (__int64)v7,
        0LL);
      goto LABEL_25;
    }
    v24 = v10[5];
    v25 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v25 + 248));
    v26 = (v24 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v26 < *(_DWORD *)(v25 + 296) )
    {
      v27 = *(_QWORD *)(v25 + 280);
      v28 = *(_DWORD *)(v27 + 16 * v26 + 8);
      if ( ((v24 >> 25) & 0x60) == (*(_BYTE *)(v27 + 16 * v26 + 8) & 0x60) && (v28 & 0x2000) == 0 && (v28 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(v27 + 16 * (((unsigned __int64)v24 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 5 )
        {
          v29 = *(struct _EX_RUNDOWN_REF **)(v27 + 16 * (((unsigned __int64)v24 >> 6) & 0xFFFFFF));
LABEL_35:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v95, v29);
          _InterlockedDecrement((volatile signed __int32 *)(v25 + 264));
          ExReleasePushLockSharedEx(v25 + 248, 0LL);
          KeLeaveCriticalRegion();
          if ( !v95 )
          {
            v11 = -1073741811;
            WdLogSingleEntry3(2LL, -1073741811LL, v7, v10[5]);
            v83 = v10[5];
            WdLogGlobalForLineNumber = 7076;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"0x%I64x 0x%I64x fails Present invalid source allocation 0x%I64x",
              -1073741811LL,
              (__int64)v7,
              v83,
              0LL,
              0LL);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v95);
            goto LABEL_25;
          }
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v95);
          goto LABEL_38;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v29 = 0LL;
    goto LABEL_35;
  }
  v11 = -1073741801;
  WdLogSingleEntry1(6LL, -1073741801LL);
  WdLogGlobalForLineNumber = 7002;
  DxgkLogInternalTriageEvent(
    0LL,
    262145LL,
    0xFFFFFFFFLL,
    L"Failed to allocate memory for present parameters. Returing 0x%I64x",
    -1073741801LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return (unsigned int)v11;
}
