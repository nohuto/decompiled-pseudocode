/*
 * XREFs of ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1402D5328
 * Callers:
 *     OutputDuplPresent @ 0x140399FF8 (OutputDuplPresent.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14000CBC0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14000EE70 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140033C28 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x14004A410 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140066C98 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140066F1C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1402B67F4 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1402B8964 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402D3B30 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402D4830 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

__int64 __fastcall OutputDuplPresentInternal(
        struct DXGADAPTER *this,
        struct DXGCONTEXT *a2,
        struct _D3DKMT_OUTPUTDUPLPRESENT *a3,
        struct DXGCONTEXT **a4)
{
  int IsRemoteSessionUsingXddmMonitors; // r12d
  unsigned int *p_VidPnSourceId; // rdi
  struct DXGADAPTER **v10; // rbx
  struct DXGADAPTER **v11; // rax
  int OutputDuplManager; // ebx
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rbx
  __int64 v14; // rax
  __int64 v15; // r8
  struct DXGADAPTER *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // esi
  ADAPTER_DISPLAY *v22; // rsi
  struct DXGPROCESS *Current; // rax
  char v24; // bl
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  unsigned __int64 v28; // rdx
  __int64 v29; // [rsp+20h] [rbp-E0h]
  DXGADAPTER *v30; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A0h]
  DXGADAPTER *v33; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v34; // [rsp+70h] [rbp-90h] BYREF
  OUTPUTDUPL_MGR *v35; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v36[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v37; // [rsp+88h] [rbp-78h]
  char v38; // [rsp+90h] [rbp-70h]
  _BYTE v39[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v40[64]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v41[64]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v42; // [rsp+128h] [rbp+28h]
  char v43; // [rsp+130h] [rbp+30h]

  v33 = 0LL;
  v30 = 0LL;
  v35 = 0LL;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors((__int64)this);
  p_VidPnSourceId = &a3->VidPnSourceId;
  if ( IsRemoteSessionUsingXddmMonitors )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    v35 = RemoteOutputDuplMgr;
  }
  else
  {
    v10 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v30);
    v11 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v33);
    OutputDuplManager = FindOutputDuplManager(this, *p_VidPnSourceId, v11, &v34, v10, &v31, &v35);
    if ( OutputDuplManager < 0 )
    {
      if ( v30 )
        DXGADAPTER::ReleaseReference(v30);
      v30 = 0LL;
      goto LABEL_23;
    }
    RemoteOutputDuplMgr = v35;
  }
  if ( !RemoteOutputDuplMgr )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2855;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"Failed to get output dupl manager",
      2855LL,
      0LL,
      0LL,
      0LL,
      0LL);
    OutputDuplManager = -1073741275;
    goto LABEL_47;
  }
  if ( *p_VidPnSourceId >= *((_DWORD *)RemoteOutputDuplMgr + 19) )
  {
    WdLogSingleEntry1(2LL, *p_VidPnSourceId);
    v29 = *p_VidPnSourceId;
    WdLogGlobalForLineNumber = 2862;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"VidPn source 0x%I64x is not valid for output duplication manager",
      v29,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v30 )
      DXGADAPTER::ReleaseReference(v30);
    v30 = 0LL;
    if ( v33 )
      DXGADAPTER::ReleaseReference(v33);
    return 3221225485LL;
  }
  else
  {
    v14 = *((_QWORD *)a2 + 2);
    v38 = 0;
    v37 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
    COREACCESS::COREACCESS(
      (COREACCESS *)v40,
      *(struct DXGADAPTER *const *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 16LL));
    v16 = *(struct DXGADAPTER **)(v15 + 1896);
    if ( !v16 )
      v16 = *(struct DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL);
    COREACCESS::COREACCESS((COREACCESS *)v41, v16);
    v42 = v17;
    v18 = *(_QWORD *)(v17 + 1896);
    if ( v18 == *(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL) || (v43 = 1, !v18) )
      v43 = 0;
    v21 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v39, 0LL);
    if ( v21 >= 0 )
    {
      if ( IsRemoteSessionUsingXddmMonitors || (a3->Flags.Value & 8) != 0 )
      {
LABEL_20:
        OutputDuplManager = OUTPUTDUPL_MGR::ProcessPresent(
                              RemoteOutputDuplMgr,
                              a2,
                              a3->Flags,
                              a3->hSource,
                              a3->BroadcastContextCount,
                              &a3->PresentRegions,
                              0LL,
                              *p_VidPnSourceId,
                              a4,
                              (struct COREDEVICEACCESS *)v39);
        COREACCESS::~COREACCESS((COREACCESS *)v41, v25);
        COREACCESS::~COREACCESS((COREACCESS *)v40, v26);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
        if ( v30 )
          DXGADAPTER::ReleaseReference(v30);
        v30 = 0LL;
LABEL_23:
        if ( v33 )
          DXGADAPTER::ReleaseReference(v33);
        return (unsigned int)OutputDuplManager;
      }
      v22 = (ADAPTER_DISPLAY *)*((_QWORD *)v30 + 390);
      if ( v22 )
      {
        Current = DXGPROCESS::GetCurrent(v20);
        if ( !Current || (v24 = 1, !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 232LL))()) )
          v24 = 0;
        v32 = (unsigned int)Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_featureState;
        if ( (Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_featureState & 0x10) == 0 )
        {
          LODWORD(v32) = Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_featureState | 1;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_descriptor,
            v32,
            3LL);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v32,
            3,
            (__int64)&Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_descriptor);
        }
        if ( !v24 && !ADAPTER_DISPLAY::IsVidPnSourceOwner(v22, *((const struct DXGDEVICE **)a2 + 2), *p_VidPnSourceId) )
        {
          WdLogSingleEntry2(3LL, a2, *p_VidPnSourceId);
          WdLogGlobalForLineNumber = 2893;
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v39);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
          OutputDuplManager = -1071775744;
          goto LABEL_47;
        }
        RemoteOutputDuplMgr = v35;
        goto LABEL_20;
      }
      WdLogSingleEntry1(2LL, 1LL);
      WdLogGlobalForLineNumber = 2880;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Output duplication is not supported on render only device 0x%I64x",
        v30 != 0LL,
        0LL,
        0LL,
        0LL,
        0LL);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v39);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
      OutputDuplManager = -1073741811;
LABEL_47:
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v30, 0LL);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v33, 0LL);
      return (unsigned int)OutputDuplManager;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v41, v19);
    COREACCESS::~COREACCESS((COREACCESS *)v40, v28);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
    if ( v30 )
      DXGADAPTER::ReleaseReference(v30);
    v30 = 0LL;
    if ( v33 )
      DXGADAPTER::ReleaseReference(v33);
    return (unsigned int)v21;
  }
}
