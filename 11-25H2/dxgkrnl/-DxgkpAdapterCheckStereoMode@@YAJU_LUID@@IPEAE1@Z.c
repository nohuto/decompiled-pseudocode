/*
 * XREFs of ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1401C09D4
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x140418390 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14001EE2C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002D3C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1400369D4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003907C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x140039A2C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003EC00 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x140041DBC (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x14004AB20 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z @ 0x140198A14 (-SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1402846E8 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x140288C10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1402D5A28 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?MonitorGetLinkInfoFromTarget@@YAJPEAXIPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1403B23C4 (-MonitorGetLinkInfoFromTarget@@YAJPEAXIPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     ?IsStereoModeDisabledOnVidPnSource@ADAPTER_DISPLAY@@QEBA_NI@Z @ 0x1403E4684 (-IsStereoModeDisabledOnVidPnSource@ADAPTER_DISPLAY@@QEBA_NI@Z.c)
 *     ?GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z @ 0x140400E9C (-GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z.c)
 */

__int64 __fastcall DxgkpAdapterCheckStereoMode(
        struct _LUID a1,
        D3DDDI_VIDEO_PRESENT_SOURCE_ID a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  __int64 v4; // rsi
  DWORD LowPart; // ebx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v10; // r14
  __int64 HighPart; // rdi
  signed int CachedStereoStates; // ebx
  struct DXGADAPTER **v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rdi
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  bool v22; // di
  int v23; // eax
  int LinkInfoFromTarget; // eax
  const struct _DXGK_DISPLAYMODE_INFO *v25; // rax
  D3DKMT_DISPLAYMODE *pModeList; // rdx
  UINT i; // r9d
  __int64 v28; // r8
  int v29; // eax
  int v30; // eax
  _BYTE v32[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v33[4]; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int8 v34[4]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int8 v35[4]; // [rsp+5Ch] [rbp-A4h] BYREF
  struct DXGADAPTER *v36; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v38; // [rsp+70h] [rbp-90h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST v39; // [rsp+78h] [rbp-88h] BYREF
  struct _LUID v40; // [rsp+90h] [rbp-70h] BYREF
  struct DXGADAPTER *v41[2]; // [rsp+98h] [rbp-68h] BYREF
  struct _DXGK_MONITORLINKINFO v42; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v43[24]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v44[88]; // [rsp+D0h] [rbp-30h] BYREF
  DXGADAPTER *v45; // [rsp+128h] [rbp+28h]

  v4 = 0LL;
  v40 = a1;
  LowPart = a1.LowPart;
  if ( !a4 || !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9731;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pAnyStereoExists && pCurModeSupportsStereo",
      9731LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  *a3 = 0;
  v10 = Current;
  *a4 = 0;
  if ( !Current )
  {
    CachedStereoStates = -1073741811;
    WdLogSingleEntry4(2LL, 0LL, a3, a4, -1073741811LL);
    WdLogGlobalForLineNumber = 9739;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Exception encountered validating process or input. pProcess=0x%I64x, pAnyStereoExists=0x%I64x, pCurModeSupportsSte"
       "reo=0x%I64x. Returning 0x%I64x",
      0LL,
      (__int64)a3,
      (__int64)a4,
      -1073741811LL,
      0LL);
    return (unsigned int)CachedStereoStates;
  }
  v41[0] = 0LL;
  memset(&v39, 0, sizeof(v39));
  v39.VidPnSourceId = a2;
  if ( DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v41, &v40) )
  {
    v36 = 0LL;
    v13 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v36);
    if ( (int)DxgkpGetPairingAdapters(v41[0], v39.VidPnSourceId, 0LL, 0LL, v13, &v37, 0) < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
      v18[3] = v41[0] != 0LL;
      v18[4] = v39.VidPnSourceId;
      v18[5] = 0LL;
      WdLogGlobalForLineNumber = 9759;
LABEL_9:
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v36, 0LL);
      CachedStereoStates = 0;
      goto LABEL_59;
    }
    if ( !v36 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9762;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pDisplayAdapter.Get() != NULL",
        9762LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v32[0] = 0;
    v19 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v32, 0);
    v20 = v19;
    if ( v19 < 0 )
    {
      WdLogSingleEntry1(2LL, v19);
      WdLogGlobalForLineNumber = 9772;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to acquire session mode change shared lock (Status = 0x%I64x)",
        v20,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v32);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v36, 0LL);
      CachedStereoStates = v20;
      goto LABEL_59;
    }
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v43, v36, 1);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v44, v36, 0LL);
    if ( *((_DWORD *)v36 + 50) != 1 )
    {
      CachedStereoStates = -1073741130;
      LOBYTE(v4) = v36 != 0LL;
      WdLogSingleEntry4(7LL, v10, v39.hAdapter, v4, -1073741130LL);
      WdLogGlobalForLineNumber = 9795;
      goto LABEL_58;
    }
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v36 + 390), v39.VidPnSourceId) )
    {
      CachedStereoStates = -1071774238;
      LOBYTE(v4) = v36 != 0LL;
      WdLogSingleEntry3(7LL, v4, v39.VidPnSourceId, -1071774238LL);
      WdLogGlobalForLineNumber = 9804;
      goto LABEL_58;
    }
    if ( ADAPTER_DISPLAY::IsStereoModeDisabledOnVidPnSource(*((ADAPTER_DISPLAY **)v36 + 390), v39.VidPnSourceId) )
    {
      *a3 = 0;
      *a4 = 0;
LABEL_19:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v32);
      goto LABEL_9;
    }
    DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v36 + 390), v39.VidPnSourceId);
    if ( DisplayModeInfo && (*((_DWORD *)DisplayModeInfo + 10) & 0x10) != 0 )
    {
      *a3 = 1;
      *a4 = 1;
      goto LABEL_19;
    }
    *(_WORD *)v33 = 0;
    v22 = 0;
    CachedStereoStates = ADAPTER_DISPLAY::GetCachedStereoStates(
                           *((ADAPTER_DISPLAY **)v36 + 390),
                           v39.VidPnSourceId,
                           v33,
                           &v33[1]);
    if ( CachedStereoStates != -1073741275 )
    {
LABEL_46:
      if ( CachedStereoStates >= 0 )
      {
        if ( v22 )
        {
          if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v45) )
          {
            if ( DXGADAPTER::IsCoreResourceSharedOwner(v45) )
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)v44);
            v29 = COREADAPTERACCESS::AcquireExclusive((__int64)v44, 1u, 0);
            if ( v29 < 0 )
            {
              WdLogSingleEntry1(7LL, v29);
              WdLogGlobalForLineNumber = 9945;
            }
          }
          *(_WORD *)v35 = 0;
          v30 = ADAPTER_DISPLAY::GetCachedStereoStates(
                  *((ADAPTER_DISPLAY **)v36 + 390),
                  v39.VidPnSourceId,
                  v35,
                  &v35[1]);
          CachedStereoStates = v30;
          if ( v30 < 0 )
          {
            if ( v30 != -1073741275 )
              goto LABEL_58;
            CachedStereoStates = ADAPTER_DISPLAY::SetCachedStereoStates(
                                   *((_QWORD *)v36 + 390),
                                   v39.VidPnSourceId,
                                   v33[1] != 0,
                                   v33[0] != 0);
            if ( CachedStereoStates < 0 )
              goto LABEL_58;
          }
          else
          {
            *(_WORD *)v33 = *(_WORD *)v35;
          }
        }
        *a3 = v33[0];
        *a4 = v33[1];
      }
LABEL_58:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v32);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v36, 0LL);
      goto LABEL_59;
    }
    v38 = -1;
    v23 = DmmEnumClientVidPnPathTargetsFromSource(v36, v39.VidPnSourceId, 0LL, &v38);
    CachedStereoStates = v23;
    if ( v23 < 0 )
    {
      WdLogSingleEntry1(7LL, v23);
      WdLogGlobalForLineNumber = 9889;
    }
    else
    {
      *(_QWORD *)&v42.UsageHints.0 = 0LL;
      v42.DitheringSupport.Value = 0;
      LinkInfoFromTarget = MonitorGetLinkInfoFromTarget(v36, v38, &v42);
      CachedStereoStates = LinkInfoFromTarget;
      if ( LinkInfoFromTarget < 0 )
      {
        if ( LinkInfoFromTarget != -1073741275 )
        {
          WdLogSingleEntry1(7LL, LinkInfoFromTarget);
          WdLogGlobalForLineNumber = 9875;
          goto LABEL_58;
        }
LABEL_33:
        v34[0] = 0;
        CachedStereoStates = DxgkpGetDisplayModeList(v36, (struct COREADAPTERACCESS *)v44, 0, &v39, 0LL, v34);
        if ( CachedStereoStates < 0 )
        {
          pModeList = v39.pModeList;
        }
        else
        {
          v25 = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v36 + 390), v39.VidPnSourceId);
          pModeList = v39.pModeList;
          for ( i = 0; i < v39.ModeCount; ++i )
          {
            v28 = i;
            if ( (*((_DWORD *)&v39.pModeList[v28].Flags + 1) & 0x10) != 0 )
            {
              v33[1] = 1;
              if ( v39.pModeList[v28].Width == *(_DWORD *)v25
                && v39.pModeList[v28].Height == *((_DWORD *)v25 + 1)
                && v39.pModeList[v28].Format == *((_DWORD *)v25 + 2) )
              {
                v33[0] = 1;
                break;
              }
            }
          }
          v22 = 1;
        }
        if ( v34[0] )
        {
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(pModeList);
          v39.pModeList = 0LL;
        }
        goto LABEL_46;
      }
      if ( (*(_BYTE *)&v42.Capabilities.0 & 1) == 0 )
        *(_WORD *)v33 = 0;
      CachedStereoStates = (*(_BYTE *)&v42.Capabilities.0 & 1) != 0 ? 0xC0000225 : 0;
      v22 = !(*(_BYTE *)&v42.Capabilities.0 & 1);
    }
    if ( CachedStereoStates != -1073741275 )
      goto LABEL_46;
    goto LABEL_33;
  }
  HighPart = v40.HighPart;
  WdLogSingleEntry2(2LL, v40.HighPart, LowPart);
  WdLogGlobalForLineNumber = 9749;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkpAdapterCheckStereoMode function.",
    HighPart,
    LowPart,
    0LL,
    0LL,
    0LL);
  CachedStereoStates = -1073741811;
LABEL_59:
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v41, 0LL);
  return (unsigned int)CachedStereoStates;
}
