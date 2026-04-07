/*
 * XREFs of ?UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z @ 0x1800684A8
 * Callers:
 *     ?UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z @ 0x180067DFC (-UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x18006821C (-UpdateTransition@CAcrylicSheet@@AEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180024618 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800250EC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180027EF8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z @ 0x180027F28 (-SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003450C (-SetRect@CSolidRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAcrylicSheet::UpdateRectInternal(CAcrylicSheet *this, const struct tagRECT *a2)
{
  int v3; // ecx
  int v4; // r14d
  int v5; // esi
  _DWORD *v6; // r8
  int v7; // eax
  _DWORD *v9; // rdx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  bool v13; // zf
  char v14; // al
  LONG v16; // eax
  CWindowBorder *v17; // rcx
  LONG v18; // eax
  int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct tagRECT v22; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct tagPOINT v24; // [rsp+50h] [rbp+20h] BYREF

  v3 = *((_DWORD *)this + 62);
  v4 = 0;
  if ( a2->right - a2->left >= 0 )
    v4 = a2->right - a2->left;
  v5 = 0;
  v6 = (_DWORD *)((char *)this + 244);
  v7 = a2->bottom - a2->top;
  v9 = (_DWORD *)((char *)this + 252);
  if ( v7 >= 0 )
    v5 = v7;
  v10 = v3 - *((_DWORD *)this + 60);
  v11 = 0;
  if ( v10 >= 0 )
    v11 = v10;
  if ( v4 != v11 )
    goto LABEL_13;
  v12 = 0;
  if ( *v9 - *v6 >= 0 )
    v12 = *v9 - *v6;
  v13 = v5 == v12;
  v14 = 0;
  if ( !v13 )
LABEL_13:
    v14 = 1;
  *((struct tagRECT *)this + 15) = *a2;
  if ( !v14 )
    goto LABEL_12;
  v16 = *((_DWORD *)this + 62) - *((_DWORD *)this + 60);
  v17 = (CWindowBorder *)*((_QWORD *)this + 32);
  if ( v16 < 0 )
    v16 = 0;
  *(_QWORD *)&v22.left = 0LL;
  v22.right = v16;
  v18 = *v9 - *v6;
  if ( v18 < 0 )
    v18 = 0;
  v22.bottom = v18;
  CWindowBorder::SetBorderRect(v17, &v22);
  if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53) + 633LL) )
  {
    *(_OWORD *)(*((_QWORD *)this + 33) + 312LL) = *((_OWORD *)this + 15);
    CVisual::SetDirtyFlags(this, 4096);
LABEL_12:
    v24 = (struct tagPOINT)*((_QWORD *)this + 30);
    CVisual::SetOffset((struct tagPOINT *)this, &v24);
    return 0LL;
  }
  v19 = CRenderDataVisual::ClearInstructions(*((CRenderDataVisual **)this + 34));
  if ( v19 >= 0 )
  {
    v21 = *((_QWORD *)this + 35);
    v22.left = 0;
    v22.top = 0;
    *(float *)&v22.bottom = (float)v5;
    *(float *)&v22.right = (float)v4;
    CSolidRectangleInstruction::SetRect(v21, &v22);
    v19 = CRenderDataVisual::AddInstruction(
            *((CRenderDataVisual **)this + 34),
            *((struct CRenderDataInstruction **)this + 35));
    if ( v19 >= 0 )
      goto LABEL_12;
    v20 = 307LL;
  }
  else
  {
    v20 = 296LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
    (const char *)(unsigned int)v19,
    v22.left);
  return (unsigned int)v19;
}
