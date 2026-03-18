/*
 * XREFs of ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1401C8810
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1401C49D4 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkPrepareModeListCache@@YAJU_LUID@@I@Z @ 0x1401C85E0 (-DxgkPrepareModeListCache@@YAJU_LUID@@I@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1401C8810 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x14040E300 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     DxgkGetDisplayModeList @ 0x140415680 (DxgkGetDisplayModeList.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14000F84C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140011820 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002DAC0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline @ 0x1400679F0 (Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1401C8810 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1401FB108 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1402D7EA4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?MonitorGetMonitorOrientationsFromTarget@@YAJPEAXIPEAK1@Z @ 0x1402E0B54 (-MonitorGetMonitorOrientationsFromTarget@@YAJPEAXIPEAK1@Z.c)
 *     ??8@YA_NAEBU_D3DKMT_DISPLAYMODE@@0@Z @ 0x1402E5550 (--8@YA_NAEBU_D3DKMT_DISPLAYMODE@@0@Z.c)
 *     _CombineModeList @ 0x1402FBCE0 (_CombineModeList.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x140315FE0 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x140343CE0 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1403AEC30 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1403B6660 (-GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x140408210 (-SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 */

__int64 __fastcall DxgkpGetDisplayModeList(
        ADAPTER_DISPLAY **a1,
        struct COREADAPTERACCESS *a2,
        struct DXGAUTOPUSHLOCK *a3,
        unsigned int *a4,
        struct _D3DKMT_GETDISPLAYMODELIST *a5,
        const struct _D3DKMT_DISPLAYMODE **a6,
        unsigned __int8 *a7)
{
  COREADAPTERACCESS *v7; // rbx
  const struct _D3DKMT_DISPLAYMODE **v8; // r14
  unsigned __int8 v9; // si
  unsigned __int8 *v10; // rax
  int v12; // r13d
  int v13; // r12d
  DXGAUTOPUSHLOCK *v14; // rcx
  int CachedModeList; // eax
  __int64 v16; // r14
  __int64 v17; // rdx
  ADAPTER_DISPLAY *v18; // rax
  unsigned int v19; // edx
  struct SESSION_VIEW *SessionViewOwner; // r11
  SESSION_VIEW *v21; // r11
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v23; // r11
  __int64 v24; // rcx
  __int64 v25; // r13
  __int64 v26; // rax
  struct DXGADAPTER *v27; // rsi
  int v28; // eax
  unsigned int *v29; // r9
  int v30; // eax
  char v31; // al
  int DisplayModeList; // eax
  __int64 v33; // rcx
  void *v34; // rcx
  int v35; // eax
  DXGAUTOPUSHLOCK *v36; // r14
  int v37; // eax
  int ModeList; // eax
  D3DKMT_DISPLAYMODE **p_pModeList; // r14
  UINT *p_ModeCount; // rsi
  int v41; // eax
  D3DKMT_DISPLAYMODE *v42; // rcx
  __int64 v43; // rax
  int v44; // r10d
  unsigned int v45; // r9d
  D3DKMT_DISPLAYMODE *v46; // r8
  int v47; // edx
  __int64 v48; // rcx
  unsigned __int8 *v49; // rbx
  UINT i; // edx
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rdx
  int v55; // r8d
  const struct _D3DKMT_DISPLAYMODE *v56; // rax
  __int64 v57; // r8
  int v58; // esi
  unsigned __int8 v60; // [rsp+50h] [rbp-B0h]
  _BYTE v61[11]; // [rsp+51h] [rbp-AFh] BYREF
  BOOL v62; // [rsp+5Ch] [rbp-A4h]
  void *v63; // [rsp+60h] [rbp-A0h]
  void *v64; // [rsp+68h] [rbp-98h] BYREF
  DXGAUTOPUSHLOCK *v65; // [rsp+70h] [rbp-90h]
  unsigned __int8 *v66; // [rsp+78h] [rbp-88h]
  COREADAPTERACCESS *v67; // [rsp+80h] [rbp-80h]
  const struct _D3DKMT_DISPLAYMODE **v68; // [rsp+88h] [rbp-78h]
  struct _D3DKMT_GETDISPLAYMODELIST v69; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v70[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v71; // [rsp+B0h] [rbp-50h]
  int v72; // [rsp+B8h] [rbp-48h]
  _BYTE v73[144]; // [rsp+C0h] [rbp-40h] BYREF

  v8 = a6;
  v9 = (unsigned __int8)a4;
  v10 = a7;
  v12 = 0;
  v68 = a6;
  v66 = a7;
  v60 = (unsigned __int8)a4;
  v65 = a3;
  v67 = a2;
  while ( 2 )
  {
    *(_DWORD *)&v61[3] = 0;
    LOBYTE(v7) = 0;
    v62 = (int)v7;
    v13 = 0;
    *(_DWORD *)&v61[7] = 0;
    v63 = 0LL;
    v64 = 0LL;
    *v10 = 0;
    if ( v8 )
      *v8 = 0LL;
    if ( MonitorGetMonitorOrientationsFromTarget(
           a1,
           *(_DWORD *)(4024LL * a5->VidPnSourceId + *((_QWORD *)a1[390] + 16) + 1072),
           (unsigned int *)&v61[3],
           a4) >= 0 )
      v62 = *(_DWORD *)&v61[3] != 0;
    if ( (unsigned int)Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline() )
    {
      v14 = v65;
      *((_QWORD *)v65 + 1) = 4024LL * a5->VidPnSourceId + 1128 + *((_QWORD *)a1[390] + 16);
      DXGAUTOPUSHLOCK::AcquireShared(v14);
    }
    CachedModeList = ADAPTER_DISPLAY::GetCachedModeList(a1[390], a5);
    LODWORD(v7) = CachedModeList;
    if ( (int)(CachedModeList + 0x80000000) >= 0 && CachedModeList != -1073741275 )
    {
      WdLogSingleEntry3(7LL, a5->VidPnSourceId, a1, CachedModeList);
      WdLogGlobalForLineNumber = 5416;
      return (unsigned int)v7;
    }
    if ( CachedModeList != -1073741275 )
    {
      v12 = 0;
      goto LABEL_87;
    }
    v16 = 0LL;
    v17 = 4024LL * a5->VidPnSourceId;
    v18 = a1[390];
    v61[1] = 0;
    v19 = *(_DWORD *)(v17 + *((_QWORD *)v18 + 16) + 1072);
    if ( v19 != -1 && (int)DxgkQueryMonitorTypeLockHeld(a1, v19, 0LL, (__int64)&v61[1], 0LL, 0LL, 0LL, 0LL) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5440;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 5440LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (unsigned int)Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline() )
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK(v65);
    v7 = v67;
    if ( DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v67 + 11)) )
      COREADAPTERACCESS::Release(v7);
    SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(a1[390], a5->VidPnSourceId);
    if ( !SessionViewOwner
      || *((_DWORD *)SessionViewOwner + 10) <= 1u
      || !SESSION_VIEW::IsCrossAdapterView(SessionViewOwner) && !v9 )
    {
      goto LABEL_52;
    }
    PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v21);
    if ( PrimaryDisplaySource != (struct DISPLAY_SOURCE *)(*((_QWORD *)a1[390] + 16) + 4024LL * a5->VidPnSourceId) )
      goto LABEL_52;
    v24 = *((_QWORD *)PrimaryDisplaySource + 7);
    v25 = v23 + 48;
    if ( v24 != v23 + 48 )
      v16 = v24 - 56;
    if ( !v16 )
    {
      v12 = (int)v63;
LABEL_52:
      if ( (unsigned int)Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline() )
      {
        v35 = COREADAPTERACCESS::AcquireShared(v7, 0LL);
        v36 = v65;
        LODWORD(v7) = v35;
        DXGPUSHLOCK::AcquireExclusive(*((DXGPUSHLOCK **)v65 + 1));
        *((_DWORD *)v36 + 4) = 2;
      }
      else
      {
        LODWORD(v7) = COREADAPTERACCESS::AcquireExclusive((__int64)v7, 1u, 0);
      }
      if ( (int)v7 < 0 )
      {
        WdLogSingleEntry1(7LL, (int)v7);
        WdLogGlobalForLineNumber = 5620;
LABEL_57:
        v34 = v63;
        goto LABEL_58;
      }
      v37 = ADAPTER_DISPLAY::GetCachedModeList(a1[390], a5);
      LODWORD(v7) = v37;
      if ( v37 >= 0 )
        goto LABEL_57;
      if ( v37 != -1073741275 )
      {
        WdLogSingleEntry3(7LL, a5->VidPnSourceId, a1, v37);
        WdLogGlobalForLineNumber = 5633;
        goto LABEL_57;
      }
      ModeList = ADAPTER_DISPLAY::CreateModeList(a1[390], v9, a5);
      v7 = (COREADAPTERACCESS *)ModeList;
      if ( ModeList < 0 )
      {
        v12 = 0;
        if ( v9 && ModeList == -1071775483 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 5650;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"!ForceCrossAdapterClone || (Status != STATUS_GRAPHICS_TRY_AGAIN_NOW)",
            5650LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        WdLogSingleEntry2(7LL, a5->VidPnSourceId, v7);
        WdLogGlobalForLineNumber = 5653;
        goto LABEL_70;
      }
      if ( v13 )
      {
        p_pModeList = &a5->pModeList;
        p_ModeCount = &a5->ModeCount;
        v41 = CombineModeList((int)a5 + 16, (int)a5 + 8, v13, v12, 1);
        v12 = 0;
        LODWORD(v7) = v41;
        if ( v41 < 0 )
        {
          WdLogSingleEntry3(7LL, a1, a5->VidPnSourceId, v41);
          v42 = *p_pModeList;
          WdLogGlobalForLineNumber = 5671;
          *p_ModeCount = 0;
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v42);
          *p_pModeList = 0LL;
LABEL_70:
          v34 = v63;
          goto LABEL_59;
        }
        *(_DWORD *)&v61[7] = 0;
        if ( *p_ModeCount )
        {
          v43 = 0LL;
          v44 = 0;
          v45 = 0;
          do
          {
            v46 = *p_pModeList;
            v47 = *((_DWORD *)&(*p_pModeList)[v43].Flags + 1);
            v48 = v45;
            v43 = (unsigned int)(v44 + 1);
            v45 = v43;
            *(_DWORD *)&v61[7] = ++v44;
            *((_DWORD *)&v46[v48].Flags + 1) = v47 & 0xFFFFFF7F;
          }
          while ( (unsigned int)v43 < *p_ModeCount );
        }
      }
      else
      {
        v12 = 0;
      }
      v49 = v66;
      *v66 = 1;
      if ( v62 )
      {
        for ( i = 0; i < a5->ModeCount; *((_DWORD *)&a5->pModeList[v51].Flags + 1) &= ~0x80u )
          v51 = i++;
      }
      v52 = ADAPTER_DISPLAY::SetCachedModeList(a1[390], a5);
      if ( v52 >= 0 )
      {
        *v49 = 0;
      }
      else
      {
        WdLogSingleEntry3(7LL, a5->VidPnSourceId, a5, v52);
        WdLogGlobalForLineNumber = 5707;
      }
      LODWORD(v7) = 0;
      goto LABEL_70;
    }
    while ( 1 )
    {
      v26 = *(_QWORD *)(v16 + 8);
      v61[0] = 0;
      v27 = *(struct DXGADAPTER **)(v26 + 16);
      v61[2] = 0;
      memset(&v69, 0, sizeof(v69));
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v73, v27, 0LL);
      v71 = 0LL;
      v72 = 0;
      if ( (unsigned int)Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline() )
      {
        v30 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v73, 0LL);
        LODWORD(v7) = v30;
        if ( v30 < 0 )
        {
          WdLogSingleEntry2(7LL, v27, v30);
          WdLogGlobalForLineNumber = 5497;
          goto LABEL_29;
        }
      }
      else
      {
        v28 = COREADAPTERACCESS::AcquireExclusive((__int64)v73, 1u, 0);
        LODWORD(v7) = v28;
        if ( v28 < 0 )
        {
          WdLogSingleEntry2(7LL, v27, v28);
          WdLogGlobalForLineNumber = 5512;
LABEL_29:
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v70);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v73);
          return (unsigned int)v7;
        }
      }
      if ( MonitorGetMonitorOrientationsFromTarget(v27, *(_DWORD *)(v16 + 1072), (unsigned int *)&v61[3], v29) >= 0 )
      {
        v31 = v62;
        if ( *(_DWORD *)&v61[3] )
          v31 = 1;
        LOBYTE(v62) = v31;
      }
      if ( (int)DxgkQueryMonitorTypeLockHeld(v27, *(_DWORD *)(v16 + 1072), 0LL, (__int64)v61, 0LL, 0LL, 0LL, 0LL) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5545;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 5545LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( v61[1] == v61[0] )
        break;
LABEL_42:
      v33 = *(_QWORD *)(v16 + 56);
      v16 = 0LL;
      if ( v33 != v25 )
        v16 = v33 - 56;
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v70);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v73);
      if ( !v16 )
      {
        v12 = (int)v64;
        v13 = *(_DWORD *)&v61[7];
        v9 = v60;
        v7 = v67;
        v63 = v64;
        goto LABEL_52;
      }
    }
    v69.VidPnSourceId = *(_DWORD *)(v16 + 16);
    DisplayModeList = DxgkpGetDisplayModeList(
                        v27,
                        (struct COREADAPTERACCESS *)v73,
                        (struct DXGAUTOPUSHLOCK *)v70,
                        v60,
                        &v69,
                        0LL,
                        &v61[2]);
    v7 = (COREADAPTERACCESS *)DisplayModeList;
    if ( DisplayModeList >= 0 )
    {
      v7 = (COREADAPTERACCESS *)(int)CombineModeList(
                                       (unsigned int)&v61[7],
                                       (unsigned int)&v64,
                                       v69.ModeCount,
                                       v69.pModeList,
                                       1);
      if ( v61[2] )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v69.pModeList);
      if ( (int)v7 < 0 )
      {
        WdLogSingleEntry3(7LL, v27, v69.VidPnSourceId, v7);
        WdLogGlobalForLineNumber = 5594;
        goto LABEL_47;
      }
      goto LABEL_42;
    }
    if ( DisplayModeList == -1071775483 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5565;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"Status != STATUS_GRAPHICS_TRY_AGAIN_NOW",
        5565LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    WdLogSingleEntry3(7LL, v27, v69.VidPnSourceId, v7);
    WdLogGlobalForLineNumber = 5569;
LABEL_47:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v70);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v73);
    v34 = v64;
LABEL_58:
    v12 = 0;
LABEL_59:
    if ( v34 )
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v34);
      v64 = 0LL;
    }
    v8 = v68;
    v9 = v60;
LABEL_87:
    if ( (_DWORD)v7 == -1071775483 )
    {
      if ( v9 )
        return (unsigned int)v7;
      if ( (unsigned int)Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline() )
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK(v65);
      v10 = v66;
      if ( *v66 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5738;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!*FreeModeList", 5738LL, 0LL, 0LL, 0LL, 0LL);
        v10 = v66;
      }
      v9 = 1;
      v60 = 1;
      continue;
    }
    break;
  }
  if ( (int)v7 >= 0 )
  {
    if ( v8 )
    {
      v53 = 4024LL * a5->VidPnSourceId;
      v54 = *((_QWORD *)a1[390] + 16);
      v55 = *(_DWORD *)(v53 + v54 + 1104);
      if ( v55 != 1 )
      {
        v56 = (const struct _D3DKMT_DISPLAYMODE *)(v54 + v53 + 644);
        *v8 = v56;
        if ( v55 == -1 )
        {
          LODWORD(v57) = 1;
          if ( v56->Width )
          {
            if ( v56->Height )
            {
              v58 = 0;
              v57 = 0LL;
              if ( a5->ModeCount )
              {
                while ( !(unsigned __int8)operator==(&a5->pModeList[v58], *v8, v57) )
                {
                  if ( ++v58 >= a5->ModeCount )
                  {
                    LODWORD(v57) = 0;
                    goto LABEL_107;
                  }
                }
                *v8 = 0LL;
                LODWORD(v57) = 1;
              }
            }
          }
LABEL_107:
          *(_DWORD *)(4024LL * a5->VidPnSourceId + *((_QWORD *)a1[390] + 16) + 1104) = v57;
        }
      }
    }
  }
  return (unsigned int)v7;
}
