/*
 * XREFs of ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x180053A04
 * Callers:
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18001ED90 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x18002B768 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x18004F93C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180053BD8 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180053C4C (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180053D6C (-StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180053DF8 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180053FDC (-Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180055EA8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CContactManager::ForceAtlasInitialize(CContactManager *this, unsigned __int64 a2)
{
  struct CVisual *v2; // rsi
  int v3; // eax
  struct CVisual *v4; // rdi
  int v5; // eax
  CContactManager *v6; // rcx
  CBaseObject *v7; // rbx
  int v8; // eax
  struct CVisual *v9; // rdx
  CContactManager *v10; // rcx
  int v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+20h] [rbp-38h]
  struct CVisual *v14; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v15; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int64 v16; // [rsp+98h] [rbp+40h] BYREF
  struct tagPOINT v17; // [rsp+A0h] [rbp+48h] BYREF
  CBaseObject *v18; // [rsp+A8h] [rbp+50h] BYREF

  v16 = a2;
  if ( a2 == -1LL )
    GetDesktopID(1LL, &v16);
  v17 = 0LL;
  v18 = 0LL;
  v2 = 0LL;
  v15.left = 0;
  v15.top = 0;
  v14 = 0LL;
  v15.right = 50;
  v15.bottom = 50;
  v3 = CVisual::Create((struct CVisual **)&v17);
  v4 = (struct CVisual *)v17;
  if ( v3 >= 0 )
  {
    v5 = CVisual::Create(&v18);
    v7 = v18;
    if ( v5 >= 0 && CContactManager::AddToTouchNode(v6, v16, v4) >= 0 )
    {
      VisualCollection::InsertRelative((struct CVisual *)((char *)v4 + 32), (unsigned __int64)v7, 0LL, 0, v11);
      v17.x = -32000;
      v17.y = -32000;
      CVisual::SetOffset(v7, &v17);
      if ( (int)CreateTouchVisual<CDirectTouchVisual>(v16) >= 0 )
      {
        VisualCollection::InsertRelative((CBaseObject *)((char *)v7 + 32), 0LL, 0LL, 0, v12);
        CDirectTouchVisual::StartHold(0LL, &v17, &v15);
        v8 = CTransitionWindowSnapshot::Create(&v15, v7, &v14);
        v2 = v14;
        if ( v8 >= 0 )
        {
          v9 = v14;
          *(__m128i *)((char *)v14 + 344) = _mm_load_si128((const __m128i *)&_xmm);
          VisualCollection::InsertRelative((struct CVisual *)((char *)v4 + 32), (unsigned __int64)v9, 0LL, 0, v13);
          (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v4 + 64LL))(v4);
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                       + 24LL)
                                         + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                            + 24LL));
        }
        VisualCollection::Remove((CBaseObject *)((char *)v7 + 32), 0LL);
      }
      VisualCollection::Remove((struct CVisual *)((char *)v4 + 32), v7);
      CContactManager::RemoveFromTouchNode(v10, v16, v4);
      if ( v2 )
        CBaseObject::Release(v2);
    }
    if ( v7 )
      CBaseObject::Release(v7);
  }
  if ( v4 )
    CBaseObject::Release(v4);
}
