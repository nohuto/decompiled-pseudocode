/*
 * XREFs of ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x180029978
 * Callers:
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180029380 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z @ 0x1800DACF4 (-CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetSize@CVisualProxy@@QEAAJNN@Z @ 0x1800296B0 (-SetSize@CVisualProxy@@QEAAJNN@Z.c)
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x1800316D8 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x180039A4C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003A4E4 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateWindowTarget(CTopLevelWindow *this)
{
  __int64 v2; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  LONG v6; // edx
  int left; // eax
  LONG v8; // eax
  _DWORD *v9; // rax
  int v10; // ebx
  int v11; // edi
  int v12; // eax
  int v13; // eax
  CMILRefCountBase *v14; // rbx
  CBaseObject *v15; // rcx
  struct tagRECT v16; // [rsp+20h] [rbp-20h] BYREF
  struct _MARGINS v17; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  CMILRefCountBase *v19; // [rsp+50h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 98);
  if ( !v2 )
    return 0LL;
  v4 = CVisualProxy::SetSize(
         *(CVisualProxy **)(v2 + 16),
         (double)(*(_DWORD *)(*((_QWORD *)this + 89) + 56LL) - *(_DWORD *)(*((_QWORD *)this + 89) + 48LL)),
         (double)(*(_DWORD *)(*((_QWORD *)this + 89) + 60LL) - *(_DWORD *)(*((_QWORD *)this + 89) + 52LL)));
  if ( v4 >= 0 )
  {
    *(_QWORD *)&v16.left = 0LL;
    if ( (*((_BYTE *)this + 200) & 4) != 0 )
    {
      v6 = *((_DWORD *)this + 161);
      left = *((_DWORD *)this + 18) - *((_DWORD *)this + 160);
      v16.left = *((_DWORD *)this + 159);
      v16.top = v6;
      if ( v16.left > left )
        left = v16.left;
      v16.right = left;
      v8 = *((_DWORD *)this + 19) - *((_DWORD *)this + 162);
      if ( v6 > v8 )
        v8 = v6;
    }
    else
    {
      v9 = (_DWORD *)*((_QWORD *)this + 89);
      v17 = 0LL;
      v10 = v9[14] - v9[12];
      v11 = v9[15] - v9[13];
      CTopLevelWindow::GetFrameMargins(this, &v17);
      v16.left = v17.cxLeftWidth;
      v16.top = v17.cyTopHeight;
      v12 = 0;
      if ( v10 >= 0 )
        v12 = v10;
      v16.right = v12 - v17.cxRightWidth;
      v13 = 0;
      if ( v11 >= 0 )
        v13 = v11;
      v8 = v13 - v17.cyBottomHeight;
    }
    v19 = 0LL;
    v16.bottom = v8;
    v4 = ResourceHelper::CreateRectangleGeometry(&v16, &v19);
    if ( v4 >= 0 )
    {
      v14 = v19;
      CVisualProxy::SetClip(*(CVisualProxy **)(*((_QWORD *)this + 98) + 16LL), v19);
      v15 = (CBaseObject *)*((_QWORD *)this + 99);
      if ( v15 )
        CBaseObject::Release(v15);
      *((_QWORD *)this + 99) = v14;
      if ( v14 )
        CMILRefCountBase::AddRef(v14);
      return 0LL;
    }
    v5 = 6426LL;
  }
  else
  {
    v5 = 6394LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)v4,
    v16.left);
  return (unsigned int)v4;
}
