/*
 * XREFs of ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1402846E8
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1401C09D4 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     DxgkGetDisplayModeList @ 0x140283980 (DxgkGetDisplayModeList.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1402846E8 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1402854C0 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14001EE2C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002D3C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1401F4848 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1402846E8 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?MonitorGetMonitorOrientationsFromTarget@@YAJPEAXIPEAK1@Z @ 0x1402CA5BC (-MonitorGetMonitorOrientationsFromTarget@@YAJPEAXIPEAK1@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1402D60DC (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1402E9934 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     _CombineModeList @ 0x14030B520 (_CombineModeList.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1403BA4F0 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1403C1C90 (-GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1403DD2F8 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1403F6EEC (-SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 */

__int64 __fastcall DxgkpGetDisplayModeList(
        ADAPTER_DISPLAY **a1,
        struct COREADAPTERACCESS *a2,
        unsigned __int8 a3,
        struct _D3DKMT_GETDISPLAYMODELIST *a4,
        const struct _D3DKMT_DISPLAYMODE **a5,
        unsigned __int8 *a6)
{
  const struct _D3DKMT_DISPLAYMODE **v6; // rax
  unsigned __int8 *v8; // rcx
  int v11; // r15d
  void *v12; // r12
  int CachedModeList; // eax
  COREADAPTERACCESS *v14; // rsi
  __int64 v15; // rdi
  const struct _D3DKMT_DISPLAYMODE **v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  __int64 v21; // rdx
  ADAPTER_DISPLAY *v22; // rax
  unsigned int v23; // edx
  struct SESSION_VIEW *SessionViewOwner; // rax
  int v25; // eax
  int v26; // eax
  int v27; // r8d
  UINT j; // edx
  D3DKMT_DISPLAYMODE *v29; // rdi
  __int64 Height; // r8
  __int64 v31; // rbx
  D3DKMT_DISPLAYMODE **p_pModeList; // rdi
  UINT *p_ModeCount; // rbx
  int v34; // eax
  __int64 v35; // rax
  int v36; // r10d
  unsigned int v37; // r9d
  D3DKMT_DISPLAYMODE *v38; // r8
  int v39; // edx
  __int64 v40; // rcx
  unsigned __int8 *v41; // rdi
  int v42; // eax
  int ModeList; // eax
  SESSION_VIEW *v44; // r11
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v46; // r11
  __int64 v47; // rcx
  __int64 v48; // r12
  __int64 v49; // rax
  struct DXGADAPTER *v50; // r15
  unsigned int v51; // r8d
  int v52; // eax
  unsigned int *v53; // r9
  unsigned int v54; // ebx
  char v55; // al
  int DisplayModeList; // eax
  __int64 v57; // rbx
  bool v58; // zf
  __int64 v59; // rax
  D3DKMT_DISPLAYMODE *v60; // rcx
  UINT i; // edx
  __int64 v62; // rax
  unsigned __int8 v63; // [rsp+50h] [rbp-B0h]
  _BYTE v64[11]; // [rsp+51h] [rbp-AFh] BYREF
  BOOL v65; // [rsp+5Ch] [rbp-A4h]
  void *v66; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 *v67; // [rsp+68h] [rbp-98h]
  COREADAPTERACCESS *v68; // [rsp+70h] [rbp-90h]
  const struct _D3DKMT_DISPLAYMODE **v69; // [rsp+78h] [rbp-88h]
  _D3DKMT_GETDISPLAYMODELIST v70; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v71[144]; // [rsp+A0h] [rbp-60h] BYREF

  v6 = a5;
  v8 = a6;
  v67 = a6;
  v68 = a2;
  v69 = a5;
  while ( 1 )
  {
    v63 = a3;
    v65 = 0;
    v11 = 0;
    *(_DWORD *)&v64[3] = 0;
    v12 = 0LL;
    *(_DWORD *)&v64[7] = 0;
    v66 = 0LL;
    *v8 = 0;
    if ( v6 )
      *v6 = 0LL;
    if ( MonitorGetMonitorOrientationsFromTarget(
           a1,
           *(_DWORD *)(3984LL * a4->VidPnSourceId + *((_QWORD *)a1[390] + 16) + 1072),
           (unsigned int *)&v64[3],
           &a4->hAdapter) >= 0 )
      v65 = *(_DWORD *)&v64[3] != 0;
    CachedModeList = ADAPTER_DISPLAY::GetCachedModeList(a1[390], a4);
    LODWORD(v14) = CachedModeList;
    if ( (int)(CachedModeList + 0x80000000) >= 0 && CachedModeList != -1073741275 )
    {
      WdLogSingleEntry3(7LL, a4->VidPnSourceId, a1, CachedModeList);
      WdLogGlobalForLineNumber = 5399;
      return (unsigned int)v14;
    }
    v15 = 0LL;
    if ( CachedModeList == -1073741275 )
    {
      v21 = 3984LL * a4->VidPnSourceId;
      v22 = a1[390];
      v64[1] = 0;
      v23 = *(_DWORD *)(v21 + *((_QWORD *)v22 + 16) + 1072);
      if ( v23 != -1 && (int)DxgkQueryMonitorTypeLockHeld(a1, v23, 0LL, (__int64)&v64[1], 0LL, 0LL, 0LL, 0LL) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5422;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 5422LL, 0LL, 0LL, 0LL, 0LL);
      }
      v14 = v68;
      if ( DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v68 + 11)) )
        COREADAPTERACCESS::Release(v14);
      SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(a1[390], a4->VidPnSourceId);
      if ( SessionViewOwner
        && *((_DWORD *)SessionViewOwner + 10) > 1u
        && (SESSION_VIEW::IsCrossAdapterView(SessionViewOwner) || a3) )
      {
        PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v44);
        if ( PrimaryDisplaySource == (struct DISPLAY_SOURCE *)(*((_QWORD *)a1[390] + 16) + 3984LL * a4->VidPnSourceId) )
        {
          v47 = *((_QWORD *)PrimaryDisplaySource + 7);
          v48 = v46 + 48;
          if ( v47 != v46 + 48 )
            v15 = v47 - 56;
          while ( 1 )
          {
            if ( !v15 )
            {
              v11 = *(_DWORD *)&v64[7];
              v12 = v66;
              v14 = v68;
              break;
            }
            v49 = *(_QWORD *)(v15 + 8);
            v64[0] = 0;
            v50 = *(struct DXGADAPTER **)(v49 + 16);
            v64[2] = 0;
            memset(&v70, 0, sizeof(v70));
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v71, v50, 0LL);
            v52 = COREADAPTERACCESS::AcquireExclusive((__int64)v71, v51 + 1, v51);
            v54 = v52;
            if ( v52 < 0 )
            {
              WdLogSingleEntry2(7LL, v50, v52);
              WdLogGlobalForLineNumber = 5473;
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v71);
              return v54;
            }
            if ( MonitorGetMonitorOrientationsFromTarget(v50, *(_DWORD *)(v15 + 1072), (unsigned int *)&v64[3], v53) >= 0 )
            {
              v55 = v65;
              if ( *(_DWORD *)&v64[3] )
                v55 = 1;
              LOBYTE(v65) = v55;
            }
            if ( (int)DxgkQueryMonitorTypeLockHeld(v50, *(_DWORD *)(v15 + 1072), 0LL, (__int64)v64, 0LL, 0LL, 0LL, 0LL) < 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5504;
              DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 5504LL, 0LL, 0LL, 0LL, 0LL);
            }
            if ( v64[1] == v64[0] )
            {
              a3 = v63;
              v70.VidPnSourceId = *(_DWORD *)(v15 + 16);
              DisplayModeList = DxgkpGetDisplayModeList(v50, (struct COREADAPTERACCESS *)v71, v63, &v70, 0LL, &v64[2]);
              v14 = (COREADAPTERACCESS *)DisplayModeList;
              if ( DisplayModeList < 0 )
              {
                if ( DisplayModeList == -1071775483 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 5523;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"Status != STATUS_GRAPHICS_TRY_AGAIN_NOW",
                    5523LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                WdLogSingleEntry3(7LL, v50, v70.VidPnSourceId, v14);
                WdLogGlobalForLineNumber = 5527;
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v71);
                v12 = v66;
                goto LABEL_21;
              }
              v14 = (COREADAPTERACCESS *)(int)CombineModeList(
                                                (unsigned int)&v64[7],
                                                (unsigned int)&v66,
                                                v70.ModeCount,
                                                v70.pModeList,
                                                1);
              if ( v64[2] )
                DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v70.pModeList);
              if ( (int)v14 < 0 )
              {
                WdLogSingleEntry3(7LL, v50, v70.VidPnSourceId, v14);
                WdLogGlobalForLineNumber = 5552;
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v71);
                v12 = v66;
                goto LABEL_21;
              }
            }
            v57 = *(_QWORD *)(v15 + 56);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v71);
            v58 = v57 == v48;
            v59 = v57 - 56;
            a3 = v63;
            v15 = 0LL;
            if ( !v58 )
              v15 = v59;
          }
        }
      }
      v25 = COREADAPTERACCESS::AcquireExclusive((__int64)v14, 1u, 0);
      LODWORD(v14) = v25;
      if ( v25 < 0 )
      {
        WdLogSingleEntry1(7LL, v25);
        WdLogGlobalForLineNumber = 5568;
      }
      else
      {
        v26 = ADAPTER_DISPLAY::GetCachedModeList(a1[390], a4);
        LODWORD(v14) = v26;
        if ( v26 < 0 )
        {
          if ( v26 != -1073741275 )
          {
            WdLogSingleEntry3(7LL, a4->VidPnSourceId, a1, v26);
            WdLogGlobalForLineNumber = 5581;
            goto LABEL_21;
          }
          ModeList = ADAPTER_DISPLAY::CreateModeList(a1[390], a3, a4);
          v14 = (COREADAPTERACCESS *)ModeList;
          if ( ModeList >= 0 )
          {
            if ( v11 )
            {
              p_pModeList = &a4->pModeList;
              p_ModeCount = &a4->ModeCount;
              v34 = CombineModeList((int)a4 + 16, (int)a4 + 8, v11, (_DWORD)v12, 1);
              LODWORD(v14) = v34;
              if ( v34 < 0 )
              {
                WdLogSingleEntry3(7LL, a1, a4->VidPnSourceId, v34);
                v60 = *p_pModeList;
                WdLogGlobalForLineNumber = 5619;
                *p_ModeCount = 0;
                DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v60);
                a3 = v63;
                *p_pModeList = 0LL;
                goto LABEL_21;
              }
              *(_DWORD *)&v64[7] = 0;
              if ( *p_ModeCount )
              {
                v35 = 0LL;
                v36 = 0;
                v37 = 0;
                do
                {
                  v38 = *p_pModeList;
                  v39 = *((_DWORD *)&(*p_pModeList)[v35].Flags + 1);
                  v40 = v37;
                  v35 = (unsigned int)(v36 + 1);
                  v37 = v35;
                  *(_DWORD *)&v64[7] = ++v36;
                  *((_DWORD *)&v38[v40].Flags + 1) = v39 & 0xFFFFFF7F;
                }
                while ( (unsigned int)v35 < *p_ModeCount );
              }
              a3 = v63;
            }
            v41 = v67;
            *v67 = 1;
            if ( v65 )
            {
              for ( i = 0; i < a4->ModeCount; *((_DWORD *)&a4->pModeList[v62].Flags + 1) &= ~0x80u )
                v62 = i++;
            }
            v42 = ADAPTER_DISPLAY::SetCachedModeList(a1[390], a4);
            if ( v42 >= 0 )
            {
              *v41 = 0;
            }
            else
            {
              WdLogSingleEntry3(7LL, a4->VidPnSourceId, a4, v42);
              WdLogGlobalForLineNumber = 5655;
            }
            LODWORD(v14) = 0;
          }
          else
          {
            if ( a3 && ModeList == -1071775483 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5598;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"!ForceCrossAdapterClone || (Status != STATUS_GRAPHICS_TRY_AGAIN_NOW)",
                5598LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            WdLogSingleEntry2(7LL, a4->VidPnSourceId, v14);
            WdLogGlobalForLineNumber = 5601;
          }
        }
      }
LABEL_21:
      if ( v12 )
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v12);
        v66 = 0LL;
      }
    }
    if ( (_DWORD)v14 != -1071775483 )
      break;
    if ( a3 )
      return (unsigned int)v14;
    v8 = v67;
    if ( *v67 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5680;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!*FreeModeList", 5680LL, 0LL, 0LL, 0LL, 0LL);
      v8 = v67;
    }
    v6 = v69;
    a3 = 1;
  }
  if ( (int)v14 >= 0 )
  {
    v16 = v69;
    if ( v69 )
    {
      v17 = 3984LL * a4->VidPnSourceId;
      v18 = *((_QWORD *)a1[390] + 16);
      v19 = *(_DWORD *)(v17 + v18 + 1104);
      if ( v19 != 1 )
      {
        v31 = v17 + v18 + 644;
        *v69 = (const struct _D3DKMT_DISPLAYMODE *)v31;
        if ( v19 == -1 )
        {
          v27 = 1;
          if ( *(_DWORD *)v31 && *(_DWORD *)(v31 + 4) )
          {
            for ( j = 0; ; ++j )
            {
              v27 = 0;
              if ( j >= a4->ModeCount )
                break;
              v29 = &a4->pModeList[j];
              if ( v29->Width == *(_DWORD *)v31 )
              {
                Height = v29->Height;
                if ( (_DWORD)Height == *(_DWORD *)(v31 + 4)
                  && *(_QWORD *)&v29->Format == *(_QWORD *)(v31 + 8)
                  && v29->DisplayOrientation == *(_DWORD *)(v31 + 28)
                  && v29->DisplayFixedOutput == *(_DWORD *)(v31 + 32)
                  && v29->ScanLineOrdering == *(_DWORD *)(v31 + 24)
                  && ((*((_BYTE *)&v29->Flags + 4) ^ *(_BYTE *)(v31 + 40)) & 0x10) == 0
                  && ((*(_BYTE *)&v29->Flags ^ *(_BYTE *)(v31 + 36)) & 2) == 0 )
                {
                  if ( v29->RefreshRate.Numerator != *(_DWORD *)(v31 + 16)
                    || v29->RefreshRate.Denominator != *(_DWORD *)(v31 + 20) )
                  {
                    WdLogSingleEntry4(7LL, v29->Width, Height, v29->Format, v29->IntegerRefreshRate);
                    WdLogGlobalForLineNumber = 2022;
                    WdLogSingleEntry4(
                      7LL,
                      v29->RefreshRate.Numerator,
                      v29->RefreshRate.Denominator,
                      *(unsigned int *)(v31 + 16),
                      *(unsigned int *)(v31 + 20));
                    WdLogGlobalForLineNumber = 2028;
                  }
                  *v16 = 0LL;
                  v27 = 1;
                  break;
                }
              }
            }
          }
          *(_DWORD *)(3984LL * a4->VidPnSourceId + *((_QWORD *)a1[390] + 16) + 1104) = v27;
        }
      }
    }
  }
  return (unsigned int)v14;
}
