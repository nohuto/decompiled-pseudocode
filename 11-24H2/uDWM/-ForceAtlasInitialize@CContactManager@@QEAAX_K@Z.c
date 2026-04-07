/*
 * XREFs of ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x180044D30
 * Callers:
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18000A10C (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x18004487C (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 * Callees:
 *     ?Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180003754 (-Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18000F500 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180012590 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x1800125FC (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180027EF8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x18003DF7C (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x18003EF80 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180095048 (-StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CContactManager::ForceAtlasInitialize(CContactManager *this, unsigned __int64 a2)
{
  struct CTransitionWindowSnapshot *v2; // rsi
  int v3; // eax
  CContainerVisual *v4; // rbx
  int v5; // eax
  CContactManager *v6; // rcx
  struct CVisual *v7; // rdi
  int v8; // eax
  struct CVisual *v9; // r14
  int v10; // eax
  CContactManager *v11; // rcx
  struct CTransitionWindowSnapshot *v12; // [rsp+20h] [rbp-20h] BYREF
  struct tagRECT v13; // [rsp+28h] [rbp-18h] BYREF
  struct tagPOINT v14; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp+38h] BYREF
  CBaseObject *v16; // [rsp+80h] [rbp+40h] BYREF
  CBaseObject *v17; // [rsp+88h] [rbp+48h] BYREF

  v15 = a2;
  v14 = (struct tagPOINT)this;
  if ( a2 == -1LL )
    GetDesktopID(1LL, &v15);
  v14 = 0LL;
  v16 = 0LL;
  v2 = 0LL;
  v17 = 0LL;
  v13.left = 0;
  v13.top = 0;
  v12 = 0LL;
  v13.right = 50;
  v13.bottom = 50;
  v3 = CContainerVisual::Create((struct CContainerVisual **)&v14);
  v4 = (CContainerVisual *)v14;
  if ( v3 >= 0 )
  {
    v5 = CContainerVisual::Create(&v16);
    v7 = v16;
    if ( v5 >= 0 && (int)CContactManager::AddToTouchNode(v6, v15, v4) >= 0 )
    {
      CContainerVisual::AddChild(v4, v7);
      v14.x = -32000;
      v14.y = -32000;
      CVisual::SetOffset((struct tagPOINT *)v7, &v14);
      v8 = CreateTouchVisual<CDirectTouchVisual>(v15, &v17);
      v9 = v17;
      if ( v8 >= 0 )
      {
        CContainerVisual::AddChild(v7, v17);
        CDirectTouchVisual::StartHold(v9, &v14, &v13);
        v10 = CTransitionWindowSnapshot::Create(&v13, v7, &v12);
        v2 = v12;
        if ( v10 >= 0 )
        {
          *((_DWORD *)v12 + 74) = 0;
          *((_DWORD *)v2 + 75) = 0;
          *((_DWORD *)v2 + 76) = 1;
          *((_DWORD *)v2 + 77) = 1;
          CContainerVisual::AddChild(v4, v2);
          (*(void (__fastcall **)(CContainerVisual *))(*(_QWORD *)v4 + 48LL))(v4);
          CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
        }
        CContainerVisual::RemoveChild(v7, v9);
      }
      CContainerVisual::RemoveChild(v4, v7);
      CContactManager::RemoveFromTouchNode(v11, v15, v4);
      if ( v9 )
        CBaseObject::Release(v9);
      if ( v2 )
        CBaseObject::Release(v2);
    }
    if ( v7 )
      CBaseObject::Release(v7);
  }
  if ( v4 )
    CBaseObject::Release(v4);
}
