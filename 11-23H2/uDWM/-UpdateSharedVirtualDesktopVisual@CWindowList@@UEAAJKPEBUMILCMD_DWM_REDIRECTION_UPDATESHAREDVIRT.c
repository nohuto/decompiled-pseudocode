/*
 * XREFs of ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180005140
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18001AF70 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x18000553C (-FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x180005770 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x180005904 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x18000E108 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180016EF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18003A9B0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18004CE14 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::UpdateSharedVirtualDesktopVisual(
        CWindowList *this,
        unsigned int a2,
        const struct MILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL *a3,
        const struct _REMOTE_PORT_VIEW *a4)
{
  CWindowList *v7; // rdi
  struct CThumbnailData *ThumbnailData; // r14
  __int64 v9; // r12
  _QWORD *ViewBase; // rbx
  _QWORD *v11; // r15
  _QWORD *v12; // r15
  int v13; // r12d
  CDesktopThumbnailBase *v14; // rcx
  int SyncedWindowDataByHwnd; // eax
  unsigned int v16; // ebx
  CVisual *v17; // rcx
  int v18; // eax
  HWND v20; // rbx
  unsigned int v21; // eax
  unsigned int v22; // edx
  int v23; // edi
  unsigned int v24; // eax
  unsigned int v25; // eax
  int v26; // r9d
  HWND v27; // rbx
  unsigned int v28; // eax
  unsigned int v29; // edx
  bool v30; // [rsp+20h] [rbp-59h]
  unsigned int v31; // [rsp+20h] [rbp-59h]
  struct CWindowData *v32; // [rsp+30h] [rbp-49h] BYREF
  struct CWindowData *v33; // [rsp+38h] [rbp-41h] BYREF
  _QWORD *v34; // [rsp+40h] [rbp-39h]
  CWindowList *v35; // [rsp+48h] [rbp-31h]
  struct _RTL_CRITICAL_SECTION *v36; // [rsp+50h] [rbp-29h] BYREF
  _DWM_THUMBNAIL_PROPERTIES v37; // [rsp+58h] [rbp-21h] BYREF

  v7 = this;
  v35 = this;
  v36 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  ThumbnailData = CWindowList::FindThumbnailData(v7, *(union _LARGE_INTEGER *)((char *)a3 + 4));
  memset(&v37, 0, sizeof(v37));
  v9 = 0LL;
  if ( !ThumbnailData
    || a2 != *((_DWORD *)a3 + 2)
    || *(double *)((char *)a3 + 36) == 0.0
    || *(double *)((char *)a3 + 44) == 0.0
    || !*((_BYTE *)ThumbnailData + 34)
    || *((_DWORD *)ThumbnailData + 30) != 2 )
  {
    v31 = 4866;
    goto LABEL_55;
  }
  if ( a4->ViewSize < 8 * (unsigned __int64)(unsigned int)(*((_DWORD *)a3 + 4) + *((_DWORD *)a3 + 3)) )
  {
    v31 = 4871;
LABEL_55:
    v26 = -2147024809;
    v16 = -2147024809;
    goto LABEL_56;
  }
  ViewBase = a4->ViewBase;
  v34 = ViewBase;
  v11 = (_QWORD *)((char *)ThumbnailData + 136);
  *((_DWORD *)ThumbnailData + 40) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)ThumbnailData + 136, 8LL);
  if ( !*((_DWORD *)a3 + 3) )
  {
LABEL_9:
    v12 = (_QWORD *)((char *)ThumbnailData + 168);
    *((_DWORD *)ThumbnailData + 48) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)ThumbnailData + 168, 8LL);
    v13 = 0;
    if ( *((_DWORD *)a3 + 4) )
    {
      while ( 1 )
      {
        v27 = (HWND)ViewBase[v13 + *((_DWORD *)a3 + 3)];
        if ( (unsigned int)DwmValidateWindow(v27, a2) )
        {
          SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(v7, v27, &v33);
          v16 = SyncedWindowDataByHwnd;
          if ( SyncedWindowDataByHwnd < 0 )
          {
            v31 = 4899;
            goto LABEL_37;
          }
          if ( v33 )
          {
            v28 = *((_DWORD *)ThumbnailData + 48);
            v29 = v28 + 1;
            if ( v28 + 1 < v28 )
            {
              v23 = -2147024362;
              v25 = 181;
LABEL_33:
              v16 = v23;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, v25, 0LL);
              v31 = 4902;
              goto LABEL_34;
            }
            if ( v29 > *((_DWORD *)ThumbnailData + 47) )
            {
              v32 = (struct CWindowData *)&v33;
              v23 = DynArrayImpl<0>::Grow((int)ThumbnailData + 168, 8, 1, 0, (__int64)&v32);
              if ( v23 < 0 )
              {
                v25 = 192;
                goto LABEL_33;
              }
              *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)ThumbnailData + 48))++) + *v12) = *(_QWORD *)v32;
            }
            else
            {
              *(_QWORD *)(*v12 + 8LL * v28) = v33;
              *((_DWORD *)ThumbnailData + 48) = v29;
            }
          }
        }
        if ( (unsigned int)++v13 >= *((_DWORD *)a3 + 4) )
          break;
        ViewBase = v34;
        v7 = v35;
      }
    }
    *((_BYTE *)ThumbnailData + 200) = *((_BYTE *)a3 + 52) & 1;
    *((_BYTE *)ThumbnailData + 201) = (*((_DWORD *)a3 + 13) & 2) != 0;
    v14 = (CDesktopThumbnailBase *)*((_QWORD *)ThumbnailData + 16);
    if ( v14
      && (SyncedWindowDataByHwnd = CDesktopThumbnailBase::UpdateWindowClones(v14),
          v16 = SyncedWindowDataByHwnd,
          SyncedWindowDataByHwnd < 0) )
    {
      v31 = 4914;
    }
    else
    {
      v37.dwFlags = 3;
      v37.rcSource = *(RECT *)((char *)a3 + 20);
      v37.rcDestination.left = 0;
      v37.rcDestination.top = 0;
      v37.rcDestination.right = (int)*(double *)((char *)a3 + 36);
      v37.rcDestination.bottom = (int)*(double *)((char *)a3 + 44);
      SyncedWindowDataByHwnd = CThumbnailData::UpdateProperties(ThumbnailData, &v37);
      v16 = SyncedWindowDataByHwnd;
      if ( SyncedWindowDataByHwnd < 0 )
      {
        v31 = 4922;
      }
      else
      {
        SyncedWindowDataByHwnd = CDCompVirtualDesktopThumbnailData::EnsureThumbnailVisual(ThumbnailData);
        v16 = SyncedWindowDataByHwnd;
        if ( SyncedWindowDataByHwnd >= 0 )
        {
          SyncedWindowDataByHwnd = VisualCollection::InsertRelative(
                                     (VisualCollection *)(*((_QWORD *)ThumbnailData + 13) + 32LL),
                                     *((struct CVisual **)ThumbnailData + 14),
                                     0LL,
                                     0,
                                     v30);
          v16 = SyncedWindowDataByHwnd;
          if ( SyncedWindowDataByHwnd < 0 )
          {
            v31 = 4924;
            goto LABEL_37;
          }
          v17 = *(CVisual **)(*((_QWORD *)ThumbnailData + 2) + 440LL);
          if ( v17 )
          {
            v18 = *((_DWORD *)v17 + 22);
            if ( (v18 & 0x8000000) == 0 )
            {
              *((_DWORD *)v17 + 22) = v18 | 0x8000000;
              CVisual::PropagateDirtyChildren(v17);
            }
          }
          goto LABEL_17;
        }
        v31 = 4923;
      }
    }
LABEL_37:
    v26 = SyncedWindowDataByHwnd;
    goto LABEL_56;
  }
  while ( 1 )
  {
    v20 = (HWND)ViewBase[v9];
    if ( !(unsigned int)DwmValidateWindow(v20, a2) )
      goto LABEL_27;
    SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(v7, v20, &v32);
    v16 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v31 = 4884;
      goto LABEL_37;
    }
    if ( !v32 )
      goto LABEL_27;
    v21 = *((_DWORD *)ThumbnailData + 40);
    v22 = v21 + 1;
    if ( v21 + 1 < v21 )
      break;
    if ( v22 > *((_DWORD *)ThumbnailData + 39) )
    {
      v33 = (struct CWindowData *)&v32;
      v23 = DynArrayImpl<0>::Grow((int)ThumbnailData + 136, 8, 1, 0, (__int64)&v33);
      if ( v23 < 0 )
      {
        v24 = 192;
        goto LABEL_31;
      }
      *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)ThumbnailData + 40))++) + *v11) = *(_QWORD *)v33;
      v7 = v35;
    }
    else
    {
      *(_QWORD *)(*v11 + 8LL * v21) = v32;
      *((_DWORD *)ThumbnailData + 40) = v22;
    }
LABEL_27:
    v9 = (unsigned int)(v9 + 1);
    ViewBase = v34;
    if ( (unsigned int)v9 >= *((_DWORD *)a3 + 3) )
      goto LABEL_9;
  }
  v23 = -2147024362;
  v24 = 181;
LABEL_31:
  v16 = v23;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, v24, 0LL);
  v31 = 4887;
LABEL_34:
  v26 = v23;
LABEL_56:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, v31, 0LL);
LABEL_17:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v36);
  return v16;
}
