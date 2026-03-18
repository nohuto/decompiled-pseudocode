/*
 * XREFs of EditionMouseCaptureHitTest @ 0x1C01E5B40
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadDesktopComposed @ 0x1C005F7D4 (IsThreadDesktopComposed.c)
 *     TransformVectorWithInputTargetPrecedence @ 0x1C0150728 (TransformVectorWithInputTargetPrecedence.c)
 */

__int64 EditionMouseCaptureHitTest()
{
  __int64 result; // rax
  int v1; // r8d
  int v2; // r9d
  const struct tagWND *v3; // r10

  result = IsThreadDesktopComposed(gptiCurrent);
  if ( (_DWORD)result )
    return TransformVectorWithInputTargetPrecedence(v3, v2, v1);
  return result;
}
