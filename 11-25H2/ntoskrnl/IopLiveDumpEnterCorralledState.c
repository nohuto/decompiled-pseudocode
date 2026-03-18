/*
 * XREFs of IopLiveDumpEnterCorralledState @ 0x140597270
 * Callers:
 *     IopLiveDumpCapture @ 0x1405967B4 (IopLiveDumpCapture.c)
 *     IopLiveDumpEndMirroringCallback @ 0x1405971C0 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     IopLiveDumpGetMillisecondCounter @ 0x14049B334 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpCorralProcessors @ 0x140596F50 (IopLiveDumpCorralProcessors.c)
 */

__int64 __fastcall IopLiveDumpEnterCorralledState(_QWORD *a1)
{
  __int64 result; // rax

  a1[24] = 0LL;
  a1[25] = 0LL;
  IopLiveDumpCorralProcessors(a1 + 39);
  result = IopLiveDumpGetMillisecondCounter(0);
  a1[67] = result;
  return result;
}
