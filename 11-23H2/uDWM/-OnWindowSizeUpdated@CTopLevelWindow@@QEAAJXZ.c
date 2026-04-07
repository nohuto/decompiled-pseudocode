/*
 * XREFs of ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x1800349B4
 * Callers:
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x1800348C4 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18010761C (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ?GetBorderRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x1800353C0 (-GetBorderRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800354E0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z @ 0x180035544 (-SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x1800ACBA4 (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::OnWindowSizeUpdated(CTopLevelWindow *this)
{
  _DWORD *v1; // rdx
  LONG v3; // eax
  LONG v4; // eax
  int v5; // eax
  unsigned int v6; // esi
  CWindowBorder *v7; // rbx
  const struct tagRECT *BorderRect; // rax
  CButton *v9; // rcx
  CBaseObject *v10; // rbx
  int v11; // eax
  __int64 v12; // rbx
  CBaseObject *v14; // rcx
  __int64 v15; // rcx
  struct tagRECT v16; // [rsp+30h] [rbp-28h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 94);
  v3 = v1[14] - v1[12];
  if ( v3 < 0 )
    v3 = 0;
  v16.left = v3;
  v4 = v1[15] - v1[13];
  if ( v4 < 0 )
    v4 = 0;
  v16.top = v4;
  v5 = CVisual::SetSize(this, (const struct tagSIZE *)&v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x5F0u, 0LL);
  }
  else
  {
    v7 = (CWindowBorder *)*((_QWORD *)this + 34);
    BorderRect = CTopLevelWindow::GetBorderRect(this, &v16, 0);
    CWindowBorder::SetBorderRect(v7, BorderRect);
    v9 = (CButton *)*((_QWORD *)this + 97);
    if ( v9 )
    {
      CButton::SetMouseCapture(v9, 0);
      v14 = (CBaseObject *)*((_QWORD *)this + 97);
      if ( v14 )
      {
        CBaseObject::Release(v14);
        *((_QWORD *)this + 97) = 0LL;
      }
    }
    v10 = (CBaseObject *)*((_QWORD *)this + 96);
    if ( v10 )
    {
      *((_QWORD *)this + 96) = 0LL;
      (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v10 + 128LL))(v10);
      v15 = *((_QWORD *)this + 96);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 120LL))(v15);
      CBaseObject::Release(v10);
    }
    v11 = *((_DWORD *)this + 22);
    if ( (v11 & 0x4000000) == 0 )
    {
      v12 = *((_QWORD *)this + 3);
      *((_DWORD *)this + 22) = v11 | 0x4000000;
      while ( v12 && (*(_BYTE *)(v12 + 88) & 1) == 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
        v12 = *(_QWORD *)(v12 + 24);
      }
    }
  }
  return v6;
}
