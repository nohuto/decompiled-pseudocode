/*
 * XREFs of ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1402B7698
 * Callers:
 *     NtDxgkOutputDuplPresentToHwQueue @ 0x1402B90B0 (NtDxgkOutputDuplPresentToHwQueue.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14000CBC0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14000E830 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x14000EB90 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14000EE70 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x140022A50 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140023750 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x140026BF0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14002BC70 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140033C28 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x14004A410 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140066C98 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140066F1C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1402B67F4 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$03@@QEAAPEAPEAVDXGHWQUEUE@@I@Z @ 0x1402B8614 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$03@@QEAAPEAPEAVDXGHWQUEUE@@I@Z.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1402B8964 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402D3B30 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402D4830 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z @ 0x14039A5A0 (-OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z.c)
 */

__int64 __fastcall OutputDuplPresentToHwQueue(struct _D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE *a1, struct _KTHREAD **a2)
{
  int v2; // eax
  __int64 v5; // rdx
  unsigned int *v6; // rdx
  struct DXGHWQUEUE *v7; // rbx
  volatile signed __int64 *v8; // rsi
  struct DXGDEVICE **v9; // r15
  unsigned __int64 v10; // rbx
  struct DXGDEVICE ***Pool2; // rcx
  unsigned int i; // r14d
  __int64 v13; // r9
  struct DXGADAPTER **v14; // rbx
  struct DXGADAPTER **v15; // rax
  int OutputDuplManager; // ebx
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rbx
  struct DXGDEVICE *v18; // rax
  struct DXGDEVICE *v19; // r8
  __int64 v20; // rcx
  struct DXGADAPTER *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  int v25; // esi
  ADAPTER_DISPLAY *v26; // rsi
  char v27; // bl
  struct DXGGLOBAL *Global; // rax
  const struct DXGK_PRESENT_PARAMS *v29; // rax
  const struct DXGK_PRESENT_PARAMS *v30; // rsi
  struct DXGGLOBAL *v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  unsigned int v35; // edx
  __int64 v36; // rcx
  struct DXGCONTEXT *v37; // rbx
  struct DXGADAPTER **v38; // rax
  int v39; // eax
  unsigned __int64 v40; // rdx
  unsigned int v41; // ebx
  __int64 CurrentProcess; // rax
  __int64 v43; // r9
  unsigned int v44; // eax
  struct _KTHREAD *v45; // r9
  int v46; // ecx
  __int64 v47; // rcx
  _QWORD *v48; // rdx
  char *v49; // rax
  _QWORD *v50; // rcx
  struct DXGDEVICE ***v51; // rcx
  struct DXGDEVICE ***v52; // rcx
  struct DXGDEVICE ***v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // [rsp+20h] [rbp-E0h]
  struct DXGDEVICE ***v57; // [rsp+50h] [rbp-B0h]
  _BYTE v58[32]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v59; // [rsp+78h] [rbp-88h]
  DXGADAPTER *v60; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v61; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v63[32]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v64; // [rsp+B8h] [rbp-48h]
  DXGADAPTER *v65; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v66; // [rsp+C8h] [rbp-38h] BYREF
  DXGADAPTER *v67; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v68; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v69; // [rsp+E0h] [rbp-20h] BYREF
  int v70; // [rsp+E8h] [rbp-18h]
  _BYTE v71[16]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v72; // [rsp+100h] [rbp+0h]
  OUTPUTDUPL_MGR *v73; // [rsp+108h] [rbp+8h] BYREF
  struct DXGHWQUEUE *v74; // [rsp+110h] [rbp+10h] BYREF
  struct DXGCONTEXT *v75; // [rsp+118h] [rbp+18h] BYREF
  char v76[8]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v77; // [rsp+128h] [rbp+28h]
  char v78; // [rsp+130h] [rbp+30h]
  _QWORD v79[6]; // [rsp+138h] [rbp+38h] BYREF
  char v80; // [rsp+168h] [rbp+68h]
  _BYTE v81[16]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v82[32]; // [rsp+180h] [rbp+80h] BYREF
  char v83[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v84[8]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v85; // [rsp+1B0h] [rbp+B0h]
  __int64 v86; // [rsp+1B8h] [rbp+B8h]
  char v87; // [rsp+1C0h] [rbp+C0h]
  __int64 v88; // [rsp+1C8h] [rbp+C8h]
  _BYTE v89[64]; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v90; // [rsp+228h] [rbp+128h]
  char v91; // [rsp+230h] [rbp+130h]

  v2 = *((_DWORD *)a1 + 14);
  v67 = 0LL;
  if ( (v2 & 8) != 0 )
  {
    v35 = *((_DWORD *)a1 + 15);
    v75 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v81, v35, a2, &v75, 0, 1);
    v37 = v75;
    if ( v75 )
    {
      v38 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v67);
      v39 = OutputDuplPreIndirectPresent(*((struct DXGDEVICE **)v37 + 2), *((_DWORD *)a1 + 1), v38, &v68);
      if ( v39 >= 0 )
      {
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v81);
        goto LABEL_2;
      }
      OutputDuplManager = v39;
    }
    else
    {
      v41 = *((_DWORD *)a1 + 15);
      CurrentProcess = PsGetCurrentProcess(v36);
      v43 = v41;
      OutputDuplManager = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, CurrentProcess, v43);
      WdLogGlobalForLineNumber = 2722;
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v81);
    goto LABEL_174;
  }
LABEL_2:
  v5 = *((unsigned int *)a1 + 2);
  P = 0LL;
  v64 = 0;
  if ( !PagedPoolZeroedArray<DXGHWQUEUE *,4>::AllocateElements(&P, v5) )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2739;
LABEL_169:
    if ( P != v63 && P )
      ExFreePoolWithTag(P, 0);
    OutputDuplManager = -1073741801;
    goto LABEL_173;
  }
  v6 = (unsigned int *)*((_QWORD *)a1 + 2);
  v74 = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v71, *v6, a2, &v74, 0, 1);
  v7 = v74;
  if ( !v74 )
  {
    WdLogSingleEntry1(3LL, **((unsigned int **)a1 + 2));
    WdLogGlobalForLineNumber = 2749;
    goto LABEL_150;
  }
  *(_QWORD *)P = v74;
  if ( !v67 )
  {
    v8 = *(volatile signed __int64 **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 1896LL);
    v67 = (DXGADAPTER *)v8;
    if ( v8 )
    {
      _InterlockedIncrement64(v8 + 3);
      v68 = -1LL;
      v7 = v74;
    }
  }
  v9 = (struct DXGDEVICE **)*((_QWORD *)v7 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v69, v9[2]);
  v10 = *((unsigned int *)a1 + 2);
  Pool2 = 0LL;
  v57 = 0LL;
  v59 = 0;
  if ( (unsigned int)v10 <= 4 )
  {
    Pool2 = (struct DXGDEVICE ***)v58;
    v57 = (struct DXGDEVICE ***)v58;
    if ( (_DWORD)v10 )
    {
      memset(v58, 0, 8LL * (unsigned int)v10);
      Pool2 = (struct DXGDEVICE ***)v58;
    }
    goto LABEL_10;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v10 >= 8 )
  {
    Pool2 = (struct DXGDEVICE ***)ExAllocatePool2(256LL, 8 * v10, 1265072196LL);
    v57 = Pool2;
LABEL_10:
    v59 = v10;
  }
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2768;
LABEL_165:
    if ( v57 != (struct DXGDEVICE ***)v58 && v57 )
      ExFreePoolWithTag(v57, 0);
    v59 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v69);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v71);
    goto LABEL_169;
  }
  *Pool2 = v9;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v82, (struct DXGPROCESS *)a2);
  for ( i = 1; ; ++i )
  {
    if ( i >= *((_DWORD *)a1 + 2) )
    {
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v82);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        (__int64)v79,
        v57,
        v59,
        v13,
        1);
      if ( v80 )
      {
        if ( !v79[0] )
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
        v65 = 0LL;
        v60 = 0LL;
        v73 = 0LL;
        if ( !v67 || (unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
        {
          RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
          v73 = RemoteOutputDuplMgr;
        }
        else
        {
          v14 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v60);
          v15 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v65);
          OutputDuplManager = FindOutputDuplManager(v67, *((_DWORD *)a1 + 1), v15, &v66, v14, &v61, &v73);
          if ( OutputDuplManager < 0 )
          {
            if ( v60 )
              DXGADAPTER::ReleaseReference(v60);
            v60 = 0LL;
            if ( v65 )
              DXGADAPTER::ReleaseReference(v65);
            v65 = 0LL;
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v79);
            if ( v57 != (struct DXGDEVICE ***)v58 && v57 )
              ExFreePoolWithTag(v57, 0);
            v59 = 0;
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v69);
            goto LABEL_45;
          }
          RemoteOutputDuplMgr = v73;
        }
        if ( !RemoteOutputDuplMgr )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2858;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"Failed to get output dupl manager",
            2858LL,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v60, 0LL);
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v65, 0LL);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v79);
          if ( v57 != (struct DXGDEVICE ***)v58 && v57 )
            ExFreePoolWithTag(v57, 0);
          v59 = 0;
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v69);
          DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v71);
          if ( P != v63 && P )
            ExFreePoolWithTag(P, 0);
          OutputDuplManager = -1073741275;
          goto LABEL_173;
        }
        if ( *((_DWORD *)a1 + 1) >= *((_DWORD *)RemoteOutputDuplMgr + 19) )
        {
          WdLogSingleEntry1(2LL, *((unsigned int *)a1 + 1));
          v56 = *((unsigned int *)a1 + 1);
          WdLogGlobalForLineNumber = 2865;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"VidPn source 0x%I64x is not valid for output duplication manager",
            v56,
            0LL,
            0LL,
            0LL,
            0LL);
          if ( v60 )
            DXGADAPTER::ReleaseReference(v60);
          v60 = 0LL;
          if ( v65 )
            DXGADAPTER::ReleaseReference(v65);
          v65 = 0LL;
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v79);
          if ( v57 != (struct DXGDEVICE ***)v58 && v57 )
            ExFreePoolWithTag(v57, 0);
          v59 = 0;
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v69);
          DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v71);
          if ( P != v63 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v64 = 0;
          if ( v67 )
            DXGADAPTER::ReleaseReference(v67);
          return -1073741811LL;
        }
        v18 = v9[2];
        v78 = 0;
        v77 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v76);
        v19 = v9[2];
        v20 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL);
        v86 = v20;
        v87 = 0;
        v88 = 0LL;
        if ( v20 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v20 + 24));
          v85 = -1LL;
          RemoteOutputDuplMgr = v73;
        }
        v21 = (struct DXGADAPTER *)*((_QWORD *)v19 + 237);
        if ( !v21 )
          v21 = *(struct DXGADAPTER **)(*((_QWORD *)v19 + 2) + 16LL);
        COREACCESS::COREACCESS((COREACCESS *)v89, v21);
        v90 = v22;
        v23 = *(_QWORD *)(v22 + 1896);
        if ( v23 == *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) || (v91 = 1, !v23) )
          v91 = 0;
        v25 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v83, 0LL);
        if ( v25 < 0 )
        {
          COREACCESS::~COREACCESS((COREACCESS *)v89, v24);
          COREACCESS::~COREACCESS((COREACCESS *)v84, v40);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v76);
          if ( v60 )
            DXGADAPTER::ReleaseReference(v60);
          v60 = 0LL;
          if ( v65 )
            DXGADAPTER::ReleaseReference(v65);
          v65 = 0LL;
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v79);
          if ( v57 != (struct DXGDEVICE ***)v58 && v57 )
            ExFreePoolWithTag(v57, 0);
          v59 = 0;
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v69);
          DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v71);
          if ( P != v63 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v64 = 0;
          if ( v67 )
            DXGADAPTER::ReleaseReference(v67);
          return (unsigned int)v25;
        }
        if ( (*((_DWORD *)a1 + 14) & 0xA) != 0 )
          goto LABEL_36;
        v26 = (ADAPTER_DISPLAY *)*((_QWORD *)v60 + 390);
        if ( v26 )
        {
          if ( !a2 || (v27 = 1, !(*((unsigned int (**)(void))a2[11] + 29))()) )
            v27 = 0;
          v72 = (unsigned int)Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_featureState;
          if ( (Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_featureState & 0x10) == 0 )
          {
            LODWORD(v72) = Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_featureState | 1;
            wil_details_FeatureReporting_ReportUsageToService(
              (__int64)&Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_descriptor,
              v72,
              3LL);
            wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
              v72,
              3,
              (__int64)&Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_descriptor);
          }
          if ( !v27 && !ADAPTER_DISPLAY::IsVidPnSourceOwner(v26, v9[2], *((_DWORD *)a1 + 1)) )
          {
            WdLogSingleEntry2(3LL, v9, *((unsigned int *)a1 + 1));
            WdLogGlobalForLineNumber = 2896;
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v83);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v76);
            DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v60, 0LL);
            DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v65, 0LL);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v79);
            if ( v57 != (struct DXGDEVICE ***)v58 && v57 )
              ExFreePoolWithTag(v57, 0);
            v59 = 0;
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v69);
            DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v71);
            if ( P != v63 && P )
              ExFreePoolWithTag(P, 0);
            OutputDuplManager = -1071775744;
            goto LABEL_173;
          }
          RemoteOutputDuplMgr = v73;
LABEL_36:
          Global = DXGGLOBAL::GetGlobal();
          v29 = (const struct DXGK_PRESENT_PARAMS *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 1136));
          v30 = v29;
          if ( v29 )
          {
            memset(v29, 0, 0x5F8uLL);
            *((_QWORD *)v30 + 188) = P;
            OutputDuplManager = OUTPUTDUPL_MGR::ProcessPresent(
                                  RemoteOutputDuplMgr,
                                  (struct DXGCONTEXT *)v9,
                                  *(struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS *)((char *)a1 + 56),
                                  *(_DWORD *)a1,
                                  *((_DWORD *)a1 + 2) - 1,
                                  (struct _D3DKMT_PRESENT_RGNS *)((char *)a1 + 24),
                                  v30,
                                  *((_DWORD *)a1 + 1),
                                  (struct DXGCONTEXT **)v57,
                                  (struct COREDEVICEACCESS *)v83);
            v31 = DXGGLOBAL::GetGlobal();
            ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v31 + 1136), v30);
            COREACCESS::~COREACCESS((COREACCESS *)v89, v32);
            COREACCESS::~COREACCESS((COREACCESS *)v84, v33);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v76);
            if ( v60 )
              DXGADAPTER::ReleaseReference(v60);
            v60 = 0LL;
            if ( v65 )
              DXGADAPTER::ReleaseReference(v65);
            v65 = 0LL;
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v79);
            if ( v57 != (struct DXGDEVICE ***)v58 && v57 )
              ExFreePoolWithTag(v57, 0);
            v59 = 0;
            if ( v69 && v70 )
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v69 + 136));
              KeLeaveCriticalRegion();
            }
LABEL_45:
            DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v71);
            if ( P != v63 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v64 = 0;
            if ( v67 )
              DXGADAPTER::ReleaseReference(v67);
            return (unsigned int)OutputDuplManager;
          }
          WdLogSingleEntry1(6LL, -1073741801LL);
          WdLogGlobalForLineNumber = 2906;
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
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v83);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v76);
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v60, 0LL);
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v65, 0LL);
LABEL_164:
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v79);
          goto LABEL_165;
        }
        WdLogSingleEntry1(2LL, 1LL);
        WdLogGlobalForLineNumber = 2883;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Output duplication is not supported on render only device 0x%I64x",
          v60 != 0LL,
          0LL,
          0LL,
          0LL,
          0LL);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v83);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v76);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v60, 0LL);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v65, 0LL);
      }
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v79);
      if ( v57 != (struct DXGDEVICE ***)v58 && v57 )
        ExFreePoolWithTag(v57, 0);
      v59 = 0;
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v69);
LABEL_150:
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v71);
      if ( P != v63 && P )
        ExFreePoolWithTag(P, 0);
      OutputDuplManager = -1073741811;
      goto LABEL_173;
    }
    v44 = (*(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * i) >> 6) & 0xFFFFFF;
    if ( v44 >= *((_DWORD *)a2 + 74) )
      goto LABEL_107;
    v45 = a2[35];
    if ( ((*(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * i) >> 25) & 0x60) != (*((_BYTE *)v45 + 16 * v44 + 8) & 0x60) )
      goto LABEL_107;
    if ( (*((_DWORD *)v45 + 4 * v44 + 2) & 0x2000) != 0 )
      goto LABEL_107;
    v46 = *((_DWORD *)v45 + 4 * v44 + 2) & 0x1F;
    if ( !v46 )
      goto LABEL_107;
    if ( v46 != 15 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_107:
      v47 = 0LL;
      goto LABEL_108;
    }
    v47 = *((_QWORD *)v45 + 2 * v44);
LABEL_108:
    if ( i >= v64 )
      v48 = P;
    else
      v48 = (char *)P + 8 * i;
    *v48 = v47;
    v49 = (char *)P;
    v50 = (char *)P + 8 * i;
    if ( i >= v64 )
      v50 = P;
    OutputDuplManager = -1073741811;
    if ( !*v50 )
    {
      WdLogSingleEntry2(2LL, *(unsigned int *)(*((_QWORD *)a1 + 2) + 4LL * i), i);
      v55 = *((_QWORD *)a1 + 2);
      WdLogGlobalForLineNumber = 2799;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"DxgkOutputDuplPresentToHwQueue failed with invalid HW queue handle 0x%x at index %d",
        *(unsigned int *)(v55 + 4LL * i),
        i,
        0LL,
        0LL,
        0LL);
      goto LABEL_129;
    }
    if ( i < v64 )
      v49 = (char *)P + 8 * i;
    if ( i >= v59 )
      v51 = v57;
    else
      v51 = &v57[i];
    *v51 = *(struct DXGDEVICE ***)(*(_QWORD *)v49 + 16LL);
    v52 = v57;
    v53 = &v57[i];
    if ( i >= v59 )
      v53 = v57;
    if ( *v53 )
    {
      if ( i < v59 )
        v52 = &v57[i];
      if ( (*v52)[2] == v9[2] )
        continue;
    }
    break;
  }
  WdLogSingleEntry4(2LL, v9, *(unsigned int *)(*((_QWORD *)a1 + 2) + 4LL * i), i, -1073741811LL);
  v54 = *((_QWORD *)a1 + 2);
  WdLogGlobalForLineNumber = 2812;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
    (__int64)v9,
    *(unsigned int *)(v54 + 4LL * i),
    i,
    -1073741811LL,
    0LL);
LABEL_129:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v82);
  if ( v57 != (struct DXGDEVICE ***)v58 && v57 )
    ExFreePoolWithTag(v57, 0);
  v59 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v69);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v71);
  if ( P != v63 && P )
    ExFreePoolWithTag(P, 0);
LABEL_173:
  P = 0LL;
  v64 = 0;
LABEL_174:
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v67, 0LL);
  return (unsigned int)OutputDuplManager;
}
