/*
 * XREFs of ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800D2C40
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004DAFC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x180053CA0 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@CProjectionBorderManager@@I@Z @ 0x1800CFC00 (-AddMultipleAndSet@-$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@C.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x1800CFCAC (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ?ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x1800D0AF0 (-ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ @ 0x1800D0BF8 (-ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?_FindProjectionVisualByAdapter@CProjectionBorderManager@@AEAAHAEBU_LUID@@I@Z @ 0x1800D3EE4 (-_FindProjectionVisualByAdapter@CProjectionBorderManager@@AEAAHAEBU_LUID@@I@Z.c)
 *     ?_FindProjectionVisualByRect@CProjectionBorderManager@@AEAAHAEBUtagRECT@@@Z @ 0x1800D3F4C (-_FindProjectionVisualByRect@CProjectionBorderManager@@AEAAHAEBUtagRECT@@@Z.c)
 *     ?_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z @ 0x1800D3FD4 (-_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z.c)
 *     ?_RemoveInactiveVisuals@CProjectionBorderManager@@AEAAXXZ @ 0x1800D47B0 (-_RemoveInactiveVisuals@CProjectionBorderManager@@AEAAXXZ.c)
 *     ?_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z @ 0x1800D488C (-_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z.c)
 *     ?_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ @ 0x1800D546C (-_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ.c)
 *     ?UpdateRect@CSolidRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x1800D5800 (-UpdateRect@CSolidRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::UpdateOutputDuplication(
        CProjectionBorderManager *this,
        const struct _D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_ *a2)
{
  __int64 v5; // rcx
  int inserted; // esi
  unsigned int i; // edx
  __int64 v8; // rax
  __int64 v9; // r15
  const struct _LUID *v10; // r13
  __int64 v11; // rcx
  unsigned int ProjectionVisualByAdapter; // ebx
  int v13; // eax
  _QWORD *v14; // r15
  int v15; // eax
  __int64 v16; // r13
  unsigned __int64 v17; // rcx
  struct CVisual *OverlayRootVisualForDesktop; // rsi
  __int64 v19; // r13
  struct CVisual *v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // [rsp+20h] [rbp-59h]
  char v25; // [rsp+30h] [rbp-49h]
  int v26; // [rsp+34h] [rbp-45h]
  unsigned __int64 v27; // [rsp+38h] [rbp-41h] BYREF
  __int64 v28; // [rsp+40h] [rbp-39h]
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+48h] [rbp-31h] BYREF
  struct CProjectionBorderVisual *v30; // [rsp+50h] [rbp-29h] BYREF
  struct CProjectionBorderVisual *v31[2]; // [rsp+58h] [rbp-21h]
  struct _LUID v32; // [rsp+68h] [rbp-11h]
  int v33; // [rsp+70h] [rbp-9h]
  unsigned __int64 v34; // [rsp+78h] [rbp-1h]
  char v35; // [rsp+80h] [rbp+7h]
  RECT rc1; // [rsp+88h] [rbp+Fh] BYREF

  if ( *(_DWORD *)a2 > 0x10u )
    return 2147942487LL;
  v29 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  inserted = 0;
  for ( i = 0; i < *((_DWORD *)this + 106); ++i )
  {
    v5 = 56LL * i;
    *(_BYTE *)(v5 + *((_QWORD *)this + 50) + 48) = 0;
  }
  v8 = 0LL;
  v26 = 0;
  if ( !*(_DWORD *)a2 )
  {
LABEL_32:
    CProjectionBorderManager::_RemoveInactiveVisuals(this);
    CProjectionBorderManager::_UpdateFilteredVisualList(this);
    goto LABEL_33;
  }
  while ( 1 )
  {
    v9 = 3 * v8;
    rc1 = 0LL;
    v10 = (const struct _LUID *)((char *)a2 + 24 * v8);
    if ( (int)CProjectionBorderManager::_GetAdapterDisplayRect(
                (CProjectionBorderManager *)v5,
                v10 + 2,
                v10[3].LowPart,
                &rc1) >= 0 )
      break;
    WindowFrameLoggingTelemetry::ScreenDuplicationInvalidMonitor(v11);
LABEL_31:
    v8 = (unsigned int)(v26 + 1);
    v26 = v8;
    if ( (unsigned int)v8 >= *(_DWORD *)a2 )
      goto LABEL_32;
  }
  ProjectionVisualByAdapter = CProjectionBorderManager::_FindProjectionVisualByAdapter(
                                this,
                                v10 + 2,
                                *((_DWORD *)a2 + 2 * v9 + 6));
  if ( ProjectionVisualByAdapter == -1 )
    ProjectionVisualByAdapter = CProjectionBorderManager::_FindProjectionVisualByRect(this, &rc1);
  if ( !(unsigned int)GetDesktopID(1LL, &v27) )
    goto LABEL_31;
  v25 = 0;
  if ( ProjectionVisualByAdapter == -1 )
  {
    v32 = 0LL;
    v30 = 0LL;
    v35 = 1;
    *(RECT *)v31 = rc1;
    v32 = v10[2];
    v33 = *((_DWORD *)a2 + 2 * v9 + 6);
    v34 = v27;
    v13 = CProjectionBorderVisual::Create(&v30);
    inserted = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x87u);
      goto LABEL_33;
    }
    *((_DWORD *)v30 + 77) = 1;
    v14 = (_QWORD *)((char *)this + 400);
    v15 = DynArray<CProjectionBorderManager::VisualInfo,0>::AddMultipleAndSet((__int64)this + 400, (__int64)&v30);
    inserted = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x8Au);
      goto LABEL_33;
    }
    ProjectionVisualByAdapter = *((_DWORD *)this + 106) - 1;
    v25 = 1;
  }
  else
  {
    v14 = (_QWORD *)((char *)this + 400);
    v28 = ProjectionVisualByAdapter;
    v16 = 56LL * ProjectionVisualByAdapter;
    *(_BYTE *)(*((_QWORD *)this + 50) + v16 + 48) = 1;
    if ( !EqualRect(&rc1, (const RECT *)(v16 + *((_QWORD *)this + 50) + 8LL)) )
    {
      *(RECT *)(*v14 + v16 + 8) = rc1;
      v25 = 1;
    }
    v17 = v27;
    if ( v27 == *(_QWORD *)(*v14 + v16 + 40) )
    {
      v19 = v28;
LABEL_28:
      if ( v25 )
      {
        CSolidRectangleVisual::UpdateRect(
          *(CSolidRectangleVisual **)(56 * v19 + *v14),
          (const struct tagRECT *)(56 * v19 + *v14 + 8LL));
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(56 * v19 + *v14) + 112LL))(*(_QWORD *)(56 * v19 + *v14));
        v23 = *(_QWORD *)(*(_QWORD *)(56 * v19 + *v14) + 24LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 64LL))(v23);
      }
      WindowFrameLoggingTelemetry::ScreenDuplicationEnabled(v17);
      goto LABEL_31;
    }
    *(_QWORD *)(*v14 + v16 + 40) = v27;
  }
  OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(
                                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                  v27,
                                  1);
  if ( OverlayRootVisualForDesktop
    || (OverlayRootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                        *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                        v27)) != 0LL )
  {
    v19 = ProjectionVisualByAdapter;
    v28 = 56LL * ProjectionVisualByAdapter;
    v20 = *(struct CVisual **)(v28 + *v14);
    v21 = *((_QWORD *)v20 + 3);
    if ( v21 )
      VisualCollection::Remove((VisualCollection *)(v21 + 32), v20);
    inserted = VisualCollection::InsertRelative(
                 (struct CVisual *)((char *)OverlayRootVisualForDesktop + 32),
                 *(_QWORD *)(v28 + *v14),
                 0LL,
                 0,
                 v24);
    if ( inserted < 0 )
    {
      v22 = 180;
      goto LABEL_25;
    }
    goto LABEL_28;
  }
  inserted = -2147024882;
  v22 = 172;
LABEL_25:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, v22);
  if ( ProjectionVisualByAdapter != -1 )
    CProjectionBorderManager::_RemoveVisualByIndex(this, ProjectionVisualByAdapter);
LABEL_33:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v29);
  return (unsigned int)inserted;
}
