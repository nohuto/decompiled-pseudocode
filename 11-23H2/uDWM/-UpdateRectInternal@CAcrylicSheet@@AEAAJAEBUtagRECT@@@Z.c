/*
 * XREFs of ?UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z @ 0x1800A3788
 * Callers:
 *     ?UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z @ 0x18006B7BE (-UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x1800A394C (-UpdateTransition@CAcrylicSheet@@AEAAJXZ.c)
 * Callees:
 *     ?SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z @ 0x180035544 (-SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180037010 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180045B50 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180055EA8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAcrylicSheet::UpdateRectInternal(CAcrylicSheet *this, const struct tagRECT *a2)
{
  int v3; // ecx
  int v4; // ebp
  int v5; // esi
  int v7; // eax
  _DWORD *v8; // rdx
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  bool v12; // zf
  char v13; // al
  LONG v14; // eax
  CWindowBorder *v15; // rcx
  LONG v16; // eax
  int v17; // eax
  int v19; // edi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rax
  struct tagPOINT v24[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *((_DWORD *)this + 74);
  v4 = 0;
  if ( a2->right - a2->left >= 0 )
    v4 = a2->right - a2->left;
  v5 = 0;
  v7 = a2->bottom - a2->top;
  v8 = (_DWORD *)((char *)this + 300);
  if ( v7 >= 0 )
    v5 = v7;
  v9 = v3 - *((_DWORD *)this + 72);
  v10 = 0;
  if ( v9 >= 0 )
    v10 = v9;
  if ( v4 != v10 )
    goto LABEL_11;
  v11 = 0;
  if ( *v8 - *((_DWORD *)this + 73) >= 0 )
    v11 = *v8 - *((_DWORD *)this + 73);
  v12 = v5 == v11;
  v13 = 0;
  if ( !v12 )
LABEL_11:
    v13 = 1;
  *((struct tagRECT *)this + 18) = *a2;
  if ( !v13 )
    goto LABEL_20;
  v14 = *((_DWORD *)this + 74) - *((_DWORD *)this + 72);
  v15 = (CWindowBorder *)*((_QWORD *)this + 38);
  if ( v14 < 0 )
    v14 = 0;
  v24[0] = 0LL;
  v24[1].x = v14;
  v16 = *v8 - *((_DWORD *)this + 73);
  if ( v16 < 0 )
    v16 = 0;
  v24[1].y = v16;
  CWindowBorder::SetBorderRect(v15, (const struct tagRECT *)v24);
  if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54) + 641LL) )
  {
    *(_OWORD *)(*((_QWORD *)this + 39) + 360LL) = *((_OWORD *)this + 18);
    v17 = *((_DWORD *)this + 22);
    if ( (v17 & 0x1000) == 0 )
    {
      *((_DWORD *)this + 22) = v17 | 0x1000;
      CVisual::PropagateDirtyChildren(this);
    }
    goto LABEL_20;
  }
  v19 = CRenderDataVisual::ClearInstructions(*((CRenderDataVisual **)this + 40));
  if ( v19 >= 0 )
  {
    v23 = *((_QWORD *)this + 41);
    v24[0].x = 0;
    v24[0].y = 0;
    *(float *)&v24[1].y = (float)v5;
    *(float *)&v24[1].x = (float)v4;
    *(_OWORD *)(v23 + 32) = *(_OWORD *)&v24[0].x;
    v19 = CRenderDataVisual::AddInstruction(
            *((CRenderDataVisual **)this + 40),
            *((struct CRenderDataInstruction **)this + 41),
            v20,
            v21);
    if ( v19 >= 0 )
    {
LABEL_20:
      v24[0] = (struct tagPOINT)*((_QWORD *)this + 36);
      CVisual::SetOffset((struct tagPOINT *)this, v24);
      return 0LL;
    }
    v22 = 307LL;
  }
  else
  {
    v22 = 296LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v22,
    (__int64)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
    (const char *)(unsigned int)v19);
  return (unsigned int)v19;
}
