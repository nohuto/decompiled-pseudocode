/*
 * XREFs of ?OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z @ 0x1800E61EC
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003BAF0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x18010A900 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?OnDwmShrinkMoveSizeWindowNotification@CWindowList@@AEAAJPEAUHWND__@@IUtagPOINT@@@Z @ 0x18010B0EC (-OnDwmShrinkMoveSizeWindowNotification@CWindowList@@AEAAJPEAUHWND__@@IUtagPOINT@@@Z.c)
 * Callees:
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18001DF38 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001DF78 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x18001DFC4 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180050ED8 (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180055EA8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 */

void __fastcall CTopLevelWindow::OnIsInWindowMove(CTopLevelWindow *this, char a2, const struct tagRECT *a3)
{
  __int64 v3; // rax
  LONG left; // r10d
  LONG top; // r9d
  double v8; // xmm3_8
  bool v9; // zf
  __int64 v10; // r8
  float v11; // xmm3_4
  __int64 v12; // rax
  int v13; // eax
  unsigned int *v14; // rcx
  struct tagPOINT v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 94);
  left = a3->left;
  top = a3->top;
  v8 = DOUBLE_1_0;
  v9 = (*(_BYTE *)(v3 + 678) & 1) == 0;
  v15.x = a3->left;
  v15.y = top;
  if ( v9 )
  {
    if ( a2 )
    {
      v13 = 0;
      v8 = DOUBLE_0_95;
      if ( a3->right - left >= 0 )
        v13 = a3->right - left;
      v15.x = left + (int)((double)v13 * 0.05000000000000004 * 0.5 + 0.5);
      v15.y = top - (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 53) * -4.0);
    }
  }
  else
  {
    v10 = *(_QWORD *)(v3 + 448);
    v11 = *(float *)(v10 + 636);
    v12 = HIDWORD(*(_QWORD *)(v10 + 648));
    v15.x = left + *(_DWORD *)(v10 + 648);
    v15.y = top + v12;
    v8 = v11;
  }
  if ( *((double *)this + 22) != v8 )
  {
    CVisual::SetScale(this, v8, v8);
    CTopLevelWindow::OnWindowScaleUpdated(this);
  }
  CVisual::SetOffset((struct tagPOINT *)this, &v15);
  v14 = (unsigned int *)*((_QWORD *)this + 65);
  if ( v14 )
  {
    if ( a2 )
      CVisual::SetInterpolationMode(v14, 6u);
    else
      CVisual::ClearInterpolationMode((CVisual *)v14);
  }
}
