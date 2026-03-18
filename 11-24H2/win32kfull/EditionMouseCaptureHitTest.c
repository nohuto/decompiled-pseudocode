/*
 * XREFs of EditionMouseCaptureHitTest @ 0x140159490
 * Callers:
 *     <none>
 * Callees:
 *     ?IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z @ 0x140031030 (-IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     TransformVectorWithInputTargetPrecedence @ 0x1401594E0 (TransformVectorWithInputTargetPrecedence.c)
 */

__int64 __fastcall EditionMouseCaptureHitTest(__int64 a1, __int64 a2, __int64 a3)
{
  struct tagTHREADINFO *v6; // rax
  __int64 result; // rax

  v6 = PtiCurrent(a1, a2);
  result = IsThreadDesktopComposed(v6);
  if ( (_DWORD)result )
    return TransformVectorWithInputTargetPrecedence(a1, a2, a3);
  return result;
}
