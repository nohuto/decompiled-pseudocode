/*
 * XREFs of ?AddRef@ControllerProcessor@@WEI@EAAKXZ @ 0x180178300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ControllerProcessor::AddRef(__int64 a1)
{
  return Win32kInterop::AddRef((Win32kInterop *)(a1 - 72));
}
