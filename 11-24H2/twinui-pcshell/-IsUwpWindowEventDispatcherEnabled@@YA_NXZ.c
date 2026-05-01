/*
 * XREFs of ?IsUwpWindowEventDispatcherEnabled@@YA_NXZ @ 0x1802CE4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
char __fastcall IsUwpWindowEventDispatcherEnabled(Windows::Internal::ApplicationModel::WindowManagement *this)
{
  return Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagerIDKEnabledForSKU(this);
}
