/*
 * XREFs of ?AddRef@EdgyProcessorTarget@@W7EAAKXZ @ 0x1800EFCF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EdgyProcessorTarget::AddRef(__int64 a1)
{
  return Win32kInterop::AddRef((Win32kInterop *)(a1 - 8));
}
