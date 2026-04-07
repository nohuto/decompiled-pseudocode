/*
 * XREFs of ?_GetRightFrameThickness@CTopLevelWindow@@AEAAHXZ @ 0x1800E6B98
 * Callers:
 *     ?GetBorderMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x1800E5740 (-GetBorderMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow::_GetRightFrameThickness(CTopLevelWindow *this)
{
  __int64 result; // rax

  result = *((unsigned int *)this + 158);
  if ( (int)result <= 0 )
    return *(unsigned int *)(*((_QWORD *)this + 94) + 112LL);
  return result;
}
