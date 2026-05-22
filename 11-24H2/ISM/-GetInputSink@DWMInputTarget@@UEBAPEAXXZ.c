/*
 * XREFs of ?GetInputSink@DWMInputTarget@@UEBAPEAXXZ @ 0x1800F5770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall DWMInputTarget::GetInputSink(DWMInputTarget *this)
{
  return DWMInputTarget::GetInputSinkHandle((DWMInputTarget *)((char *)this - 8));
}
