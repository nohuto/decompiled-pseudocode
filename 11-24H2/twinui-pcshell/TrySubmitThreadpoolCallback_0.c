/*
 * XREFs of TrySubmitThreadpoolCallback_0 @ 0x1802DB159
 * Callers:
 *     ?submit_threadpool_callback@impl@winrt@@YA@P6AXPEAX0@Z0@Z @ 0x18023B880 (-submit_threadpool_callback@impl@winrt@@YA@P6AXPEAX0@Z0@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall TrySubmitThreadpoolCallback_0(PTP_SIMPLE_CALLBACK pfns, PVOID pv, PTP_CALLBACK_ENVIRON pcbe)
{
  return TrySubmitThreadpoolCallback(pfns, pv, pcbe);
}
