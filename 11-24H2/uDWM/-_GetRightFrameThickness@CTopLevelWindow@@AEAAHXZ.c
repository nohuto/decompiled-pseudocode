/*
 * XREFs of ?_GetRightFrameThickness@CTopLevelWindow@@AEAAHXZ @ 0x18006FAD4
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180029F90 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow::_GetRightFrameThickness(CTopLevelWindow *this)
{
  __int64 result; // rax

  result = *((unsigned int *)this + 148);
  if ( (int)result <= 0 )
    return *(unsigned int *)(*((_QWORD *)this + 89) + 112LL);
  return result;
}
