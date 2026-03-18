/*
 * XREFs of ?AllocateAndPopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI_HDR_METADATA_TYPE@@PEAI@Z @ 0x1402B0520
 * Callers:
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1402B0A90 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14001DE10 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002F740 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036128 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     _DXGKCALLONEXIT__lambda_21eb3c429198df5c8698fb68fbe0024f____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140041CC0 (_DXGKCALLONEXIT__lambda_21eb3c429198df5c8698fb68fbe0024f____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     DXGKCALLONEXIT__lambda_dbcf8364b3ea4150de008656de4589a7___ @ 0x140048860 (DXGKCALLONEXIT__lambda_dbcf8364b3ea4150de008656de4589a7___.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140050100 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140058B34 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z @ 0x1402CA140 (-MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorGetAdvancedColorMetadataOverride@@YAJPEAUHDXGMONITOR__@@PEAU_D3DDDI_HDR_METADATA_HDR10@@@Z @ 0x14030933C (-MonitorGetAdvancedColorMetadataOverride@@YAJPEAUHDXGMONITOR__@@PEAU_D3DDDI_HDR_METADATA_HDR10@@.c)
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
  D3DKMT_HANDLE v16; // esi
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
  __int64 v34; // r9
  struct _D3DDDI_HDR_METADATA_HDR10 *v35; // rax
  __int64 v36; // rcx
  unsigned __int8 *v37; // rbx
  __int64 v38; // rax
  int AdvancedColorMetadataOverride; // eax
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // [rsp+58h] [rbp-59h] BYREF
  struct HDXGMONITOR__ *v45; // [rsp+60h] [rbp-51h] BYREF
  __int64 v46; // [rsp+68h] [rbp-49h] BYREF
  char v47; // [rsp+70h] [rbp-41h]
  __int128 v48; // [rsp+78h] [rbp-39h] BYREF
  _BYTE v49[8]; // [rsp+88h] [rbp-29h] BYREF
  char *v50; // [rsp+90h] [rbp-21h]
  int v51; // [rsp+98h] [rbp-19h]
  _QWORD v52[3]; // [rsp+A0h] [rbp-11h] BYREF
  _BYTE v53[24]; // [rsp+B8h] [rbp+7h] BYREF
  _BYTE v54[24]; // [rsp+D0h] [rbp+1Fh] BYREF
  struct _D3DDDI_HDR_METADATA_HDR10 *v55; // [rsp+118h] [rbp+67h] BYREF

  if ( !a1 || !a2 || !a3 || !a4 )
    return 3221225485LL;
  v55 = 0LL;
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
    WdLogGlobalForLineNumber = 2925;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
LABEL_12:
    v12 = v10;
  }
LABEL_13:
  pContextList = a1->pContextList;
  v51 = 0;
  v50 = (char *)v12 + 248;
  v16 = *pContextList;
  if ( v12 != (struct DXGPROCESS *)-248LL )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( *((struct _KTHREAD **)v12 + 32) == KeGetCurrentThread() )
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
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v49);
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
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v20 = 0LL;
LABEL_23:
  v46 = v20;
  v47 = 0;
  if ( v20 )
  {
    _m_prefetchw((const void *)(v20 + 32));
    v21 = *(_QWORD *)(v20 + 32);
    do
    {
      if ( !v21 )
      {
        v20 = 0LL;
        v46 = 0LL;
        goto LABEL_29;
      }
      v22 = v21;
      v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 32), v21 + 1, v21);
    }
    while ( v22 != v21 );
    v20 = v46;
  }
LABEL_29:
  v44 = v20;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v49);
  if ( v44 )
  {
    v23 = *(_QWORD *)(v44 + 16);
    if ( v23 )
    {
      v24 = *(_QWORD *)(v23 + 1880);
      if ( v24 )
      {
        v25 = *(ADAPTER_DISPLAY **)(v24 + 3120);
        VidPnSourceId = a1->VidPnSourceId;
        if ( *((_DWORD *)v25 + 24) > VidPnSourceId )
        {
          if ( (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(v25, VidPnSourceId) )
          {
            DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
              (DXGADAPTERSTOPRESETLOCKSHARED *)v53,
              *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v44 + 16) + 16LL) + 16LL),
              1);
            v45 = 0LL;
            MonitorHandle = MonitorGetMonitorHandle(
                              *(void **)(*(_QWORD *)(v44 + 16) + 1880LL),
                              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v44 + 16) + 1880LL) + 3120LL)
                                                    + 128LL)
                                        + 3984LL * a1->VidPnSourceId
                                        + 1072),
                              1u,
                              AllocateAndPopulateHDRMetadataFromDisplay,
                              &v45);
            v29 = MonitorHandle;
            if ( MonitorHandle < 0 )
            {
              v30 = PsGetCurrentProcess(v28);
              WdLogSingleEntry2(3LL, v29, v30);
              WdLogGlobalForLineNumber = 2359;
LABEL_36:
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v53);
              DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v46);
              wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v55);
              return (unsigned int)v29;
            }
            *(_QWORD *)&v48 = &v44;
            *((_QWORD *)&v48 + 1) = &v45;
            DXGKCALLONEXIT__lambda_dbcf8364b3ea4150de008656de4589a7_((__int64)v54, &v48);
            if ( !v45 )
            {
              LODWORD(v29) = -1073741811;
              goto LABEL_50;
            }
            MONITOR_MGR::AcquireMonitorShared(v52, (__int64)v45);
            if ( !v52[0] )
            {
              LODWORD(v29) = -1073741275;
              WdLogSingleEntry1(2LL, -1073741275LL);
              WdLogGlobalForLineNumber = 3671;
              CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v52);
LABEL_50:
              v43 = PsGetCurrentProcess(v32);
              WdLogSingleEntry2(3LL, (int)v29, v43);
              WdLogGlobalForLineNumber = 2381;
              goto LABEL_51;
            }
            v33 = *(_BYTE *)(*(_QWORD *)(v52[0] + 224LL) + 512LL);
            CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v52);
            if ( v33 )
            {
              v35 = (struct _D3DDDI_HDR_METADATA_HDR10 *)operator new[](0x1CuLL, 0x4B677844u, 256LL, v34);
              v55 = v35;
              v37 = (unsigned __int8 *)v35;
              if ( !v35 )
              {
                v38 = PsGetCurrentProcess(v36);
                LODWORD(v29) = -1073741801;
                WdLogSingleEntry2(3LL, -1073741801LL, v38);
                WdLogGlobalForLineNumber = 2394;
LABEL_51:
                DXGKCALLONEXIT__lambda_21eb3c429198df5c8698fb68fbe0024f____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v54);
                goto LABEL_36;
              }
              AdvancedColorMetadataOverride = MonitorGetAdvancedColorMetadataOverride(v45, v35);
              v41 = AdvancedColorMetadataOverride;
              if ( AdvancedColorMetadataOverride < 0 )
              {
                v42 = PsGetCurrentProcess(v40);
                WdLogSingleEntry2(3LL, v41, v42);
                WdLogGlobalForLineNumber = 2406;
                LODWORD(v29) = v41;
                goto LABEL_51;
              }
              v55 = 0LL;
              *a3 = D3DDDI_HDR_METADATA_TYPE_HDR10;
              *a4 = 28;
              *a2 = v37;
            }
            DXGKCALLONEXIT__lambda_21eb3c429198df5c8698fb68fbe0024f____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v54);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v53);
          }
        }
      }
    }
  }
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v46);
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v55);
  return 0LL;
}
