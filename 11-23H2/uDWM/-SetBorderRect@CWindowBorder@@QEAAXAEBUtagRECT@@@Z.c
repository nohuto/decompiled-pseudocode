/*
 * XREFs of ?SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z @ 0x180035544
 * Callers:
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x1800349B4 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z @ 0x1800A3788 (-UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?SetClipRectangle@CWindowBorder@@AEAAXPEAVCRectangleGeometryProxy@@AEBUtagRECT@@@Z @ 0x1800359A8 (-SetClipRectangle@CWindowBorder@@AEAAXPEAVCRectangleGeometryProxy@@AEBUtagRECT@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CWindowBorder::SetBorderRect(CWindowBorder *this, const struct tagRECT *a2)
{
  __int64 v4; // rcx
  LONG left; // eax
  LONG top; // edx
  __int64 v7; // rdx

  *((struct tagRECT *)this + 19) = *a2;
  v4 = *((_QWORD *)this + 31);
  if ( v4 )
  {
    left = a2->left;
    top = a2->top;
    if ( left != *(_DWORD *)(v4 + 120) || top != *(_DWORD *)(v4 + 124) )
    {
      *(_QWORD *)(v4 + 120) = __PAIR64__(top, left);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, 8LL);
    }
    v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 16LL) + 16LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7 + 16) + 304LL))(
      *(_QWORD *)(v7 + 16),
      *(unsigned int *)(v7 + 24));
    CWindowBorder::SetClipRectangle(this, *((struct CRectangleGeometryProxy **)this + 33), a2);
  }
}
