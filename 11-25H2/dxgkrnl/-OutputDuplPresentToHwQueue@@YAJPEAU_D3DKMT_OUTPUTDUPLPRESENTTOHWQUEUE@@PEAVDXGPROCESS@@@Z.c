/*
 * XREFs of ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x140300A14
 * Callers:
 *     NtDxgkOutputDuplPresentToHwQueue @ 0x140322480 (NtDxgkOutputDuplPresentToHwQueue.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1400138E0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14001C1A0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14001DE10 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x14001E170 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14001E450 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140022F40 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1400262A0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14002B430 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140033D08 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x14004AB20 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1400670D8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14006735C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x14028D460 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402E7568 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1402FFB70 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$03@@QEAAPEAPEAVDXGHWQUEUE@@I@Z @ 0x140301990 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$03@@QEAAPEAPEAVDXGHWQUEUE@@I@Z.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x140301CE0 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z @ 0x140303628 (-OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z.c)
 */

__int64 __fastcall OutputDuplPresentToHwQueue(struct _D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE *a1, struct DXGPROCESS *a2)
{
  int v2; // eax
  __int64 v5; // rdx
  unsigned int *v6; // rdx
  struct DXGHWQUEUE *v7; // rbx
  volatile signed __int64 *v8; // rsi
  struct DXGDEVICE **v9; // r15
  __int64 v10; // r9
  unsigned __int64 v11; // rbx
  struct DXGDEVICE ***Pool2; // rcx
  unsigned int i; // r14d
  __int64 v14; // r9
  __int64 v15; // rcx
  struct DXGADAPTER **v16; // rbx
  struct DXGADAPTER **v17; // rax
  int OutputDuplManager; // ebx
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rbx
  struct DXGDEVICE *v20; // rax
  struct DXGDEVICE *v21; // r8
  __int64 v22; // rcx
  struct DXGADAPTER *v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  int v27; // esi
  ADAPTER_DISPLAY *v28; // rsi
  char v29; // bl
  struct DXGGLOBAL *Global; // rax
  const struct DXGK_PRESENT_PARAMS *v31; // rax
  const struct DXGK_PRESENT_PARAMS *v32; // rsi
  struct DXGGLOBAL *v33; // rax
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  unsigned int v37; // edx
  __int64 v38; // rcx
  struct DXGCONTEXT *v39; // rbx
  struct DXGADAPTER **v40; // rax
  int v41; // eax
  unsigned __int64 v42; // rdx
  unsigned int v43; // ebx
  __int64 CurrentProcess; // rax
  __int64 v45; // r9
  unsigned int v46; // eax
  __int64 v47; // r9
  int v48; // ecx
  __int64 v49; // rcx
  _QWORD *v50; // rdx
  char *v51; // rax
  _QWORD *v52; // rcx
  struct DXGDEVICE ***v53; // rcx
  struct DXGDEVICE ***v54; // rcx
  struct DXGDEVICE ***v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // [rsp+20h] [rbp-E0h]
  struct DXGDEVICE ***v59; // [rsp+50h] [rbp-B0h]
  _BYTE v60[32]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v61; // [rsp+78h] [rbp-88h]
  DXGADAPTER *v62; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v63; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v65[32]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v66; // [rsp+B8h] [rbp-48h]
  DXGADAPTER *v67; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v68; // [rsp+C8h] [rbp-38h] BYREF
  DXGADAPTER *v69; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v70; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v71; // [rsp+E0h] [rbp-20h] BYREF
  int v72; // [rsp+E8h] [rbp-18h]
  _BYTE v73[16]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v74; // [rsp+100h] [rbp+0h]
  OUTPUTDUPL_MGR *v75; // [rsp+108h] [rbp+8h] BYREF
  struct DXGHWQUEUE *v76; // [rsp+110h] [rbp+10h] BYREF
  struct DXGCONTEXT *v77; // [rsp+118h] [rbp+18h] BYREF
  char v78[8]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v79; // [rsp+128h] [rbp+28h]
  char v80; // [rsp+130h] [rbp+30h]
  _QWORD v81[6]; // [rsp+138h] [rbp+38h] BYREF
  char v82; // [rsp+168h] [rbp+68h]
  _BYTE v83[16]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v84[32]; // [rsp+180h] [rbp+80h] BYREF
  char v85[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v86[8]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v87; // [rsp+1B0h] [rbp+B0h]
  __int64 v88; // [rsp+1B8h] [rbp+B8h]
  char v89; // [rsp+1C0h] [rbp+C0h]
  __int64 v90; // [rsp+1C8h] [rbp+C8h]
  _BYTE v91[64]; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v92; // [rsp+228h] [rbp+128h]
  char v93; // [rsp+230h] [rbp+130h]

  v2 = *((_DWORD *)a1 + 14);
  v69 = 0LL;
  if ( (v2 & 8) != 0 )
  {
    v37 = *((_DWORD *)a1 + 15);
    v77 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v83, v37, a2, &v77, 0, 1);
    v39 = v77;
    if ( v77 )
    {
      v40 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v69);
      v41 = OutputDuplPreIndirectPresent(*((struct DXGDEVICE **)v39 + 2), *((_DWORD *)a1 + 1), v40, &v70);
      if ( v41 >= 0 )
      {
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v83);
        goto LABEL_2;
      }
      OutputDuplManager = v41;
    }
    else
    {
      v43 = *((_DWORD *)a1 + 15);
      CurrentProcess = PsGetCurrentProcess(v38);
      v45 = v43;
      OutputDuplManager = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, CurrentProcess, v45);
      WdLogGlobalForLineNumber = 2722;
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v83);
    goto LABEL_174;
  }
LABEL_2:
  v5 = *((unsigned int *)a1 + 2);
  P = 0LL;
  v66 = 0;
  if ( !PagedPoolZeroedArray<DXGHWQUEUE *,4>::AllocateElements(&P, v5) )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2739;
LABEL_169:
    if ( P != v65 && P )
      ExFreePoolWithTag(P, 0);
    OutputDuplManager = -1073741801;
    goto LABEL_173;
  }
  v6 = (unsigned int *)*((_QWORD *)a1 + 2);
  v76 = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v73, *v6, a2, &v76, 0, 1);
  v7 = v76;
  if ( !v76 )
  {
    WdLogSingleEntry1(3LL, **((unsigned int **)a1 + 2));
    WdLogGlobalForLineNumber = 2749;
    goto LABEL_150;
  }
  *(_QWORD *)P = v76;
  if ( !v69 )
  {
    v8 = *(volatile signed __int64 **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 1880LL);
    v69 = (DXGADAPTER *)v8;
    if ( v8 )
    {
      _InterlockedIncrement64(v8 + 3);
      v70 = -1LL;
      v7 = v76;
    }
  }
  v9 = (struct DXGDEVICE **)*((_QWORD *)v7 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v71, v9[2]);
  v11 = *((unsigned int *)a1 + 2);
  Pool2 = 0LL;
  v59 = 0LL;
  v61 = 0;
  if ( (unsigned int)v11 <= 4 )
  {
    Pool2 = (struct DXGDEVICE ***)v60;
    v59 = (struct DXGDEVICE ***)v60;
    if ( (_DWORD)v11 )
    {
      memset(v60, 0, 8LL * (unsigned int)v11);
      Pool2 = (struct DXGDEVICE ***)v60;
    }
    goto LABEL_10;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v11 >= 8 )
  {
    Pool2 = (struct DXGDEVICE ***)ExAllocatePool2(256LL, 8 * v11, 1265072196LL, v10);
    v59 = Pool2;
LABEL_10:
    v61 = v11;
  }
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2768;
LABEL_165:
    if ( v59 != (struct DXGDEVICE ***)v60 && v59 )
      ExFreePoolWithTag(v59, 0);
    v61 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v71);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v73);
    goto LABEL_169;
  }
  *Pool2 = v9;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v84, a2);
  for ( i = 1; ; ++i )
  {
    if ( i >= *((_DWORD *)a1 + 2) )
    {
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v84);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        (__int64)v81,
        v59,
        v61,
        v14,
        1);
      if ( v82 )
      {
        if ( !v81[0] )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 2829;
          goto LABEL_164;
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 2834;
      }
      else
      {
        v67 = 0LL;
        v62 = 0LL;
        v75 = 0LL;
        if ( !v69 || (unsigned int)DxgIsRemoteSessionUsingXddmMonitors(v15) )
        {
          RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
          v75 = RemoteOutputDuplMgr;
        }
        else
        {
          v16 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v62);
          v17 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v67);
          OutputDuplManager = FindOutputDuplManager(v69, *((_DWORD *)a1 + 1), v17, &v68, v16, &v63, &v75);
          if ( OutputDuplManager < 0 )
          {
            if ( v62 )
              DXGADAPTER::ReleaseReference(v62);
            v62 = 0LL;
            if ( v67 )
              DXGADAPTER::ReleaseReference(v67);
            v67 = 0LL;
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v81);
            if ( v59 != (struct DXGDEVICE ***)v60 && v59 )
              ExFreePoolWithTag(v59, 0);
            v61 = 0;
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v71);
            goto LABEL_45;
          }
          RemoteOutputDuplMgr = v75;
        }
        if ( !RemoteOutputDuplMgr )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2858;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"Failed to get output dupl manager",
            2858LL,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v62, 0LL);
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v67, 0LL);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v81);
          if ( v59 != (struct DXGDEVICE ***)v60 && v59 )
            ExFreePoolWithTag(v59, 0);
          v61 = 0;
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v71);
          DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v73);
          if ( P != v65 && P )
            ExFreePoolWithTag(P, 0);
          OutputDuplManager = -1073741275;
          goto LABEL_173;
        }
        if ( *((_DWORD *)a1 + 1) >= *((_DWORD *)RemoteOutputDuplMgr + 19) )
        {
          WdLogSingleEntry1(2LL, *((unsigned int *)a1 + 1));
          v58 = *((unsigned int *)a1 + 1);
          WdLogGlobalForLineNumber = 2865;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"VidPn source 0x%I64x is not valid for output duplication manager",
            v58,
            0LL,
            0LL,
            0LL,
            0LL);
          if ( v62 )
            DXGADAPTER::ReleaseReference(v62);
          v62 = 0LL;
          if ( v67 )
            DXGADAPTER::ReleaseReference(v67);
          v67 = 0LL;
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v81);
          if ( v59 != (struct DXGDEVICE ***)v60 && v59 )
            ExFreePoolWithTag(v59, 0);
          v61 = 0;
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v71);
          DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v73);
          if ( P != v65 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v66 = 0;
          if ( v69 )
            DXGADAPTER::ReleaseReference(v69);
          return -1073741811LL;
        }
        v20 = v9[2];
        v80 = 0;
        v79 = *(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v78);
        v21 = v9[2];
        v22 = *(_QWORD *)(*((_QWORD *)v21 + 2) + 16LL);
        v88 = v22;
        v89 = 0;
        v90 = 0LL;
        if ( v22 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v22 + 24));
          v87 = -1LL;
          RemoteOutputDuplMgr = v75;
        }
        v23 = (struct DXGADAPTER *)*((_QWORD *)v21 + 235);
        if ( !v23 )
          v23 = *(struct DXGADAPTER **)(*((_QWORD *)v21 + 2) + 16LL);
        COREACCESS::COREACCESS((COREACCESS *)v91, v23);
        v92 = v24;
        v25 = *(_QWORD *)(v24 + 1880);
        if ( v25 == *(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL) || (v93 = 1, !v25) )
          v93 = 0;
        v27 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v85, 0LL);
        if ( v27 < 0 )
        {
          COREACCESS::~COREACCESS((COREACCESS *)v91, v26);
          COREACCESS::~COREACCESS((COREACCESS *)v86, v42);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v78);
          if ( v62 )
            DXGADAPTER::ReleaseReference(v62);
          v62 = 0LL;
          if ( v67 )
            DXGADAPTER::ReleaseReference(v67);
          v67 = 0LL;
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v81);
          if ( v59 != (struct DXGDEVICE ***)v60 && v59 )
            ExFreePoolWithTag(v59, 0);
          v61 = 0;
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v71);
          DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v73);
          if ( P != v65 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v66 = 0;
          if ( v69 )
            DXGADAPTER::ReleaseReference(v69);
          return (unsigned int)v27;
        }
        if ( (*((_DWORD *)a1 + 14) & 0xA) != 0 )
          goto LABEL_36;
        v28 = (ADAPTER_DISPLAY *)*((_QWORD *)v62 + 390);
        if ( v28 )
        {
          if ( !a2 || (v29 = 1, !(*(unsigned int (**)(void))(*((_QWORD *)a2 + 11) + 232LL))()) )
            v29 = 0;
          v74 = (unsigned int)Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_featureState;
          if ( (Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_featureState & 0x10) == 0 )
          {
            LODWORD(v74) = Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_featureState | 1;
            wil_details_FeatureReporting_ReportUsageToService(
              (__int64)&Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_descriptor,
              v74,
              3LL);
            wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
              v74,
              3,
              (__int64)&Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_descriptor);
          }
          if ( !v29 && !ADAPTER_DISPLAY::IsVidPnSourceOwner(v28, v9[2], *((_DWORD *)a1 + 1)) )
          {
            WdLogSingleEntry2(3LL, v9, *((unsigned int *)a1 + 1));
            WdLogGlobalForLineNumber = 2896;
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v85);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v78);
            DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v62, 0LL);
            DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v67, 0LL);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v81);
            if ( v59 != (struct DXGDEVICE ***)v60 && v59 )
              ExFreePoolWithTag(v59, 0);
            v61 = 0;
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v71);
            DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v73);
            if ( P != v65 && P )
              ExFreePoolWithTag(P, 0);
            OutputDuplManager = -1071775744;
            goto LABEL_173;
          }
          RemoteOutputDuplMgr = v75;
LABEL_36:
          Global = DXGGLOBAL::GetGlobal();
          v31 = (const struct DXGK_PRESENT_PARAMS *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 1104));
          v32 = v31;
          if ( v31 )
          {
            memset(v31, 0, 0x5F8uLL);
            *((_QWORD *)v32 + 188) = P;
            OutputDuplManager = OUTPUTDUPL_MGR::ProcessPresent(
                                  RemoteOutputDuplMgr,
                                  (struct DXGCONTEXT *)v9,
                                  *(struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS *)((char *)a1 + 56),
                                  *(_DWORD *)a1,
                                  *((_DWORD *)a1 + 2) - 1,
                                  (struct _D3DKMT_PRESENT_RGNS *)((char *)a1 + 24),
                                  v32,
                                  *((_DWORD *)a1 + 1),
                                  (struct DXGCONTEXT **)v59,
                                  (struct COREDEVICEACCESS *)v85);
            v33 = DXGGLOBAL::GetGlobal();
            ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v33 + 1104), v32);
            COREACCESS::~COREACCESS((COREACCESS *)v91, v34);
            COREACCESS::~COREACCESS((COREACCESS *)v86, v35);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v78);
            if ( v62 )
              DXGADAPTER::ReleaseReference(v62);
            v62 = 0LL;
            if ( v67 )
              DXGADAPTER::ReleaseReference(v67);
            v67 = 0LL;
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v81);
            if ( v59 != (struct DXGDEVICE ***)v60 && v59 )
              ExFreePoolWithTag(v59, 0);
            v61 = 0;
            if ( v71 && v72 )
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v71 + 136));
              KeLeaveCriticalRegion();
            }
LABEL_45:
            DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v73);
            if ( P != v65 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v66 = 0;
            if ( v69 )
              DXGADAPTER::ReleaseReference(v69);
            return (unsigned int)OutputDuplManager;
          }
          WdLogSingleEntry1(6LL, -1073741801LL);
          WdLogGlobalForLineNumber = 2906;
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
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v85);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v78);
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v62, 0LL);
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v67, 0LL);
LABEL_164:
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v81);
          goto LABEL_165;
        }
        WdLogSingleEntry1(2LL, 1LL);
        WdLogGlobalForLineNumber = 2883;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Output duplication is not supported on render only device 0x%I64x",
          v62 != 0LL,
          0LL,
          0LL,
          0LL,
          0LL);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v85);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v78);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v62, 0LL);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v67, 0LL);
      }
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v81);
      if ( v59 != (struct DXGDEVICE ***)v60 && v59 )
        ExFreePoolWithTag(v59, 0);
      v61 = 0;
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v71);
LABEL_150:
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v73);
      if ( P != v65 && P )
        ExFreePoolWithTag(P, 0);
      OutputDuplManager = -1073741811;
      goto LABEL_173;
    }
    v46 = (*(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * i) >> 6) & 0xFFFFFF;
    if ( v46 >= *((_DWORD *)a2 + 74) )
      goto LABEL_107;
    v47 = *((_QWORD *)a2 + 35);
    if ( ((*(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * i) >> 25) & 0x60) != (*(_BYTE *)(v47 + 16LL * v46 + 8) & 0x60) )
      goto LABEL_107;
    if ( (*(_DWORD *)(v47 + 16LL * v46 + 8) & 0x2000) != 0 )
      goto LABEL_107;
    v48 = *(_DWORD *)(v47 + 16LL * v46 + 8) & 0x1F;
    if ( !v48 )
      goto LABEL_107;
    if ( v48 != 15 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_107:
      v49 = 0LL;
      goto LABEL_108;
    }
    v49 = *(_QWORD *)(v47 + 16LL * v46);
LABEL_108:
    if ( i >= v66 )
      v50 = P;
    else
      v50 = (char *)P + 8 * i;
    *v50 = v49;
    v51 = (char *)P;
    v52 = (char *)P + 8 * i;
    if ( i >= v66 )
      v52 = P;
    OutputDuplManager = -1073741811;
    if ( !*v52 )
    {
      WdLogSingleEntry2(2LL, *(unsigned int *)(*((_QWORD *)a1 + 2) + 4LL * i), i);
      v57 = *((_QWORD *)a1 + 2);
      WdLogGlobalForLineNumber = 2799;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkOutputDuplPresentToHwQueue failed with invalid HW queue handle 0x%x at index %d",
        *(unsigned int *)(v57 + 4LL * i),
        i,
        0LL,
        0LL,
        0LL);
      goto LABEL_129;
    }
    if ( i < v66 )
      v51 = (char *)P + 8 * i;
    if ( i >= v61 )
      v53 = v59;
    else
      v53 = &v59[i];
    *v53 = *(struct DXGDEVICE ***)(*(_QWORD *)v51 + 16LL);
    v54 = v59;
    v55 = &v59[i];
    if ( i >= v61 )
      v55 = v59;
    if ( *v55 )
    {
      if ( i < v61 )
        v54 = &v59[i];
      if ( (*v54)[2] == v9[2] )
        continue;
    }
    break;
  }
  WdLogSingleEntry4(2LL, v9, *(unsigned int *)(*((_QWORD *)a1 + 2) + 4LL * i), i, -1073741811LL);
  v56 = *((_QWORD *)a1 + 2);
  WdLogGlobalForLineNumber = 2812;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
    (__int64)v9,
    *(unsigned int *)(v56 + 4LL * i),
    i,
    -1073741811LL,
    0LL);
LABEL_129:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v84);
  if ( v59 != (struct DXGDEVICE ***)v60 && v59 )
    ExFreePoolWithTag(v59, 0);
  v61 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v71);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v73);
  if ( P != v65 && P )
    ExFreePoolWithTag(P, 0);
LABEL_173:
  P = 0LL;
  v66 = 0;
LABEL_174:
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v69, 0LL);
  return (unsigned int)OutputDuplManager;
}
