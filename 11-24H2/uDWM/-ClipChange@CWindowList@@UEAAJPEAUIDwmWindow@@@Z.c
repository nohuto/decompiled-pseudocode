/*
 * XREFs of ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18008BF80
 * Callers:
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800935E0 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18001E0A8 (-OnClipUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001E67C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateGeometryProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCBaseGeometryProxy@@@Z @ 0x18008100C (-CreateGeometryProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCBaseGeometryProxy@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::ClipChange(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // edi
  CWindowData *v5; // rbx
  CBaseObject **v6; // rsi
  bool v7; // bp
  int v8; // eax
  int GeometryProxyFromSharedHandle; // eax
  CAccent **v10; // rcx
  int v11; // eax
  int v12; // eax
  HANDLE hObject; // [rsp+80h] [rbp+18h] BYREF
  CWindowData *v15; // [rsp+88h] [rbp+20h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  hObject = 0LL;
  v15 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v15);
  v5 = v15;
  if ( v15 && *((_QWORD *)v15 + 4) )
  {
    v6 = (CBaseObject **)((char *)v15 + 424);
    v7 = *((_QWORD *)v15 + 53) != 0LL;
    v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *, HANDLE *))(*(_QWORD *)a2 + 320LL))(a2, &hObject);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x17DCu, 0LL);
    }
    else
    {
      if ( *v6 )
      {
        CBaseObject::Release(*v6);
        *v6 = 0LL;
      }
      if ( (char *)hObject - 1 > (char *)0xFFFFFFFFFFFFFFFDLL
        || (GeometryProxyFromSharedHandle = CCompositor::CreateGeometryProxyFromSharedHandle(
                                              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                                              hObject,
                                              (CResourceProxy **)v5 + 53),
            v4 = GeometryProxyFromSharedHandle,
            GeometryProxyFromSharedHandle >= 0) )
      {
        v10 = (CAccent **)*((_QWORD *)v5 + 55);
        if ( v10 && (v11 = CTopLevelWindow::OnClipUpdated(v10), v4 = v11, v11 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x17E7u, 0LL);
        }
        else if ( v7 != (*v6 != 0LL) )
        {
          v12 = CWindowData::NotifyRepresentationChanged(v5);
          v4 = v12;
          if ( v12 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x17EFu, 0LL);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, GeometryProxyFromSharedHandle, 0x17E0u, 0LL);
      }
    }
  }
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
