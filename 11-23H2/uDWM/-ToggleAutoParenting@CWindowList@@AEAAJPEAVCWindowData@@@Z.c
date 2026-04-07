/*
 * XREFs of ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18010CC54
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EB90 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003BAF0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180041680 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180047970 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800482A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x18010B6B0 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180044F48 (-InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180055EA8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x180105498 (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::ToggleAutoParenting(CWindowList *this, struct CWindowData *a2)
{
  CDesktopManager *v3; // rax
  int inserted; // eax
  unsigned int v5; // edi
  __int64 v7; // r8
  __int64 v8; // rcx
  LONG v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = (struct tagPOINT)this;
  CVisual::RemoveSelfFromParent(*((CVisual **)a2 + 55));
  v3 = CDesktopManager::s_pDesktopManagerInstance;
  *((_BYTE *)a2 + 678) ^= (*((_BYTE *)a2 + 678) ^ ~*((_BYTE *)a2 + 678)) & 0x10;
  inserted = CWindowList::InsertIntoVisualTree(*((CWindowList **)v3 + 54), (struct _LIST_ENTRY *)a2);
  v5 = inserted;
  if ( inserted >= 0 )
  {
    v7 = *((_QWORD *)a2 + 55);
    if ( (*((_BYTE *)a2 + 678) & 0x10) != 0 )
    {
      v8 = *((_QWORD *)a2 + 75);
      v11 = *(struct tagPOINT *)(v7 + 120);
      v11.x -= *(_DWORD *)(v8 + 48);
      v11.y -= *(_DWORD *)(v8 + 52);
    }
    else
    {
      if ( (*(_BYTE *)(v7 + 249) & 1) != 0 )
      {
        v9 = -32000;
        v11.x = -32000;
      }
      else
      {
        v11.x = *((_DWORD *)a2 + 12);
        v9 = *((_DWORD *)a2 + 13);
      }
      v11.y = v9;
    }
    CVisual::SetOffset((struct tagPOINT *)v7, &v11);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2016,
      (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)inserted);
    return v5;
  }
}
