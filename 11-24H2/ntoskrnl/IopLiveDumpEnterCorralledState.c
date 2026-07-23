/*
 * XREFs of IopLiveDumpEnterCorralledState @ 0x140597900
 * Callers:
 *     IopLiveDumpCapture @ 0x140596E48 (IopLiveDumpCapture.c)
 *     IopLiveDumpEndMirroringCallback @ 0x140597850 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     IopLiveDumpGetMillisecondCounter @ 0x140495FD4 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpCorralProcessors @ 0x1405975E0 (IopLiveDumpCorralProcessors.c)
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
