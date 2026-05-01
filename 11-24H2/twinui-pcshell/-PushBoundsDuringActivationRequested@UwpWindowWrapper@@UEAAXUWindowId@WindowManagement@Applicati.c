/*
 * XREFs of ?PushBoundsDuringActivationRequested@UwpWindowWrapper@@UEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180224820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpWindowWrapper::PushBoundsDuringActivationRequested(__int64 a1, int a2)
{
  UwpWindowWrapper::PushBoundsToAppView(a1 - 24, a2);
}
