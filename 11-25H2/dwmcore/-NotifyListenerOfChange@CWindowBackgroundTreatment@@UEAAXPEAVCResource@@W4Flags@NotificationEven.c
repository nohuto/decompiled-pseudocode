/*
 * XREFs of ?NotifyListenerOfChange@CWindowBackgroundTreatment@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180238F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowBackgroundTreatment::NotifyListenerOfChange(CMaskBrush *a1, CResource *a2)
{
  return CResource::NotifyListenerOfChange((__int64)a1, a2, 0xFu, a1);
}
