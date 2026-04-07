/*
 * XREFs of ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180093190
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800915A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x180012928 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180025870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x180060648 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x180060D04 (-FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z.c)
 *     ?NotifyOfDirtyDCompThumbnail@CTopLevelWindow@@QEAAXXZ @ 0x180067BE8 (-NotifyOfDirtyDCompThumbnail@CTopLevelWindow@@QEAAXXZ.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x18006D340 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180093C5C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ULongLongMult @ 0x1800F466C (ULongLongMult.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::UpdateSharedVirtualDesktopVisual(
        CWindowList *this,
        unsigned int a2,
        const struct MILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL *a3,
        const struct _REMOTE_PORT_VIEW *a4)
{
  unsigned int v8; // r15d
  struct CThumbnailData *ThumbnailData; // r14
  ULONGLONG v10; // rdx
  ULONGLONG ViewBase; // rsi
  HWND v12; // rsi
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v15; // esi
  int v16; // r12d
  HWND v17; // rbx
  unsigned int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // eax
  unsigned int v21; // ebx
  int v22; // r9d
  int v23; // eax
  CDesktopThumbnailBase *v24; // rcx
  int updated; // eax
  int v26; // r9d
  unsigned int v27; // eax
  CTopLevelWindow *v28; // rcx
  unsigned int v30; // [rsp+20h] [rbp-59h]
  struct CWindowData *v31; // [rsp+30h] [rbp-49h] BYREF
  ULONGLONG pullResult; // [rsp+38h] [rbp-41h] BYREF
  CWindowList *v33; // [rsp+40h] [rbp-39h]
  struct _RTL_CRITICAL_SECTION *v34; // [rsp+48h] [rbp-31h] BYREF
  _DWM_THUMBNAIL_PROPERTIES v35; // [rsp+50h] [rbp-29h] BYREF

  v33 = this;
  v34 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = 0;
  pullResult = 0LL;
  ThumbnailData = CWindowList::FindThumbnailData(this, *(union _LARGE_INTEGER *)((char *)a3 + 4));
  memset(&v35, 0, sizeof(v35));
  if ( !ThumbnailData
    || a2 != *((_DWORD *)a3 + 2)
    || *((float *)a3 + 9) == 0.0
    || *((float *)a3 + 10) == 0.0
    || !*((_BYTE *)ThumbnailData + 34)
    || *((_DWORD *)ThumbnailData + 30) != 2 )
  {
    v30 = 5173;
    goto LABEL_48;
  }
  v10 = (unsigned int)(*((_DWORD *)a3 + 3) + *((_DWORD *)a3 + 4));
  if ( (unsigned int)v10 < *((_DWORD *)a3 + 3)
    || ULongLongMult((unsigned int)v10, v10, &pullResult) < 0
    || a4->ViewSize < pullResult )
  {
    v30 = 5180;
LABEL_48:
    v22 = -2147024809;
    v21 = -2147024809;
    goto LABEL_49;
  }
  ViewBase = (ULONGLONG)a4->ViewBase;
  pullResult = ViewBase;
  *((_DWORD *)ThumbnailData + 40) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)ThumbnailData + 136, 8u);
  if ( *((_DWORD *)a3 + 3) )
  {
    do
    {
      v12 = *(HWND *)(ViewBase + 8LL * v8);
      if ( (unsigned int)DwmValidateWindow(v12, a2) )
      {
        v31 = 0LL;
        CWindowList::GetSyncedWindowDataByHwnd(this, v12, &v31);
        if ( v31 )
        {
          v13 = *((_DWORD *)ThumbnailData + 40);
          v14 = v13 + 1;
          if ( v13 + 1 < v13 )
          {
            v15 = -2147024362;
            v20 = 179;
            goto LABEL_26;
          }
          if ( v14 > *((_DWORD *)ThumbnailData + 39) )
          {
            v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)ThumbnailData + 136, 8, 1, &v31);
            if ( v15 < 0 )
            {
              v20 = 190;
LABEL_26:
              v21 = v15;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, v20, 0LL);
              v30 = 5196;
              goto LABEL_27;
            }
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)ThumbnailData + 17) + 8LL * v13) = v31;
            *((_DWORD *)ThumbnailData + 40) = v14;
          }
        }
      }
      ++v8;
      ViewBase = pullResult;
    }
    while ( v8 < *((_DWORD *)a3 + 3) );
  }
  *((_DWORD *)ThumbnailData + 48) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)ThumbnailData + 168, 8u);
  v16 = 0;
  if ( !*((_DWORD *)a3 + 4) )
  {
LABEL_31:
    *((_BYTE *)ThumbnailData + 200) = *((_BYTE *)a3 + 44) & 1;
    *((_BYTE *)ThumbnailData + 201) = (*((_DWORD *)a3 + 11) & 2) != 0;
    v24 = (CDesktopThumbnailBase *)*((_QWORD *)ThumbnailData + 16);
    if ( v24 && (updated = CDesktopThumbnailBase::UpdateWindowClones(v24), v21 = updated, updated < 0) )
    {
      v30 = 5223;
    }
    else
    {
      *(_QWORD *)&v35.dwFlags = 3LL;
      v35.rcSource = *(RECT *)((char *)a3 + 20);
      v35.rcDestination.top = 0;
      v35.rcDestination.right = (int)*((float *)a3 + 9);
      v35.rcDestination.bottom = (int)*((float *)a3 + 10);
      updated = CThumbnailData::UpdateProperties(ThumbnailData, &v35);
      v21 = updated;
      if ( updated < 0 )
      {
        v30 = 5231;
      }
      else
      {
        updated = CDCompVirtualDesktopThumbnailData::EnsureThumbnailVisual(ThumbnailData);
        v21 = updated;
        if ( updated < 0 )
        {
          v30 = 5232;
        }
        else
        {
          updated = CContainerVisual::AddChild(
                      *((CContainerVisual **)ThumbnailData + 13),
                      *((struct CVisual **)ThumbnailData + 14));
          v21 = updated;
          if ( updated >= 0 )
          {
            v28 = *(CTopLevelWindow **)(*((_QWORD *)ThumbnailData + 2) + 440LL);
            if ( v28 )
              CTopLevelWindow::NotifyOfDirtyDCompThumbnail(v28);
            goto LABEL_50;
          }
          v30 = 5233;
        }
      }
    }
    v22 = updated;
    goto LABEL_49;
  }
  while ( 1 )
  {
    v17 = *(HWND *)(ViewBase + 8LL * (unsigned int)(v16 + *((_DWORD *)a3 + 3)));
    if ( !(unsigned int)DwmValidateWindow(v17, a2) )
      goto LABEL_30;
    v31 = 0LL;
    CWindowList::GetSyncedWindowDataByHwnd(v33, v17, &v31);
    if ( !v31 )
      goto LABEL_30;
    v18 = *((_DWORD *)ThumbnailData + 48);
    v19 = v18 + 1;
    if ( v18 + 1 < v18 )
      break;
    if ( v19 > *((_DWORD *)ThumbnailData + 47) )
    {
      v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)ThumbnailData + 168, 8, 1, &v31);
      v15 = v23;
      v21 = v23;
      if ( v23 < 0 )
      {
        v26 = v23;
        v27 = 190;
        goto LABEL_37;
      }
      ViewBase = pullResult;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)ThumbnailData + 21) + 8LL * v18) = v31;
      *((_DWORD *)ThumbnailData + 48) = v19;
    }
LABEL_30:
    if ( (unsigned int)++v16 >= *((_DWORD *)a3 + 4) )
      goto LABEL_31;
  }
  v15 = -2147024362;
  v21 = -2147024362;
  v26 = -2147024362;
  v27 = 179;
LABEL_37:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, v27, 0LL);
  v30 = 5211;
LABEL_27:
  v22 = v15;
LABEL_49:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, v30, 0LL);
LABEL_50:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v34);
  return v21;
}
