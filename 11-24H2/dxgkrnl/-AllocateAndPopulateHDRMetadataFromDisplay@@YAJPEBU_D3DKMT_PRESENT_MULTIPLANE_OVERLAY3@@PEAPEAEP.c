/*
 * XREFs of ?AllocateAndPopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI_HDR_METADATA_TYPE@@PEAI@Z @ 0x1402BDDC0
 * Callers:
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1402BE310 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14000E830 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140011820 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140023358 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002FD80 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034BE4 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036210 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     _DXGKCALLONEXIT__lambda_21eb3c429198df5c8698fb68fbe0024f____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140041650 (_DXGKCALLONEXIT__lambda_21eb3c429198df5c8698fb68fbe0024f____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     DXGKCALLONEXIT__lambda_995b1012b958866616d8e16870c72d2c___ @ 0x140048090 (DXGKCALLONEXIT__lambda_995b1012b958866616d8e16870c72d2c___.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x14004FB80 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z @ 0x1402E06D8 (-MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorGetAdvancedColorMetadataOverride@@YAJPEAUHDXGMONITOR__@@PEAU_D3DDDI_HDR_METADATA_HDR10@@@Z @ 0x1402E5498 (-MonitorGetAdvancedColorMetadataOverride@@YAJPEAUHDXGMONITOR__@@PEAU_D3DDDI_HDR_METADATA_HDR10@@.c)
 */

__int64 __fastcall AllocateAndPopulateHDRMetadataFromDisplay(
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a1,
        unsigned __int8 **a2,
        enum _D3DDDI_HDR_METADATA_TYPE *a3,
        unsigned int *a4)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v10; // rdi
  struct DXGTHREAD *Current; // rax
  struct DXGPROCESS *v12; // rbx
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  D3DKMT_HANDLE *pContextList; // rax
  D3DKMT_HANDLE v16; // edi
  unsigned int v17; // eax
  __int64 v18; // r9
  int v19; // ecx
  __int64 v20; // rdx
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  __int64 v23; // rax
  __int64 v24; // rcx
  ADAPTER_DISPLAY *v25; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  int MonitorHandle; // eax
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v32; // rcx
  char v33; // bl
  struct _D3DDDI_HDR_METADATA_HDR10 *v34; // rax
  __int64 v35; // rcx
  unsigned __int8 *v36; // rbx
  __int64 v37; // rax
  int AdvancedColorMetadataOverride; // eax
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // [rsp+58h] [rbp-59h] BYREF
  struct HDXGMONITOR__ *v44; // [rsp+60h] [rbp-51h] BYREF
  __int64 v45; // [rsp+68h] [rbp-49h] BYREF
  char v46; // [rsp+70h] [rbp-41h]
  __int128 v47; // [rsp+78h] [rbp-39h] BYREF
  _BYTE v48[8]; // [rsp+88h] [rbp-29h] BYREF
  char *v49; // [rsp+90h] [rbp-21h]
  int v50; // [rsp+98h] [rbp-19h]
  _QWORD v51[3]; // [rsp+A0h] [rbp-11h] BYREF
  _BYTE v52[24]; // [rsp+B8h] [rbp+7h] BYREF
  _BYTE v53[24]; // [rsp+D0h] [rbp+1Fh] BYREF
  struct _D3DDDI_HDR_METADATA_HDR10 *v54; // [rsp+118h] [rbp+67h] BYREF

  if ( !a1 || !a2 || !a3 || !a4 )
    return 3221225485LL;
  v54 = 0LL;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_12;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v12 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( v12 )
      goto LABEL_13;
    goto LABEL_12;
  }
  CurrentThread = KeGetCurrentThread();
  Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
  v12 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
  if ( !v12 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2926;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2926LL, 0LL, 0LL, 0LL, 0LL);
LABEL_12:
    v12 = v10;
  }
LABEL_13:
  pContextList = a1->pContextList;
  v49 = (char *)v12 + 248;
  v50 = 0;
  v16 = *pContextList;
  if ( v12 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)v12 + 32) == KeGetCurrentThread() )
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
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v48);
  v17 = (v16 >> 6) & 0xFFFFFF;
  if ( v17 < *((_DWORD *)v12 + 74) )
  {
    v18 = *((_QWORD *)v12 + 35);
    if ( ((v16 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0x60)
      && (*(_DWORD *)(v18 + 16LL * v17 + 8) & 0x2000) == 0 )
    {
      v19 = *(_DWORD *)(v18 + 16LL * v17 + 8) & 0x1F;
      if ( v19 )
      {
        if ( v19 == 7 )
        {
          v20 = *(_QWORD *)(v18 + 16LL * v17);
          goto LABEL_23;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v20 = 0LL;
LABEL_23:
  v45 = v20;
  v46 = 0;
  if ( v20 )
  {
    _m_prefetchw((const void *)(v20 + 32));
    v21 = *(_QWORD *)(v20 + 32);
    do
    {
      if ( !v21 )
      {
        v20 = 0LL;
        v45 = 0LL;
        goto LABEL_29;
      }
      v22 = v21;
      v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 32), v21 + 1, v21);
    }
    while ( v22 != v21 );
    v20 = v45;
  }
LABEL_29:
  v43 = v20;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v48);
  if ( v43 )
  {
    v23 = *(_QWORD *)(v43 + 16);
    if ( v23 )
    {
      v24 = *(_QWORD *)(v23 + 1896);
      if ( v24 )
      {
        v25 = *(ADAPTER_DISPLAY **)(v24 + 3120);
        VidPnSourceId = a1->VidPnSourceId;
        if ( *((_DWORD *)v25 + 24) > VidPnSourceId )
        {
          if ( (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(v25, VidPnSourceId) )
          {
            DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
              (DXGADAPTERSTOPRESETLOCKSHARED *)v52,
              *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v43 + 16) + 16LL) + 16LL),
              1);
            v44 = 0LL;
            MonitorHandle = MonitorGetMonitorHandle(
                              *(void **)(*(_QWORD *)(v43 + 16) + 1896LL),
                              *(_DWORD *)(4024LL * a1->VidPnSourceId
                                        + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v43 + 16) + 1896LL) + 3120LL)
                                                    + 128LL)
                                        + 1072),
                              1u,
                              AllocateAndPopulateHDRMetadataFromDisplay,
                              &v44);
            v29 = MonitorHandle;
            if ( MonitorHandle < 0 )
            {
              v30 = PsGetCurrentProcess(v28);
              WdLogSingleEntry2(3LL, v29, v30);
              WdLogGlobalForLineNumber = 2366;
LABEL_36:
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
              DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v45);
              wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v54);
              return (unsigned int)v29;
            }
            *(_QWORD *)&v47 = &v43;
            *((_QWORD *)&v47 + 1) = &v44;
            DXGKCALLONEXIT__lambda_995b1012b958866616d8e16870c72d2c_((__int64)v53, &v47);
            if ( !v44 )
            {
              LODWORD(v29) = -1073741811;
              goto LABEL_50;
            }
            MONITOR_MGR::AcquireMonitorShared(v51, (__int64)v44);
            if ( !v51[0] )
            {
              LODWORD(v29) = -1073741275;
              WdLogSingleEntry1(2LL, -1073741275LL);
              WdLogGlobalForLineNumber = 3671;
              CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v51);
LABEL_50:
              v42 = PsGetCurrentProcess(v32);
              WdLogSingleEntry2(3LL, (int)v29, v42);
              WdLogGlobalForLineNumber = 2388;
              goto LABEL_51;
            }
            v33 = *(_BYTE *)(*(_QWORD *)(v51[0] + 224LL) + 516LL);
            CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v51);
            if ( v33 )
            {
              v34 = (struct _D3DDDI_HDR_METADATA_HDR10 *)operator new[](0x1CuLL, 0x4B677844u, 256LL);
              v54 = v34;
              v36 = (unsigned __int8 *)v34;
              if ( !v34 )
              {
                v37 = PsGetCurrentProcess(v35);
                LODWORD(v29) = -1073741801;
                WdLogSingleEntry2(3LL, -1073741801LL, v37);
                WdLogGlobalForLineNumber = 2401;
LABEL_51:
                DXGKCALLONEXIT__lambda_21eb3c429198df5c8698fb68fbe0024f____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v53);
                goto LABEL_36;
              }
              AdvancedColorMetadataOverride = MonitorGetAdvancedColorMetadataOverride(v44, v34);
              v40 = AdvancedColorMetadataOverride;
              if ( AdvancedColorMetadataOverride < 0 )
              {
                v41 = PsGetCurrentProcess(v39);
                WdLogSingleEntry2(3LL, v40, v41);
                WdLogGlobalForLineNumber = 2413;
                LODWORD(v29) = v40;
                goto LABEL_51;
              }
              *a3 = D3DDDI_HDR_METADATA_TYPE_HDR10;
              *a4 = 28;
              *a2 = v36;
              v54 = 0LL;
            }
            DXGKCALLONEXIT__lambda_21eb3c429198df5c8698fb68fbe0024f____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v53);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
          }
        }
      }
    }
  }
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v45);
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v54);
  return 0LL;
}
