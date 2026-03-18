/*
 * XREFs of ReleaseMagInputLock @ 0x1401635E4
 * Callers:
 *     ApplyMagInputTransform @ 0x140163270 (ApplyMagInputTransform.c)
 *     EditionMagnificationMousePosition @ 0x1401633F0 (EditionMagnificationMousePosition.c)
 *     TransformForInputMagnification @ 0x140163440 (TransformForInputMagnification.c)
 *     _SetMagnificationInputTransform @ 0x1401FCC98 (_SetMagnificationInputTransform.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReleaseMagInputLock(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = W32GetUserSessionState(a1, a2);
  _InterlockedExchange64((volatile __int64 *)(result + 66096), 0LL);
  return result;
}
