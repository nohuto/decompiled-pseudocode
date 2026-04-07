/*
 * XREFs of ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x1800EEF10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowBand@CWindowData@@QEBA?AW4ZBID@@XZ @ 0x18001C5F8 (-GetWindowBand@CWindowData@@QEBA-AW4ZBID@@XZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x18006D77C (-Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x18006D878 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x1800951B0 (-Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z.c)
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x180098768 (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetDesktopId@CDesktopThumbnailBase@@QEAAJ_K@Z @ 0x180098AB8 (-SetDesktopId@CDesktopThumbnailBase@@QEAAJ_K@Z.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800BC0C8 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800BC154 (-GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbn.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::DesktopThumbnailChange(
        CWindowList *this,
        struct IDwmWindow *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        unsigned __int8 a5,
        unsigned int a6)
{
  unsigned int v9; // ebx
  CBaseObject *v10; // r14
  CMILRefCountBase *v11; // rdi
  __int64 v12; // rsi
  CContainerVisual **v13; // r12
  int DesktopThumbnail; // eax
  int PerMonitorDesktopThumbnail; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  CBaseObject *v18; // rcx
  int v19; // eax
  int v20; // r9d
  unsigned int v22; // [rsp+20h] [rbp-58h]
  CMILRefCountBase *v23; // [rsp+30h] [rbp-48h] BYREF
  CBaseObject *v24; // [rsp+38h] [rbp-40h] BYREF
  CBaseObject *v25; // [rsp+40h] [rbp-38h] BYREF
  struct tagRECT *v26; // [rsp+48h] [rbp-30h]
  RECT rc; // [rsp+50h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+60h] [rbp-18h] BYREF

  v26 = a3;
  v28 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = 0;
  v10 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v11 = 0LL;
  v23 = 0LL;
  *(_QWORD *)&rc.left = 0LL;
  if ( !a2 )
    goto LABEL_33;
  CWindowList::GetSyncedWindowData(this, a2, 1, (struct CWindowData **)&rc);
  v12 = *(_QWORD *)&rc.left;
  if ( !*(_QWORD *)&rc.left )
    goto LABEL_33;
  v13 = *(CContainerVisual ***)(*(_QWORD *)&rc.left + 440LL);
  if ( !v13 || (unsigned int)CWindowData::GetWindowBand(*(__int64 *)&rc.left) == 1 )
  {
    v9 = -2147024809;
    v22 = 5696;
    v20 = -2147024809;
    goto LABEL_26;
  }
  DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v24);
  v9 = DesktopThumbnail;
  if ( DesktopThumbnail < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, DesktopThumbnail, 0x1644u, 0LL);
    v10 = v24;
    goto LABEL_27;
  }
  v10 = v24;
  PerMonitorDesktopThumbnail = CDesktopThumbnailBase::SetDesktopId(v24, *(_QWORD *)(v12 + 136));
  v9 = PerMonitorDesktopThumbnail;
  if ( PerMonitorDesktopThumbnail < 0 )
  {
    v22 = 5701;
    goto LABEL_19;
  }
  rc = *a4;
  PerMonitorDesktopThumbnail = CDesktopThumbnail::GetPerMonitorDesktopThumbnail(v10, &rc, &v25);
  v9 = PerMonitorDesktopThumbnail;
  if ( PerMonitorDesktopThumbnail < 0 )
  {
    v22 = 5702;
LABEL_19:
    v20 = PerMonitorDesktopThumbnail;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, v22, 0LL);
    goto LABEL_27;
  }
  v16 = *(_QWORD *)(v12 + 640);
  v17 = a6 & 0x200000;
  if ( v16 )
  {
    if ( v17 )
    {
      CContainerVisual::RemoveChild(*(CContainerVisual **)(v16 + 24), *(struct CVisual **)(v12 + 640));
      v18 = *(CBaseObject **)(v12 + 640);
      if ( v18 )
      {
        CBaseObject::Release(v18);
        *(_QWORD *)(v12 + 640) = 0LL;
      }
    }
    else
    {
      *(_DWORD *)(v16 + 300) = a6;
      CDesktopThumbnailCVIVisual::Update(*(CDesktopThumbnailCVIVisual **)(v12 + 640), v26, (double)a5 / 255.0);
    }
    goto LABEL_27;
  }
  if ( !v17 )
  {
    v19 = CDesktopThumbnailCVIVisual::Create(&v23);
    v9 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x165Du, 0LL);
      v11 = v23;
      goto LABEL_27;
    }
    v11 = v23;
    *((_QWORD *)v23 + 34) = v12;
    *((_DWORD *)v11 + 75) = a6;
    *((_BYTE *)v11 + 297) = 0;
    PerMonitorDesktopThumbnail = CDesktopThumbnailCVIVisual::SetVisual(v11, v25, a4);
    v9 = PerMonitorDesktopThumbnail;
    if ( PerMonitorDesktopThumbnail < 0 )
    {
      v22 = 5731;
    }
    else
    {
      CDesktopThumbnailCVIVisual::Update(v11, v26, (double)a5 / 255.0);
      PerMonitorDesktopThumbnail = CTopLevelWindow::OnThumbnailAdded(v13, v11);
      v9 = PerMonitorDesktopThumbnail;
      if ( PerMonitorDesktopThumbnail >= 0 )
      {
        *(_QWORD *)(v12 + 640) = v11;
        CMILRefCountBase::AddRef(v11);
        goto LABEL_27;
      }
      v22 = 5734;
    }
    goto LABEL_19;
  }
LABEL_27:
  if ( v10 )
    CBaseObject::Release(v10);
  if ( v25 )
    CBaseObject::Release(v25);
  if ( v11 )
    CBaseObject::Release(v11);
LABEL_33:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v28);
  return v9;
}
