/*
 * XREFs of ?ScaleForDpi@CWindowData@@QEBAII@Z @ 0x1800809A0
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180029F90 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall CWindowData::ScaleForDpi(CWindowData *this)
{
  return MulDiv(5, *((_DWORD *)this + 87), 96);
}
