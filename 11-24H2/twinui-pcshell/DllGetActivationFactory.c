/*
 * XREFs of DllGetActivationFactory @ 0x180225660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall DllGetActivationFactory(_QWORD *a1, void **a2)
{
  return WINRT_GetActivationFactory(a1, a2);
}
