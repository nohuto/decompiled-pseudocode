/*
 * XREFs of ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1403886A4
 * Callers:
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEBD@Z @ 0x1401B17A0 (-DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEBD@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1403FAC10 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x140412F30 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x1400161F8 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer @ 0x1400167BC (McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x14001E170 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x14002B2E0 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14002B430 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1400339D0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034400 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x140035C88 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x14003645C (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z @ 0x1400386C8 (-VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140040898 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x140043530 (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x14004D530 (-VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x14005A26C (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1402CAA10 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1402F09C0 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140317D20 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14034E19C (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x140389D24 (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x140389E64 (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     _DXGADAPTER::SubmitPresentHistoryTokenFromVm_::_45_::ENSURE_DELETE::_ENSURE_DELETE @ 0x140389F78 (_DXGADAPTER--SubmitPresentHistoryTokenFromVm_--_45_--ENSURE_DELETE--_ENSURE_DELETE.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x14038A344 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x14038A500 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1403A0D2C (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
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
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // r13d
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // r8
  int v31; // edx
  struct _EX_RUNDOWN_REF *v32; // rdx
  DXGPRESENT *v33; // rax
  DXGPRESENT *v34; // rax
  __int64 v35; // r8
  int *v36; // rdx
  int v37; // ecx
  __int64 v38; // rax
  __int64 v39; // rcx
  COREDEVICEACCESS *v40; // r12
  int v41; // eax
  struct DXGPRESENTMUTEX *v42; // r8
  const char *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // r12
  unsigned __int8 v46; // r14
  __int64 v47; // r13
  ADAPTER_DISPLAY *v48; // r13
  unsigned int v49; // r12d
  int updated; // eax
  __int64 v51; // rcx
  PVOID v52; // rdx
  struct DXGGLOBAL *v53; // rax
  __int64 v54; // rax
  int CurrentOrientation; // eax
  UINT Value; // eax
  unsigned int v57; // ecx
  __int64 v58; // rax
  const RECT *DdiSubRectList; // r14
  __int64 v60; // r15
  UINT v61; // r15d
  int v62; // r13d
  int v63; // esi
  __int64 v64; // r12
  LONG v65; // r8d
  LONG v66; // edx
  UINT i; // r15d
  __int64 v68; // r8
  const RECT *pDstSubRects; // r15
  UINT SubRectCnt; // r14d
  UINT v71; // ebx
  struct VIDMM_DMA_BUFFER *v72; // rsi
  unsigned int v73; // r10d
  __int64 v74; // rdx
  unsigned int v75; // r9d
  __int64 v76; // rcx
  struct COREDEVICEACCESS *v77; // r15
  PVOID v78; // rbx
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // r9
  struct DXGCONTEXT **v83; // [rsp+20h] [rbp-100h]
  union _LARGE_INTEGER *v84; // [rsp+28h] [rbp-F8h]
  struct DXGK_PRESENT_PARAMS *v85; // [rsp+30h] [rbp-F0h]
  __int64 v86; // [rsp+30h] [rbp-F0h]
  struct DXGK_PRESENT_PARAMS *v87; // [rsp+30h] [rbp-F0h]
  __int64 v88; // [rsp+38h] [rbp-E8h]
  __int64 v89; // [rsp+38h] [rbp-E8h]
  __int64 v90; // [rsp+40h] [rbp-E0h]
  __int64 v91; // [rsp+40h] [rbp-E0h]
  struct VIDMM_DMA_BUFFER *v93; // [rsp+A8h] [rbp-78h] BYREF
  struct _EX_RUNDOWN_REF *v94; // [rsp+B0h] [rbp-70h] BYREF
  struct VIDMM_DMA_BUFFER *v95; // [rsp+B8h] [rbp-68h] BYREF
  ADAPTER_DISPLAY *v96; // [rsp+C0h] [rbp-60h]
  PVOID Entry; // [rsp+C8h] [rbp-58h]
  struct _EX_RUNDOWN_REF *v98; // [rsp+D0h] [rbp-50h] BYREF
  union _LARGE_INTEGER v99; // [rsp+D8h] [rbp-48h] BYREF
  _QWORD v100[2]; // [rsp+E0h] [rbp-40h] BYREF
  struct DXGHWQUEUE *v101; // [rsp+F0h] [rbp-30h] BYREF
  DXGCONTEXT *v102; // [rsp+F8h] [rbp-28h]
  COREDEVICEACCESS *v103; // [rsp+100h] [rbp-20h]
  DXGADAPTERSTOPRESETLOCKSHARED *v104; // [rsp+108h] [rbp-18h]
  _BYTE v105[16]; // [rsp+110h] [rbp-10h] BYREF
  _BYTE v106[24]; // [rsp+120h] [rbp+0h] BYREF
  __int64 v107; // [rsp+138h] [rbp+18h]
  struct _DXGKARG_PRESENT v108; // [rsp+140h] [rbp+20h] BYREF
  _BYTE v110[64]; // [rsp+1F0h] [rbp+D0h] BYREF
  _BYTE v111[64]; // [rsp+230h] [rbp+110h] BYREF
  _BYTE v112[64]; // [rsp+270h] [rbp+150h] BYREF
  _BYTE v113[64]; // [rsp+2B0h] [rbp+190h] BYREF

  v104 = a5;
  v7 = this;
  v99.QuadPart = (LONGLONG)a6;
  v103 = a4;
  v102 = this;
  Global = DXGGLOBAL::GetGlobal();
  v9 = (unsigned int *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 1104));
  v10 = v9;
  if ( v9 )
  {
    memset(v9, 0, 0x5F8uLL);
    v95 = (struct VIDMM_DMA_BUFFER *)v10;
    v101 = 0LL;
    memmove(v10, &a2->PrivatePresentData, 0x5D8uLL);
    *((_QWORD *)v10 + 188) = &v101;
    if ( a2->hHwQueues )
      v12 = *a2->hHwQueues;
    else
      v12 = 0;
    DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
      (DXGHWQUEUEBYHANDLE *)v105,
      v12,
      *(struct DXGPROCESS **)(*((_QWORD *)v7 + 2) + 40LL),
      &v101,
      1,
      1);
    v13 = *((_QWORD *)v7 + 2);
    v14 = *(_QWORD *)(v13 + 1880);
    v107 = *(_QWORD *)(*(_QWORD *)(v13 + 40) + 88LL);
    v15 = *(ADAPTER_DISPLAY **)(v14 + 3120);
    v96 = v15;
    if ( !v15 || !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(v15) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6999;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"(pDisplayCore != NULL) && pDisplayCore->IsCoreResourceSharedOwner()",
        6999LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)v7 + 2) + 16LL)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7000;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"GetRenderCore()->IsCoreResourceSharedOwner()",
        7000LL,
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
      v91 = v10[22];
      v89 = v10[16];
      v87 = (struct DXGK_PRESENT_PARAMS *)*((_QWORD *)v10 + 9);
      WdLogGlobalForLineNumber = 7015;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"ret = 0x%I64x 0x%I64x failed with invalid parameters 0x%I64x 0x%I64x 0x%I64x",
        -1073741811LL,
        (__int64)v7,
        (__int64)v87,
        v89,
        v91);
      goto LABEL_151;
    }
    memset(&v108, 0, sizeof(v108));
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
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v23 = 0LL;
LABEL_23:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v94, v23);
    _InterlockedDecrement((volatile signed __int32 *)(v19 + 264));
    ExReleasePushLockSharedEx(v19 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( !v94 )
    {
      v11 = -1073741811;
      WdLogSingleEntry5(2LL, -1073741811LL, v7, *((_QWORD *)v10 + 9), v10[16], v10[6]);
      v90 = v10[6];
      v88 = v10[16];
      v85 = (struct DXGK_PRESENT_PARAMS *)*((_QWORD *)v10 + 9);
      WdLogGlobalForLineNumber = 7028;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"0x%I64x 0x%I64x fails Present invalid parameters 0x%I64x 0x%I64x 0x%I64x",
        -1073741811LL,
        (__int64)v7,
        (__int64)v85,
        v88,
        v90);
LABEL_25:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v94);
LABEL_151:
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v105);
      DXGADAPTER::SubmitPresentHistoryTokenFromVm_::_45_::ENSURE_DELETE::_ENSURE_DELETE(&v95, v79, v80, v81);
      return (unsigned int)v11;
    }
    if ( (v10[22] & 1) == 0 )
    {
LABEL_38:
      if ( *((_QWORD *)v7 + 19) )
        goto LABEL_41;
      v33 = (DXGPRESENT *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(1648LL, v24, v25, v26);
      if ( v33 )
      {
        v34 = DXGPRESENT::DXGPRESENT(v33, 1);
        *((_QWORD *)v7 + 19) = v34;
        if ( v34 )
        {
LABEL_41:
          CVidSchSubmitData::CVidSchSubmitData(
            (CVidSchSubmitData *)v100,
            *(struct ADAPTER_RENDER **)(*((_QWORD *)v7 + 2) + 16LL),
            1);
          v36 = (int *)v100[0];
          Entry = (PVOID)v100[0];
          if ( !v100[0] )
          {
            WdLogSingleEntry0(6LL);
            WdLogGlobalForLineNumber = 7064;
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              0xFFFFFFFFLL,
              L"Failed to allocate VidSchSubmitData",
              7064LL,
              0LL,
              0LL,
              0LL,
              0LL);
            CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v100);
            v11 = -1073741801;
            goto LABEL_25;
          }
          v37 = *(_DWORD *)v100[0] | 0x10000;
          *(_DWORD *)v100[0] = v37;
          if ( !_bittest((const signed __int32 *)v10 + 22, 0xEu) )
          {
            v37 |= 1u;
            *v36 = v37;
          }
          *v36 = v37 | 0x100;
          LOBYTE(v35) = 1;
          v38 = *((_QWORD *)v7 + 2);
          v39 = *((_QWORD *)v7 + 29);
          v93 = 0LL;
          v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, struct VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 760LL) + 8LL)
                                                                                                + 464LL))(
                  v39,
                  0LL,
                  v35,
                  &v93);
          if ( v11 < 0 )
          {
            v78 = Entry;
            goto LABEL_148;
          }
          if ( !v93 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 7082;
            DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pVidMmDmaBuffer", 7082LL, 0LL, 0LL, 0LL, 0LL);
          }
          DXGPRESENTMUTEX::DXGPRESENTMUTEX(
            (DXGPRESENTMUTEX *)v106,
            *(struct ADAPTER_RENDER *const *)(*((_QWORD *)v7 + 2) + 16LL));
          if ( !_bittest((const signed __int32 *)v10 + 22, 0xEu) )
          {
            v40 = v103;
            COREDEVICEACCESS::Release(v103);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v104);
            DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v106);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v104);
            v41 = COREDEVICEACCESS::AcquireShared(v40, 0LL);
            v11 = v41;
            if ( v41 < 0 )
            {
              WdLogSingleEntry2(4LL, v41, v7);
              WdLogGlobalForLineNumber = 7100;
              COREDEVICEACCESS::AcquireSharedUncheck(v40, v43);
              VIDMM_EXPORT::VidMmReleaseDmaBuffer(
                *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 760LL),
                v93);
LABEL_50:
              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v106);
              CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v100);
              goto LABEL_25;
            }
            v45 = v107;
            v46 = 0;
            if ( v107 )
            {
              v47 = *((_QWORD *)v7 + 19);
              if ( *(_DWORD *)(v47 + 8) != (*(unsigned int (**)(void))(v107 + 8))() )
              {
                *(_DWORD *)(v47 + 8) = (*(__int64 (**)(void))(v45 + 8))();
                DXGDEVICE::FlushScheduler(*((_QWORD *)v7 + 2), 2LL, 4294967293LL, 0LL);
                v46 = 1;
              }
            }
            DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)v7 + 2), v7, v42, v46);
          }
          if ( (v10[22] & 1) == 0 || v10[5] == v10[6] )
          {
            v48 = v96;
          }
          else
          {
            v48 = v96;
            if ( (*(_DWORD *)(v94[6].Count + 4) & 2) != 0 )
            {
              v49 = a3;
              updated = DxgkCddUpdatePresentRects(v96, a3, (const struct tagRECT **)v10 + 9, v10 + 16);
              v11 = updated;
              if ( updated < 0 )
              {
                WdLogSingleEntry3(4LL, updated, *((_QWORD *)v7 + 2), a3);
                v51 = *((_QWORD *)v7 + 2);
                WdLogGlobalForLineNumber = 7138;
                VIDMM_EXPORT::VidMmReleaseDmaBuffer(*(VIDMM_EXPORT **)(*(_QWORD *)(v51 + 16) + 760LL), v93);
                v93 = 0LL;
                DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v106);
                v52 = Entry;
LABEL_62:
                ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v100[1] + 1424LL), v52);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v94);
                DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v105);
                v53 = DXGGLOBAL::GetGlobal();
                ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v53 + 1104), v10);
                return (unsigned int)v11;
              }
              if ( !v10[16] )
              {
                WdLogSingleEntry4(4LL, 0LL, *((_QWORD *)v7 + 2), v10[6], a3);
                v54 = *((_QWORD *)v7 + 2);
                WdLogGlobalForLineNumber = 7153;
                VIDMM_EXPORT::VidMmReleaseDmaBuffer(*(VIDMM_EXPORT **)(*(_QWORD *)(v54 + 16) + 760LL), v93);
                v93 = 0LL;
                DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v106);
                CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v100);
                v11 = 0;
                goto LABEL_25;
              }
              goto LABEL_67;
            }
          }
          v49 = a3;
LABEL_67:
          v11 = DXGPRESENT::GrowRectList(*((DXGPRESENT **)v7 + 19), v10[16]);
          if ( v11 < 0 )
          {
            VIDMM_EXPORT::VidMmReleaseDmaBuffer(
              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 760LL),
              v93);
            v93 = 0LL;
            v78 = Entry;
          }
          else
          {
            v108.DstRect = (RECT)*((_OWORD *)v10 + 2);
            v108.SubRectCnt = v10[16];
            if ( (v10[22] & 0x4000) != 0 )
            {
              Value = v108.Flags.Value;
            }
            else
            {
              CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation((__int64)v48, v49, 1);
              Value = (CurrentOrientation != 1 ? 0x80 : 0) | v108.Flags.Value & 0xFFFFFF7F;
              v108.Flags.Value = Value;
            }
            v57 = v10[22];
            if ( (v57 & 1) != 0 )
            {
              v108.Flags.Value = Value | 1;
              v108.SrcRect = (RECT)*((_OWORD *)v10 + 3);
              if ( v10[5] == v10[6] )
              {
                if ( (v10[22] & 0x4000) == 0 && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v48, v49) )
                {
                  v11 = -1071774910;
                  WdLogSingleEntry4(4LL, -1071774910LL, *((_QWORD *)v7 + 2), v10[6], v49);
                  v58 = *((_QWORD *)v7 + 2);
                  WdLogGlobalForLineNumber = 7211;
                  VIDMM_EXPORT::VidMmReleaseDmaBuffer(*(VIDMM_EXPORT **)(*(_QWORD *)(v58 + 16) + 760LL), v93);
                  v93 = 0LL;
                  goto LABEL_50;
                }
                DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)v7 + 19), 0);
                v108.pDstSubRects = DdiSubRectList;
                if ( v108.DstRect.right - v108.DstRect.left != v108.SrcRect.right - v108.SrcRect.left )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 7230;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"PresentDdiArg.DstRect.right - PresentDdiArg.DstRect.left == PresentDdiArg.SrcRect.right - PresentDdi"
                     "Arg.SrcRect.left",
                    7230LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( v108.DstRect.bottom - v108.DstRect.top != v108.SrcRect.bottom - v108.SrcRect.top )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 7233;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"PresentDdiArg.DstRect.bottom - PresentDdiArg.DstRect.top == PresentDdiArg.SrcRect.bottom - PresentDd"
                     "iArg.SrcRect.top",
                    7233LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( v108.SrcRect.left >= v108.SrcRect.right )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 7235;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"PresentDdiArg.SrcRect.left < PresentDdiArg.SrcRect.right",
                    7235LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( v108.SrcRect.left < 0 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 7236;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"PresentDdiArg.SrcRect.left >= 0",
                    7236LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                v60 = 3984LL * v49;
                if ( v108.SrcRect.right > *(_DWORD *)(v60 + *((_QWORD *)v48 + 16) + 636)
                                        - *(_DWORD *)(v60 + *((_QWORD *)v48 + 16) + 628) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 7237;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"PresentDdiArg.SrcRect.right <= pDisplayCore->GetContentRect(VidPnSourceId)->right - pDisplayCore->Ge"
                     "tContentRect(VidPnSourceId)->left",
                    7237LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( v108.DstRect.top >= v108.DstRect.bottom )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 7239;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"PresentDdiArg.DstRect.top < PresentDdiArg.DstRect.bottom",
                    7239LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( v108.DstRect.top < 0 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 7240;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"PresentDdiArg.DstRect.top >= 0",
                    7240LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( v108.SrcRect.bottom > *(_DWORD *)(v60 + *((_QWORD *)v48 + 16) + 640)
                                         - *(_DWORD *)(v60 + *((_QWORD *)v48 + 16) + 632) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 7241;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"PresentDdiArg.SrcRect.bottom <= pDisplayCore->GetContentRect(VidPnSourceId)->bottom - pDisplayCore->"
                     "GetContentRect(VidPnSourceId)->top",
                    7241LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                v61 = 0;
                v62 = v108.DstRect.left - v108.SrcRect.left;
                if ( v108.SubRectCnt )
                {
                  v63 = v108.DstRect.top - v108.SrcRect.top;
                  do
                  {
                    v64 = v61;
                    v65 = v62 + *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * v61);
                    DdiSubRectList[v64].left = v65;
                    v66 = v62 + *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * v61 + 8);
                    DdiSubRectList[v64].right = v66;
                    DdiSubRectList[v64].top = v63 + *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * v61 + 4);
                    DdiSubRectList[v64].bottom = v63 + *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * v61 + 12);
                    if ( v65 >= v66 )
                    {
                      WdLogSingleEntry0(1LL);
                      WdLogGlobalForLineNumber = 7253;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        0xFFFFFFFFLL,
                        L"pDstSubRects[i].left < pDstSubRects[i].right",
                        7253LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    if ( DdiSubRectList[v61].left < v108.DstRect.left )
                    {
                      WdLogSingleEntry0(1LL);
                      WdLogGlobalForLineNumber = 7254;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        0xFFFFFFFFLL,
                        L"pDstSubRects[i].left >= PresentDdiArg.DstRect.left",
                        7254LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    if ( DdiSubRectList[v61].right > v108.DstRect.right )
                    {
                      WdLogSingleEntry0(1LL);
                      WdLogGlobalForLineNumber = 7255;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        0xFFFFFFFFLL,
                        L"pDstSubRects[i].right <= PresentDdiArg.DstRect.right",
                        7255LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    if ( DdiSubRectList[v61].top >= DdiSubRectList[v61].bottom )
                    {
                      WdLogSingleEntry0(1LL);
                      WdLogGlobalForLineNumber = 7256;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        0xFFFFFFFFLL,
                        L"pDstSubRects[i].top < pDstSubRects[i].bottom",
                        7256LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    if ( DdiSubRectList[v61].top < v108.DstRect.top )
                    {
                      WdLogSingleEntry0(1LL);
                      WdLogGlobalForLineNumber = 7257;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        0xFFFFFFFFLL,
                        L"pDstSubRects[i].top >= PresentDdiArg.DstRect.top",
                        7257LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    if ( DdiSubRectList[v61].bottom > v108.DstRect.bottom )
                    {
                      WdLogSingleEntry0(1LL);
                      WdLogGlobalForLineNumber = 7258;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        0xFFFFFFFFLL,
                        L"pDstSubRects[i].bottom <= PresentDdiArg.DstRect.bottom",
                        7258LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    ++v61;
                  }
                  while ( v61 < v108.SubRectCnt );
                  v7 = v102;
                }
              }
              else
              {
                v108.pDstSubRects = (const RECT *)*((_QWORD *)v10 + 9);
              }
              for ( i = 0; i < v108.SubRectCnt; ++i )
              {
                if ( *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * i) >= *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * i + 8) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 7269;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"pPresent->pSrcSubRects[i].left < pPresent->pSrcSubRects[i].right",
                    7269LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * i + 4) >= *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * i + 12) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 7270;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"pPresent->pSrcSubRects[i].top < pPresent->pSrcSubRects[i].bottom",
                    7270LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( (v10[22] & 0x4000) == 0 )
                {
                  if ( *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * i) < v108.SrcRect.left )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 7275;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      0xFFFFFFFFLL,
                      L"pPresent->pSrcSubRects[i].left >= PresentDdiArg.SrcRect.left",
                      7275LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * i + 8) > v108.SrcRect.right )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 7276;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      0xFFFFFFFFLL,
                      L"pPresent->pSrcSubRects[i].right <= PresentDdiArg.SrcRect.right",
                      7276LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * i + 4) < v108.SrcRect.top )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 7277;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      0xFFFFFFFFLL,
                      L"pPresent->pSrcSubRects[i].top >= PresentDdiArg.SrcRect.top",
                      7277LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * i + 12) > v108.SrcRect.bottom )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 7278;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      0xFFFFFFFFLL,
                      L"pPresent->pSrcSubRects[i].bottom <= PresentDdiArg.SrcRect.bottom",
                      7278LL,
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
              if ( (v57 & 2) == 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 7285;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  0xFFFFFFFFLL,
                  L"pPresent->Flags.ColorFill",
                  7285LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                Value = v108.Flags.Value;
              }
              v108.Flags.Value = Value | 2;
              v108.Color = v10[7];
              v108.pDstSubRects = (const RECT *)*((_QWORD *)v10 + 9);
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
              pDstSubRects = v108.pDstSubRects;
              SubRectCnt = v108.SubRectCnt;
              v95 = v93;
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
                  HIDWORD(*(_QWORD *)&v108.DstRect.left),
                  HIDWORD(*(_QWORD *)&v108.DstRect.right),
                  HIDWORD(*(_QWORD *)&v108.SrcRect.right),
                  0LL,
                  v95);
              v71 = 0;
              if ( SubRectCnt )
              {
                v72 = v95;
                while ( 1 )
                {
                  v73 = 0;
                  v74 = SubRectCnt - v71;
                  if ( (unsigned int)v74 > 0x10 )
                    break;
                  v75 = SubRectCnt - v71;
                  if ( (_DWORD)v74 )
                    goto LABEL_136;
LABEL_138:
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  {
                    LODWORD(v84) = v75;
                    LODWORD(v83) = SubRectCnt - v71 <= 0x10;
                    McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
                      (__int64)v113,
                      v74,
                      v68,
                      v72,
                      v83,
                      v84,
                      v113,
                      v112,
                      v111,
                      v110);
                  }
                  v71 += 16;
                  if ( v71 >= SubRectCnt )
                  {
                    v7 = v102;
                    goto LABEL_142;
                  }
                }
                v75 = 16;
LABEL_136:
                v68 = 0LL;
                do
                {
                  v76 = v73 + v71;
                  ++v73;
                  v76 *= 2LL;
                  v68 += 4LL;
                  *(_DWORD *)&v112[v68 + 60] = *(&pDstSubRects->left + 2 * v76);
                  *(_DWORD *)&v111[v68 + 60] = *(&pDstSubRects->right + 2 * v76);
                  *(_DWORD *)&v110[v68 + 60] = *(&pDstSubRects->top + 2 * v76);
                  *(_DWORD *)&v110[v68 - 4] = *(&pDstSubRects->bottom + 2 * v76);
                }
                while ( v73 < v75 );
                goto LABEL_138;
              }
            }
LABEL_142:
            v77 = v103;
            v78 = Entry;
            v11 = DXGCONTEXT::SubmitPresent(
                    v7,
                    (struct _D3DKMT_PRESENT *)v10,
                    *((struct DXGHWQUEUE ***)v10 + 188),
                    v10[23],
                    (struct DXGCONTEXT **)v99.QuadPart,
                    0LL,
                    v10[5],
                    v10[6],
                    &v108,
                    0LL,
                    v93,
                    (struct VIDSCH_SUBMIT_DATA_BASE *)Entry,
                    D3DDDIFMT_A8B8G8R8,
                    v103);
            if ( v11 >= 0 && v10[90] == 1 )
            {
              v99.QuadPart = -100000LL;
              v11 = SubmitPresentHistoryToken(
                      (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v10 + 90),
                      v77,
                      v104,
                      0LL,
                      0,
                      &v99,
                      (struct DXGK_PRESENT_PARAMS *)v10,
                      0LL,
                      v7,
                      0LL,
                      0LL);
            }
          }
          DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v106);
LABEL_148:
          v52 = v78;
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
      v44 = *((_QWORD *)v7 + 2);
      WdLogGlobalForLineNumber = 7055;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"0x%I64x Out of memory allocating DXGPRESENT, 0x%I64x 0x%I64x 0x%I64x",
        -1073741801LL,
        *(_QWORD *)(*(_QWORD *)(v44 + 16) + 16LL),
        *(_QWORD *)(v44 + 40),
        (__int64)v7,
        0LL);
      goto LABEL_25;
    }
    v27 = v10[5];
    v28 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v28 + 248));
    v29 = (v27 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v29 < *(_DWORD *)(v28 + 296) )
    {
      v30 = *(_QWORD *)(v28 + 280);
      v31 = *(_DWORD *)(v30 + 16 * v29 + 8);
      if ( ((v27 >> 25) & 0x60) == (*(_BYTE *)(v30 + 16 * v29 + 8) & 0x60) && (v31 & 0x2000) == 0 && (v31 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(v30 + 16 * (((unsigned __int64)v27 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 5 )
        {
          v32 = *(struct _EX_RUNDOWN_REF **)(v30 + 16 * (((unsigned __int64)v27 >> 6) & 0xFFFFFF));
LABEL_35:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v98, v32);
          _InterlockedDecrement((volatile signed __int32 *)(v28 + 264));
          ExReleasePushLockSharedEx(v28 + 248, 0LL);
          KeLeaveCriticalRegion();
          if ( !v98 )
          {
            v11 = -1073741811;
            WdLogSingleEntry3(2LL, -1073741811LL, v7, v10[5]);
            v86 = v10[5];
            WdLogGlobalForLineNumber = 7041;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"0x%I64x 0x%I64x fails Present invalid source allocation 0x%I64x",
              -1073741811LL,
              (__int64)v7,
              v86,
              0LL,
              0LL);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v98);
            goto LABEL_25;
          }
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v98);
          goto LABEL_38;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v32 = 0LL;
    goto LABEL_35;
  }
  v11 = -1073741801;
  WdLogSingleEntry1(6LL, -1073741801LL);
  WdLogGlobalForLineNumber = 6967;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    0xFFFFFFFFLL,
    L"Failed to allocate memory for present parameters. Returing 0x%I64x",
    -1073741801LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return (unsigned int)v11;
}
