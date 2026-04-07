/*
 * XREFs of ?GetResizeBorderOffsets@CTopLevelWindow@@QEAA?AUtagRECT@@I@Z @ 0x1800DB038
 * Callers:
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x1800EE11C (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall CTopLevelWindow::GetResizeBorderOffsets(
        CTopLevelWindow *this,
        struct tagRECT *__return_ptr retstr,
        unsigned int a3)
{
  LONG v5; // edx
  int v6; // eax
  int v7; // eax

  *retstr = 0LL;
  v5 = MulDiv(16, *(_DWORD *)(*((_QWORD *)this + 89) + 344LL), 96);
  if ( a3 <= 7 )
  {
    v6 = 146;
    if ( _bittest(&v6, a3) )
      retstr->left = -v5;
  }
  if ( a3 <= 8 )
  {
    v7 = 292;
    if ( _bittest(&v7, a3) )
      retstr->right = v5;
  }
  if ( a3 - 3 <= 2 )
    retstr->top = -v5;
  if ( a3 - 6 <= 2 )
    retstr->bottom = v5;
  return retstr;
}
