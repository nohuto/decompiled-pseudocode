/*
 * XREFs of ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1401C49D4
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x140412B00 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14000F84C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140011820 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002DAC0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x140036924 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x140038E8C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1400395DC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003E5F0 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004174C (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x14004A410 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline @ 0x1400679F0 (Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z @ 0x14019AEA0 (-SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1401C8810 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D.c)
 *     ?MonitorGetLinkInfoFromTarget@@YAJPEAXIPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x14028EF80 (-MonitorGetLinkInfoFromTarget@@YAJPEAXIPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x14031592C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?IsStereoModeDisabledOnVidPnSource@ADAPTER_DISPLAY@@QEBA_NI@Z @ 0x1403DC184 (-IsStereoModeDisabledOnVidPnSource@ADAPTER_DISPLAY@@QEBA_NI@Z.c)
 *     ?GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z @ 0x140407D40 (-GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z.c)
 */

__int64 __fastcall DxgkpAdapterCheckStereoMode(
        struct _LUID a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  __int64 v4; // r14
  __int64 v5; // rsi
  DWORD LowPart; // ebx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v10; // r15
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
  const struct _DXGK_DISPLAYMODE_INFO *v25; // r10
  D3DKMT_DISPLAYMODE *pModeList; // rdx
  unsigned int v27; // r9d
  __int64 v28; // r8
  int v29; // eax
  int v30; // eax
  int v31; // eax
  _BYTE v33[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v34[4]; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int8 v35[4]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int8 v36[4]; // [rsp+5Ch] [rbp-A4h] BYREF
  struct DXGADAPTER *v37; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v38; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v39; // [rsp+70h] [rbp-90h] BYREF
  struct DXGADAPTER *v40[2]; // [rsp+78h] [rbp-88h] BYREF
  _D3DKMT_GETDISPLAYMODELIST v41; // [rsp+88h] [rbp-78h] BYREF
  struct _LUID v42; // [rsp+A0h] [rbp-60h] BYREF
  struct _DXGK_MONITORLINKINFO v43; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v44[24]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v45[8]; // [rsp+D0h] [rbp-30h] BYREF
  DXGPUSHLOCK *v46; // [rsp+D8h] [rbp-28h]
  int v47; // [rsp+E0h] [rbp-20h]
  _BYTE v48[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v49; // [rsp+F0h] [rbp-10h]
  int v50; // [rsp+F8h] [rbp-8h]
  _BYTE v51[8]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v52; // [rsp+108h] [rbp+8h]
  int v53; // [rsp+110h] [rbp+10h]
  _BYTE v54[88]; // [rsp+120h] [rbp+20h] BYREF
  DXGADAPTER *v55; // [rsp+178h] [rbp+78h]

  v4 = a2;
  v5 = 0LL;
  v42 = a1;
  LowPart = a1.LowPart;
  if ( !a4 || !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9740;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pAnyStereoExists && pCurModeSupportsStereo",
      9740LL,
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
    WdLogGlobalForLineNumber = 9748;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
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
  v40[0] = 0LL;
  if ( DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v40, &v42) )
  {
    v37 = 0LL;
    v13 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v37);
    if ( (int)DxgkpGetPairingAdapters(v40[0], v4, 0LL, 0LL, v13, &v38, 0) < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
      v18[3] = v40[0] != 0LL;
      v18[4] = v4;
      v18[5] = 0LL;
      WdLogGlobalForLineNumber = 9765;
LABEL_9:
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v37, 0LL);
      CachedStereoStates = 0;
      goto LABEL_68;
    }
    if ( !v37 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9768;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pDisplayAdapter.Get() != NULL",
        9768LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v33[0] = 0;
    v19 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v33, 0);
    v20 = v19;
    if ( v19 < 0 )
    {
      WdLogSingleEntry1(2LL, v19);
      WdLogGlobalForLineNumber = 9778;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to acquire session mode change shared lock (Status = 0x%I64x)",
        v20,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v33);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v37, 0LL);
      CachedStereoStates = v20;
      goto LABEL_68;
    }
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v44, v37, 1);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v54, v37, 0LL);
    if ( *((_DWORD *)v37 + 50) != 1 )
    {
      CachedStereoStates = -1073741130;
      LOBYTE(v5) = v37 != 0LL;
      WdLogSingleEntry4(7LL, v10, v40[0], v5, -1073741130LL);
      WdLogGlobalForLineNumber = 9801;
      goto LABEL_67;
    }
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v37 + 390), v4) )
    {
      CachedStereoStates = -1071774238;
      LOBYTE(v5) = v37 != 0LL;
      WdLogSingleEntry3(7LL, v5, v4, -1071774238LL);
      WdLogGlobalForLineNumber = 9810;
      goto LABEL_67;
    }
    if ( ADAPTER_DISPLAY::IsStereoModeDisabledOnVidPnSource(*((ADAPTER_DISPLAY **)v37 + 390), v4) )
    {
      *a3 = 0;
      *a4 = 0;
LABEL_19:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v33);
      goto LABEL_9;
    }
    DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v37 + 390), v4);
    if ( DisplayModeInfo && (*((_DWORD *)DisplayModeInfo + 10) & 0x10) != 0 )
    {
      *a3 = 1;
      *a4 = 1;
      goto LABEL_19;
    }
    v22 = 0;
    *(_WORD *)v34 = 0;
    v49 = 0LL;
    v50 = 0;
    if ( (unsigned int)Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline() )
    {
      v49 = 4024 * v4 + 1128 + *(_QWORD *)(*((_QWORD *)v37 + 390) + 128LL);
      DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v48);
    }
    CachedStereoStates = ADAPTER_DISPLAY::GetCachedStereoStates(*((ADAPTER_DISPLAY **)v37 + 390), v4, v34, &v34[1]);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v48);
    if ( CachedStereoStates != -1073741275 )
    {
LABEL_49:
      if ( CachedStereoStates >= 0 )
      {
        if ( v22 )
        {
          v46 = 0LL;
          v47 = 0;
          if ( (unsigned int)Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( !DXGADAPTER::IsCoreResourceSharedOwner(v55) )
            {
              v30 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v54, 0LL);
              CachedStereoStates = v30;
              if ( v30 < 0 )
              {
                WdLogSingleEntry1(7LL, v30);
                WdLogGlobalForLineNumber = 9966;
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v45);
                goto LABEL_67;
              }
            }
            v46 = (DXGPUSHLOCK *)(4024 * v4 + 1128 + *(_QWORD *)(*((_QWORD *)v37 + 390) + 128LL));
            DXGPUSHLOCK::AcquireExclusive(v46);
            v47 = 2;
          }
          else if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v55) )
          {
            if ( DXGADAPTER::IsCoreResourceSharedOwner(v55) )
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)v54);
            v29 = COREADAPTERACCESS::AcquireExclusive((__int64)v54, 1u, 0);
            if ( v29 < 0 )
            {
              WdLogSingleEntry1(7LL, v29);
              WdLogGlobalForLineNumber = 9988;
            }
          }
          *(_WORD *)v36 = 0;
          v31 = ADAPTER_DISPLAY::GetCachedStereoStates(*((ADAPTER_DISPLAY **)v37 + 390), v4, v36, &v36[1]);
          CachedStereoStates = v31;
          if ( v31 < 0 )
          {
            if ( v31 == -1073741275 )
              CachedStereoStates = ADAPTER_DISPLAY::SetCachedStereoStates(
                                     *((_QWORD *)v37 + 390),
                                     v4,
                                     v34[1] != 0,
                                     v34[0] != 0);
          }
          else
          {
            *(_WORD *)v34 = *(_WORD *)v36;
          }
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v45);
          if ( CachedStereoStates < 0 )
            goto LABEL_67;
        }
        *a3 = v34[0];
        *a4 = v34[1];
      }
LABEL_67:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v33);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v37, 0LL);
      goto LABEL_68;
    }
    v39 = -1;
    v23 = DmmEnumClientVidPnPathTargetsFromSource(v37, v4, 0LL, &v39);
    CachedStereoStates = v23;
    if ( v23 < 0 )
    {
      WdLogSingleEntry1(7LL, v23);
      WdLogGlobalForLineNumber = 9906;
    }
    else
    {
      *(_QWORD *)&v43.UsageHints.0 = 0LL;
      v43.DitheringSupport.Value = 0;
      LinkInfoFromTarget = MonitorGetLinkInfoFromTarget(v37, v39, &v43);
      CachedStereoStates = LinkInfoFromTarget;
      if ( LinkInfoFromTarget < 0 )
      {
        if ( LinkInfoFromTarget == -1073741275 )
        {
LABEL_35:
          v52 = 0LL;
          v53 = 0;
          memset(&v41, 0, sizeof(v41));
          v41.VidPnSourceId = v4;
          v35[0] = 0;
          CachedStereoStates = DxgkpGetDisplayModeList(
                                 v37,
                                 (struct COREADAPTERACCESS *)v54,
                                 (struct DXGAUTOPUSHLOCK *)v51,
                                 0,
                                 &v41,
                                 0LL,
                                 v35);
          if ( CachedStereoStates < 0 )
          {
            pModeList = v41.pModeList;
          }
          else
          {
            v25 = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v37 + 390), v41.VidPnSourceId);
            pModeList = v41.pModeList;
            v27 = 0;
            if ( v41.ModeCount )
            {
              while ( 1 )
              {
                v28 = v27;
                if ( (*((_DWORD *)&v41.pModeList[v28].Flags + 1) & 0x10) != 0 )
                {
                  v34[1] = 1;
                  if ( v41.pModeList[v28].Width == *(_DWORD *)v25
                    && v41.pModeList[v28].Height == *((_DWORD *)v25 + 1)
                    && v41.pModeList[v28].Format == *((_DWORD *)v25 + 2) )
                  {
                    break;
                  }
                }
                if ( ++v27 >= v41.ModeCount )
                  goto LABEL_44;
              }
              v34[0] = 1;
            }
LABEL_44:
            v22 = 1;
          }
          if ( v35[0] )
          {
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(pModeList);
            v41.pModeList = 0LL;
          }
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v51);
          goto LABEL_49;
        }
        WdLogSingleEntry1(7LL, LinkInfoFromTarget);
        WdLogGlobalForLineNumber = 9892;
      }
      else
      {
        if ( (*(_BYTE *)&v43.Capabilities.0 & 1) == 0 )
          *(_WORD *)v34 = 0;
        CachedStereoStates = (*(_BYTE *)&v43.Capabilities.0 & 1) != 0 ? 0xC0000225 : 0;
        v22 = !(*(_BYTE *)&v43.Capabilities.0 & 1);
      }
    }
    if ( CachedStereoStates != -1073741275 )
      goto LABEL_49;
    goto LABEL_35;
  }
  HighPart = v42.HighPart;
  WdLogSingleEntry2(2LL, v42.HighPart, LowPart);
  WdLogGlobalForLineNumber = 9755;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkpAdapterCheckStereoMode function.",
    HighPart,
    LowPart,
    0LL,
    0LL,
    0LL);
  CachedStereoStates = -1073741811;
LABEL_68:
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v40, 0LL);
  return (unsigned int)CachedStereoStates;
}
