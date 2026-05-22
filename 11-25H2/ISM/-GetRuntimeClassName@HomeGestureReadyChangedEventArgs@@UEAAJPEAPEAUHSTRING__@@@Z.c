/*
 * XREFs of ?GetRuntimeClassName@HomeGestureReadyChangedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180162120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall HomeGestureReadyChangedEventArgs::GetRuntimeClassName(
        HomeGestureReadyChangedEventArgs *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Input.MPCManager.HomeGestureReadyChangedEventArgs", 0x42u, a2);
}
