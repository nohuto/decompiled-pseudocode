/*
 * XREFs of IopLiveDumpEnterCorralledState @ 0x14059A980
 * Callers:
 *     IopLiveDumpCapture @ 0x140599EC4 (IopLiveDumpCapture.c)
 *     IopLiveDumpEndMirroringCallback @ 0x14059A8D0 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     IopLiveDumpGetMillisecondCounter @ 0x14049B5E4 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpCorralProcessors @ 0x14059A660 (IopLiveDumpCorralProcessors.c)
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
