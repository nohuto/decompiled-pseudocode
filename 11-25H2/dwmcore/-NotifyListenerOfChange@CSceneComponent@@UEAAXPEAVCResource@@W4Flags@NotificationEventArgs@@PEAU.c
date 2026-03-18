/*
 * XREFs of ?NotifyListenerOfChange@CSceneComponent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180282940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSceneComponent::NotifyListenerOfChange(CMaskBrush *a1, CResource *a2)
{
  return CResource::NotifyListenerOfChange((__int64)a1, a2, 0, a1);
}
